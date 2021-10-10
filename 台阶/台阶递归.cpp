#include "iostream"
using namespace std;
int step(int n) {

if (n<1){
	return 0;
}
if (n == 1 || n == 2){
	return n;
}
return step(n-1) + step(n-2);
}
int main (){
int n;
cout<<"ÇëÊäÈëÌ¨½×Êý:";
cin>>n;
cout<<step(n);
return 0;
}
