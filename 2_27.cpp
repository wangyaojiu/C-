#include<iostream>
using namespace std;

int main(){
int i;
cout<<"请输入您的分数"<<i<<endl;
cin>>i;
if(i<=100&&i>=90)
cout<<"优"<<endl;

if(i<90&&i>=80)
cout<<"良"<<endl;
 
if(i<80&&i>=60)
cout<<"中"<<endl;

if(i<60&&i>=0)
cout<<"差"<<endl;

}
