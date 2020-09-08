#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
 int main(){
     int x;
     srand(time(0));
	 int number=rand()%100+1;
	 cout<<"猜一下这个数字"<<endl;
	 cin>>x;
	  	do{
	  		if(x!=number){
	  			if(x<number){
	  				cout<<"您猜小了"<<endl;
	  				
				  }else{
				  	cout<<"您猜大了"<<endl; 
				  }
			  }
			  else{
			  	cout<<"您猜对了"<<endl;break;
			  }
			  cin>>x;
		  }while(1);
		  return 0;
	 }
	 
