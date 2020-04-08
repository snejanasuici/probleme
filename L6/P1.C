
#include <stdio.h>
#include <stdlib.h>

int valid(int w,int p[50])
{
     if(w>1) if(p[w]-p[w-1]>1) return 0;   
    return 1;
}

int afisare(int p[50],int n,int r[50][50])
{
  int i,s=0;
   for(i=1;i<=n;i++) s=s+r[i][p[i]];       

   return s;
}

void back(int n,int r[50][50])
{
    int w=1,p[50],ok=0,smaxim=0;
    p[w]=0;
    while(w>0)
    {
        if(w<=n)
        {
            do{
                if(p[w]<w){     
                        p[w]++;
                        ok=1;
                          }
                else ok=0;
            }while(valid(w,p)==0&&ok==1);
        }
        if(ok==1)
             { if(w==n) 
                   {  if(afisare(p,n,r)>smaxim) 
                        smaxim=afisare(p,n,r); 
                   }  
                   else 
                        { w++;
                          p[w]=0;
                        }
        }
        else w--;
    }
    printf("\n%d\n",smaxim);
}

void citire(int p[50][50],int n) 
{
    int i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            p[i][j]=0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("p[%d][%d]=",i,j);
            scanf("%d",&p[i][j]);
        }
    }
}

int main()
{
    int n,p[50][50];

    printf("Nr de linii ale piramidei este:");
    scanf("%d",&n);

    citire(p,n);

    back(n,p);

    return 0;
}
