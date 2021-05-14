#include <stdio.h>
int main()
{
	int a,b,j,count=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){//跑a~b
		for( j=2;j<i;j++){
			if(i%j==0)break;
		}
		if(j==i)count++;//第2層for完整跑完,代表沒有術可整除i
	}
	printf("%d",count);
}
