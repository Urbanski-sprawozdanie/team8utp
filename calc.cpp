#include <iostream>
using namespace std;
extern double power(double x);
int main(void){
	double x;
	cout<<"Podaj liczbe:";
	cin>>x;
	cout<<endl<<"Oto jej kwadrat:"<<power(x);
	return 0;
}

