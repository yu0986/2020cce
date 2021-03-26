#include <stdio.h>
int main()
{
	int c,n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&c);
		sum=sum+c;
	}
		printf("%d\n",sum);
}
