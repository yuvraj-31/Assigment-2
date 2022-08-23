#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int count=1;
    while(1)
    {
        if(num%2==1)
        {
            printf("The position of first 1 in lsb is %d",count);
            break;
        }
        else
        {
            count++;
            num=num/2;
        }
    }
    
    
    return 0;
}
