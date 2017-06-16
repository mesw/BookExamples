#include <iostream>
#include <math.h>
using namespace std;



long gcd(long a, long b)
{
	long remainder;
	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

long E_GCD(int a,int b)
{
   return b ? gcd(b,a%b):a;
}

int main()
{
    long a,b;
    cin >> a >> b;
    long numcomfac = 0;

    if( a>0 && b>0)
    {
        long bigger,smaller;
        if (a > b) 
        {
            smaller = b;
            bigger = a;
        }
        else 
        {
            smaller = a;
            bigger = b;
        }
        
          long N = E_GCD(smaller,bigger);
		  long ans = 0;
		  long sqt = (long)sqrt(N);
		  for(long i = 1 ; i <= sqt; i++){
			  if(N % i == 0){
				  ans += 2 ;
				  if(i == N/i) ans--;
		  numcomfac = ans;
      }
  }


    }
    cout << numcomfac << endl;
    return 0;
}
