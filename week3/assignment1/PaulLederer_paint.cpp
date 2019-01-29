#include <iostream> //printf()
#include "stdlib.h" // atof()
/* Algorithm for finding the gallons of paint needed to paint a room.
 * Input: width, length, height, sqftPerGal
 * Output: float representing the gallons of paint needed to paint a room.*/
float galNeeded(float width, float length, float height, float sqftPerGal)
{
    return width * length * height / sqftPerGal; //this is where the magic happens
}
int main(int argc, char *argv[])
{
    if (argc != 5) //makes sure user input correct arguments
    {
        //changes terminal text to red
        printf("\033[0;31m");
        //prompts the user to input the args correctly
        printf("syntax: %s width length height sqft_per_gallon", argv[0]);
        //returns terminal to normal state
        printf("\033[0m");
        //end the program with an error
        return 1;
    }

    const double WIDTH = atof(argv[1]), //arg 1 is our width
        LENGTH = atof(argv[2]),         //arg 2 is our length
        HEIGHT = atof(argv[3]),         //arg 3 is our height
        SQFT_PER_GAL = atof(argv[4]);   //arg 4 the ratio of square feet per gallon of paint

    if (WIDTH * LENGTH * HEIGHT * SQFT_PER_GAL) // if none of the values are 0 or aren't convertable to double
    {
        //printf with a friendly message telling you the total amount of paint you'll need for the given arguments.
        printf("You will need %.4f gallons of paint to paint a room of size %.1f x %.1f x %.1f assuming one gallon of paint covers %.1f square feet of wall.", galNeeded(WIDTH, LENGTH, HEIGHT, SQFT_PER_GAL), WIDTH, LENGTH, HEIGHT, SQFT_PER_GAL);
        //end the program with no errors!
        return 0;
    }

    //changes terminal text to red
    printf("\033[0;31m");
    //prompts the user to put in correct arguments
    printf("syntax: %s width length height sqft_per_gallon", argv[0]);
    //returns terminal to normal state
    printf("\033[0m");
    //end the program with an error
    return 1;
}