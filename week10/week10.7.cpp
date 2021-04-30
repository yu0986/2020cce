#include <stdio.h>
int main()
{
	int a,b,ans=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&a);//a為數列個數
	for(int i=0;i<a;i++){
		printf("Enter a value: ");
		scanf("%d",&b);
		ans*=b;//ans=ans*b;
	}
	printf("Product of the %d values is %d",a,ans);
}
