#pragma once
#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

class Q1
{
public:

	void encrypt_Q1();
	void decrypt_Q1();
	void display(vector < vector <string> > v);
	Q1(const string msg) { s = msg; }
private:
	int c = 0, j = 0, l;
	string s;
	vector < vector <string> > encrypt;
	vector < vector <string> > decrypt;

	int k[4] = { 3,1,0,2 };
	int k1[4] = { 2,1,3,0 };
};

