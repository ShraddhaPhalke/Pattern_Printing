/*
      * 
    * * * 
  * * * * * 
* * * * * * * 


*/
#include<stdio.h>

int main()
{
	int i =0,j=0,k=0;
	int n = 0;
	printf("enter number\n");
	scanf("%d",&n);
	
	for(i=n,k=0; i>=1,k<n; i--,k++)
	{
		for(j=1;j<=n+k;j++)
		{
			if(j>=i)
			{
			printf("* ");
			}
			else
			{
			printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}			
