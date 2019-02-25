#include<bits/stdc++.h>
using namespace std;
int tertiary_search(int l,int r,int a[],int element)
{
	if(r>=l)
	{
		int mid = l + (r-1)/3;
		int mid1= r-(r-1)/3;
		if(a[mid] == element)
		{
			return(mid);
		}
		if(a[mid1] == element)
		{
			return(mid1);
		}
		if(element<a[mid])
		{
			return tertiary_search(l,mid-1,a,element);			
		}
		else if(element>a[mid1])
		{
			return tertiary_search(mid1+1,r,a,element);
		}
		else{
			return tertiary_search(mid+1,mid1-1,a,element);
		}
	}
	return(-1);
}

int main()
{
	cout<<"enter the  number of the element you want in the array";
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int element;
	cout<<"enter the element you wanna to search";
	cin>>element;
	int index = tertiary_search(0,n-1,a,element);
	cout<<"the element found at the index of " << index;
}
