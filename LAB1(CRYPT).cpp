#include<locale>
#include <algorithm>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q4.h"
#include "Q5.h"
#include "Q6.h"

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	
	string msg="", sQ6="";
	string keyQ5 = "";
	int input = 0;

	cout << "Введите текст для шифования: ";
	cin>>msg;
	cout << endl;
	
	//Задание 1
	Q1 transpositionCh(msg);
	cout << "Перестановочный шифр"<<endl;
	cout << "Шифрование: ";
	transpositionCh.encrypt_Q1();
	cout << endl;
	cout << "Расшифровка: ";
	transpositionCh.decrypt_Q1();
	cout << endl<<endl;

	//Задание 2
	Q2 simpleSbCh(msg);
	cout << "Простой подстановочный шифр " << endl;
	cout << "Шифрование: ";
	simpleSbCh.encrypt_Q2();
	cout << endl;
	cout << "Расшифровка: ";
	simpleSbCh.decrypt_Q2();
	cout << endl << endl;

	//Задание 3
	Q3 monoSbCh(msg);
	cout << "Однозвучный подстановочный шифр" << endl;
	cout << "Шифрование: ";
	monoSbCh.encrypt_Q3();
	cout << endl;
	cout << "Расшифровка: ";
	monoSbCh.decrypt_Q3();
	cout << endl << endl;

	//Задание 4
	Q4 polygramSbCh(msg);
	cout << "Полиграммный подстановочный шифр" << endl;
	cout << "Шифрование: ";
	polygramSbCh.encrypt_Q4();
	cout << endl;
	cout << "Расшифровка: ";
	polygramSbCh.decrypt_Q4();
	cout << endl << endl;

	//Задание 5
	Q5 polyalfSbCh(msg);
	cout << "Полиалфавитный подстановочный шифр" << endl;
	cout << "Введите ключ: ";
	cin >> keyQ5;
	cout << "Шифрование: ";
	polyalfSbCh.encrypt_Q5(keyQ5);
	cout << endl;
	cout << "Расшифровка: ";
	polyalfSbCh.decrypt_Q5(keyQ5);
	cout << endl << endl;

	//Задание 6
	Q6 decryptCaesar;
	cout << "Задание №6" << endl;
	cout << "Расшифровка: " << endl;
	decryptCaesar.decrypt_Q6();
	cout << endl << endl;

	return 0;
}
