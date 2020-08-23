/*
Time:08/22
Works:1-10求合 P46 例2-7
by:VC++
*/
#include<iostream>
using namespace std;

int main(){
	int i=0,sum=0;
	do{
		sum+=i;
		i++;
	}
	 while(i<=10);   //注意条件是<=10
	 cout<<"the result is:"<<sum<<endl;
	 return 0; 
	 
} 

/*
int main(){
	int i=0,sum=0;
	while (i<=10){
		sum+=i;
		i++;
	}
	cout<<"sum= "<<sum<<endl;
	return 0;
}
//也是求1-10的和  
*/