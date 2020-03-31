#include <stdio.h>
#include <stdlib.h>

void verificare(int c,int x,int *k,int *v)
{
    if((1&(x>>c))==1){
              *(v+(*k))=x;
                (*k)++;
    }
}

int main()
{
    int *v,c,n,i,x,nr=0;

    do{
    printf("c=");scanf("%d",&c);
    }while(c<0||c>7);

    printf("n=");scanf("%d",&n);

    v=(int*)malloc(sizeof(int));

    for(i=0;i<n;i++)
    {
       printf("n(%d):",i+1);
       scanf("%d",&x);

       verificare(c,x,&nr,v);

    }

     for(i=0;i<nr;i++) printf("%d ",*(v+i));

    return 0;
}