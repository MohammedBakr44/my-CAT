#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int lettersCounter = 0;
    float wordsCounter = 1.00;
    int sentencesCounter = 0;
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        // Checks if the letter is in the range of ascii codes for both small and capital letters
        if (
            ((int)text[i] >= 65 && (int)text[i] <= 90) || ((int)text[i] >= 97 && (int)text[i] <= 122))
        {
            lettersCounter++;
        }

        if (text[i] == ' ')
            wordsCounter++;
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
            sentencesCounter++;
    }
    double averageWords = (lettersCounter / wordsCounter) * 100;
    double averageSentences = (sentencesCounter / wordsCounter) * 100;
    double index = round(0.0588 * averageWords - 0.296 * averageSentences - 15.8);
    // printf("word(s): %f\nletter(s): %d\nsentence(s): %d\n", wordsCounter, lettersCounter, sentencesCounter);
    if ((int)index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if ((int)index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", (int)index);
    }
}