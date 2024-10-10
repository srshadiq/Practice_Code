#include<stdio.h>
int main()
{
    int n;
    char s[100000],c[100000];
    scanf("%d %s",&n,&s);
    int x=n-1;
    for (int i = n-1; i >=0; i-=2)
    {
        c[x]=s[i];
        x--;
    }
    x=0;
    for (int i = n-2; i >=0; i-=2)
    {
        c[x]=s[i];
        x++;
    }
    printf("%s\n",c);  
}