#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	int i=0;
	while(c[i]!='\0'){
		if(c[i]>='A' && c[i]<='Z'){
			printf("%c",c[i]-'A'+'a');
		}
		else if(c[i]>='a' && c[i]<='z'){
			printf("%c",c[i]-'a'+'A');
		}
		else {printf("%c",c[i]);}
		i++;
	}
	printf("\n");
}
