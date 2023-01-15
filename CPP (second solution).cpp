#include<iostream>
#include<cmath>
using namespace std; 

bool IsPrime(unsigned n) {
  if (n <= 1) return false;
  if ((n % 2 == 0) or (n % 3 == 0) or (n % 5 == 0)) return false;

  for (auto j=3; j<=sqrt(n); j++) {
    if (n%j==0) {
      return false;
    }
  }      
  return true;
}
 
int main() 
{ 
  unsigned n = 13, prime=6;
	while (prime != 10001)
		if(IsPrime(++n)) prime++;
	cout<<n<<endl;
  return 0; 
}
