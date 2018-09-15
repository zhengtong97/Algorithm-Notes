//
//  A1065.cpp
//  
//
//  Created by 郑彤 on 2018/7/26.
//

#include <stdio.h>
int main()
{

    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        long long a,b,c,d;
        int flag;
        scanf("%lld %lld %lld",&a,&b,&c);
        d=a+b;
        if(d<=0&&a>0&&b>0)
            flag = 1;
        else if(d>=0&&a<0&&b<0)
            flag = 0;
        else
        {
            if(a+b >c) flag = 1;
            else flag = 0;
        }
        
    
        if(flag==1)
            printf("Case #%d: true\n",i);
        else
            printf("Case #%d: false\n",i);
    }
    
    return 0;
}
