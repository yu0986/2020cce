#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==2)
		printf("28");
	else if(n%2==1 && n<9)
		printf("31");
	else if(n%2==0 && n>=8)
		printf("31");
	else if(n%2==1 && n>=9)
		printf("30");
	else if(n%2==0 && n<9)
		printf("30");

}
