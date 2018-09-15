//
//  1004.cpp
//  
//
//  Created by 郑彤 on 2018/7/19.
//

#include <stdio.h>
int main()
{
    int L,T,num,sum;
    scanf("%d",&L);
    while(L--){
        sum = 0;
        scanf("%d",&T);
        while(T--){
            scanf("%d",&num);
            sum += num;
        }
        printf("%d\n",sum);
    }
    return 0;
}
