#pragma once
#include<string>
#include <iostream>
#include <vector>
using namespace std;
class Q5
{
public:
	void encrypt_Q5(string key);
	void decrypt_Q5(string key);
	Q5(const string msg) { s = msg; }

private:
	string s;
	vector<char>encrypt;
	vector<string>decrypt;
};

