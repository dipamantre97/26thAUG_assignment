//WAP to find sum of digit using recursion

#include<stdio.h>
int sum_of_digit(int v)
{
	if(v/10==0)
	return 1;
	else
	return(v%10+sum_of_digit(v/10));
}
int main()
{
	int data;
	printf("enter data:");
	scanf("%d",&data);
	printf("sum=%d",sum_of_digit(data));
}

/* output
enter data:1234
sum=10
*/
