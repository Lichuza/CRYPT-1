#include "Q6.h"

void Q6::decrypt_Q6()
{	
	for (int key = 0; key < 26; key++)
	{
		string temp;
		for (int i = 0; i < s.length(); i++)
		{

			if (s[i] > 'a' && s[i] <= 'z')
			{
				temp += ((char)('a' + (s[i] - 'a' + key + 26) % 26));
			}
			else if (s[i] > 'A' && s[i] <= 'Z')
			{
				temp += ((char)('A' + (s[i] - 'A' + key + 26) % 26));
			}
			else
			{
				temp += s[i];
			}
		}

		decrypt.push_back(temp);
		cout << decrypt[key];
		cout << endl;
	}

}

		
