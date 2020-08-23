/*
TIME:08/22
WORKS:p46 2-8
AUTOR@ WANGHAO
BY:VC++
*/


#include<iostream>
using namespace std;

int main(){

	int n,right_num,newnum;
	cout<<"plz enter the number:";
	cin>>n;
    cout<<"The num in reverse order is:";

		do{
			right_num=n%10;
			cout<<right_num;
			n/=10;    //是n取余而不是newnum
		}
		while(right_num!=0);
		cout<<endl;
		return 0;
}