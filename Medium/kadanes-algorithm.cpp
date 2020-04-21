
//Question Link -------> https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int ans=INT_MIN;
	    int a=0;
	    for (int i:v){
	        a=a+i;
	        ans=max(ans,a);
	        a=max(a,0);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}