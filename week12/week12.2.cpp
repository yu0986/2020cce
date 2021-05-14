#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	printf("%d %d",(p-d*6)/6,(p-d*6)%6);
}
