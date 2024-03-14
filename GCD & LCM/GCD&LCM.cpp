//Basic-

#include <iostream>
using namespace std;

int main() {
  int n1, n2, hcf;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1) {
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }

  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }
  cout << "HCF = " << hcf;
}


//Euclid GCD-

int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

//or,

int gcd2(int a, int b)   //log(n)
{
   if(b==0) return a;
   return gcd2(b,a%b);
}


int lcm(int a, int b)
{
   return a*b/gcd(a,b);
}

//minimum fraction-> a/b= (a/gcd(a,b))/(b/gcd(a.b))
