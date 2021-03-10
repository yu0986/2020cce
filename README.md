# 2020cce

## week01

## 第一題(找零錢)
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5/1);
}
```

## 第二題(因數個數)
```c
**#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)ans++;
	}
			printf("%d\n",ans);
}
```

## 第三題(找出3的倍數有幾個)
```c
#include <stdio.h>
int main()
{
	int n,ans=0,a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
			if(a[i]%3==0)ans++;
	}
	printf("%d\n",ans);
}
```

## 第四題(分等級)
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)
		printf("A\n");
	if(n<90&&n>=80)
		printf("B\n");
	if(n<80&&n>=60)
		printf("C\n");
	if(n<60)
		printf("F\n");
}
```

## 第五題(分式化簡)
```c
#include <stdio.h>
int main()
{
	int a,b,ans=1;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0)
			ans=i;
	}
	printf("%d %d\n",a/ans,b/ans);
}

```
## week02
## 第一題

```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
     printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

}
```
## 第二題
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p=&n1;
    *p=200;
     printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

     int *p2=&n3;
     *p2=300;
     printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

}

```
## 第三題
```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}
```
## 讀入整數反序列印
```c
#include <stdio.h>
int a[1000];
int main()
{
	int n=0;
	for(int i=0;i<1000;i++){
		scanf("%d",&a[i]);
		if(a[i]==0){
			n=i;
			break;
		}
	}
	for(int i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```
## A的B次方函數
```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans;
	for(int i=1;i<b;i++){
		ans=ans*a;
	}
	return ans;
} 

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 漸增數列相加
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",(n*n-1)*n/3);
}
```
## 判別正方形
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b){
		printf("Enter two numbers:  It is a square ");
	}
	else{
		printf("Enter two numbers:  It is not a square ");
	}
} 
```
## 2進位轉10進位 
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",(a/1000)*8+a%1000/100*4+a%100/10*2+a%10*1);
}
```
## 均標與前標計算
```c
#include <stdio.h>
int main()
{
	float a[100],n,all=0,t=0,x=0;
	scanf("%f",&n);
	for(int i=0;i<=n;i++){
		scanf("%f",&a[i]);
		all+=a[i];
	}
	for(int i=0;i<=n;i++){
		if(a[i]>=all/n){
			t+=a[i];
			x++;
		}
	}
	printf("均標:%0.1f\n前標:%0.1f\n",all/n,t/x);
}
```
