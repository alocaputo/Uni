#include <stdio.h>

int main()
{
    int x,y,i,j,temp;

    printf("Length of the arrays A and B: ");
    scanf("%d %d", &x, &y);
    int a[x];
    int b[y];
    int c[x+y];
    
    printf("A array values: ");
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
    }

    printf("B array values: ");
    for(i=0;i<y;i++){
        scanf("%d",&b[i]);
    }
    
    //-----Merge A and B into C--------
    
    for(i=0;i<=x-1;i++){
      c[i] = a[i];
    }
    for(j=0;j<=y-1;j++){
      c[j+x] = b[j];
    }
    
    int l = x +y;
    dvs(a,med(a,l),l);

    return l;
    return 0;
}

int med(int a[],int l){
    int c=0,m=0,i=0;
    for(i=0;i<l;i++){
      c = c + a[i];
    }
    
    m = c/l;;
    return m;
    return 0;
}

int dvs(int a[],int m,int l){
    int i=0,p=0;
    int q= l-1;
    int b[l];
    
    for(i=0;i<l;i++){
        b[i]=0;
    }
    
    if(l>2){
        for(i=0;i<l;i++){
           if(a[i]<=m){
              b[p] = a[i];
               p = p + 1;
        }else{
              b[q] = a[i];
              q= q -1;
        }
      }

    int sb[p],sc[l-p];
    
    
    for(i=0;i<p;i++){
        sb[i]=b[i];
    }
    
    for(i=p;i<l;i++){
        sc[i-p]=b[i];
    }

    int la = p;
    int lb = l-p;
     dvs(sb,med(sb,la),la);
     dvs(sc,med(sc,lb),lb);

    
    }else if(l==2 && a[0]==a[1]){
        printf("%d, ",a[0]);
        }
        return 0;
}
