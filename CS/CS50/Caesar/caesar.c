#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    bool isDigit = true;
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!(isdigit(argv[1][i])))
            {
                isDigit = false;
            }
        }
    }
    else
    {
        printf("usage: ./caesar key\n");
        return 1;
    }
    if (argc == 2 && isDigit)
    {
        int n = atoi(argv[1]);
        string text = get_string("plaintext: ");
        int cipher[strlen(text)];
        for (int i = 0; i < strlen(text); i++)
        {
            if (isalpha(text[i]))
            {
                if (isupper(text[i]))
                {
                    if (((int)text[i] + n) > 90)
                    {
                        cipher[i] = ((int)text[i] + n) - 26;
                        text[i] = cipher[i];
                    }
                    else
                    {
                        cipher[i] = (int)text[i] + n;
                        text[i] = cipher[i];
                    }
                }
                else
                {
                    int c = (int)text[i] + n;

                    if (c > 122)
                    {
                        while (c > 122)
                        {
                            c -= 26;

                        }
                        cipher[i] = c;
                        text[i] = cipher[i];
                    }
                    else
                    {
                        cipher[i] = (int)text[i] + n;
                        text[i] = cipher[i];
                    }
                }
            }
        }
        printf("ciphertext: %s\n", text);
    }
    else
    {
        printf("usage: ./caesar key\n");
        return 1;
    }

    return 0;
}