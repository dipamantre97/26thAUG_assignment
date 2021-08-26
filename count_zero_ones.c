
#include<stdio.h>
int main()
{
	int data,bit,cnt_zeros=0,cnt_ones=0;
	printf("enter data:\n");
	scanf("%d",&data);
	bit=31;
	
		while(bit>=0)
		{
		
		if((data>>bit)&1)
		{
			cnt_ones++;
		}
			else
			{
			
			cnt_zeros++;
		}
	
		bit--;
	
	
	}
	

	printf("no of ones=%d\nno_of_zero=%d",cnt_ones,cnt_zeros);
	
}
