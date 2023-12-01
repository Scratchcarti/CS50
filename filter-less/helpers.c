#include "helpers.h"
#include <stdio.h>
#include <math.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        int k;
        for (int j = 0 ; j < width; j++)
        {
            k = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed)/3.0;
            image[i][j].rgbtBlue = k;
            image[i][j].rgbtGreen = k;
            image[i][j].rgbtRed = k;
        }
    }

    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
     for (int i = 0; i < height; i++)
    {   int a,b,c,d,e,f;
        for (int j = 0 ; j < width; j++)
        {
            a =image[i][j].rgbtBlue, b = image[i][j].rgbtGreen, c = image[i][j].rgbtRed;



            d = round(.272 * c + .534 * b + .131 * a);
            if (d > 0 && d <255)
            {
                image[i][j].rgbtBlue = d;
            }
             else
             {image[i][j].rgbtBlue = 255;}

            e =round(.349 * c + .686 * b + .168 * a);

             if (e > 0 && e <255)
             {
             image[i][j].rgbtGreen = e;
             }
             else
             {image[i][j].rgbtGreen = 255;}

             f = round(.393 * c + .769 * b + .189 * a);

            if (f > 0 && f <255)
            {
            image[i][j].rgbtRed =f;
            }
             else
             {image[i][j].rgbtRed = 255;}
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE a[height][width];


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
          a[i][j] = image[i][width-j];
        }
    }

  for(int i =0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = a[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{









    return;
}
