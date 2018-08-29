#include <bits/stdc++.h>
using namespace std;

#define range 100

void counting_sort(int a[],int r,int n){

    int s[r+1]={0},cs[n];

    for (int i = 0; i <n; ++i)
    	s[a[i]]+=1;

    for (int i = 1; i < r+1; ++i)
    	s[i]+=s[i-1];
  //  int j=0;

    for (int i = 0; i <n; ++i){

    	cs[s[a[i]]-1]=a[i];
    	s[a[i]]-=1;
    }

    for (int i = 0; i < n; ++i)
    	a[i]=cs[i];

}
int main(){
	int n;
	cin>>n;

	int a[n];

	for (int i = 0; i < n; ++i)
		cin>>a[i];

	counting_sort(a,range,n);

	for (int i = 0; i < n; ++i)
		cout <<a[i]<<endl;

	return 0;
}
