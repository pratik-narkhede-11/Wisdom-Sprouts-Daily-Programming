#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" array elements : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int target;
	cout<<"Enter the target sum : ";
	cin>>target;
	int count = 0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(arr[j] + arr[i] == target)
			{
				count++;
			}
		}
	}
	cout<<"Total number of pairs are : "<<count;
	return 0;
}
