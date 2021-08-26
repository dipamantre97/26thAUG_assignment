#include<stdio.h>
int fun(int a,int b, int *x,int *y,int *z,int *t)
{
	*x=a+b;
	*y=a-b;
	*z=a*b;
	*t=a/b;
}

int main()
{
	int a,b,sum,diff,prod,div;
	printf("enter two value a,b:\n");
	scanf("%d%d",&a,&b);
	fun(a,b,&sum,&diff,&prod,&div);
	printf("sum=%d\ndiff=%d\nprod=%d\ndiv=%d",sum,diff,prod,div);
    return 0;	
	
}

/* output
enter two value a,b:
20 10
sum=30
diff=10
prod=200
div=2
*/
