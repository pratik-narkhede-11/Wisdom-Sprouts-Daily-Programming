#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements in an array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter the sorted elements in the array :";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"Enter the element of whose ocurrence is to be count : ";
	cin>>x;
	int count = 0;
	for(int i=0; i<n; i++)
	{
		if(x==arr[i])
			count++;
		else if(x < arr[i])
			break;                     // Since it is sorted array;
	}
	cout<<x<<" has occured "<<count<<" times in the given array.";
}
