#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *input = fopen("file.txt", "r");
  FILE *output = fopen("PDF.txt","w");

     char w;
     fread(&w,sizeof(char),1,input);
     fwrite(&w,sizeof(char),1,output);



  return 0;

}












