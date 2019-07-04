#include <stdio.h>
#include <string.h>

struct data{
	int sum;
	int first;
	int last;
};
int geshu_fin = 0;

void fengxi(int geshu,int n, int shuru[], struct data s_temp[], struct data s_fin[]){
	for (int i = 0; i <= (geshu - n); ++i){
		int zonghe=0;
		for (int a = 0; a < n; ++a){
			zonghe = zonghe + (shuru[(i+a)]);
		}
        s_temp[i].sum = zonghe;
        s_temp[i].first = i;
        s_temp[i].last = i+n-1;
	}
    int fin;
    fin = 0;
    for(int i=0;i<(geshu-n);++i){
        if(s_temp[i].sum>s_temp[fin].sum){
            fin = i;
        }
    }
    s_fin[geshu_fin].sum = s_temp[fin].sum;
    s_fin[geshu_fin].first = s_temp[fin].first;
    s_fin[geshu_fin].last = s_temp[fin].last;
    geshu_fin++;
}




int main()
{
	int geshu;
	scanf("%d", &geshu);
	//gets();
	//fflush(stdin);
	int shuru[10000];
	for (int i = 0; i < geshu; ++i){
		scanf("%d", &shuru[i]);
	}
	struct data s_temp[1000], s_fin[1000];
	for (int n = 1; n <= geshu; n++){						//详情看草稿纸
		fengxi(geshu,n, &shuru, &s_temp,&s_fin);			//目前已经可以输入，函数未完成。
	}														//这三行注释记得删掉。
	//fengxi(geshu, 3, &shuru, &s_temp, &s_fin);				//测试用代码，记得处理。
	for (int i = 0; i < geshu; ++i){						//hi，fewoot你好，还记得我吗？
		if (s_fin[i].sum>s_fin[0].sum){
			s_fin[0] = s_fin[i];
		}else if(s_fin[i].sum==s_fin[0].sum){
            if(s_fin[i].first<s_fin[0].first){
                s_fin[0] = s_fin[i];
            }
        }
	}
    if(s_fin[0].sum<0){
        s_fin[0].sum = 0;
        s_fin[0].first = 0;
        s_fin[0].last = (geshu-1);
    }
	printf("%d %d %d", s_fin[0].sum, s_fin[0].first, s_fin[0].last);



	//It is base code,under this
	//check your code, you always forget "&"!
	system ("pause");
	return 0;
}