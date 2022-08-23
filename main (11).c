#include <stdio.h>

int main()
{
    int num,dig;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a digit to append\n");
    scanf("%d",&dig);
    num = num*10 + dig;
    printf("The resulting number is  %d",num);
   
    return 0;
}
