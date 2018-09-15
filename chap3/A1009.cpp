//
//  A1009.cpp
//  
//
//  Created by 郑彤 on 2018/7/26.
//
//
//#include <cstdio>
//#include <cstring>
//int main()
//{
//    int K1;
//    scanf("%d",&K1);
//    int N1[K1];
//    float a1[K1];
//    for(int i=0;i<K1;i++)
//        scanf("%d %f",&N1[i],&a1[i]);
//    int K2;
//    scanf("%d",&K2);
//    int N2[K2];
//    float a2[K2];
//    for(int j=0;j<K2;j++)
//        scanf("%d %f",&N2[j],&a2[j]);
//    float a[K1+K2+1];
//    memset(a,0,sizeof(a));
//    for(int i=0;i<K1;i++)
//        for(int j=0;j<K2;j++)
//            a[N1[i]+N2[j]] += a1[i]*a2[j];
//    int count=0;
//    for(int k=K1+K2;k>=0;k--)
//        if( a[k]) count++;
//    printf("%d",count);
//    for(int k=K1+K2;k>=0;k--)
//        if( a[k] )
//            printf(" %d %.1f",k,a[k]);
//
//
//
//
//    return 0;
//}

//#include <cstdio>
//struct Poly{
//    int exp;
//    double cof;
//}poly[1001];
//
//double ans[2001];
//int main()
//{
//    int m,n,number = 0;
//    scanf("%d",&n);
//    for(int i = 0; i < n;i++)
//        scanf("%d %lf",&poly[i].exp,&poly[i].cof);
//    scanf("%d",&m);
//    for (int i=0; i < m;i++) {
//        int exp;
//        double cof;
//        scanf("%d %lf",&exp,&cof);
//        for(int j = 0; j< n;j++){
//            ans[exp+poly[j].exp]+=(cof*poly[i].cof);
//        }
//    }
//    for(int i=0;i<=2000;i++)
//        if(ans[i]) number++;
//    printf("%d",number);
//    for(int i=2000;i>=0;i--)
//        if(ans[i])
//            printf(" %d %.1f",i,ans[i]);
//
//    return 0;
//}



//
//#include <cstdio>
//typedef struct Poly{
//    int ex;
//    float co;
//    Poly* next;
//};
//
//
//int main(){
//    Poly * head;
//    Poly * tail=head;
//    int N;
//    scanf(
//    scanf("%d %d",&tail
//
//
//    return 0;
//}










































