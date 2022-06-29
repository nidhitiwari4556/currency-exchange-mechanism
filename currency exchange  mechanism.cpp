#include <iostream>
#include<string.h>
#include <ctime>
using namespace std;
int main()
{
                                                                                                 
double amount,amount2;
string cur2,cur;


cout<<"Which currency do you want to convert\n";

cout<<"the currency are:USD, EURO, PKR, INR, AED: ";

cin>>cur;
  
cout<<"Enter your amount you want to convert: ";
  
cin>>amount;

cout<<"Which currency do you want to convert to\n";

cout<<"The currency are:USD, EURO, PKR, INR, AED: ";

cin>>cur2;

  if(cur=="usd")
{

    
  if(cur2=="euro"){
  amount2=amount*.85;
  cout<<amount<<" USD is equal to "<<amount2<<" EURO";
  }
  if(cur2=="pkr"){
  amount2=amount*170.40;
  cout<<amount<<" USD is equal to "<<amount2<<" PKR";
  }
if(cur2=="aed"){
  amount2=amount*3.67;
  cout<<amount<<" USD is equal to "<<amount2<<" AED";
  }
  if(cur2=="inr"){
  amount2=amount*73.86;
  cout<<amount<<" USD is equal to "<<amount2<<" INR";
  }
}
  if(cur=="euro"){


    
  if(cur2=="usd"){
  amount2=amount*1.17;
  cout<<amount<<" EURO is equal to "<<amount2<<" USD";
}
  if(cur2=="pkr"){
  amount2=amount*197.94;
  cout<<amount<<" EURO is equal to "<<amount2<<" PKR";
  }
if(cur2=="aed"){
  amount2=amount*4.30;
  cout<<amount<<" EURO is equal to "<<amount2<<" AED";
  }
  if(cur2=="inr"){
  amount2=amount*86.43;
  cout<<amount<<" EURO is equal to "<<amount2<<" INR";
  }
}
  if(cur=="aed"){


    
  if(cur2=="usd"){
  amount2=amount*.27;
  cout<<amount<<" AED is equal to "<<amount2<<" USD";
}
  if(cur2=="pkr"){
  amount2=amount*46.04;
  cout<<amount<<" AED is equal to "<<amount2<<" PKR";
  }
if(cur2=="euro"){
  amount2=amount*.23;
  cout<<amount<<" AED is equal to "<<amount2<<" EURO";
  }
  if(cur2=="inr"){
  amount2=amount*20.10;
  cout<<amount<<" AED is equal to "<<amount2<<" INR";
  }
}
  if(cur=="pkr"){

    
  if(cur2=="usd"){
  amount2=amount*.0059;
  cout<<amount<<" PKR is equal to "<<amount2<<" USD";
}
  if(cur2=="aed"){
  amount2=amount*.022;
  cout<<amount<<" PKR is equal to "<<amount2<<" AED";
  }
if(cur2=="euro"){
  amount2=amount*.0051;
  cout<<amount<<" PKR is equal to "<<amount2<<" EURO";
  }
  if(cur2=="inr"){
  amount2=amount*.44;
  cout<<amount<<" PKR is equal to "<<amount2<<" INR";
  }   
}
  if(cur=="inr")
{

    
  if(cur2=="usd"){
  amount2=amount*.014;
  cout<<amount<<" INR is equal to "<<amount2<<" USD";
}
  if(cur2=="aed"){
  amount2=amount*.050;
  cout<<amount<<" INR is equal to "<<amount2<<" AED";
  }
if(cur2=="euro"){
  amount2=amount*.012;
  cout<<amount<<" INR is equal to "<<amount2<<" EURO";
  }
  if(cur2=="pkr"){
  amount2=amount*2.30;
  cout<<amount<<" INR is equal to "<<amount2<<" PKR";
  }
}
}

