#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 10
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
int binary_search(int a[], int q)
{
  int lt = 0, rt = input- 1;
  while(lt<rt)
  {
  	int mid = (lt+rt)/2;
  	if(a[mid]<q)
  		lt = mid+1;
  	else
  		rt = mid;

  }
  if(a[lt]==q)
  	return lt;
  return -1;
}

int advance_binary_search(int a[], int q)
{
  int bit, i = 0;
 for(bit = 0; (1<<bit)<input;bit+=1);
    
 	for(bit-=1; bit>=0; bit-=1)
 	{
 		if(i+(1<<bit)<input&&a[i+(1<<bit)]<q)
 			i+=(1<<bit);
 	}
 
 i+=1;
 if(a[i] == q)
 	return i;
 return -1;

}
int main (void)
{
	speed
	ONLINE_JUDGE

	int a[input];
	For(i,0,input-1)
		scanf("%d\n",&a[i]);
   printf("%d\n",advance_binary_search(a,5));
	//printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
