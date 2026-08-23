#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, a = 0, t;

    srand(time(NULL));
    t = (rand()) % 100;

    printf("Welcome in the world of Number guessing\n");

    do {
        a++;

        printf("\nEnter the no. btw 1 to 100 : ");
        scanf("%d", &n);

        if (n != t)
        {
            if (n < t)
                printf("\nyour no. is smaller");
            else
                printf("\nyour no. is bigger");
        }
        else
        {
            printf("\ncongratulations you won the game");
            break;
        }

    } while (n != t);

    printf("\nYou take only %d chances", a);

    return 0;
}
