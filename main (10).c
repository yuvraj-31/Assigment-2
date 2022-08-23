#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    num = num/10;
    num = num*10;
    printf("The value now becomes %d",num);
   
    return 0;
}
