#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,sum=0,sum1=0,a=0,b=0;
        scanf("%d",&n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&ar[i]);
            sum=sum+ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            a=(-1)*ar[i];
            b=(-1)*ar[i+1];
            if(sum1<a+b){
                
                sum1=a+b;
            }
        }
        printf("%d\n",sum+2*sum1);          
        
    }
    return 0;
}