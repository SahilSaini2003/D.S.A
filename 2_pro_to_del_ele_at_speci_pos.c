# include<stdio.h>

int main(){
    int a[100],i,n,pos;
    printf("Enter No of Elements:-");
    scanf("%d",&n);
    printf("Enter Elements one By one:-");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Enter position to Be Deleted:-\n");
    scanf("%d",&pos);
    for (i = pos; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("New Array:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}