#include <stdio.h>
int main()
{
	int sum=0,i=0;
	char c[80];
	scanf("%s",c);
	while(c[i]!='\0'){
	if(c[i]>='0'&&c[i]<='9')sum++;
		i++;
	}
	printf("%d",sum);
}
