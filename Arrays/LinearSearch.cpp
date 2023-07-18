#include <iostream>
using namespace std;
int LinearSearch(int a[], int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
			return i; 
	}
	cout<<"Not Found"<<endl;
	return -1;	
}
int main()
{
	int n, a[n], key;
	cout<<"Enter size of array: "<<endl;
	cin>>n;
	cout<<"Enter elements of array: "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Element to be searched: "<<endl;
	cin>>key;
	cout<<LinearSearch(a, n, key)<<endl;
	return 0;	
}
