// Library
#include<iostream>
using namespace std;
int main() {
	//prints hello
	cout <<"Hello"<< endl;
	/*print I am c++ program*/
	cout <<"I am C++ program"<<endl;
//Declaring variables of all types
int a,b;
int result;
float c;
double var;
bool boolvar = 1==2;
char word;
//defining and printing of output of all basic data type
a=5;
cout <<"a="<<a<<endl;
b=2;
a=a+1;
result=a;
cout <<"b="<<b<<endl;
 cout <<"result="<<result<<endl;
c=5.1;
 cout <<"float="<<c<<endl;
var=5.879775;
 cout <<"double="<<var<<endl;
cout <<"bool 1=2"<<boolvar<<endl;
word ='p';
cout <<"char="<<word<<endl; 
//Displaying sizes of data type
cout <<"size of int="<<sizeof(a)<<endl;
cout <<"size of float="<<sizeof(c)<<endl;
cout <<"sizeb of double="<<sizeof(var)<<endl;
cout <<"size of char="<<sizeof(word)<<endl;
cout <<"size of boolean="<<sizeof(boolvar)<<endl;
return 0; 
}

