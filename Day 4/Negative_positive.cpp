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
	int j = 0;
    for(int i = 0; i < n; i++) 
	{
        if(arr[i] < 0) 
		{
            if(i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
	cout<<"seperated array is : [ ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<" ]";
	return 0;
}
