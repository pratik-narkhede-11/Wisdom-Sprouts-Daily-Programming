#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"\n-TO FIND THE Kth LARGEST ELEMENT IN AN ARRAY-\n";
	int n;
	cout<<"Enter the number of elements in the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" array elements : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int k;
	cout<<"Enter the value of 'K' : ";
	cin>>k;
	if(k<=n)
	{
		int flag = 0;
		int temp;
		for(int i=0; i<n; i++)
		{
			flag = 0;
			for(int j=0; j<n-i-1; j++)
			{
				if(arr[j+1]>arr[j])
				{
					temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
					flag = 1;
				}
			}
			if(flag == 0)
				break;
		}
		cout<<k<<"th Largest element in array is : "<<arr[k-1];
	}
	else{
		cout<<"Oops! K exceeds the array size";
	}
}
