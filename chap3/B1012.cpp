//
//  B1012.cpp
//
//
//  Created by 郑彤 on 2018/7/21.
//

#include <cstdio>
#include <cmath>
int main()
{
    int N;
    scanf("%d",&N);
    int num;
    double A[5]={0};
    int count[5]={0};
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        if(!(num%10)){
            count[0]++;
            A[0] += num;
        }
        if(num%5==1){
            A[1] += pow(-1,count[1]++)*num;
        }
        if(num%5==2){
            count[2]++;
            A[2]++;
        }
        if(num%5==3){
            A[3] += num;
            count[3]++;
        }
        if(num%5==4&&num>A[4]){
            count[4]++;
            A[4] = num;
        }
    }
    for(int i=0;i<5;i++){
        if(count[i]==0)
            printf("N");
        else if(i==3)
            printf("%.1f",round(A[i]/count[3]*10)/10);
        else
            printf("%d",(int)A[i]);
        if(i<4)
            printf(" ");
    }
    return 0;
}

