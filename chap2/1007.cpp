////
//  1007.cpp
//
//
//  Created by 郑彤 on 2018/7/19.
//

#include <stdio.h>
int main()
{
    int num,sum,flag,L,T;
    flag = 0;
    scanf("%d",&L);
    while(L--){
        sum = 0;
        if(flag)
            printf("\n");
        scanf("%d",&T);
        while(T--){
            scanf("%d",&num);
            sum += num;
        }
        printf("%d\n",sum);
        flag = 1;
    }
    return 0;
}
