#ifndef HUGEINT_H
#define HUGEINT_H
#include <iostream>
#include <string>

using namespace std;

class HugeInt 
{
	friend ostream &operator << (ostream &, HugeInt &);
	friend istream &operator >> (istream &, HugeInt &);

public:
	HugeInt();
	HugeInt(int);
	HugeInt(const string &);
	~HugeInt();

	const HugeInt operator+ (const HugeInt &);
	const HugeInt operator- (const HugeInt &);
	const HugeInt &operator= (const HugeInt &);

};
#endif
