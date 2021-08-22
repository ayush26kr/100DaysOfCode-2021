#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int num;
	    cin>>num;
	    
	    int ans=(num<1600)?3:((num>=2000)?1:2);
	    cout<<ans<<endl;
	}
	return 0;
}
