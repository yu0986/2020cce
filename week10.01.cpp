#include <stdio.h>
#include <string.h>//strcmp() strcpy()
#include <stdlib.h>//qsort()
char line[1000];
char tree[1000000][32];//Step04:�}�C tree
int compare(const void *p1,const void *p2){
	return strcmp((char*) p1,(char*) p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);//Step01:Ū���

	for(int t=0;t<T;t++){//Step01:Ū��� gets()�@���
		int N=0;
		while(gets(line)!=NULL){//Step02:Ū���ѷ|��NULL
			if(strcmp(line,"")==0)break;//�Ŧ�]�n���}

			strcpy(tree[N],line);//Step04:��𪺦W�r,���tree[i]�h
			//printf("%s\n",line);
			N++;//Step03:�έp�ƪ��ƥ�
		}
		//printf("���X�ʾ�? %d\n",N);
		//Step05�Ӿ𪺦W�r�ӱƧ�=>Step04�}�C�b����
		qsort(tree,N,32,compare);//Step05:qsort

		if(t>0) printf("\n");//Step07:�e�����ťզ�
		int ans=1;//�s���}�l
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])==0){//�ۦP
				ans++;
			}else{//���ۦP,����+�s���}�l
				printf("%.4f\n",100*ans/(float)N);//printf("%d\n",ans);
				ans=1;//�s���}�l
				printf("%s ",tree[i+1]);//�s���}�l
			}
			//printf("%s\n",tree[i]);//Step04:��tree[i]�L�X��
		}
		printf("%.4f\n",100*ans/(float)N);//�̫᦬��
	}
}
