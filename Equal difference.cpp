#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int A[n];
	    int h=0;
	    
	    map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	        m[A[i]]++;
	        h=max(h,m[A[i]]);
	    }
	    if(n<=2)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    if(h==1)
	    {
	        cout<<n-2<<endl;
	        continue;
	    }
	    cout<<n-h<<endl;
	}
	return 0;
}
