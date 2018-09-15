//
//  A1042.cpp
//  
//
//  Created by 郑彤 on 2018/7/21.
//

#include <stdio.h>
#define CARDNUM 54
int main()
{
    int cardold[CARDNUM+1]={0};
    int cardnew[CARDNUM+1]={0};
    int p[CARDNUM+1]={0};
    for(int i=1;i<=CARDNUM;i++)
        cardold[i]=i;
    int N;
    scanf("%d",&N);
    for(int i=1;i<=CARDNUM;i++)
        scanf("%d",p+i);
    while(N--)
    {
        int i=1;
        while(i<=CARDNUM)
        {
            cardnew[p[i]]=cardold[i];
            i++;
        }
        for(int j=1;j<=CARDNUM;j++)
            cardold[j] = cardnew[j];
    }
    for(int i=1;i<=CARDNUM;i++)
    {
        
//         根据序号打印出花色
        int color,number;
        color = (cardnew[i]-1)/13;
        switch (color) {
            case 0:
                printf("S");
                break;
            case 1:
                printf("H");
                break;
            case 2:
                printf("C");
                break;
            case 3:
                printf("D");
                break;
            default:
                printf("J");
                break;
        }
        number = cardnew[i]%13;
        if(!number&&color!=4) number=13;
        printf("%d",number);
        if(i<CARDNUM)
            printf(" ");
    }
    return 0;
}
