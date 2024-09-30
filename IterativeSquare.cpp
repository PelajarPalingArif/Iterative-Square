#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	cout<<"Enter 3 + multiple of 4";
	cin>>a;
	int s = 0;
	int holderI = 0;
	int holderS = 0;
	for (int i = 0; i < a / 2 + 1; i++)
	{
		cout << "*";

		if (i % 2 != 0)
		{

			for (int j = 0; j < s; j++)
			{
				cout << " *";
			}
			for (int j = 0; j < a - (4 * s) - 2; j++)
			{
				cout << " ";
			}

			for (int j = 0; j < s; j++)
			{
				cout << "* ";
			}
			s++;
		}

		else
		{
			for (int j = 0; j < s; j++)
			{
				cout << " *";
			}
			for (int j = 0; j < a - (4 * s) - 2; j++)
			{
				cout << "*";
			}

			for (int j = 0; j < s; j++)
			{
				cout << "* ";
			}
		}

		cout << "*";
		cout << "\t\t\ti : "<< i <<",s : " << s << "\n";

		holderI = i - 1;
	}
//	cout<<endl;
	s--;
	for (int i = holderI; i >= 0; i--)
	{
		cout << "*";

		if (i % 2 != 0)
		{

			for (int j = 0; j < s; j++)
			{
				cout << " *";
			}
			for (int j = 0; j < a - (4 * s) - 2; j++)
			{
				cout << " ";
			}

			for (int j = 0; j < s; j++)
			{
				cout << "* ";
			}
			
		}

		else
		{
			
			for (int j = 0; j < s; j++)
			{
				cout << " *";
			}
			for (int j = 0; j < a - (4 * s) - 2; j++)
			{
				cout << "*";
			}

			for (int j = 0; j < s; j++)
			{
				cout << "* ";
			}
			s--;
		}

		cout << "*";
		cout << "\t\t\ti : "<< i <<",s : " << s << "\n";
	}


}
