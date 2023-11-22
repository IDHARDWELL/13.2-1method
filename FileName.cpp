#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "MN.h"


void main()
{
    printf("Lab 13.2.1 Using macros and preprocessing directive\n");
    int x, y, z, xpy, xpz, sqr, abcd, maxim, minim;
    char ch;
    float rad, s;

    do
    {
        printf("Define the maximum of two numbers\n");
        printf("Input 3 integer numbers\n");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);
        scanf("%d", &z);
        PRINTI(z);
        if (1 <= z && z < 10)
        {
            xpy = XPY(x,y);
            PRINTI(xpy);
            xpz = XPZ(x,z);
            PRINTI(xpz);
            maxim = MAX(xpy, xpz);
            PRINTR(maxim);
        }
        else
        {
            sqr = SQR(x);
            abcd = ABS(y, z);
            minim = MIN(sqr, abcd);
            PRINTR(minim);

        }
        printf("Repeat?  y / n ");
        scanf(" %c", &ch);
    } while (ch == 'y');

}
