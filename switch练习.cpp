//Time£º08/21
//works£ºP43 Àý2-4
//autor£ºWanghao
//dev-cpp v5.11
//Time:08/21

#include<iostream>
using namespace std;

int main(){
	int day;
	cout<<"please enter the day:"<<day;
	cin>>day;
	switch(day){
		    case 1:
			cout<<"monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wenesdey"<<endl;
			break;
			case 4:
			cout<<"Thursday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
				cout<<"Dont have the day"<<endl;
				break;
			
	}
	return 0;
} 
