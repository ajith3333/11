#include <stdio.h>

int main(void)
{
clrscr();
	int i,n,sum=0;
	scanf("%d",&n);
	printf("enter the number:%d\n",n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("the sum is:%d",sum);
	

	return 0;
}
