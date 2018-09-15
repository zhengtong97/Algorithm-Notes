#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    int s=1,sum=0,tem;
    scanf("%lld",&n);
    sum += n%10;
    while(n/10){
        n /= 10;
        sum += n%10;
    }

//    int num,sum=0,tem;
//    while(scanf("%d",&num)){
//        sum += num;
//    }

    tem = sum;
    while(tem/10){
        tem /= 10;
        s++;
    }
    tem = 0;
    for(int i=1; i <= s; i++){
        
        tem = sum/pow(10,s-i);
        
        switch (tem) {
            case 0:
                printf("ling");
                break;
            case 1:
                printf("yi");
                break;
            case 2:
                printf("er");
                break;
            case 3:
                printf("san");
                break;
            case 4:
                printf("si");
                break;
            case 5:
                printf("wu");
                break;
            case 6:
                printf("liu");
                break;
            case 7:
                printf("qi");
                break;
            case 8:
                printf("ba");
                break;
            case 9:
                printf("jiu");
                break;
            default:
                break;
        }
        sum = sum - tem*pow(10,s-i);
        if(i < s)
            printf(" ");
    }
    return 0;

}
