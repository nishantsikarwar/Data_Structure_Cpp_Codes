#include <bits/stdc++.h>
using namespace std;
 #define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){    
    int t,n,i;
    int S;
    
    speed
    
    cin>>t;
    
    for(int tc=1;tc<=t;tc++){
        cin>>n;
        
        S=0;
        
        for(i=1;i*i<n;i++)
            if(n%i==0)
                S+=i+n/i;
        
        if(i*i==n) S+=i;
        S-=n;
        
        cout<<S<<endl;
    }   
    
    return 0;
}
