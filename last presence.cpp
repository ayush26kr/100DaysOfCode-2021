#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//function
int getLastIndex(vector<int>arr,int x)
{
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<int>::iterator lower,upper;
    upper=upper_bound(arr.begin(),arr.end(),x);
    int upr=(upper-arr.begin());

    if(upr>=n || upr<=0)
    return -1;
    else if(upr>0)
    return upr;
    
}
int main(){
    int n;
    vector<int>arr;
    cin>>n;//count of elements
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"elements are: ";
    for(auto i:arr)
    cout<<i<<" ";
    cout<<"\nEnter element to be searched ";
    int x;
    cin>>x;
    /*required to find last index of x if there else -1*/
    int result=getLastIndex(arr,x);
    if(result>=0)
    cout<<"Last presence of "<<x<<" IN SORTED ORDER is at: "<<result;
    else
    cout<<x<<" not present";
}
