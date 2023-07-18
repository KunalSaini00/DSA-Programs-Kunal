#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int key)
{
	int s = 0, e = 0, mid;
	while(s<=e)
	{
		mid = (s + e)/2;
		if(a[mid]==key)
			return mid;
			
		else if(a[mid]<key)
			s = mid + 1;
			
		else
			e = mid - 1;
	}
	return -1;
	
}
int main()
{
	int key, n, a[n];
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	cout<<"Enter elements of array: \n";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter element to be searched: "<<endl;
	cin>>key;
	cout<<BinarySearch(a, n, key)<<endl;
	return 0;
}
