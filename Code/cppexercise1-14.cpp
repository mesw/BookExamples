#include <iostream>

using namespace std;

class achterbahn
{
	public:
	long start, maximum, laufend, iterationen;
	achterbahn(long start);
	
};
 
achterbahn::achterbahn(long st)
{
	start = st;
	laufend = start;
	maximum = start;
	iterationen = 0;
	
	while(laufend >1)
	{	iterationen++;
		if(laufend%2==0)
		{
			laufend = laufend /2;
		}
		else
		{
			laufend = laufend *3 +1;
		}
		if(laufend > maximum)
		{
			maximum = laufend;
		}
	}
}

void printachterbahn(long inp)
{
	achterbahn mya(inp);
	cout << "Start: " << mya.start << endl;
	cout << "Maximum: " << mya.maximum << endl;
	cout << "Iterationen: " << mya.iterationen << endl;
}

long maxachterbahn(long inp)
{
	achterbahn mya(inp);
	return mya.maximum;
}

long iterachterbahn(long inp)
{
	achterbahn mya(inp);
	return mya.iterationen;
}

int main()
{

	printachterbahn(4096);
	printachterbahn(142587);
	printachterbahn(1501353);
	printachterbahn(11111);
	
	long wm = 0, tm, wmi;
	for(long i=1;i<32000;i++)
	{
		tm = maxachterbahn(long(i));
		if (tm>wm)
		{
			wm = tm;
			wmi = (long)i;
		}
	}
	cout << wm << endl << wmi << endl;
	
	long wi = 0, ti, wii;
	for(long i=1;i<32000000;i++)
	{
		ti = iterachterbahn(long(i));
		if (ti>wi)
		{
			wi = ti;
			wii = (long)i;
		}
	}
	cout << wi << endl << wii << endl;
	
	
	return 0;	
}
