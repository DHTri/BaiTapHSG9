#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,c;
  cin>>a>>b>>c;
  if( a+b > c && b+c > a && a+c > b)
  {
    if( a == b && b == c)
      cout<<"1";
    else if( a == b || b == c || c == a)
      cout<<"2";
    else if( a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) 
      cout<<"3";
    else 
      cout<<"4";
  }
  else
    cout<<"INVALID";
}
