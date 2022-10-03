# include<stdio.h>

int main(){
    int a[100]={0};
    int i,x,pos,n=10;
    for ( i = 0; i < 10; i++)
    {
        a[i]=i+1;
        printf("%d ",a[i]);
    }
    printf("\n");
    x=50;
    pos=5;
    n++;
    for ( i = n-1; i >=pos; i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");    
    return 0;
}