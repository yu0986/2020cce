#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){  //������
		for(int j=0;j<n-i;j++){	//�L�Ů�
			printf(" ");
		}
		for(int k=0;k<i*2-1;k++){	//�L *
			printf("*");
		}
		printf("\n");
	}
}
