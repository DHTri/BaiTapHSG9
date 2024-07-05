#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,c;
  cin>>a>>b>>c;
  if( a == 0)
  {
    cout<<"NO";
    return 0;
  }
  long long delta = b*b - 4*a*c;
  if( delta < 0)
  {
    cout<<"NO";
  }
  else if( delta == 0)
  {
    double x = -(1.00*b/(2*a));
    cout<<fixed<<setprecision(2)<<x;
  }
  else if( delta > 0)
  {
    double x1 = ((-b + 1.00*sqrt(delta)) / (2*a));
    double x2 = ((-b - 1.00*sqrt(delta)) / (2*a));
    cout<<fixed<<setprecision(2)<<x1<<" "<<fixed<<setprecision(2)<<x2;
  }
}
