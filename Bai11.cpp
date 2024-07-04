#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;cin>>n;
  double tong = 0;
  for(int i=1;i<=n;i++)
  {
    if(i%2 == 0) tong+=i;
    else tong -= i;
  }
  cout<<tong;
}
