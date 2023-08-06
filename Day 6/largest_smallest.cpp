#include<bits/stdc++.h>
using namespace std;

int main()
{
	int max = INT_MIN, max_ind, min = INT_MAX, min_ind;
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" array elements : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i] < min)
		{
			min = arr[i];
			min_ind = i;
		}
		if(arr[i] > max)
		{
			max = arr[i];
			max_ind = i;
		}
	}
	cout<<"Samllest : "<<arr[min_ind];
	cout<<"\nLargest : "<<arr[max_ind];
	return 0;
}
