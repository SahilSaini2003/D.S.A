# include<stdio.h>

int main(){
    int i,num,knum,found=0;
    printf("Enter No of Elements:-");
    scanf("%d",&num);
    int a[num];
    printf("Enter Elements one By one:-");
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Elements to be Searched:-");
    scanf("%d",&knum);
    for ( i = 0; i < num; i++)
    {
        if (knum==a[i])
        {
            found=1;
            break;
        }
    }
    if (found==1)
    {
        printf("Element Present at %d",i+1);
    }
    else
    {
        printf("Element Absent.");
    }
    return 0;
}