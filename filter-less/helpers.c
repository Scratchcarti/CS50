#include "helpers.h"
#include <stdio.h>
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{

    for (int i = 0; i < height; i++)
    {
        int k;
        for (int j = 0 ; j < width; j++)
        {
            k = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed)/3;
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
    {   int a,b,c;
        int k;
        for (int j = 0 ; j < width; j++)
        {
            a =image[i][j].rgbtBlue, b = image[i][j].rgbtGreen, c = image[i][j].rgbtRed;


            image[i][j].rgbtBlue = .272 * c + .534 * b + .131 * a;
            image[i][j].rgbtGreen = .349 * c + .686 * b + .168 * a;
            image[i][j].rgbtRed = .393 * c + .769 * b + .189 * a
        }
    }

    return;
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
