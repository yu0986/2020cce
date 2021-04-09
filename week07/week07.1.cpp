#include <stdio.h>
#include <string.h>
int main()
{
	char a[9999];
	int i,len;
	scanf("%s",&a);
	len=strlen(a);//strlen可取得字串長度
	for(i=0;i<(len/2);i++){
		if(a[i]!=a[len-1-i]) break;
	}
	if(i==(len/2)) printf("YES\n");
	else printf("NO\n");
}
