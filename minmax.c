// WAP to Find max. from given 2 no. using ternary operator.

#include <stdio.h>

int main()
{
    float a, b, max;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    printf("The maximum number is: %f\n", max);

    return 0;
}

// WAP to Find min. from given 3 no. using nested if else.
#include <stdio.h>

int main()
{
    double a, b, c;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the third number: ");
    scanf("%lf", &c);

    if (a <= b)
    {
        if (a <= c)
        {
            printf("The minimum number is: %lf\n", a);
        }
        else
        {
            printf("The minimum number is: %lf\n", c);
        }
    }
    else
    {
        if (b <= c)
        {
            printf("The minimum number is: %lf\n", b);
        }
        else
        {
            printf("The minimum number is: %lf\n", c);
        }
    }

    return 0;
}

// WAP to Find max. from given 4 no.   using nested if else.

#include <stdio.h>

int main()
{
    double a, b, c, d;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the third number: ");
    scanf("%lf", &c);

    printf("Enter the fourth number: ");
    scanf("%lf", &d);

    if (a >= b)
    {
        if (a >= c)
        {
            if (a >= d)
            {
                printf("The dimum number is: %lf\n", a);
            }
            else
            {
                printf("The dimum number is: %lf\n", d);
            }
        }
        else
        {
            if (c >= d)
            {
                printf("The dimum number is: %lf\n", c);
            }
            else
            {
                printf("The dimum number is: %lf\n", d);
            }
        }
    }
    else
    {
        if (b >= c)
        {
            if (b >= d)
            {
                printf("The dimum number is: %lf\n", b);
            }
            else
            {
                printf("The dimum number is: %lf\n", d);
            }
        }
        else
        {
            if (c >= d)
            {
                printf("The dimum number is: %lf\n", c);
            }
            else
            {
                printf("The dimum number is: %lf\n", d);
            }
        }
    }

    return 0;
}

// WAP to Find max. from given 5 no.   using nested if else.

#include <stdio.h>

int main()
{
    double a, b, c, d, e;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the third number: ");
    scanf("%lf", &c);

    printf("Enter the fourth number: ");
    scanf("%lf", &d);

    printf("Enter the fifth number: ");
    scanf("%lf", &e);

    if (a >= b && a >= c && a >= d && a >= e)
    {
        printf("The maximum number is: %lf\n", a);
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        printf("The maximum number is: %lf\n", b);
    }
    else if (c >= a && c >= b && c >= d && c >= e)
    {
        printf("The maximum number is: %lf\n", c);
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        printf("The maximum number is: %lf\n", d);
    }
    else
    {
        printf("The maximum number is: %lf\n", e);
    }

    return 0;
}

// WAP to Find max. from 3 no. using ternary operator.

#include <stdio.h>

int main() {
    double a, b, c;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the third number: ");
    scanf("%lf", &c);

    double max_num;

    if (a >= b && a >= c) {
        max_num = a;
    } else if (b >= a && b >= c) {
        max_num = b;
    } else {
        max_num = c;
    }

    printf("The maximum number is: %lf\n", max_num);

    return 0;
}

// WAP to Find max. from 4 no. using ternary operator.

#include <stdio.h>

int main() {
    double a, b, c, d;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the third number: ");
    scanf("%lf", &c);

    printf("Enter the fourth number: ");
    scanf("%lf", &d);

    double max_num;

    if (a >= b && a >= c && a >= d) {
        max_num = a;
    } else if (b >= a && b >= c && b >= d) {
        max_num = b;
    } else if (c >= a && c >= b && c >= d) {
        max_num = c;
    } else {
        max_num = d;
    }

    printf("The maximum number is: %lf\n", max_num);

    return 0;
}


// WAP to Find max. from 5 no. using ternary operator.


#include <stdio.h>

int main() {
    double a, b, c, d, e;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Enter the third number: ");
    scanf("%lf", &c);

    printf("Enter the fourth number: ");
    scanf("%lf", &d);

    printf("Enter the fifth number: ");
    scanf("%lf", &e);

    double max_num;

    if (a >= b && a >= c && a >= d && a >= e) {
        max_num = a;
    } else if (b >= a && b >= c && b >= d && b >= e) {
        max_num = b;
    } else if (c >= a && c >= b && c >= d && c >= e) {
        max_num = c;
    } else if (d >= a && d >= b && d >= c && d >= e) {
        max_num = d;
    } else {
        max_num = e;
    }

    printf("The maximum number is: %lf\n", max_num);

    return 0;
}

