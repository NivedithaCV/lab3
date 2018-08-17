//library
#include<iostream>
using namespace std;
int main() {
//Declaring variables
int a=2;
int b=4;
float c=3.5;
float d=5.6;
//Declaring variables for operations
int addint=a+b;
int subint=a-b;
float addfloat=c+d;
float subfloat=d-c;
int product=a*b;
float diviint=b/a;
float multfloat=c*d;
float divfloat=d/c;
int modulus=a%b;
//Displaying results
cout <<"a="<<a<<endl;
cout <<"b="<<b<<endl;
cout <<"c="<<c<<endl;
cout <<"d="<<d<<endl;
cout <<"a+b="<<addint<<endl;
cout <<"b-a="<<subint<<endl;
cout <<"c+d="<<addfloat<<endl;
cout <<"d-a="<<subfloat<<endl;
cout <<"a*b="<<product<<endl;
cout <<"b/a="<<diviint<<endl;
cout <<"c*d="<<multfloat<<endl;
cout <<"d/c="<<divfloat<<endl;
cout <<"modulus of "<<b<<" and "<<a<<" is "<<modulus<<endl;

return 0;
}


