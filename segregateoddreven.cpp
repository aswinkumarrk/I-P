#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void print(int arr[],int n)
{
    vector<int>even;
    vector<int>odd;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        even.push_back(arr[i]);
        else
        odd.push_back(arr[i]);
    }
    for(int i=0;i<even.size();i++)
    cout<<even[i]<<" ";
    for(int i=0;i<odd.size();i++)
    cout<<odd[i]<<" ";
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	print(arr,n);
	cout << endl;
	
	}
	return 0;
}