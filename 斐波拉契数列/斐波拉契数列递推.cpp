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
cout <<"������n:"; 
cin>>n;
cout<<fibonacciSeries(n);
return 0;
}
//ʱ�临�Ӷȵ�n=1,2ʱ�����Ӷ�ΪO��1��������n>2ʱ��ʱ�临�Ӷ�ΪO��n����
