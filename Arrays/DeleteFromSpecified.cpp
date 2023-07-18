#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter size of array: "<<endl;
	int n, i, loc;
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: "<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter location to delete: "<<endl;
	cin>>loc;
	for(i=loc;i<n;i++)
		a[i]=a[i+1];
	cout<<"Array after deletion: "<<endl;
	for(i=0;i<n-1;i++)
		cout<<a[i]<<endl;
	return 0;
}
