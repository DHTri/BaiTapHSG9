#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  if( n >0)
  {
  if(n%400  == 0 || (n%4 == 0 && n%100 != 0))
    cout<<"yes";
  else 
    cout<<"no";
  }
  else  
    cout<<"INVALID";
}
