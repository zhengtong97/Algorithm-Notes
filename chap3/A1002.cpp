//
//  A1002.cpp
//  
//
//  Created by 郑彤 on 2018/7/26.
//

#include <stdio.h>
int main()
{
    int K1;
    scanf("%d",&K1);
    int N1[K1];
    float a1[K1];
    for(int i=0;i<K1;i++)
        scanf("%d %f",&N1[i],&a1[i]);
    int K2;
    scanf("%d",&K2);
    int N2[K2];
    float a2[K2];
    for(int j=0;j<K2;j++)
        scanf("%d %f",&N2[j],&a2[j]);
    int N[K1+K2];
    float a[K1+K2];
    int i=0;
    int j=0;
    int k=0;
    while(i<K1&&j<K2)
    {
        if(N1[i]>N2[j]){
            N[k] = N1[i];
            a[k] = a1[i];
            i++;
            k++;
        }else if(N1[i]<N2[j]){
            N[k] = N2[j];
            a[k] = a2[j];
            j++;
            k++;
        }else if(N1[i]==N2[j]){
            if(a1[i]+a2[j])
            {
                N[k]=N1[i];
                a[k]=a1[i]+a2[j];
                k++;
            }
            i++;
            j++;
        }
        
    }
    if(j<K2)
    {
        for(;j<K2;k++,j++)
        {
            N[k]=N2[j];
            a[k]=a2[j];
        }
    }
    else if(i<K1)
    {
        for(;i<K1;k++,i++)
        {
            N[k]=N1[i];
            a[k]=a1[i];
        }
    }
    printf("%d",k);
    for(int i=0;i<k;i++)
        printf(" %d %.1f",N[i],a[i]);
    
    return 0;
}
