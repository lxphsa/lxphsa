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
cout <<"������׳���:";
cin>>n; 
cout<<factorial(n);
}
//ʱ�临�Ӷ�ΪO��n��
