#include <stdio.h>
#include <string.h>
int main()
{
	int N,t,team,grade;
	scanf("%d",&N);
	t=N;
    if(N){
        int a[N+1];
        for(int j=1;j<=(N+1);j++)
            a[j]=0;
        
        while(t--){
            scanf("%d %d",&team,&grade);
            a[team] += grade;
        }
        
        int A=0,B=0;
        
        for(int i=1;i<=(N+1);i++){
            if(a[i]>B){
                A=i;
                B=a[i];
            }
        }
        printf("%d %d\n",A,B);
    }
	return 0;




}
