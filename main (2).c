#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    num=num/10;                                             
    printf("The given number without its last digit is %d",num);

    return 0;
}
