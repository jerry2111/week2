#include <stdio.h>
int main()
 {
 	int n,i;
 	scanf("%d",&n);
 	for(i=1;i<=n*n;i++)
 	{
 		if((i-1)%n==0&&i!=1)
 		{
 			printf("\n");
		}
 		printf("*");
	}
	return 0;
}	
