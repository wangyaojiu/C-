/*
*works£ºP50 forÇ¶Ì×dowhile
*time:08/22
*Wanghao by:dev-cpp v5.11 
*/#include<iostream>
using namespace std;
int main(){
	int i=1;
	int a=0;
	for(;i<=5;i++){
		do{
			i++;
			a++;
		}
		while(i<3);
			i++;
	}
	cout<<a<<" , "<<i;

	return 0;
}
