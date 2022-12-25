#include<iostream>

 using namespace std;

 class Error

 {

 int eage;;

 float eincome;

 string estr;

 public:

 Error(int a)

 {

 eage=a;

 }

 Error(float i)

 {

 eincome=i;

 }

 Error(string s)

 {

 estr=s;

 }

 void err_age()

 {

 cout<<"Invalid age : "<<eage<<endl;

 }

 void err_income()

 {

 cout<<"Invalid income : "<<eincome<<endl;

 }

 void err_str()

 {

 cout<<"Invalid Vallue: "<<estr<<endl;

 }

 };

 int main()

 {

 int age;

 float income;

 string city,vehicle;

 try

 {

 cout<<"Enter Age (between 18 to 55):\n";

 cin>>age;

 if(age<18||age>55)

 {

 throw Error(age);

 }

 else

 {

 cout<<"Age is : "<<age<<endl;

 }

 }

 catch(Error e)

 {

 e.err_age();

 }

 try

 {

 cout<<"Enter monthly income in INR (between 50000 to 100000) :\n";

 cin>>income;

 if(income<50000||income>100000)

 {

 throw Error(income);

 }

 else

 {

 cout<<"Monthly income in INR is :"<<income<<endl;

 }

 }

 catch(Error e)

 {

 e.err_income();

 }

 try

 {

 cout<<"Enter City (pune or mumbai or bangalore or chennai):\n";

 cin>>city;

 if((city != "pune") || (city != "mumbai") || (city != "bangalore") || (city != "chennai"))

 {

 throw Error(city);

 }

 else

 {

 cout<<"City is :"<<city<<endl;

 }

 }

 catch(Error e)

 {

 cout<<"\nCity not allowed; ";

 e.err_str();

 }

 try

 {

 cout<<"Enter type of vehicle (2-wheeler/4-wheeler):\n";

 cin>>vehicle;

 if(vehicle != "4-wheeler")

 {

 throw Error(vehicle);

 }

 else

 {

 cout<<"Vehicle is : "<<vehicle<<endl;

 }

 }

 catch(Error e)

 {

 cout<<"\nInvalid Vehicle;";

 e.err_str();

 }

 return 0;

 }
