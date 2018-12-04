#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	while(!(cin >> n).eof())
	{
		for(i = 0;i< n / 2;i++)
		{
			for(j = 0;j < n / 2 - i;++j)
			{
				cout << " ";
			}
			if(i!=0)
			{
				cout << ("*");
				for(j = 0;j < 2*i-1;++j)
				{
					cout << " ";
				}
			}
			cout << "*" << endl;
		}
		for(;i >= 0;i--)
		{
			for(j = 0;j < n/2-i;++j)
			{
				cout << " ";
			}
			if(i != 0)
			{
				cout << "*";
				for(j = 0;j < 2*i-1;++j)
				{
					cout << " ";
				}
			}
			cout << "*" << endl;
		}
		cout << endl;
	}
	return 0;
}
