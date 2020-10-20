#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin >> n;
	string strings[n];
	for(int i=0; i<n; i++)
	{
		cin >> strings[i];
	}
	cin >> q;
	string queries[q];
	for(int i=0; i<q; i++)
	{
		cin >> queries[i];
	}
	for(int i=0; i<q; i++)
	{
		int count = 0; 
		for(int j=0; j<n; j++)
		{
			if(queries[i] == strings[j])
			{
				count++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}
