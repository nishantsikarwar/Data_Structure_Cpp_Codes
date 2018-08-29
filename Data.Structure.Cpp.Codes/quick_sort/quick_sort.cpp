#include <bits/stdc++.h>
using namespace std;
#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 10
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

// void std_in()
// {
// 	int i;
//    scanf("%d\n",&i);
// }
// void swap(int *a, int *b)
// {

// 	*a = *a + *b;
// 	*b = *a - *b;
// 	*a = *a - *b;
// }

int partition(int *a , int low, int high)
{
  int i = low, j = high+1;
  while(true)
  {

  	while(a[++i] < a[low])
  		if(i == high)
  			break;

  		while(a[low] < a[--j])
  			if(j == low)
  				break;

  			if(i >= j)
  				break;
  			swap(a[i],a[j]);

  }
  swap(a[low],a[j]);
  return j;
}


void quick_sort(int *a, int low, int high)
{


	if(high<=low)
		return;
	int j = partition(a,low,high);
	quick_sort(a,low,j-1);
	quick_sort(a,j+1,high);
}


int  selection(int *a, int k)
{
      int low = 0;
      int high = input-1;
   while(high<low)
{

 int j = partition(a,low,high);

   if(j<k)
   	low = j+1;

   else if(j>k)
   		high = j-1;
   	
   	else
   		return a[k];
}
 return a[k];

}

void print_array(int *a)
{
	for(i,0,input-1)
	printf("%d\n",a[i]);
}
int main (void)
{
	// speed
	// ONLINE_JUDGE
	// int a[input];
	// for(i,0,input-1)
 //      scanf("%d\n",&a[i]);
 //  quick_sort(a,0,input-1);
 //  print_array(a);
 //  printf("%d\n",selection(a,2));
	//printf("%s\n", "HELLO_WORLD!!!!");
	return 0;
}
