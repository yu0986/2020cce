#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a);//�r��a������
	int lenb=strlen(b);//�r��b������
	if(lena>lenb) printf("1");//a>b
	else if (lenb>lena) printf("-1");//b>a
	else //2�r����׬۵�
	{printf("%d",strcmp(a,b));}
}
