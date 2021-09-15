#include<bits/stdc++.h> 
using namespace std; 
  
long int cat(int n){ 
    // Base case 
    if(n<=1) 
        return 1; 
  
    // cat(n)= sum of cat(i)*cat(n-i-1) 
    long int r = 0; 
    for (int i=0; i<n; i++) 
        r += cat(i)*cat(n-i-1); 
    return r; 
} 
  
int main(){
    int n=3;
    for (int i=0; i<n; i++) 
        cout<<cat(i)<< " "; 
    return 0; 
}
