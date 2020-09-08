#include<iostream>
using namespace std;


	  
	 int main(){
	int day;
	cout<<"现在下雨吗: 请输入1或者2"<<day;
	cin>>day;
	switch(day){
		    case 1:
			cout<<"现在在下雨"<<endl;
			break;
			case 2:
			cout<<"现在没有在下雨"<<endl;
			break;
			
			default:
				cout<<"现在正在下雨吗"<<endl;
				break;
			
	}
	return 0;
} 
/* 
 int main(){
	int day;
	cout<<"现在下雨吗: 请输入Y或者N"<<day;
	cin>>day;
	if(day==Y){
		    
			cout<<"现在在下雨"<<endl;
		
	}
	if(day==N){
			cout<<"现在没有在下雨"<<endl;
		
			
			
			
	}
	return 0;
} 

*/
