#pragma once
#include <iostream>
#include<string>
#include <vector>
#include <ctime>
using namespace std;

class Q3
{
public:
	void encrypt_Q3();
	void decrypt_Q3();
	Q3(const string msg) { s = msg; }
private:
	string s;
	vector<char> alf = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','_' };
	string alf_key[27] = { "?0","!Z","<^","Uu","E@","e2","o9","fF","k$","|+","Xa","C/","V~","_i","IG","[*","->","*q","T`","&3","76","4,","Y8","#P","RW",")w","Ln"};
	vector<char> encrypt;
	vector<char> decrypt;
};

