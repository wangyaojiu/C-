/*
*Time:08/22
*Works:P49 2-8 ������
*wanghao vc++
*/



#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"������һ������"<<endl;
	cin>>n;
	cout<<"����"<<n<<endl;
	cout<<"����";

	for(int k=1;k<=n;k++)
		if(n%k==0)
			cout<<k<<" ";
		cout<<endl;

		return 0;
}

