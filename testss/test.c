#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *input = fopen("file.txt", "r");
  FILE *output = fopen("PDF.txt","w");
  char c[2];

 while(fread(&c, sizeof(char), 2, input))
    {
        fwrite(&c,sizeof(char), 2, output);
    }


  return 0;

}












