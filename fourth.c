#include<stdio.h>
void main()
{
    int a,b,sum,sub,div,mult;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    div=a/b;
    mult=a*b;
    printf("\nThe sum is : %d",sum);
    printf("\nThe subtraction is : %d",sub);
    printf("\nThe division is : %d",div);
    printf("\nThe multiplication is : %d",mult);
}