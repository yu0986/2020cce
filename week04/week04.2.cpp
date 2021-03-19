#include <stdio.h>
int main()
{
	char count[7]={0};
	char a[100];
	int i=0;
	scanf("%s",&a);

	while(a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
	}
	for(i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
	}
}
