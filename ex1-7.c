#include<stdio.h>

void fillZeroes(int **a, int m, int n)
{
     int zeroRow=0;
     int zeroCol=0;
     int i,j;
     
     /* Check if there is a zero in first row */
     for(i=0;i<n;i++)
                     if(a[0][i]==0)
                     {
                                   zeroRow=1;
                                   break;
                     }
                     
     /* Check if there is a zero in first Column */
     for(i=0;i<m;i++)
                     if(a[i][0]==0)
                     {
                                   zeroCol=1;
                                   break;
                     }
     
     /* Copy all the 0's to first row and column */
     for(i=1;i<m;i++)
                     for(j=1;j<n;j++)
                                     if(a[i][j]==0)
                                     {
                                                   a[i][0]=0;
                                                   a[0][i]=0;
                                     }
     
     
     /* For every 0 in the first row/column, fill the whole row/column with zero */
          /* Skip checking the first corner [0][0] index to avoid prefilling the zeroes of column wile traversing row and viceversa*/
     for(i=1;i<m;i++)
                     if(a[i][0]==0)
                                   for(j=1;j<n;j++)
                                                   a[i][j]=0;
     for(i=1;i<n;i++)
                     if(a[0][i]==0)
                                   for(j=1;j<m;j++)
                                                   a[j][i]=0;                                                   
                                                   
     /* Fill the first row with zero if a zero was identified initially */
     if(zeroRow)
                for(i=0;i<n;i++)
                                a[0][i]=0;
                                
     /* Fill the first column with zero if a zero was identified initially */
     if(zeroCol)
                for(i=0;i<m;i++)
                                a[i][0]=0;

                                
}

int main()
{
    int **p;
    int i,j;
    int m=1;
    int n=3;
    
    p=(int**)malloc(sizeof(int*)*m);
    for(i=0;i<m;i++)
                    p[i]=(int*)malloc(sizeof(int)*n);
    
    
    printf("enter %d elements : ",m*n);
    for(i=0;i<m;i++)
                    for(j=0;j<n;j++)
                                    scanf("%d",&p[i][j]);
                                    
    printf("\nInitial Matrix\n");
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    printf("%d ",p[i][j]);
                    }
                    printf("\n");
    }
                                    
    
    fillZeroes(p,m,n);
    
    printf("\nModified Matrix\n");
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    printf("%d ",p[i][j]);
                    }
                    printf("\n");
    }                    
    
    system("pause");
    return 0;
}



/* print  --->   printf("\n"); for(i=0;i<m;i++)    { for(j=0;j<n;j++) printf("%d ",a[i][j]); printf("\n");    } */
