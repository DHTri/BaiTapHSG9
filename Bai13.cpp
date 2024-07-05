#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b;
  cin>>a>>b;
  long long gtln = INT_MIN;
  for(int i=1;i<=a;i++)
  {
      if(i%b == 0 && i > gtln)
          gtln = i;
  }
  cout<<gtln;
}
