#include <stdio.h>
int main()
{
	int a,b,c,min;
	scanf("%d%d%d",&a,&b,&c);
	min=a;
	if(b<a && b<c)
		min=b;
	if(c<a && c<b)
		min=c;
	printf("%d\n",min);
}
