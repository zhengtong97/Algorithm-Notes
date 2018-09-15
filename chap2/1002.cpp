//
//  1002.cpp
//  
//
//  Created by 郑彤 on 2018/7/19.
//

#include <stdio.h>
int main()
{
    int a,b;
    while(scanf("%d",&a)){
    scanf("%d",&b);
    if(a==0&b==0)
        break;
    else
        printf("%d\n",a+b);
    }
    return 0;
}
