#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    if (argc!=3)
    {
        printf("Format is ./reverse input.wav output.wav\n");
        return 1;
    }

    // comfaring strings

    int l = strlen(argv[1]);

    char a[] = ".wav";
    char new[4];

        new[3] = argv[1][l-1];
           new[2] = argv[1][l-2];
              new[1] = argv[1][l-3];
                 new[0] = argv[1][l-4];

    if (strcmp(new,a) != 0)
    {
        printf("%s\n", new);

    }

    // Open input file for reading
    FILE *input = fopen(argv[1],"r");
    if (input == NULL)
    {
        printf("FIle wasnt opened successfully\n");
        return 1;
    }

    // Read header
    WAVHEADER header;

    fread(&header,sizeof(WAVHEADER),1,input);


    // Use check_format to ensure WAV format

        check_format(header);

    // Open output file for writing

        FILE *output = fopen(argv[2], "w");

        if (output == NULL)
        {
            printf("output file wasnt able to open properly\n");
            return 1;
        }

    // Write header to file

        fwrite(&header,sizeof(WAVHEADER),1,output);

    // Use get_block_size to calculate size of block

        int block_size = get_block_size(header);

        

    // Write reversed audio to file

     BYTE buffer[block_size];

    fseek(input, 0, SEEK_END);

    long audio_size = ftell(input) - sizeof(WAVHEADER);
    int audio_block = (int) audio_size / block_size;

    for (int i = audio_block - 1; i >= 0; i--)
    {

           fseek(input, sizeof(WAVHEADER) + i * block_size, SEEK_SET);
             fread(buffer, block_size, 1, input);
                 fwrite(buffer, block_size, 1, output);

    }

// close the files

    fclose(input);
     fclose(output);

}





int check_format(WAVHEADER header)
{
    BYTE wave [] = {'W','A','V','E'};

    for (int i =0; i < 4; i++)
    {
       if ( header.format[i] != wave[i])
       return 1;
    }
    return 0;
}




int get_block_size(WAVHEADER header)
{
    int size = (header.numChannels)*(header.bitsPerSample)/8;

    return size;
}