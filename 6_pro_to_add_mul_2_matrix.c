# include<stdio.h>

void main(){
    int a[3][3],b[3][3],c[3][3]={0},d[3][3]={0},i,j,k,m,n,p,q;
    printf("Enter Number Of Rows & Coloum of 'A' Matrix:-");
    scanf("%d%d",&m,&n);
    printf("Enter Number Of Rows & Coloum of 'B' Matrix:-");
    scanf("%d%d",&p,&q);
    if (m != p || n != q)
    {
        printf("Matrix Addition not Possible.");
        
    }
    else if (n != p)
    {
        printf("Matrix Multipltication not Possible.");
    }
    else
    {
        printf("Enter Elements of Matrix 'A' One By One:-\n");
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("a[%d][%d]:-",i,j);
                scanf("%d",&a[i][j]);
            } 
        }
        printf("Enter Elements of Matrix 'B' One By One:-\n");
        for ( i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("b[%d][%d]:-",i,j);
                scanf("%d",&b[i][j]);
            } 
        }
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            } 
        }
        printf("Matrix Addition:-\n");
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t",c[i][j]);
            } 
            printf("\n");
        }
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                for ( k = 0; k < p; k++)
                {
                    d[i][j]+=a[i][k]*b[k][j];
                }
            } 
        }
        printf("Matrix Multiplication:-\n");
        for ( i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t",d[i][j]);
            } 
            printf("\n");
        }
    }
}