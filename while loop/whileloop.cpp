#include<iostream>
using namespace std;

int main(){

    int n,i=1;

    cout<<"Enter a number ";
    cin>>n;
    while(i<=n)
       {
        cout<<i<<" ";
        i++;
       }
   
   cout<<endl <<endl;

    int j=1;
    cout<<"factors of you entered the number"<<endl;
   while(j<=n)
   {
    if(n%j==0)
      cout<<j<<" ";
    j++;  
   }
    
}