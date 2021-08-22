#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        int A[4];
        memset(A,0,sizeof(A));
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' && t[i]=='0')
            {
                A[0]++;
            }
            else if(s[i]=='0' && t[i]=='1')
            {
                A[1]++;
            }
            else if(s[i]=='1' && t[i]=='0')
            {
                A[2]++;
            }
            else
            A[3]++;
        }

    int ans=min(A[3],A[0]);
    A[3]-=ans;
    A[0]-=ans;

    int temp=min(A[1],A[2]);
    ans+=temp;

    A[1]-=temp;
    A[2]-=temp;

    if(A[1]>0)
    {
        int t=min(A[3],A[1]);
        ans+=t;
        A[3]-=t;
        A[1]-=t;

        ans+=A[3]/2;
    }
    else{
        int t=min(A[3],A[2]);
            ans+=t;
            A[3]-=t;
            A[2]-=t;

            ans+=A[3]/2;
    }

    cout<<ans<<endl;

    }
}
