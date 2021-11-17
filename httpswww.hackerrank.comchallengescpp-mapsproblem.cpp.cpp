#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
   map<string,int>m;
   int query;
   cin>>query;

   for(int i=0;i<query;i++)
   {
       int type;
       cin>>type;
       if(type==1)
       {
           string name;
           int marks;
           cin>>name>>marks;
           map<string,int>::iterator itr = m.find(name);
           if(itr!=m.end())
           {
               m[name] = m[name] + marks;
           }else{
                m.insert(make_pair(name,marks));
           }
       }
       else if(type==2)
       {
           string name;
           cin>>name;
           m.erase(name);
       }
       else if(type==3)
       {
           string name;
           cin>>name;
           cout<<m[name]<<endl;
       }
   }
}
