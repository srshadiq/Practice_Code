#include<stdio.h>
int msain()
{
    int n;
    scanf("%d",&n);
     int x,y,z,sumx=0,sumy=0,sumz=0;
    for(int i=1;i<=n;i++)
    {  
        scanf("%d%d%d",&x,&y,&z);
        sumx=sumx+x;
        sumy=sumy+y;
        sumz=sumz+z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
