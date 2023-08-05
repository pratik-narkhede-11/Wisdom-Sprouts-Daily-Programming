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
	int sum, flag = 0;
	int start, end;
	for(int i=0; i<n-1; i++)
	{
		sum = arr[i];
		start = i;
		flag = 0;
		for(int j=i+1; j<n; j++)
		{
			sum = sum + arr[j];
			if(sum == target)
			{
				end = j;
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
	cout<<"Required Subarray is : [ ";
	for(int i=start; i<=end; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	return 0;
}
