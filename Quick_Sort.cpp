#include <bits/stdc++.h>
using namespace std;
void Quicksort(int a[],int left ,int right,int pivot)
{
int i=left;
int j=right;
int k=pivot+1;
while(i<j)
{
 if(a[i]>a[k])
 {
 if(a[j]<a[k])
 swap(*(a+i),*(a+j));
 else
  j++;
 }
 else
 i++;

}

}

void Partition (int a[],int left,int right)
{
	int pivot;
if(left<right)
{
pivot=(left+right)/2;
Quicksort(a,left,right,pivot);
Partition(a,left,pivot);
Partition(a,pivot+1,right);

}

}
int main ()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
Partition(a,0,n);
for(int i=0;i<n;i++)
cout <<a[i]<<endl;
}
