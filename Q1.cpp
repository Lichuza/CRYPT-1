#include "Q1.h"

void Q1::display(vector < vector <string> > v)
{
	for_each(v.begin(), v.end(), [](std::vector<string>& temp)
	{
		for_each(temp.begin(), temp.end(), [](string i)
		{
			cout << left << i;
		});
	});
}

void Q1::encrypt_Q1()
{
	l = s.size();
	string t;
	for (int i = 0; i < l / 4; i++)
	{
		vector<string>temp;
		for (j = 0; j < 4; j++)
		{
			t = s[k[j] + c];
			temp.push_back(t);			
		}
		encrypt.push_back(temp);
		c += j;
	}
	display(encrypt);
}


void Q1::decrypt_Q1()
{
	
	string t;
	
	for (int i = 0; i < l/4; i++)
	{
		vector<string>temp;
		for (j = 0; j < 4; j++)
		{
			t= encrypt[i][k1[j]];
			temp.push_back(t);
		}
		decrypt.push_back(temp);
	}
	display(decrypt);
}
