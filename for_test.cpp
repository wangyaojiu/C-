//Time:08/22
//Works:P49 for
//By：VC++
//Autor:wanghao


#include<iostream>
using namespace std;
int main(){
	int i=1,n=0;      //在for语句之前给初始变量赋值
	for(;i<=100;i++){ //省略初始语句
 
      n=n+i;
}
cout<<"n="<<n<<endl;
return 0;
}

int main(){
	int n=0；            
	for(i=0;i<=100;i++){ //在for语句之前给初始变量赋值

 
      n=n+i;
}
cout<<"n="<<n<<endl;


int main(){
	int n=0,i=1;            //在for语句之前给初始变量赋值
	for(sum=0;i<=100;i++){ //变量值与循环体无关
 
      n=n+i;
}
cout<<"n="<<n<<endl;