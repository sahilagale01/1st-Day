#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int n;
	cin>>n;
	while(i<=n)
	{
		int j=i;
		while(j<=i)
		{
			cout<<j;
			j=1+j++;
		}
		i=1+i++;
	}
	return 0;
}