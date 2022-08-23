#include <stdio.h>

int main()
{
    int num;
    printf("Enter a three digit number\n");
    scanf("%d",&num);
    num=(num%10)*100+(num/10);
    printf("%d",num);
    
    
    return 0;
}
