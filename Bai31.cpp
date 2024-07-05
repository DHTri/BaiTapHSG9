#include <bits/stdc++.h>
using namespace std;
int main()
{
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  long long tong = (((a+b) + c*2 + d*3)*1.00 / 7);
  if( tong >= 8)
    cout<<"GIOi";
  else if( tong < 8 && tong >= 6.5)
    cout<<"KHA";
  else if( tong < 6.5 && tong >= 5)
    cout<<"TRUNG BINH";
  else if( tong < 5)
    cout<<"YEU";
}
