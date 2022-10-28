#include<cs50.h>
#include<stdio.h>

int main(void)
{

    long x = get_long("X: ");
    long y = get_long("Y: ");
    printf("Answer: %li\n", x+y);



if(x < y)
{
    printf("By the way, x is less than y\n");
}
else if (y > x)
{
    printf("x is less than x\n");
}
else
{
    printf("X is equal to y\n");
}
}