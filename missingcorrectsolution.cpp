#include<iostream>
using namespace std;
int miss(int a[], int n)
{
	int i, total;
	total = (n+1)*(n+2)/2; 
	for ( i = 0; i< n; i++)
	total = total - a[i];
	return total;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int a[n],i;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int result=miss(a,n-1);
    cout<<result<<"\n";
    }
    return 0;
    
}

