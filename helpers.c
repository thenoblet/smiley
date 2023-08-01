#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if (image[i][j].rgbtBlue == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtRed == 0x00)
            {
                image[i][j].rgbtBlue = 0xff;
                //image[i][j].rgbtGreen = 0xFA;
                //image[i][j].rgbtRed = 0x0A;
            }
        }
    }
}
