#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<iostream>
#include<string>
using namespace std;

class Sequence
{
public:
	char file[10];
	Sequence(string filename);
	int length();
	int numberOf(char base);
	string longestConsecutive();
	string longestRepeated()
	{
		return 0;
	}
};
#endif 


