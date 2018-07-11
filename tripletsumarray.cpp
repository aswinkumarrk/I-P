#include<bits/stdc++.h>
using namespace std;
bool tripletsum(int A[],int sum,int n)
{
    int l,r,i;
    sort(A,A+n);
    
    for(int i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            if(A[i]+A[l]+A[r]==sum)
            {
               
                return true;
            }
            else if(A[i]+A[l]+A[r] < sum)
        {
            l++;
        }
        else
        {
            r--;
        }
        
        }
        
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum;
        cin>>sum;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        
        int result=tripletsum(A,sum,n);
        cout<<result<<"\n";
    }
    return 0;
}