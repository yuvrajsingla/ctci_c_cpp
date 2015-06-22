#include<stdio.h>

void rotateMatrix(int **a,int n)
{
     int i=0;
     int j=0;
     int temp;
     
     for(i=0;i<n/2;i++)
     {
     
                       for(j=i;j<(n-i-1);j++)
                       {
                                             temp=a[i][j];
                                             a[i][j]=a[n-j-1][i];
                                             a[n-j-1][i]=a[n-i-1][n-j-1];
                                             a[n-i-1][n-j-1]=a[j][n-i-1];
                                             a[j][n-i-1]=temp;
                       }
     }
}

int main()
{
    int i=0,j=0;
    int **p;
    int n=4;
    int c=0;;
    
    p=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
                    p[i]=(int*)malloc(sizeof(int)*n);
    
    for(i=0;i<n;i++)
                    for(j=0;j<n;j++)
                                    p[i][j]=c++;
    
    
    for(i=0;i<n;i++)
    {
                    
                    for(j=0;j<n;j++)
                                    printf("%d ",p[i][j]);
                    printf("\n");
    }
                    printf("\n");
    
    rotateMatrix(p,n);
    
    for(i=0;i<n;i++)
    {
                    
                    for(j=0;j<n;j++)
                                    printf("%d ",p[i][j]);
                    printf("\n");
    }
    
    system("pause");
    return 0;
}
