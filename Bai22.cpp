#include <bits/stdc++.h>
using namespace std;
int main()
{
  char s;cin>>s;
  if( (s >= 'A' && s <= 'Z') )
  {
    s += 32;
    cout<<s;
  }
  else if( s >= 'a' && s <= 'z')
  {
    cout<<s;
  }
  else
  {
    cout<<s;
  }
}
