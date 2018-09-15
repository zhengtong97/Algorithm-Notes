#include <cstdio>

int main(){
    int N,shift;
    scanf("%d %d",&N,&shift);
    int a[N];
    shift %= N;
    for(int i=shift;i<N;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<shift;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<N;i++){
        printf("%d",a[i]);
        if(i!=N-1)
            printf(" ");
    }
    
    return 0;
}
