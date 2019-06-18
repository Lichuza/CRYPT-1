#include"Q3.h"

void Q3::encrypt_Q3()
{
	string E;
	int k=0;
	srand(time(NULL));
	for (int i = 0; i <s.length();i++) 
	{
		for (int j = 0; j <27; j++) 
		{
			if (s[i] == alf[j])
			{
				E = alf_key[j];
				encrypt.push_back(E[rand() % 2 ]);
				cout << encrypt[i];
				break;
			}
		}	
	}
}

void Q3::decrypt_Q3()
{
	char D;
	string temp;
	for (int i = 0; i < encrypt.size(); i++)
	{
		for (int j = 0; j < 27; j++)
		{
			temp = alf_key[j];
			if (encrypt[i] == temp[0] || encrypt[i] == temp[1])
			{
				D = alf[j];
				decrypt.push_back(D);
				cout << decrypt[i];
				break;
			}
		}	    
	}	
}


