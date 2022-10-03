# include<stdio.h>

int main(){
    int a[100],i,num,key,pos;
    printf("Enter No of Elements:-");
    scanf("%d",&key);
    printf("Enter Elements One by One:-");
    for ( i = 0; i < key; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements are:-\n");
    for (i = 0; i < key; i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nEnter New Elements You Need to Insert:-");
    scanf("%d",&num);
    printf("Enter The Position of New Elements:-");
    scanf("%d",&pos);
    for ( i = 0; i < key; i++)
    {
        if (i+1==pos)
        { 
            a[pos-1]=num;
        }
    }
    printf("Final Array\n");
    for (i = 0; i < key; i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}