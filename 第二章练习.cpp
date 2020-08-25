/* 
time:08/23
vc++
Works:第二章习题

  
2-12
*/ 
#include<iostream>
using namespace std;

int main(){
	int n;
	for(n=100;n<=200,n=n+2;)  {  //注意此时计数长度为2 所以不可以再n++; 
	
		
	cout<<n<<endl;
}	return 0;
	}
/* 
int n=100;
while(n<=200);
n=n+2;



int n=100;
do{
	n=n+2;
}
while(n<=200);  //记得分号
cout<<"n="<<n<<endl;
return 0;
*/

//2-14
/* 
#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"请输入x"<<endl;
	cin>>x;
	cout<<"请输入y"<<endl;
	cin>>y;

	if(x>y){
		x=y;
	}
	else{
		y=x;
	}
cout<<"x的值是"<<x<<endl;
cout<<"y的值是"<<y<<endl;
return 0;
}*/ 
