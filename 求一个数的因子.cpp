/*
*Time:08/22
*Works:P49 2-8 求因子
*wanghao vc++
*/



#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"请输入一个数字"<<endl;
	cin>>n;
	cout<<"数字"<<n<<endl;
	cout<<"因子";

	for(int k=1;k<=n;k++)
		if(n%k==0)
			cout<<k<<" ";
		cout<<endl;

		return 0;
}

