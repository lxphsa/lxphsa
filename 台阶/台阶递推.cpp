#include "iostream"
using namespace std;
int step(int n){
if (n<1){
	return 0;
}
if (n == 1 || n == 2){
	return n;
}
int first = 1;
int second = 2;
int sum = 0;
for (int i = 3;i <= n;i++ ){ 
	sum  = first + second;
	first = second;
	second = sum;	
}
return sum;
}
int main (){
int n;
cout << "输入台阶数：：";
cin>>n;
cout<<step(n);
}
//时间复杂度当n=1,2时，复杂度为O（1），当你n>2时，时间复杂度为O（n）。
