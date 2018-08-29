#include <bits/stdc++.h>
using namespace std;
//#define for(i,x,y) for (int i = x; i <= y; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define input 10
#define vlong long long 
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);

void merge(int *a, int low, int mid, int high)
{
    int i = low, j = mid+1, k = low, aux[10];

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
            aux[k++] = a[i++];
        else
            aux[k++] = a[j++];
    }
    while (i <= mid)
        aux[k++] = a[i++];
     
    
    while (j <= high)
        aux[k++] = a[j++];
      
    
    for (i = low; i < k; i++)
        a[i] = aux[i];

}
void merge_sort(int *a, int low, int high)
{
	if(low >= high)
		return;
    
       int mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,mid,high);

}


void bottom_up_merge_sort(int *a)
{
  // int n = input;
  // int aux[input];

   for(int i = 1; i < input; i*=2)
       for (int j = 0; j < input-i; j += (2*i))
           merge(a, j, i+j-1, min(j+2*i-1,input-1));
   
}

int main()
{
	speed
	ONLINE_JUDGE
    int a[input];

    for (int i = 0; i < input; i++)
        scanf("%d\n",&a[i]);

//    merge_sort(a, 0, input-1);
  bottom_up_merge_sort(a);
    for (int i = 0; i < input; i++)
        printf("%d\n", a[i]);
    

    }

