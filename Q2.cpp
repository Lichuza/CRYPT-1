#include "Q2.h"

void Q2::encrypt_Q2()
{
	string t;
	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j < alf1.size(); j++)
		{
			if (s[i] == alf1[j])
			{
				t = alf2[j];
				encrypt.push_back(t);
				cout<< encrypt[i];
				break;
			}
		}	
	}
}

void Q2::decrypt_Q2()
{
	string t;
	for (int i = 0; i < encrypt.size(); i++)
	{
		for (int j = 0; j < alf1.size(); j++)
		{
			t=alf2[j];
			if (encrypt[i] == t)
			{
				t = alf1[j];
				decrypt.push_back(t);
				cout << decrypt[i];
				break;
			}
		}
	}
}

