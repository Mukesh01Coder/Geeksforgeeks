#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    int a[n];
	   
	    for(int i=0; i<n; i++) cin>>a[i];
	    reverse(a,a+k);
	    reverse(a+k,a+n);
	    reverse(a,a+n);
	    for(int i=0; i<n; i++) cout<<a[i]<<" ";
	    
	    cout<<endl;
	}
	return 0;
}
