#include<stdio.h>
void main()
{

    int i, j, m, n,rsum,csum, drsum=0,dlsum=0,rc1,rc2,cc1,cc2,ldc1,ldc2,rdc1,rdc2;
   

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);
    int a[m][n];
   
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
          
            scanf("%d", &a[i][j]);
        }
    }

   
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<m;i++)
    {
         rsum=0;
        
        for(j=0;j<n;j++)
        {
            rsum=rsum+a[i][j];
        }
       printf("%d rowsum :%d\n",i,rsum); 
    
       if(rsum==4)
       {
           rc1++;
       }
        else if(rsum==0)
        {
            rc2++;
        }
    }
   /*printf("1's cont :%d\n",rc1);
   printf("0;s count :%d\n",rc2);  */
    
    
    
     for(j=0;j<n;j++)
    {
         csum=0;
        
        for(i=0;i<m;i++)
        {
            csum=csum+a[i][j];
        }
       printf("%d columnsum :%d\n",i,csum); 
       if(csum==4)
       {
           cc1++;
       }
        else if(csum==0)
        {
            cc2++;
        }
    }
   printf("1's cont :%d\n",cc1);
   printf("0;s count :%d\n",cc2);  
    
    
    
    
         for(i=0;i<m;i++)
        {
            dlsum=dlsum+a[i][i];
        }
       printf(" leftdiagonalsum :%d\n",dlsum);
    
        if(dlsum==4)
       {
           ldc1++;
       }
        else if(dlsum==0)
        {
            ldc2++;
        }
    
   printf("1's cont :%d\n",ldc1);
   printf("0;s count :%d\n",ldc2);  
    
       
       
       
     
     for(i=0;i<m;i++)
        {
            drsum=drsum+a[m-i-1][i];
        }
       printf(" rightdiagonalsum :%d\n",drsum); 
           if(drsum==4)
       {
           rdc1++;
       }
        else if(drsum==0)
        {
            rdc2++;
        }
    
   printf("1's cont :%d\n",rdc1);
   printf("0;s count :%d\n",rdc2);  
    
 
 
}




