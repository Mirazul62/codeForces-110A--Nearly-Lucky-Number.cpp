#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,m,sum,count=0;
    char a[10];
    cin>>a;
    m=strlen(a);
   // cout<<m<<endl;
    //int num=atoi(a);

     for(i=0;i<m;i++)
     {
         if(a[i]=='4' || a[i]=='7')
         {
             count++;
         }
     }
    // cout<<count<<endl;
     if(count==4 || count==7)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
}
