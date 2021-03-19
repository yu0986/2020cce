#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){  //控制行數
		for(int j=0;j<n-i;j++){	//印空格
			printf(" ");
		}
		for(int k=0;k<i*2-1;k++){	//印 *
			printf("*");
		}
		printf("\n");
	}
}
