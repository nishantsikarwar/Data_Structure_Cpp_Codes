#include <bits/stdc++.h>
 
#define FOR(i,x,y) for(vlong i = (x) ; i <= (y) ; ++i)
 
using namespace std;
typedef long long vlong;
 
vlong res[1000010];
vlong phi[1000010];
 
void precal( int n ) {
  
    FOR(i,1,n) phi[i] = i;

    FOR(i,2,n){

        if ( phi[i] == i ) {
            for ( int j = i; j <= n; j += i ) {
                phi[j] /= i;
                phi[j] *= i - 1;
            }
        }
    }

    FOR(i,1,n){
        for ( int j = i; j <= n; j += i ) {
            res[j] += ( i * phi[i] );
        }
    }
}
 
int main () {
      
   ios_base::sync_with_stdio(false);
   cin.tie(0);cout.tie(0);

    precal(1000000);
 
    int t;
    cin>>t;
 
    while (t--) {
        vlong n;
        cin>>n;
        vlong ans = res[n] + 1;
        ans *= n;
        ans /= 2;
 
        cout<<ans<<"\n";
    }
 
    return 0;
}

