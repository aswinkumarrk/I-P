#include<bits/stdc++.h>
using namespace std;
int printunion(int A[],int B[],int n,int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(A[i]<B[j])
    {
        cout<<A[i++]<<" ";
        //i++;
    }
        else if(B[j]<A[i])
    {
        cout<<B[j++]<<" ";
        //j++;
    }
    else
        cout<<B[j++]<<" ";
        //j++;
        i++;
    }
    while(i<n)
        cout<<A[i++]<<" ";
    while(j<m)
        cout<<B[j++]<<" ";
    
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        
        cin>>n>>m;
        int A[n],B[m];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int j=0;j<m;j++)
        {
            cin>>B[j];
        }
        sort(A,A+n);
        sort(B,B+m);
        int result=printunion(A,B,n,m);
        cout<<result<<"\n";
        //cout<<printunion(A,B,n,m)<<"\n";
    }
    return 0;
}