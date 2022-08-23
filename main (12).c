#include <stdio.h>

int main()
{
    float INR,USD;
    printf("Enter a amount in INR\n");
    scanf("%f",&INR);
    USD = INR/76.23;
    printf("USD is %0.2f",USD);
    
    return 0;
}
