#include <iostream>
using namespace std;
int missing(int a[],int n)
{
    int j;
    j=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=j)
        {
            return j;
        }
        j++;
    }
    //return -1;
}

int main() {
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
	int result=missing(a,n);
	cout<<result<<"\n";
	
	}
	return 0;
}