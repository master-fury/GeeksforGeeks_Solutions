//Question link -->  https://practice.geeksforgeeks.org/problems/second-largest/0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        cout<<v[1]<<endl;
    }

	return 0;
}
