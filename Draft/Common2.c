#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6,7,2};
    
    printf("Hello, World!\n");
    divs(a,med(a));
    return 0;
}

int med(int a[]){
    int l= sizeof(a);
    int c=0,m=0,i=0;
    
    for(i=0;i<l;i++){
      c = c + a[i];
    }
    
    m = c/l;;
    return m;
    
    
    return 0;
}

int divs(int a[],int m){
    int i=0,p=0;
    int q= sizeof(a)-1;
    int l= sizeof(a);
    int b[l];
    
    for(i=0;i<=q;i++){
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

    int sb[p],sc[q];
    
//         for(i=0;i<l;i++){
//        printf("%d, ",b[i]);
        
//    }
    
    for(i=0;i<p;i++){
        sb[i]=b[i];
    }
    
    for(i=p;i<l;i++){
        sc[i-p]=b[i];
    }



    divs(sb,med(sb));
     divs(sc,med(sc));
 //       for(i=0;i<p;i++){
 //       printf("%d",sc[i]);
        
 //   }
    
    
    }else if(l==2 && a[0]==a[1]){
        printf("%d, ",a[0]);
        }
        return 0;
}
