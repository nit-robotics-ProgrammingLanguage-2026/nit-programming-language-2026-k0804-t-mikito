#include <stdio.h>
void han(int *moto,int *kekka)
{
    int copy=*moto;
    int ans=0;
    while(copy>0) {
        ans=(ans<<1)|(copy&1);
        copy>>=1;
        
    }
    *kekka=ans;
    
}
int main(void)
{
    int in,out;
    scanf("%d",&in);
    if(in<=0){
        printf("NG");
        return 0;
        
    }
    han(&in,&out);
    printf("%d,%d",in,out);
    return 0;
    
}
