# include <bits/stdc++.h>
using namespace std;
#define eggs 2
#define floors 100
int eggdrop(int n,int k)
{
int ed[n+1][k+1];
for(int i=1;i<=n;i++)
 {
     ed[i][0]=0;
     ed[i][1]=1;

  }
  for(int i=1;i<=k;i++)
   ed[1][i]=i;
  int mampt;
  for(int i=2;i<=n;i++)
{
  for(int  j=2;j<=k;j++)
 {
    ed[i][j]= INT_MAX;
    for(int x=1;x<=j;x++)
      {
            mampt=1+max(ed[i-1][x-1],ed[i][j-x]);
            if(mampt<ed[i][j])
            ed[i][j]=mampt;
        }
 }

}
  return ed[n][k];
}
int main()
{
cout <<eggdrop(eggs,floors);
}
