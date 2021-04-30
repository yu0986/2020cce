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
