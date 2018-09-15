//
//  B1018.cpp
//  
//
//  Created by 郑彤 on 2018/7/21.
//

#include <cstdio>

int main()
{
    char a,b;
    int N,t;
    int win_a=0,win_b=0;
    int na_C=0,na_J=0,na_B=0;
    int nb_C=0,nb_J=0,nb_B=0;
    scanf("%d",&N);
    t=N;
    getchar();
    while(t--)
    {
        a=getchar();
        getchar();
        b=getchar();
        getchar();
        if(a=='C'&&b=='J')
        {
            win_a++;
            na_C++;
        }
        if(a=='J'&&b=='B')
        {
              win_a++;
              na_J++;
        }
        if(a=='B'&&b=='C')
        {
            win_a++;
            na_B++;
        }
        if(b=='C'&&a=='J')
        {
             win_b++;
             nb_C++;
         }
        if(b=='J'&&a=='B')
        {
             win_b++;
             nb_J++;
        }
        if(b=='B'&&a=='C')
        {
            win_b++;
            nb_B++;
        }
    }
    printf("%d %d %d\n",win_a,N-win_a-win_b,win_b);
    printf("%d %d %d\n",win_b,N-win_a-win_b,win_a);
    
    if(na_B>=na_C&&na_B>=na_J) a='B';
    else if(na_C>=na_B&&na_C>=na_J) a='C';
    else if(na_J>=na_C&&na_J>=na_B) a='J';

    if(nb_B>=nb_C&&nb_B>=nb_J) b='B';
    else if(nb_C>=nb_B&&nb_C>=nb_J) b='C';
    else if(nb_J>=nb_C&&nb_J>=nb_B) b='J';
    printf("%c %c\n",a,b);
    
    return 0;
    
    
}









