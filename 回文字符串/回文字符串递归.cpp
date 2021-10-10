#include "iostream"
#include "string.h"
using namespace std;
int palindromeString (char a[],int front,int ending) { 
if (a[front] != a [ending]){  
	return 0;
}
if (front == ending|| front == ending - 1){ 
	return 1;
}
if (a[front] == a [ending]){ 
	return palindromeString(a,front + 1,ending - 1);
}
}
int main (){

int t;  
char a[100];
cin>>a;
t = palindromeString(a,0,strlen(a)-1);
if (t == 1){
	cout <<a<<"是回文";
}else {
	cout <<a<<"不是回文";
}
}
