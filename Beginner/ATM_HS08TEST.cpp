#include<bits/stdc++.h>
using namespace std;
int main(){
	  int a;
	  float b;
	  cin>>a>>b;
    if(a%5==0 && (a+.50)<=b){
	     b=b-(a+.50);
	     cout<<fixed<<setprecision(2)<<b<<'\n';
       return 0;
     }
     else{
	      cout<<fixed<<setprecision(2)<<b<<'\n';
      }
}
