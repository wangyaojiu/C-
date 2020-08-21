//Time:08/21
//works:P45 while语句 
//autor：wanghao 
//by:dev-cpp 5.11 vc++

#include<iostream>
using namespace std;

int main(){
	int i=0,sum=0;
	while (i<=10){
		sum+=i;
		i++;
	}
	cout<<"sum= "<<sum<<endl;
	return 0;
}
//注意 不知为何在dev-cpp里输出结果是sun=0 但在vc中并没有此情况