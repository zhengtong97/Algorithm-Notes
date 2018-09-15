//
//  1003.cpp
//  
//
//  Created by 郑彤 on 2018/7/19.
//

#include <stdio.h>
int main()
{
    int T,num,sum;
    while(scanf("%d",&T)){
        sum = 0;
        if(!T) break;
        while(T--){
            scanf("%d",&num);
            sum = sum + num;
        }
        printf("%d\n",sum);
    }
    return 0;
}
