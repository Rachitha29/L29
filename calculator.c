#include<stdio.h>
int main()
{
	int a,b,add,subtract,mult,div;
	printf("Enter a number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
        add=a+b;
	subtract=a-b;
	mult=a*b;
	div=a/b;
	printf("Addition of %d and %d =%d",a,b,add);
	printf("Subtract %d and %d = %d",a,b,subtract);
        printf("Multiply %d and %d =%d",a,b,mult);
	printf("Division of %d and %d =%d",a,b,div);
	return 0;
}
