#include <stdio.h>
int main()
{
	int sum=0,a;
	while(a!=999){//999�O�פ����
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);//a=999
		sum+=a;
	}
	printf("The total is: %d",sum-999);
}
