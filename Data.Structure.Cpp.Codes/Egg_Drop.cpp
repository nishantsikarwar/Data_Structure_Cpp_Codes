# include <bits/stdc++.h>
using namespace std;

#define eggs 2
#define floors 100

int egg_drop(int eggs,int floors){

int look_up[eggs+1][floors+1];

  for(int i=1;i<=eggs;i++){

     look_up[i][0]=0;
     look_up[i][1]=1;

 }

  for(int i=1;i<=floors;i++)
   look_up[1][i]=i;

  int min_attempt;

  for(int i=2;i<=eggs;i++){

  for(int  j=2;j<=floors;j++){

    look_up[i][j]= INT_MAX;

    for(int x=1;x<=j;x++){
      
            min_attempt=1+max(look_up[i-1][x-1],look_up[i][j-x]);
            if(min_attempt<look_up[i][j])
            look_up[i][j]=min_attempt;
      }
  }

}

  return ed[eggs][floors];

}
int main(){

  cout <<egg_drop(eggs,floors);

}
