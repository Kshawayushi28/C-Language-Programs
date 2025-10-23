/*even or odd through ternary operator*/

#include<stdio.h>
int main()
{
	int a,x;
	printf("enter a no.");
	scanf("%d",&a);
	x=(a%2==0)?printf("even"):printf("odd");
	return 0;
}
