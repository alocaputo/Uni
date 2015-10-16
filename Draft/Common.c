#include <stdio.h>

int main()
{
    int x,y,z,w,k,i,j,temp,o,p;

    printf("Inserisci lungezza vettori: ");
    scanf("%d %d", &x, &y);
    int a[x];
    int b[y];
    int c[x+y];
    
    
    for(i=0;i<x;i++)
    {
        printf("Enter a no ");
        scanf("%d",&z);
        a[i] = z;
    }
    
     for(i=0;i<y;i++)
    {
        printf("Enter a no ");
        scanf("%d",&w);
        b[i] = w;
    }
    
 //   for(i=0;i<x;i++){
 //     printf("%d, " ,a[i]);
 //   }
    for(i=0;i<=x-1;i++){
      c[i] = a[i];
    }
    
    for(j=0;j<=y-1;j++){
      c[j+x] = b[j];
    }
 

    
        for ( o = 1; o < x+y; o++) {
      for( p = o ; p > 0 ; p--){
        if(c[p] < c[p-1]){
          temp = c[p];
          c[p] = c[p-1];
          c[p-1] = temp;
        }
      }
    }
    
    for(k=0;k<x+y-1;k++){
      if(c[k]== c[k+1]){
        printf("%d, ",c[k]);
      }
    }
//    for(i=0;i<x+y;i++){
//    printf("%d, " ,c[i]);
//    }
    
    return 0;
}

