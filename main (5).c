#include <stdio.h>

int main()
{
    int num;
    printf("Enter a three digit number\n");
    scanf("%d",&num);
    int sum=0;
    sum = sum + num%10;
    num = num/10;
    sum = sum + num%10;
    num = num/10;
    sum = sum + num%10;
    printf("The sum of three digit number is %d",sum);
    
    return 0;
}
