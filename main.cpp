#include<iostream>
#include"Sequence.h"
#include<string>
#include<time.h>

using namespace std;

int main()
{
	clock_t start_time = clock();
	{
		string q;
		cin >> q;
		Sequence abc(q);
		abc.length();
		abc.numberOf('A');
		abc.numberOf('G');
		abc.numberOf('C');
		abc.numberOf('T');
		abc.longestConsecutive();
	}
	clock_t end_time = clock();
	cout << "Time is: " << static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
}
