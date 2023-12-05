#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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
            printf("output file wasnt able to open properly\n")
            return 1;
        }

    // Write header to file

        fwrite(&header,sizeof(WAVEHEADER),1,output);

    // Use get_block_size to calculate size of block
    // TODO #7

    // Write reversed audio to file
    // TODO #8
}

int check_format(WAVHEADER header)
{
    int t,p = 0;

    for (int i =0; i < 4; i++)
  {
    p = header.format[i];
    t = t + p;
  }

  if (t == 199)
  {
    return 1;
  }
  else
  {
     return 0;
  }
}




int get_block_size(WAVHEADER header)
{
    // TODO #7
    return 0;
}