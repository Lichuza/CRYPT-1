#pragma once
#include<string>
#include<vector>
#include<iostream>
using namespace std;

/*Полиграммные шифры замены - это шифры, в которых одна шифрозамена 
соответствует сразу нескольким символам исходного текста*/

class Q4
{
public:
	void encrypt_Q4();
	void decrypt_Q4();
	Q4(const string msg);
private:
	string s;
	vector<char> alf = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_' };
	vector<int> encrypt;
	vector<string> decrypt;
	int k[26][26];
};

