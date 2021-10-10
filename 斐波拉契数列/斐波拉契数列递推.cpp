#include "iostream"
using namespace std;
int fibonacciSeries(int n){ 
int sum = 0;
int a = 1; 
int b = 2;
if (n <1){  
	return 0;
}
for (int i = 3;i < n;i++){
	sum = a + b; 
	a = b; 
	b = sum;
} 
return sum;
}
int main (){
int n;
cout <<"请输入n:"; 
cin>>n;
cout<<fibonacciSeries(n);
return 0;
}
//时间复杂度当n=1,2时，复杂度为O（1），当你n>2时，时间复杂度为O（n）。
