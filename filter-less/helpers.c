#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
   for (int i = 0; i < height; i++)
   {
    int n =0;
    for (int j = 0; j < width; j++)
    {
        n = (image[height][width].rgbtRed + image[height][width].rgbtGreen + image[height][width].rgbtBlue)/3;
         image[height][width].rgbtBlue = n;
         image[height][width].rgbtGreen = n;
         image[height][width].rgbtRed = n;
    }
   }




    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
