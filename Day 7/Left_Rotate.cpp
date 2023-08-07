#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, N;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" array elements : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the value of N : ";
	cin>>N;
	int temp[n];
	int k = 0;
	for (int i = N; i < n; i++) {
		temp[k] = arr[i];
		k++;
	}
	for (int i = 0; i < N; i++) {
		temp[k] = arr[i];
		k++;
	}
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
	cout<<"Array after "<<N<<" times left rotations : [ ";
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout<<"]";
	return 0;
}

