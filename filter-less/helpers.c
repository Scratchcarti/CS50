#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        int k =0;
        for (int j = 0 ; j < width; j++)
        {
            k = (image[height][width].Blue + image[height][width].Green + image[height][width].Red)/3 ;
            image[height][width].Blue = k;
            image[height][width].Red = k;
            image[height][width].Green = k;
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
