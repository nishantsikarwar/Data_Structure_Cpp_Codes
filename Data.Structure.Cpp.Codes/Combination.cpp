#include <bits/stdc++.h>
using namespace std;

#define m 1000000007

long long combination(int n, int r){

    vector< vector<long long> > C(2,vector<long long> (r+1,0));

    for (int i=0; i<=n; i++){

        for (int k=0; k<=min(i,r); k++)
            if (k==0 || k==i)
                C[i&1][k] = 1;
            else
                C[i&1][k] = (C[(i-1)&1][k-1] + C[(i-1)&1][k])%m;
    }

    return C[n&1][r];

}
int main(){

cout<<combination(10,5)<<endl;

return 0;

}
