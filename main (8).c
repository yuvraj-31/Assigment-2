#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if(num|1==num)
    {
        printf("Given number is odd");
    }
    else
    {
        printf("Given number is even");
    }
    
    
    return 0;
}
