#include "iostream"
using namespace std;
int sum = 1;
int factorial(int n){ 
if (n < 1){
	return sum;
}
sum = sum * n;
return factorial(n-1);
}
int main (){

int n;
cout <<"ÇëÊäÈë½×³ËÊý:";
cin>>n; 
cout<<factorial(n);
}
