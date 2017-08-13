#include <bits/stdc++.h>
using namespace std;
int Maxheapify (int a[],int i,int n)
{
int l=2*i+1,Mx=i;
 if(l<=n-1&&a[l]>a[i])
 Mx=l;
  if(l+1<=n-1&&a[l+1]>a[Mx])
  Mx=l+1;
  if(Mx!=i)
 {
 swap(*(a+i),*(a+Mx));
 Maxheapify(a,Mx,n);
 }

}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=n/2-1;i>=0;i--)
Maxheapify(a,i,n);
for(int i=n-1;i>=0;i--)
{
  swap(*(a),*(a+i));
  Maxheapify(a,0,i);
}
for(int i=0;i<n;i++)
cout <<a[i]<<endl;
}
