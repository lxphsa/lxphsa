#include "iostream"
#include "string.h"
using namespace std;

int palindromeString (char a[],int front,int ending) { 

for (; front <= strlen(a)/2 ; front++){ 
	if (a[front] == a[ending]){ 
		ending--;
	}else{ 
		return 0;
	}
	if (front == ending|| front == ending - 1){ 
		return 1;
	}
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
//时间复杂度为O（n）。
