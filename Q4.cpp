#include "Q4.h"

void Q4::encrypt_Q4()
{
	int e1=0, e2=0, E, p=0;
	
	for (int i=0;i<(s.length()/2);i++) 
	{
		for (int j = 0; j < alf.size(); j++)
		{
			if (s[i+p] == alf[j])
			{
				e1 = j;
				break;
			}
		}

		p +=1;
		for (int j = 0; j < alf.size(); j++)

		{
			if (s[i+p] == alf[j])
			{
				e2 = j;
				break;
			}
		}
		E = k[e1][e2];
		encrypt.push_back(E);
		cout << encrypt[i];		
	}

}


void Q4::decrypt_Q4()
{
	string d1, d2;
	int p=0, i=0;

	skip:
	while(i<encrypt.size())
	{
		for (int i1 = 0; i1 < 27; i1++)
		{
			for (int j1 = 0; j1 < 27; j1++) 
			{
				if (encrypt[i] == k[i1][j1])
				{
					d1 = alf[i1];
					d2 = alf[j1];

					decrypt.push_back(d1);
					decrypt.push_back(d2);

					cout << decrypt[i+p];
					p++;
					cout<< decrypt[i+p];
					i++;
					goto skip;
				}
			}
		}

	}
}


Q4::Q4(const string msg)
{
	s = msg;

	for (int i = 0; i < 27; i++)
	{
		for (int j = 0; j < 27; j++) 
		{
			k[i][j] = j + (i*27);
		}
	}
}

