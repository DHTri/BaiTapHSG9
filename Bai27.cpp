#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;cin>>n;
  long long nam = n/365;
  long long du = n%365;
  long long tuan = du/7;
  long long ngay = tuan%7;
  cout<<nam<<" "<<tuan<<" "<<ngay;
}
