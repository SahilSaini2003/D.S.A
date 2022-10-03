# include<stdio.h>

int binarysearch(int a[],int beg,int end,int val){
    int mid;
    if (end>=beg)
    {
        mid=(beg+end)/2;
        if (a[mid]==val)
        {
            return mid+1;
        }
        else if (a[mid]<val)
        {
            return binarysearch(a,mid+1,end,val);
        }
        else
        {
            return binarysearch(a,beg,mid-1,val);
        } 
    }
}

int main(){
    int a[]={11,34,56,75,43,85,90,21,47,78};
    int val=43,i;
    int n=sizeof(a)/sizeof(a[0]);
    int res=binarysearch(a,0,n-1,val);
    printf("Elemets are:-\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("Elemet serched %d ",val);
    if (res==-1)
    {
        printf("\n Element not Present");
    }
    else
    {
        printf("Element Present at %d",res);
    }
    return 0;
}