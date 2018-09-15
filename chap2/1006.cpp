//
//  1003.cpp
//  
//
//  Created by 郑彤 on 2018/7/19.
//

#include <stdio.h>
int main()
{
    int a,b,flag;
    flag = 0;
    while(scanf("%d %d",&a,&b) != EOF){
        if(flag)
            printf("\n");
        printf("%d\n",a+b);
        flag = 1;
    }
    
    
    return 0;
    
}
