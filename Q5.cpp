#include "Q5.h"

void Q5::encrypt_Q5(string key)
{
	int H = 0;
	string E="";
	for (int i = 0; i < s.length(); i++)
	{
		string temp(key[i%key.length()],sizeof(key));
	    H = (hash<string>()(temp))%26;
		encrypt.push_back(((char)s[i]) + H);
		cout << encrypt[i];
	}
}

void Q5::decrypt_Q5(string key)
{
	int H = 0;
	string D = "";
	for (int i = 0; i < encrypt.size(); i++) 
	{
		string temp(key[i%key.length()], sizeof(key));
		H = (hash<string>()(temp)) % 26;
		D = ((char)encrypt[i]) - H;
		decrypt.push_back(D);
		cout << decrypt[i];
	}
}

