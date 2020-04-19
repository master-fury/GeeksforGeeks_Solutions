//Question link -->  https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d;
	    cin>>n>>d;
	    vector <int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    reverse(v.begin(),v.begin()+d);
	    reverse(v.begin()+d,v.end());
	    reverse(v.begin(),v.end());
	    for(int i=0;i<n;i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
