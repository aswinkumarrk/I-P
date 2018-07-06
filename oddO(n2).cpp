
#include<iostream>
using namespace std;
int getOddOccurrence(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		
		int count = 0;
		
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count % 2 != 0)
			return a[i];
	}
	return -1;
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
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	   }
		

		
		cout << getOddOccurrence(a, n)<<"\n";
}
		return 0;
	}
