//Question 1 Print a Solid Square
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//Question 2 Print a Right-Angled Triangle
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//Question 3 Print an Inverted Triangle
#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//Question 4 Print a Number Triangle

#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);

            if(j < i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

//Question 5  Print a Repeated-Number Triangle
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);

            if(j < i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

//Question 6  Print a Consecutive-Number Triangle
#include <stdio.h>

int main()
{
    int n, i, j, num = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", num);

            if(j < i)
                printf(" ");

            num++;
        }
        printf("\n");
    }

    return 0;
}

//Question 7  Print a Right-Aligned Star Triangle
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

//Question 8  Print a Centered Pyramid
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

//Question 9  Print an Inverted Centered Pyramid


#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * (n - i) + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

//Question 10  Print a Hollow Square

#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//Question 11 Print a Hollow Right-Angled Triangle

#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j == 1 || j == i || i == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

//Question 12  Print a Multiplication Table Grid
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%d", i * j);

            if(j < n)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}

//Question 13  Print a Checkerboard

#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }

        printf("\n");
    }

    return 0;
}

//Question 14  Print Floyd's Triangle

#include <stdio.h>

int main()
{
    int n, i, j, num = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", num);

            if(j < i)
                printf(" ");

            num++;
        }

        printf("\n");
    }

    return 0;
}


//Question 15  Print a Butterfly Pattern

#include <stdio.h>

int main()
{
    int n, i, j, gap;

    scanf("%d", &n);

    int mid = (n + 1) / 2;

    for(i = 1; i <= mid; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        gap = 2 * (mid - i) + 3;

        for(j = 1; j <= gap; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i = mid - 1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        gap = 2 * (mid - i) + 3;

        for(j = 1; j <= gap; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

//Question 16  Print a Diamond Pattern

#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    // Upper half of diamond
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

