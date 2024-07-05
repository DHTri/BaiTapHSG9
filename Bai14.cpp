#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b;
  cin>>a>>b;
  long long gtnn = INT_MIN;
  for(int i=a;i>=1;i++)
  {
      if(i%b == 0 && i > gtnn)
          {
            gtnn = i;
            break;
          }
  }
  cout<<gtnn;
}
