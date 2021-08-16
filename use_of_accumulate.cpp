#include<iostream>
#include<numeric>
using namespace std;
int myfunc(int a,int b){
return a*b;
}

int main()
{
    int sum=1;
    int arr[]={2,6,3,4};
    cout<<"Sum of elements is: "<<accumulate(arr,arr+4,sum);
    cout<<endl;

    cout<<"Product of all elements is :"<<accumulate(arr,arr+4,sum,myfunc);

    
    
}