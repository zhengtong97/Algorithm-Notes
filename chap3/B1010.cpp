//
//  B1010.cpp
//  
//
//  Created by 郑彤 on 2018/7/26.
//

#include <stdio.h>
int main()
{
    int exp,coef;
    int flag = 0;
    int flag2 = 1;
    while(scanf("%d %d",&coef,&exp)!=EOF)
    {
        if(flag&&exp)
            printf(" ");
        if(exp)
        {
            printf("%d %d",coef*exp,exp-1);
            flag2 = 0;
        }
        if(!flag) flag = 1;
    }
    if(flag2) printf("0 0");
    return 0;
}
