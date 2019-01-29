#include "stdio.h"  //printf()
#include "stdlib.h" // atof()
/* Algorithm for finding the gallons of paint needed to paint a room.
 * Input: width, length, height, sqftPerGal
 * Output: float representing the gallons of paint needed to paint a room.*/
float galNeeded(float width, float length, float height, float sqftPerGal)
{
    return width * length * height / sqftPerGal;
}
int main(int argc, char *argv[])
{
    if (argc != 5) //makes sure user input correct arguments
    {
        printf("\033[0;31m");
        printf("syntax: %s width length height sqft_per_gallon", argv[0]);
        printf("\033[0m");
        return 1;
    }
    const double WIDTH = atof(argv[1]),
                 LENGTH = atof(argv[2]),
                 HEIGHT = atof(argv[3]),
                 SQFT_PER_GAL = atof(argv[4]);
    if (WIDTH * LENGTH * HEIGHT * SQFT_PER_GAL) // if none of the values are 0 or aren't convertable to double
    {
        printf("You will need %.4f gallons of paint to paint a room of size %.1f x %.1f x %.1f assuming one gallon of paint covers %.1f square feet of wall.", galNeeded(WIDTH, LENGTH, HEIGHT, SQFT_PER_GAL), WIDTH, LENGTH, HEIGHT, SQFT_PER_GAL);
        return 0;
    }
    printf("\033[0;31m");
    printf("syntax: %s width length height sqft_per_gallon", argv[0]);
    printf("\033[0m");
    return 1;
}