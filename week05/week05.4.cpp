#include <stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>a&&b>c)
		max=b;
	if(c>a&&c>b)
		max=c;
	printf("%d\n",max);
}
