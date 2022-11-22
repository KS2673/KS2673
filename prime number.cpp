#include<stdio.h>
int main()
{
	int num;
	int a;
	printf("enter a number");
	scanf("%d\n",&num);
	a=2;
	while(a<=num-1)
	{
		if(num%a==0)
		{
			printf("not a prime number\n");
			break;
		}
		a++;
		
	}
	if(a==num)
	printf("a prime number\n");
}
