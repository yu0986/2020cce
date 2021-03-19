#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c>='a'&&c<='z'){
		printf("L");
	}
	else if(c>='A'&&c<='Z'){
		printf("U");
	}
	else if(c>='0'&&c<'9'){
		printf("D");
	}
	else printf("O");
}
