#include<bits/stdc++.h>
#include<sys/types.h>
#include<unistd.h>
#define FOR(i,x,y) for(vlong i = (x) ; i <= (y) ; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
#define endl "\n"
#define vlong long long int 
#define input 25
#define mod 1000000007

int m[input][input],s[input-1][input];


void matrix_chain_order(int n, int scalar_multiplications) 
{

 int j=0,temp=0;

FOR(i,0,n-1)
  m[i][i] = 0;

  FOR(l,1,n-1) 
  {
    
    FOR(i,0,n-l-1) 
    {

       
       j = i+l-1;
       m[i][j] = INT_MAX;

       FOR(k,i,j-1) 
       {

       	  temp = m[i][k] + m[k+1][j] + scalar_multiplications;
   
           if(temp < m[i][j])
           {
             m[i][j] = temp ;
              s[i][j] = k ;
           }
       }
    }

  }
//return 

}
// goal is to find minimum no of scalar multiplication required for the multiplications of the matrices. 

int main() {

	speed

    
}
