#include <stdio.h>
int main()
{
	int a,b,j,count=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){//�]a~b
		for( j=2;j<i;j++){
			if(i%j==0)break;
		}
		if(j==i)count++;//��2�hfor����]��,�N��S���N�i�㰣i
	}
	printf("%d",count);
}
