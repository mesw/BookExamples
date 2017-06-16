#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>
using namespace std;


long char2long(char chr)
{
	long ziff = 0;
	switch(chr)
	{
		case '0':
			ziff = 0;
			break;
		case '1':
			ziff = 1;
			break;
		case '2':
			ziff = 2;
			break;
		case '3':
			ziff = 3;
			break;
		case '4':
			ziff = 4;
			break;
		case '5':
			ziff = 5;
			break;
		case '6':
			ziff = 6;
			break;
		case '7':
			ziff = 7;
			break;
		case '8':
			ziff = 8;
			break;
		case '9':
			ziff = 9;
			break;	
	}
	return ziff;
}

long quersumme(string str)
{
	long summe = 0;
	
	for(size_t i = 0;i < str.length(); i++)
	{
		summe += char2long(str[i]);
	}
	
	return summe;
}


long string2long(string str)
{
	if(str.length()>0)
	{
		long res = 0;
		for(size_t i = 0; i< str.length();i++)
		{
			
			res += char2long(str[i])*pow(10,str.length()-i-1);
		}
		return res;
	}
	else
	{
		throw invalid_argument("String empty");
	}
	
}

int main()
{
	string inp;
	cin >> inp;
	
	cout << "length " << inp.length() << endl;
	
	cout << "long " << stol(inp) << endl;
	
	cout << "long func " << string2long(inp) << endl;
	
	cout << "quersumme " << quersumme(inp) << endl;
	
	return 0;
}


