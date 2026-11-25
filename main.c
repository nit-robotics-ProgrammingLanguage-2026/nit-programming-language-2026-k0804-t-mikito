#include <stdio.h>
void han(int *moto,int *kekka)
{
    int copy=*moto;
    int ans=0;
    /*copyのすべての処理が終わるまで繰り返す*/
    while(copy>0) {
        ans=(ans<<1)|(copy&1);
        copy>>=1;
        
    }
    *kekka=ans;
    
}
int main(void)
{
    int in,out;
    /*整数を入力*/
    scanf("%d",&in);
    if(in<=0){
        printf("NG");
        return 0;
        
    }
    han(&in,&out);
    printf("%d,%d",in,out);
    return 0;
    
}
