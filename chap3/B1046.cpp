#include <stdio.h>
int main()
{
  int N;
  int asay,aguess,bsay,bguess,sum;
  int adrink=0,bdrink=0;
  
  
  scanf("%d",&N);
  while(N--){
    scanf("%d %d %d %d",&asay,&aguess,&bsay,&bguess);
    sum=asay+bsay;
    if((asay==sum)==(bsay==sum))
      continue;
    else if((asay==sum)&!(bsay==sum))
      bdrink++;
    else if(!(asay==sum)&(bsay==sum))
      adrink++;
  }
  printf("%d %d\n",adrink,bdrink);
  return 0;
}
