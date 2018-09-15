//
//  B1011.cpp
//  
//
//  Created by 郑彤 on 2018/7/20.
//

#include <stdio.h>
int main()
{
    int T;
    long long a,b,c;
    scanf("%d",&T);
    int i=1;
    while(T--){
        scanf("%lld %lld %lld",&a,&b,&c);
        if((a+b) > c)
            printf("Case #%d: true\n",i++);
        else
            printf("Case #%d: false\n",i++);
    }
}


//
//  B1011.cpp
//
//
////  Created by 郑彤 on 2018/7/20.
////
//
//#include <stdio.h>
//int main()
//{
//    int T;
//    long long a,b,c;
//    scanf("%d",&T);
//    int i=1;
//    while(T--){
//        scanf("%lld %lld %lld",&a,&b,&c);
//        if((a+b) > c)
//            printf("Case #%d: true\n",i++);
//        else
//            printf("Case #%d: false\n",i++);
//    }
//}
