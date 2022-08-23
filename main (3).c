#include <stdio.h>

int main()
{
    int num1=55;
    int num2=65;
    int temp;     // for swapping we need a temp variable
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swapping num1 is %d and num2 is %d",num1,num2);
    
    return 0;
}
