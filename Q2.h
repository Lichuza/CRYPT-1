#pragma once
#include <vector>
#include<string>
#include "iostream"
using namespace std;
class Q2
{
public:
	void encrypt_Q2();
	void decrypt_Q2();
	Q2(const string msg) { s = msg; }
private:
	string s;
	vector<char> alf1 = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_' };
	vector<char> alf2= { 'p','o','i','l','k','j','m','n','b','u','h','v','c','g','_','z','x','t','f','d','r','a','s','q','e','w', 'y' };
	vector<string> encrypt;
	vector<string> decrypt;
};

