#include <iostream>
#include "Sequence.h"
#include <string.h>
#include <fstream>
#include<string>
using namespace std;

Sequence::Sequence(string filename)
{  
	
	strcpy(file, filename.c_str());
}
int Sequence::length()
{
	int words = 0;
	int lines = 0;
	char a;
	ifstream name(file);
	while (!name.eof())
	{
		name >> a;
		if (a == '\n')
		{
			lines++;
		}
		words++;
	}
	cout << "The total is: " << words - lines - 1 << endl;
	return words - lines - 1;
}
int Sequence::numberOf(char base)
{
	int x = 0;
	char s;
	ifstream name(file);
	while (name >> s)
	{
		if (s == base)
		{
			x++;
		}
		else
		{
			continue;
		}
	}
	cout << base << " has: " << x << endl;
	return 0;
}
string Sequence::longestConsecutive()
{
	int MAX = 0;
	int X = 1;
	char a = '0';                        
	char b = '1';
	char c = '2';
	ifstream name(file);
	while (!name.eof())
	{
                name>>a;
		if (b == a)
		{
			X++;
		}
		else                                            
		{
			if (MAX<=X)
			{
				MAX = X;
				c = b;
			}
			X = 1;
			b = a;
		}
	}
	for (int z = 1; z <= MAX; z++)
	{
		cout << c;
	}
	cout << endl;
	return "\n";
}





