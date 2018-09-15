//
//  A1046.cpp
//
//
//  Created by 郑彤 on 2018/7/21.
//

#include <cstdio>

//int main()
//{
//    int N;
//    scanf("%d",&N);
//    int D[N];
//    int sum=0;
//    for(int i=1;i<=N;i++)
//    {
//        scanf("%d",&D[i%N]);
//        sum +=D[i%N];
//    }
//
//
//    int K;
//    scanf("%d",&K);
//    for(int j=1;j<=K;j++)
//    {
//        int a,b;
//        int D1=0;
//        scanf("%d %d",&a,&b);
//        int c=a-b;
//        int d;
//        if(c>0)  d=b;
//        else d=a;
//        c = fabs(c);
//        for(int i=0;i<c;i++)
//            D1 += D[(d+i)%N];
//
//        if(D1>sum-D1) printf("%d\n",sum-D1);
//        else printf("%d\n",D1);
//
//
//    }
//
//    return 0;
//}
//有超时的危险
//
int main()
{
    int N;
    scanf("%d",&N);
    int D[N];
    int dis[N+1];
    dis[1]=0;
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&D[i%N]);
        dis[(i+1)%(N+1)] = dis[i%(N+1)]+D[i%N] ;
    }
//    for(int i=0;i<=N;i++)
//        printf("%d ",dis[i]);

    int K;
    scanf("%d",&K);
    for(int j=1;j<=K;j++)
    {
        int a,b;
        int D1,D2;
        scanf("%d %d",&a,&b);
        if(a>=b)
            D1 = dis[a]-dis[b];
        else
            D1 = dis[b]-dis[a];
        D2 = dis[0]-D1;
        if(D1 >= D2)
            printf("%d\n",D2);
        else
            printf("%d\n",D1);
    }
    
    return 0;
}

















