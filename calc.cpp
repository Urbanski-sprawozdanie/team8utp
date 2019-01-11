#include <iostream>
#include "power.h"
#include "add.h"
#include "sub.h"
#include "mult.h"
using namespace std;
int main(void){
	double x,y;
	cout<<"Podaj liczbe:";
	cin>>x;
	cout<<"Podaj druga liczbe:";
	cin>>y;
	cout<<endl<<"Dodawanie x i y ="<<add(x,y);
	cout<<endl<<"Odejmowanie x i y="<<sub(x,y);
	cout<<endl<<"Mnozenie x i y="<<mult(x,y);
	cout<<endl<<"Kwadrat x, kwadrat y="<<power(x)<<" , "<<power(y);
	return 0;
}

