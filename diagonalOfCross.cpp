#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std; 

float diagonalOfCross(int S)
{
    float a = (float)sqrt(2*S);
    return a;
}
int main(){
	int S;
	cin>>S;
	cout<<fixed<<setprecision(1)<<diagonalOfCross(S);
}
