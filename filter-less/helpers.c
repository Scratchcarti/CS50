#include "helpers.h"
#include <stdio.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        int k =0;
        for (int j = 0 ; j < width; j++)
        {
            k = (image[height][width].rgbtBlue + image[height][width].rgbtGreen + image[height][width].rgbtRed)/3;
            image[height][width].rgbtBlue = k;
            image[height][width].rgbtRed = k;
            image[height][width].rgbtGreen = k;
            printf("%d", k);
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
