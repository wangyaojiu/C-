
//Time:2020/08/20
//Works:判断是否是闰年
//dev-cpp v5.1.1
 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
int year;  
bool isleapyear;     
cout<<"Enter the year: ";    //输入年份 
cin>>year;                   
isleapyear=(((year%4==0)&&(year%400!=0))||(year%400==0)); //判断是否是闰年  能被4整除且不能被400整除或者能被400整除 
if(isleapyear){
	cout<<year <<" is a leap year"<<endl; 
}
else{

cout<<year <<" isn't a leap year"<<endl; 
}
system("pause");
return 0;    //int型 程序结束的标志 void可以没有 
}

//思考 循环一次就结束了 如何使得重复判断 
