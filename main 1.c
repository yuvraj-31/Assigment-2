#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    num=num%10;                                             //using modulo operator for unit digit
    printf("The unit digit of the given number is %d",num);

    return 0;
}
