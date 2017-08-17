#include <bits/stdc++.h>
using namespace std;
void Bucketsort(float a[],int n)
{
	vector<float> s[n];
	int index=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		index=n*a[i];
		s[index].push_back(a[i]);

	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		sort(s[i].begin(),s[i].end());

	}
	index=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < s[i].size(); ++j)
		{
			/* code */
			a[index++]=s[i][j];
		}
	}
}
int main()
{
	int n;
	cin>>n;
	float a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin>>a[i];
	}
	Bucketsort(a,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<a[i]<<endl;
	}
}