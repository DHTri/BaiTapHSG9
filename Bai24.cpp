#include <bits/stdc++.h>
using namespace std;
int main()
{
  char s;cin>>s;
  if( (s >= 'a' && s <= 'z') )
  {
    if( s != 'z')
      {
        s += 1;
        cout<<s;
      }
    else 
      {
        cout<<"a";
      }
  }
  else if( s >= 'A' && s <= 'Z')
  {
    s += 32;
    if( s != 'z')
      {
        s += 1;
        cout<<s;
      }
    else 
      {
        cout<<"a";
      }
  }
  else
  {
    cout<<s;
  }
}
