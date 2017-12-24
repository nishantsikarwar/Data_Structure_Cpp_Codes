#include<bits/stdc++.h>
#include<sys/types.h>
#include<unistd.h>
#define FOR(i,x,y) for(int i = (x) ; i <= (y) ; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
#define endl "\n"
#define vlong long long int 
#define input 3
#define mod 1000000007

int cut_rod(int p[],int n){
	
	int max_price=0;

	if(n ==0)
		return max_price;
    
    else{
	FOR(i,1,n-1){
		max_price=max(max_price,p[i]+cut_rod(p,n-i));
	}
   return max_price;
}

}
int main() {

	//speed 

	int p[]={1,5,8,9,10,17,17,20,24,30};
	cout<< cut_rod(p,input)<<endl; 
         // cout<<"HELLO"<<endl;
}
