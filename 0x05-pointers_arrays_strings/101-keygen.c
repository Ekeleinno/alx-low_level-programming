#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - generates random passwird
 * @i: integer
 * @c: char
 *
 * Return: Always 0
 */

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int rand_num = rand() % 62;
        char c;

        if (rand_num < 26)
            c = 'A' + rand_num; // Uppercase letters
        else if (rand_num < 52)
            c = 'a' + (rand_num - 26); // Lowercase letters
        else
            c = '0' + (rand_num - 52); // Digits

        password[i] = c;
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}

