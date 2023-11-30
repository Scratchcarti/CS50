#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *input = fopen("file.txt", "r");
  FILE *output = fopen("PDF.txt","w");
  char c;

 while(fread(&c, sizeof(char), 1, input))
    {
        fwrite(&c, sizeof(char), 1, output);
    }


  return 0;

}












