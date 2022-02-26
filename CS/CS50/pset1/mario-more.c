#include <cs50.h>
#include <stdio.h>

void shape(int columns);

int main(void)
{
    int columns;
    do
    {
        columns = get_int("Height: ");
    } while (columns < 1 || columns > 8);
    shape(columns);

}

void shape(int columns) {

    // Printing a column everytime
    for (int column = 0;  column < columns; column++)
    {
        // Inside the column print the needed number of spaces, it's the total amount of spaces - the number of # symbols in the column
        for (int spaces = columns - 1; spaces > column; spaces--)
        {
            printf(" ");
        }
        // Print each row, basically a sequence of #s
        for (int row = 0; row <= column; row++)
        {
            printf("#");
        }
        // Print a new line after every column
        printf("  ");
        for (int row = 0; row <= column; row++)
        {
            printf("#");
        }
        printf("\n");
    }
}