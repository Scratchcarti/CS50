#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *input = fopen("file.txt", "r");
  FILE *output = fopen("PDF.txt","w");
  char c[16];

 while(fread(&c, 8, 1, input))
    {
        fwrite(&c,8, 1, output);
    }


  return 0;

}












