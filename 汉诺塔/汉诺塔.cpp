#include "iostream"
using namespace std;
int i = 0;
void move(int n,char N,char M){ 

cout <<"��"<<++i<<"���ƶ�:��"<<n<<"��Բ�̴�"<<N<<"�ƶ���"<<M<<endl;

}

void hanoi (int n,char a,char b,char c){ 

if (n == 1){ 
	move(1,a,c);
}else {
	hanoi(n-1,a,c,b); 
	move(n,a,c);	
	hanoi(n-1,b,a,c);
}
}

int main (){

char a ='a';
char b = 'b';
char c ='c';
int n = 0;
cout<<"������Բ����:";
cin>>n; 
hanoi(n,a,b,c);
}
