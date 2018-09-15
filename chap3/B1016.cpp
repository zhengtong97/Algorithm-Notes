//
//  B1016.cpp
//  
//
//  Created by 郑彤 on 2018/7/20.
//

#include <cstdio>
int main()
{
    int A,B;
    int Da,Db;
    int Pa=0,Pb=0;
    int na=0,nb=0;
    scanf("%d %d %d %d",&A,&Da,&B,&Db);
    while(A){ 
        if(A%10==Da)
            na++;
        A /= 10;
    }
    while(B){
        if(B%10==Db)
            nb++;
        B /= 10;
    }
//    printf("%d %d\n",na,nb);
    while(na--){
        Pa = Pa*10+Da;
    }
    while(nb--){
        Pb = Pb*10+Db;
    }
//    printf("%d %d\n",Pa,Pb);
    printf("%d\n",Pa+Pb);
    return 0;
}
