#include <stdio.h>
int main()
{
	int a,b=0,n1;
	scanf("%d",&a);
	a=n1;
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	printf("%d+%d=%d\n",n1,b,n1+b);
}
