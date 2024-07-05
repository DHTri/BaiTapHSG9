#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n,m;
  cin>>m>>n;
  if((n>0 && m>0) && (m>=1 && m<=12))
  {
  if((n%400  == 0 || (n%4 == 0 && n%100 != 0)) && m == 2)
    cout<<"29";
  else if(m == 2)
    cout<<"28";
  else if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    cout<<"31";
  else if( m == 4 || m == 6 || m == 9 || m == 11)
    cout<<"30";
  }
  else  
    cout<<"INVALID";
}
