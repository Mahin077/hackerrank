#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   vector<int> v;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int digit;
       cin>>digit;
       v.push_back(digit);
   }

   sort(v.begin(),v.end());
   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }
}
