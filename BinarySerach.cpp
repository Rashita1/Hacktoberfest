#include <iostream>
using namespace std;

BinarySearchIterative(int a, int b, int x, int *arr)
{
    while(a<b)
	{
		int mid = (a+b)/2;
		if(x==arr[mid])
		return mid;
		else if(x<arr[mid])
		b = mid-1;
		else a = mid+1;
	}	
	return -1;
}

BinarySearchRecursion(int a, int b, int x, int *arr)
{
    int mid = (a+b)/2;
    if(a>b)
	return -1;
	if(x==arr[mid])
	return mid;
	else if(x<arr[mid])
	return BinarySearchRecursion(a, mid-1, x, arr);
	else return BinarySearchRecursion(mid+1, b, x, arr);
}

int main()
{
	int arr[]={7, 9, 10, 15, 100, 189, 134, 199, 200, 897};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x= 199;
	int result=BinarySearchRecursion(0,n-1,x,arr);
	result==-1?cout<<"Not found"<<endl:cout<<"Found at index : "<<result<<endl;
	int res = BinarySearchIterative(0, n-1, x, arr);
	res==-1?cout<<"Not found"<<endl:cout<<"Found at index : "<<res<<endl;
	return 0;
}

