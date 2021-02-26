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
    int max(int,int);
    int min(int,int);
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a/max(a,b),b/max(a,b));
    return 0;
}

int max(int a,int b)
{
    int i;
    while(b!=0)
    {
        i=a%b;
        a=b;
        b=i;
    }
    return a;
}

```
