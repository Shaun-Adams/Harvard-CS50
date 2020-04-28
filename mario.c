#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //create a integer variable called height
    int height = 0;
    
    //prompts user to insert a height between 1-8 inclusive
    do
    {
        height = get_int("Enter height ");
    }
    //prompt user until a height between 1-8 has been inserted 
    while (height < 1 || height > 8);

    for (int i = 0; i <= height - 1; i++)
    {
        for (int j = i; j < height - 1; j++)
        {
            //prints the spaces for the tower
            printf(" ");
        }
        for (int k = height - i; k <= height; k++)
        {
            //prints tower as #'s'
            printf("#");
            
        }
        //skip line
        printf("\n");
    }

}