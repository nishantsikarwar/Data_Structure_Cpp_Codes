#include<bits/stdc++.h>
using namespace std;

#define input 10


int main(){

	for (int i=0;i<input;++i){

		for (int j = 0; j <input ; ++j){

			int x;
			x=min(min(i,j),min(input-i-1,input-j-1));

			if(i<=j)
			cout<<input*input+1-((input-2*x)*(input-2*x)-(i-x)-(j-x))<<" ";
			else
				cout<<input*input+1-((input-2*x-2)*(input-2*x-2)+(i-x)+(j-x))<<"  ";

	
		}
		cout<<endl;
	       
	}
	
}