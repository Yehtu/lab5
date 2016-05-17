#include <iostream>
#include "HugeInt.h"

using namespace std;

ostream &operator << (ostream &out, HugeInt &num)
{
	int nonZeroPos=0;
	while(num.ptr[nonZeroPos] == 0)
		++nonZeroPos;
	for(int j = nonZeroPos ; j < num.size ; ++j)
		out << num.ptr[j];
	return out;
}
istream &operator >> (istream &in, HugeInt &num)
{
	string tmp("0000000000000000000000000"), a;
	in >> a;
	int now = num.size-1;
	for(int i = a.size()-1 ; i >= 0 ; --i)
		tmp[--now] = a[i];
	for(int i = num.size-1 ; i>=0 ; --i)
	{
		num.ptr[i] = tmp[i] - '0';
	}
	return in;
}

