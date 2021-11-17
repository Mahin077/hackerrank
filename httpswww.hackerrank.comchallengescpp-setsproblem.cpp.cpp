#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   set<int> s;
   int query;
   cin>>query;
   for(int i=0;i<query;i++)
   {
       int type=0,val=0;
       cin>>type>>val;
       if(type==1)
       {
           s.insert(val);
       }
       else if(type==2)
       {
           s.erase(val);
       }
       else if(type==3)
       {
           set<int>::iterator itr=s.find(val);
           if(itr==s.end())
            cout<<"No"<<endl;
           else
            cout<<"Yes"<<endl;
       }
   }
}
