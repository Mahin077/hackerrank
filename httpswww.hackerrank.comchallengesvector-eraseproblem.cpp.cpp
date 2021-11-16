#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   vector<int> v;
   int n,ers1,ers2,ers3;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int digit;
       cin>>digit;
       v.push_back(digit);
   }

    cin>>ers1>>ers2>>ers3;

   v.erase(v.begin()+ers1-1);

   v.erase(v.begin()+ers2-1,v.begin()+ers3-1);
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }
}
