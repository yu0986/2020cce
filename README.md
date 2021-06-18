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
## 上課內容
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
## 實習課
## 1. 讀入整數反序列印
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
## 2. A的B次方函數
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
## 3. 漸增數列相加
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",(n*n-1)*n/3);
}
```
## 4. 判別正方形
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
## 5. 2進位轉10進位 
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",(a/1000)*8+a%1000/100*4+a%100/10*2+a%10*1);
}
```
## 6. 均標與前標計算
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
## week03
## 上課內容
## 第一題
```c
#include <stdio.h>
int main()
{
    int a[5]={0,10,20,30,40};
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;

}
```
## 第二題
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
        printAll();
    int *p=&a[2];
    *p=222;
        printAll();
    p=p+2;
    *p=666;
        printAll();
    p--;
    *p=555;
        printAll();
}

```
## 第三題
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
        printAll();
    int *p=&a[2];
    *p=222;
        printAll();
        printf("p心裡小紙條記的值是:%d\n",p);
    p=p+2;
    *p=666;
        printAll();
        printf("p心裡小紙條記的值是:%d\n",p);

    p--;
    *p=555;
        printAll();
        printf("p心裡小紙條記的值是:%d\n",p);

}

```
## 第四題
```c
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
    int b[10];
    int *p=(int*) malloc(sizef(int)*10);

    return 0;
}

```
## 實習課
## 1. 計算陣列的平方值
```c
#include <stdio.h>
int main()
{
	int n,a[10];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
## 2. 大小寫轉換 
```c
#include <stdio.h>
int main()
{
	char c[10];
	scanf("%s",&c);
	int i=0;
	while(c[i]!='\0'){
		if(c[i]>='A' && c[i]<='Z'){
			printf("%c",c[i]-'A'+'a');
		}
		else if(c[i]>='a' && c[i]<='z'){
			printf("%c",c[i]-'a'+'A');
		}
		else {printf("%c",c[i]);}
		i++;
	}
	printf("\n");
}
```
## 3. 計算幾週與幾天
```c
#include <stdio.h>
int main()
{
	int d;
	scanf("%d",&d);
	printf("%d %d\n",d/7,d%7);
}

```
## 4. 計程車資計算
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n-2000)/500==0)
		printf("%d\n",100+((n-2000)/500)*5);
	else
		printf("%d\n",100+((n-2000)/500)*5+5);
}
```
## 5. 兩數間可被5整除的整數
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
			if(i%5==0)
				printf("%d\n",i);
		}
	}
	else{
		for(int i=b;i<=a;i++){
				if(i%5==0)
					printf("%d\n",i);
		}
	}
}
```
## 6. 整數間最大距離
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&b>c)
		printf("%d\n",a-c);
	else if(b>a&&a>c)
		printf("%d\n",b-c);
	else if(c>a&&a>b)
		printf("%d\n",c-b);
	else if(c>b&&b>a)
		printf("%d\n",c-a);
	else if(a>c&&c>b)
		printf("%d\n",a-b);
	else if(b>c&&c>a)
		printf("%d\n",b-a);
}

```

## week4
## 上課內容
## 第一題
struct 結構的宣告、定義、初始化、印出來
```c
#include <stdio.h>

struct  POINT{
    float x,y;
};
int main()
{
    struct  POINT;
}
```
## 第二題
示範結構的值如何設值 (在 C 要分開慢慢設)
```c
#include <stdio.h>

struct  POINT{
    float x,y;
};
int main()
{
    struct  POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    return 0;
}

```
## 第三題
struct結構 宣告的結構變數 (global, local), 整個結構設值assignment
```c
#include <stdio.h>

struct  POINT{
    float x,y;
};
int main()
{
    struct  POINT a={4.1,3.2};
    printf("%f %f\n",a.x,a.y);

    a.x=1;
    a.y=2;
    printf("%f %f\n",a.x,a.y);

    return 0;
}

```
## 第四題
結構陣列 (array of a struct), 同時配合指標, 指到對應的格子, 方便理解
```c
#include <stdio.h>
struct  DATA{
    int x,y;
}a[3];
struct  DATA b={100,200};
int main()
{
    for(int i=0;i<3;i++){
        printf("a[%d]:%d %d\n",i,a[i].x,a[i].y);
    }
    printf("b: %d %d\n",b.x,b.y);

    struct  DATA c;
    printf("c: %d %d 像亂碼\n",c.x,c.y);

    c=b;
    printf("c: %d %d\n",c.x,c.y);
}

```
## 第五題
結構陣列 (array of a struct), 同時配合結構的指標, 利用 p->x 取出值, 再看 p++ 的移動範圍
```c
#include <stdio.h>

struct  POINT{
    float x,y,z;
};

struct POINT point[5]={{0,0,0},{1,0,0},{0,1,0},{0,0,1},{1,1,1}};

int main()
{
    struct  POINT *p = & point[0];
    printf("%.2f %.2f %.2f\n",p->x,p->z);

    p++;
    printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);

    p++;
 printf("%.2f %.2f %.2f\n",p->x,p->y,p->z);
}

```

## 實習課
## 除惡務盡(除2)
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	int i=0;
	while(a[i]!='\0'){
		if(a[i]!='2')
			printf("%c",a[i]);
		i++;
	}
	printf("\n");
}
```
## 擲骰統計 
```c
#include <stdio.h>
int main()
{
	char count[7]={0};
	char a[100];
	int i=0;
	scanf("%s",&a);
	
	while(a[i]!='\0'){
		count[a[i]-'0']++;
		i++;
	}
	for(i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
	}
}
```
## 函數找整數的最大數字
```c
#include<iostream>
using namespace std;
int max_digit(int n)
{
	int max;//紀錄最大值
	max=n%10;//n的個位數
	while(n>0){
		if((n%10)>max) max=n%10;
		n/=10;
	}
		return max;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
/* 上方C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
  int n;
  scanf("%d", &n);
  printf("[%d]", max_digit(n));
  return 0;
}
*/
```
## 星星等腰三角
```c
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

```
## 分開整數的每個數字 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d   %d   %d   %d   %d",n/10000,n%10000/1000,n%10000%1000/100,n%10000%1000%100/10,n%10000%1000%100%10/1);
}
```
## 字元判別 
```c
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

```
## 數字之首
```c
include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	printf("%c",c);
}
```
## 輸出從0到N的偶數
```c
include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==0)
			printf("%d ",i);
	}
}
```
## week05
## 上課內容
## 第一題
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
}

```
## 第二題
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]={"majority"};
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line4);
}

```
## 第三題
```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};

    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}
```
## 第四題
```c
#include <stdio.h>
int main()
{
   printf("請看看值是多少: %d",'\0');
}
```
## 第五題
```c
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("左邊大\n");
    }else{
        printf("右邊大\n");
    }
}

```
## 第六題
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(strcmp(line[i],line[j])>0){
				strcpy(temp,line[i]);
				strcpy(line[i],line[j]);
				strcpy(line[j],temp);
			}
		}
	}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
	}
}
```
## 實習課
## 反序數字
```c
#include <stdio.h>
int main()
{
	int a,b=0,n1;
	scanf("%d",&a);
	a=n1;
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	printf("%d+%d=%d\n",n1,b,n1+b);
}
```
## 絕對值函數
```c
#include <stdio.h>
int f(int a)
{
	if(a>0) return a;
	else return a*(-1);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```
## N數之和
```c
#include <stdio.h>
int main()
{
	int c,n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&c);
		sum=sum+c;
	}
		printf("%d\n",sum);
}


```
## 三數極大 
```c
#include <stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>a&&b>c)
		max=b;
	if(c>a&&c>b)
		max=c;
	printf("%d\n",max);
}

```
## 計算商數 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
# week07
# 上課內容
# 第一題
字串排序-快速排序
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char temp[10];

int compare (const void * p1,const void * p2)
{
	char * s1 =(char*) p1;
	char * s2 =(char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
	}//Input
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}//Output
}
```
## 第二題
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[100][10];
char other[100];

int compare (const void * p1,const void * p2)
{
	char * s1 =(char*) p1;
	char * s2 =(char*) p2;
	return strcmp(s1,s2);
}
int main()
{
	int n,ans=1;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets(other);
	}//Input
	
	qsort(line,n,10,compare);
	
	for(int i=0;i<n;i++){
		if(strcmp(line[i],line[i+1])==0) ans++;
		else{ printf("%s %d\n",line[i],ans);
		ans=1;
		}
	}//Output
}

```
## 實習課
## 迴文判斷
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[9999];
	int i,len;
	scanf("%s",&a);
	len=strlen(a);//strlen可取得字串長度
	for(i=0;i<(len/2);i++){
		if(a[i]!=a[len-1-i]) break;
	}
	if(i==(len/2)) printf("YES\n");
	else printf("NO\n");
}
```
## 函數反序排列數字
```c
#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	while(a!=0){
		b=b*10+a%10;
		a=a/10;
	}
	printf("%d\n",b);
}
```
## 陣列找出現次數 
```c
#include <stdio.h>
int main()
{
	char a[100];
	int count=0,i,n;
	for(i=0;i<100;i++){
		scanf("%d",&a[i]);
			if(a[i]==0) break;
			n++;
	}
	int x;
	scanf("%d",&x);//找X在數列中出現的次數
	n=i;// 紀錄陣列個數
	for(int i=0;i<n;i++){
		if(a[i]==x) count++;
	}
	printf("%d\n",count);
}

```
## 判斷大小 
```c
#include <stdio.h>
int f(int a,int b){
	if(a<b)return -1;
	if(a==b)return 0;
	if(a>b)return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}

```
## 計算一列整數的總和 
```c
#include <stdio.h>
int main()
{
	int sum=0,a;
	while(a!=999){//999是終止條件
		printf("Enter an integer ( 999 to end ): \n");
		scanf("%d",&a);//a=999
		sum+=a;
	}
	printf("The total is: %d",sum-999);
}
```
## 計算餘數 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a%b);

}

```
## 整數轉換等級 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>90)
		printf("A");
	else if(n<90&&n>=80)
		printf("B");
	else if(n<80&&n>=70)
		printf("C");
	else if(n<70&&n>=60)
		printf("D");
	else if(n<60)
		printf("F");
}
```
## 計程車資計算 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if((n-1500)/250<=0)
		printf("%d",100+(n-1500)/250*5+5);
	else printf("%d",100+(n-1500)/250*5+5);
}
```
## 找零錢 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+10*%d+5*%d+1*%d",n,n/50,n%50/10,n%50%10/5,n%50%10%5/1);
}
```
## week10
## 上課內容
## UVA10226
```c
#include <stdio.h>
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//Step04:陣列 tree
int compare(const void *p1,const void *p2){
	return strcmp((char*) p1,(char*) p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);//Step01:讀資料
	
	for(int t=0;t<T;t++){//Step01:讀資料 gets()一整行
		int N=0;
		while(gets(line)!=NULL){//Step02:讀失敗會變NULL
			if(strcmp(line,"")==0)break;//空行也要離開
			
			strcpy(tree[N],line);//Step04:把樹的名字,放到tree[i]去
			//printf("%s\n",line);
			N++;//Step03:統計數的數目
		}
		//printf("有幾棵樹? %d\n",N);
		//Step05照樹的名字來排序=>Step04陣列在哪裡
		qsort(tree,N,32,compare);//Step05:qsort
		
		if(t>0) printf("\n");//Step07:前面有空白行
		int ans=1;//新的開始
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])==0){//相同
				ans++;
			}else{//不相同,收尾+新的開始
				printf("%.4f\n",100*ans/(float)N);//printf("%d\n",ans);
				ans=1;//新的開始
				printf("%s ",tree[i+1]);//新的開始
			}
			//printf("%s\n",tree[i]);//Step04:把tree[i]印出來
		}
		printf("%.4f\n",100*ans/(float)N);//最後收尾
	}
}
```
## 實習課
## 最大公因數gcd 
```c
#include <stdio.h>
int main()
{
	int a,b,min,ans=1;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	if(a>b) min=b;
	else min=a;
	for(int i=2;i<=min;i++){
		if(a%i==0 && b%i==0) ans=i;//i是因數
	}//迴圈跑完ans儲存的值就是最大公因數
	printf("The greatest common divisor of %d and %d is %d\n",a,b,ans);
}

```
## 字串長度 
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	int lena=strlen(a);//字串a的長度
	int lenb=strlen(b);//字串b的長度
	if(lena>lenb) printf("1");//a>b
	else if (lenb>lena) printf("-1");//b>a
	else //2字串長度相等
	{printf("%d",strcmp(a,b));}
}

```
## 函數判斷質數
```c
#include <stdio.h>
#include <iostream>
using namespace std;
int prime(int n)
{
	int a=0,b=1;
	for(int i=1;i<=n;i++){
		if(n%i==0)a++;
	}
	if(a==2)b=1;
		else b=0;
		return b;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
## 判斷迴文
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[80];
	int i,len;
	scanf("%s",&a);
	len=strlen(a);
	for(i=0;i<(len/2);i++){
		if(a[i]!=a[len-1-i])break;
	}
	if(i==(len/2))printf("YES");
	else printf("NO");
}

```
## 計算餘數及列印
```c
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	printf("The remainder is %d\n",x%y);
}

```
## 判別正方形 
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b)
		printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}

```
## 將一連串整數相乘 
```c
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

```
## 平年月份的天數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==2)
		printf("28");
	else if(n%2==1 && n<9)
		printf("31");
	else if(n%2==0 && n>=8)
		printf("31");
	else if(n%2==1 && n>=9)
		printf("30");
	else if(n%2==0 && n<9)
		printf("30");

}

```
## week11
## 上課內容
## 第一題
```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void *p1,const void *p2)
{
    int d1=*(int*)p1;
    int d2=*(int*)p2;
    if(d1 > d2) return 1;
    if(d1 == d2) return 0;
    if(d1 < d2) return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}

```
## 第二題
## uva10420
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char line[2000][80];
char others[80];
int compare(const void *p1,const void *p2)
{
	char * s1=(char*)p1;
	char * s2=(char*)p2;

	int result = strcmp(s1,s2);
	if(result>0)return 1;
	if(result==0)return 0;
	if(result<0)return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets(others);
	}
	qsort(line,n,80,compare);

	printf("%s ",line[0]);
	int ans=1;
	for(int i=0;i<n-1;i++){
		if(strcmp(line[i],line[i+1])==0){
			ans++;
		}else{
			printf("%d\n",ans);
			printf("%s ",line[i+1]);
			ans=1;
		}
	}
	printf("%d\n",ans);
}

```
## 第三題
```c
#include <stdio.h>
struct data{
    int ans;///有幾個
    char c;///字母
};
struct data box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}

```
## 第四題
```c
#include <stdio.h>
typedef struct data{
    int ans;///有幾個
    char c;///字母
}DATA;
///struct data box;
DATA box;
int main()
{
    box.ans=1;
    box.c='A';

    printf("%c %d\n",box.c,box.ans);
}

```
## 實習課
## 字串中的數字個數 
```c
#include <stdio.h>
int main()
{
	int sum=0,i=0;
	char c[80];
	scanf("%s",c);
	while(c[i]!='\0'){
	if(c[i]>='0'&&c[i]<='9')sum++;
		i++;
	}
	printf("%d",sum);
}

```
## 利用自訂函式最大值max與最小值min求出兩者之差
```c
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int x=a;//x紀錄最大值
	if(x<b) x=b;
	if(x<c) x=c;
	if(x<d) x=d;
	return x;
}
int min(int a,int b,int c,int d)
{
	int x=a;//x紀錄最大值
	if(x>b) x=b;
	if(x>c) x=c;
	if(x>d) x=d;
	return x;
}

int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```
## 奇數之和 
```c
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2==1)sum+=i;
	}
	printf("%d",sum);
}

```
## 兩數間可被7整除的數
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(i%7==0)
		printf("%d ",i);
	}

}
```
## 整數二元四則運算 
```c
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+')printf("%d",a+b);
	if(c=='-')printf("%d",a-b);
	if(c=='*')printf("%d",a*b);
	if(c=='/')printf("%d",a/b);
}

```
## 幾日為星期幾 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n-1)%7);
}


```
## 零錢總額
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",50*a+5*b+1*c);
}
```
## 兩數平方差
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a*a-b*b);
}
```
## week12
## 上課內容
## uva 10062
```c
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++){//Step01: Input
		int ans[256]={};///{0,0,0,0,0...}
		char c[256]={};///{0,1,2,..,65,66,67..}
		for(int i=0;i<256;i++) c[i]=i;
		
		for(int i=0;line[i]!=0;i++){
			char c=line[i];
			ans[c]++;
		}///Step03:字串的for迴圈
		for(int i=0;i<256;i++){//左手i //排序
			for(int j=i+1;j<256;j++){//右手
				if(ans[i]>ans[j]){
				int temp=ans[i];//交換ans[]
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];//交換字母
				c[i]=c[j];
				c[j]=t;
				}
				if(ans[i]==ans[j] && c[i]<c[j]){
				int temp=ans[i];//交換ans[]
				ans[i]=ans[j];
				ans[j]=temp;
				char t=c[i];//交換字母
				c[i]=c[j];
				c[j]=t;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++){
			if(ans[i]>0) printf("%d %d\n",c[i],ans[i]);
		}
	}
}
```
## uva299
```c
#include <stdio.h>
int a[100];
int main()
{
	int T;//Step01:Input
	scanf("%d",&T);
	for(int t=0;t<T;t++){
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){//Step02:Input到陣列a[i]
			scanf("%d",&a[i]);
		}
		int ans=0;
		
		for(int k=0;k<N-1;k++){
			for(int i=0;i<N-1;i++){
				if(a[i]>a[i+1]){
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;//又做了一次交換swap
				}
			}
		}	
		//Step03:Output
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}
}
```
## 實習課
## 數字個數
```c
#include <stdio.h>
int main()
{
	int a,ans=0;
	while(scanf("%d",&a)!=EOF){//End of File
		ans++;
	}
	printf("%d",ans-1);//因為最後一個是0
}
```
## 剩餘啤酒有幾手又幾瓶
```c
#include <stdio.h>
int main()
{
	int p,d;
	scanf("%d%d",&p,&d);
	printf("%d %d",(p-d*6)/6,(p-d*6)%6);
}
```
## 三數最小 
## 法1
```c
#include <stdio.h>
int main()
{
	int a,b,c,min;
	scanf("%d%d%d",&a,&b,&c);
	min=a;
	if(b<a && b<c)
		min=b;
	if(c<a && c<b)
		min=c;
	printf("%d\n",min);
}
```
## 法二
```c
#include <stdio.h>
int min(int a,int b,int c)
{
	int ans=a;
	if(ans>b)ans=b;
	if(ans>c)ans=c;
	return ans;
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	printf("%d\n",min(x,y,z));
}
```
## 計算立方值 
```c
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a*a*a,b*b*b,c*c*c,d*d*d,e*e*e,f*f*f);
}
```
## 判斷平方數 
```c
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i*i==n)ans=i;
	}
	printf("%d",ans);
}
```
## 計算質數個數
```c
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
```
## 三數組合 
```c
#include <stdio.h>
int main()
{
	int a[3],i,temp,j;
	for(i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(a[i]<a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
```
## 找千位數
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",n%10000/1000);
}

```
## week13 
## 上課內容
## 第一題
```c
void setup(){///只做一次設定
size(1024, 400);
}
void draw(){///每秒狂做60次
  if(mousePressed)background(200,191,261);
  else background(255,182,192);
  textSize(50);///字的大小 設50號字
  text(a,100,100);///將a在 100,100畫出來
}
int a=0;///外部變數
void mousePressed(){//按下去時,會呼叫這個函式
  a++;
}
```
## 第二題
```c
void setup(){
  size(1024,400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(200,191,261);
  textSize(50);
  int h = hour();//小時
  int m = minute();//分鐘
  int s = second();//秒
  fill(255,128,64);//填充墨水色彩
  text( "Now."+ h + ":" + m + ":" + s , 100,100);//現在時間
 //      字串  數  字串   數  字串  數
  int total = h*60*60 + m*60 + s;//現在時間的總秒數
  int total2=12*60*60 + 0*60 + 0;//目標時間的總秒數
  text("總秒數:" + total,100,200);
  int ans = total2-total;
  int hh = ans/60/60, mm =ans/60%60, ss = ans%60;
  text("還剩下:" +hh+":"+mm+":"+ss,100,300);
}
```
## 實習課
## 求11 +22+33+…+nn
```c
#include <stdio.h>
int main()
{
	int n,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i*10+i;
	}
	printf("%d",sum);
}

```
## 求兩數之最大公因數
```c
#include<iostream>
using namespace std;
int GCD(int a, int b){
  int m,n,ans=1,i;
  if(a<b)m=a;
  else m=b;
  for(i=2;i<=m;i++){
  	if(a%i==0 && b%i==0)ans=i;
  }
  return ans;
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```
## 區間測速-超速之王
```c
#include <stdio.h>
int main()
{
	int i,a,min,index=1;
	scanf("%d",&min);
	for(i=2;i<=10;i++){
		scanf("%d",&a);
		if(min>a){
			min=a;
			index=i;
		}
	}
	int s=60*60*1.2/min;
	printf("%d %d",index,s);
}
```
## 10數排序，從大到小排好 
```c
#include <stdio.h>
int main()
{
	int a[10],i,j;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}
```
## 正整數平方總和
```c
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=(i*i);
	}
	printf("%d",sum);
}
```
## 兩數之間的3倍數總和
```c
#include <stdio.h>
int main()
{
	int a,b,i,sum=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++){
		if(i%3==0)sum+=i;
	}
	printf("%d",sum);
}
```
## 判斷座標的象限
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>0){
		if(b>0)printf("1\n");
		else printf("4\n");
	}
	else{
		if(b>0) printf("2\n");
		else printf("3\n");
	}
	
}
```
## 輸入n (n>0)， 求n之所有因數和
```c
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
			sum+=i;
	}
	printf("%d",sum);
}
```
## week14
## 上課內容
## 第五題(滾動)
```c
//int []a={1,2,3,4,5,6,7,8,9,10}//Java
int []a=new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0;i<49;i++) a[i]=i+1;
  for(int i=0;i<10000;i++){
    int i1=(int) random(49),i2=(int)random(49);
    int temp=a[i1];a[i1]=a[i2];a[i2]=temp;
  }
}
int N=0, rolling=0;
void draw(){
  background(#2C9CF0);
  for(int i=0;i<N;i++){
    int x =50+i*50;
    if(i==N-1 && rolling>0){
      x+=rolling;
      rolling-=3;
    }
    fill(255);
    ellipse(x,100,40,40);
    textAlign(CENTER,CENTER);
    fill(0);
    text(a[i],x,100);
  }
}
void mousePressed(){
  N++;
  rolling=500;
}
```
## 實習課
## 奇數反流 
```c
#include <stdio.h>
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		if(a[i]%2==1)
		printf("%d ",a[i]);
	}
	
}
```
## 大位王 
```c
#include <stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	if(c<0)c=-c;
	while((c/10)>0){
		c/=10;
	}
	printf("%d\n",c);
}

```
## 輸入西元y年，判斷該y年是否為閏年
```c
include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0 && n%1000!=0)
		printf("%d is a leap year.\n",n);
	else 
		printf("%d is not a leap year.\n",n);
}
```
## 把數字倒著印出來
```c
#include <stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--){
		printf("%d ",a[i]);
	}
}
```
## 區間測速 
```c
#include <stdio.h>
int main()
{
	int i,a;
	scanf("%d",&a);
	int s=60*60*1.2/a;
	printf("%d",s);
}
```
## week15
## 上課內容
## 1.
```c
void setup(){//設定 只做一次
  size(400,200);
  textSize(40);
}
void draw(){//畫圖,每秒60次
  background(41,109,207);
  int s = second();//秒鐘
  text (s,100,100);
}
```
## 2.
```c
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(41,109,207);
  int s = second();
  text(9-s%10,100,100);
}
```
## 3.
## https://hackmd.io/CRq72E8QQS20PcnXRrV79w?view
```c
import processing.sound.*;
SoundFile player;//SoundFile是形狀,player是變名
void setup(){
  size(400,200);
  player = new SoundFile(this,"tada.mp3");  
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  player.play();
}
```
## 4.
```c
import processing.sound.*;//Step3的程式
SoundFile player;//Step3的程式
void setup(){
  size(400,200);
  textSize(40);
  player = new SoundFile(this,"tada.mp3");
}//Step3的程式
void draw(){//每秒60次
  background(41,109,207);
  int s = second();//秒鐘
  text(9-s%10,100,100);
  if(9-s%10==0) player.play();//Step3的程式
}
```
## 5.
```c
import processing.sound.*;
SoundFile player;//SoundFile是形狀,player是變名
void setup(){
  size(400,200);
  player = new SoundFile(this,"bell.mp3");  
}
void draw(){
  background(51,114,191);
}
void mousePressed(){
  if(player.isPlaying()){
    player.stop();
  }else{
    player.play();
  }
}
```
## 6.
## http://127.0.0.1:8290/
```c
function setup(){//設定 只做一次
  createCanvas(400,200);
  textSize(40);
}
function draw(){//畫圖,每秒60次
  background(41,109,207);
  let s = second();//秒鐘
  text (s,100,100);
}
```
## 實習課
## 億萬富翁
```c
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++){
		if((strlen(a)-i)%3==0 && i!=0)
			printf(",");
			printf("%c",a[i]);
	}
}
```
## 秒數換算 
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sec=n%60;
	int min=n/60%60;
	int hour=n/(60*60);
	printf("%0.2d:%0.2d:%0.2d",hour,min,sec);
}
```
## 水杯接水
```c
#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n%m==0)
		printf("%d",n/m);
	else
		printf("%d",n/m+1);
}
```
## 平面兩座標的面積 
```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	printf("%d",abs(x2-x1)*abs(y2-y1));
}
```
## 整數向量相加 
```c
#include <stdio.h>
int main()
{
	int n,a[10],b[10],i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
		printf("%d ",a[i]+b[i]);
	}
}
```
## week16
## 上課內容
## 第一題
```c
void setup(){
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  ellipse(50,50,80,80);
}//畫圓   圓心  寬 高
```
## 第二題
```c
void setup(){
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  fill(255);//白
  ellipse(100,100,180,180);
  fill(255,0,0);//紅
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100,180,180,0,stop);
}//畫圓   圓心  寬 高
```
## 第三題
```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
void draw(){
  background(57,255,127);
  arc(100,100,180,180,radians(90),radians(180));
}
```
## 第四題
```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0;
void draw(){
  background(57,255,127);
  //flost start = radians(90+mouseX);
  //float stop = radians(180+mouseX);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100,100,180,180,start,stop);
  shift+=1;
}
```
## 第五題
```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=10;
void draw(){
  background(57,255,127);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.0001){//還有速度時,轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
  
}
```
## 第六題
```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=0;
void mousePressed(){
  //v=random(10);//0...10.0
  v = random(10)+5;//5...15.0
}
void draw(){
  background(57,255,127);
  float start = radians(90+shift);
  float stop = radians(180+shift);
  arc(100,100,180,180,start,stop);
  if(v>0.1){//還有速度時,轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
  
}
```
## 第七題
```c
void setup(){
  size(400,200);
  fill(255,0,0);
  textSize(40);
}
float shift=0,v=0;
void mousePressed(){
  //v=random(10);//0...10.0
  v = random(10)+5;//5...15.0
}
void draw(){
  background(57,255,127);
  for(int i=0;i<24;i++){
    if(i%3==0) fill(0);
    if(i%3==1) fill(255);
    if(i%3==2) fill(200,180,0);
    float start = radians(0+shift+i*360/24);
    float stop = radians(360/24+shift+i*360/24);
    arc(100,100,180,180,start,stop);
  }
  if(v>0.1){//還有速度時,轉動
    shift+=v;//轉動的速度
    v = v * 0.99;//速度會慢慢減速
  }
  text(shift,200,100);//印出shift
  text(v,200,150);//印出轉動的速度
  
}
```
## 實習課
## 大於漸增數列總和之最小整數
```c
#include <stdio.h>
int main()
{
	int min,max,a;
	scanf("%d",&a);
	min=a;
	max=a;
	while(a!=0){
		scanf("%d",&a);
		if(min>a)min=a;
		if(max<a)max=a;
	}
	printf("[%d,%d]",min,max);
}
```
## 計算級數的值 
```c
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=(2*n+1);i+=2)
		sum+=i;
	printf("f(%d)=%d",n,sum);
}
```
## 拆解輸入的正整數 
```c
#include <stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(n>0){
		printf("%d ",(n%10)*i);
		n/=10;
		i*=10;
	}
}
```
## 計算一組任意數目的整數的總和
```c
#include <stdio.h>
int main()
{
	int sum=0,i,a;
	scanf("%d",&a);
	while(a!=0){
		if(a>0)
			sum+=a;
		scanf("%d",&a);
	}
	printf("%d",sum);
}
```
## 整數最大值、最小值
```c
#include <stdio.h>
int main()
{
	int min,max,a;
	scanf("%d",&a);
	min=a;
	max=a;
	while(a!=0){
		scanf("%d",&a);
		if(min>a)min=a;
		if(max<a)max=a;
	}
	printf("[%d,%d]",min,max);
}
```
## week17
## 上課內容
## 第一題
```c
void setup(){
  size(400,200);
  textSize(40);
}
String line="world";
void draw(){
  background(0);
  text("hello",100,100);
  text( line  ,100,150);
}
```
## 第二題
```c
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:   "+Q     ,100,100);
  text( "You:"+line  ,100,150);
}
void mousePressed(){
  line = line+"a";
}
```
