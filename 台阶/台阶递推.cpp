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
cout << "����̨��������";
cin>>n;
cout<<step(n);
}
//ʱ�临�Ӷȵ�n=1,2ʱ�����Ӷ�ΪO��1��������n>2ʱ��ʱ�临�Ӷ�ΪO��n����
