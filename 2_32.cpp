#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
 int main(){
     int x;
     srand(time(0));
	 int number=rand()%100+1;
	 cout<<"��һ���������"<<endl;
	 cin>>x;
	  	do{
	  		if(x!=number){
	  			if(x<number){
	  				cout<<"����С��"<<endl;
	  				
				  }else{
				  	cout<<"���´���"<<endl; 
				  }
			  }
			  else{
			  	cout<<"���¶���"<<endl;break;
			  }
			  cin>>x;
		  }while(1);
		  return 0;
	 }
	 
