/*The following code is for finding the GCD(Greatest common divisor) of two numbers. This is a very efficient method.
Time complexity  = O(max(a,b)*/

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
  
int main()
{
    int a, b;
  cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" = "<<gcd(a, b);
    return 0;
}
