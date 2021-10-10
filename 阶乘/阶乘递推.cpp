#include "iostream"
using namespace std;
int sum = 1;
int factorial(int n){ 
if (n < 1){
	return sum;
}
for (int i = 1;i <= n; i++){ 
	sum = sum * i;
} 
return sum;
}
int main (){
int n;
cout <<"请输入阶乘数:";
cin>>n; 
cout<<factorial(n);
}
//时间复杂度为O（n）
