#include <cs50.h>
#include <stdio.h>

#define ARRAY_LENGTH 7

int main(void)
{
    int numbers[ARRAY_LENGTH] = {0, 500, 10, 50, 100, 300, 200};

    int get_user_number = get_int("Number: ");

    // Linear search throught the array
    // Time complexity O(n)
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        if (numbers[i] == get_user_number) 
        {
            printf("Found!\n");
            return 0;
        }
    }

    printf("Not found!\n");
    return 1;
}