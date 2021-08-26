//WAP to convert decimal to binary using pointer

#include<stdio.h>
int main()
{
	int data,bit;
	printf("enter data:\n");
	scanf("%d",&data);
	bit=31;
	printf("binary value:");
	while(bit>=0)
	{
		printf("%d",(data>>bit)&1);
		if(bit%8==0)
		printf(" ");
		bit--;
	}
	
}
/* output
enter data:
10
binary value:00000000 00000000 00000000 00001010
*/
