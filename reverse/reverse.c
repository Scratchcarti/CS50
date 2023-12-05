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

    int sum = 0;

    for (int i = l; i > l-4; i-- )
    {
        sum = strncmp (a,argv[1],l);
        printf("%d\n",sum);
        if (sum !=0)
        {
            printf("Input is not a WAV file.\n");
            break;
        }
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

        get_block_size(header);

    // Write reversed audio to file












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