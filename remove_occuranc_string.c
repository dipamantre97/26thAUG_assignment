//WAP to remove all occurance of a string

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],ch;
	int i;
	printf("enter string:\n");
	scanf("%s",str);
	printf("enter char:");
	scanf("\n%c",&ch);
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
		{
		
		memmove(str+i,str+i+1,strlen(str+i+1)+1);
		i--;
	}
	}
	printf("new string=%s",str);
	
}
/* ouput
enter string:
embedded
enter char:d
new string=embee
*/
