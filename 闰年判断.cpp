
//Time:2020/08/20
//Works:�ж��Ƿ�������
//dev-cpp v5.1.1
 
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
int year;  
bool isleapyear;     
cout<<"Enter the year: ";    //������� 
cin>>year;                   
isleapyear=(((year%4==0)&&(year%400!=0))||(year%400==0)); //�ж��Ƿ�������  �ܱ�4�����Ҳ��ܱ�400���������ܱ�400���� 
if(isleapyear){
	cout<<year <<" is a leap year"<<endl; 
}
else{

cout<<year <<" isn't a leap year"<<endl; 
}
system("pause");
return 0;    //int�� ��������ı�־ void����û�� 
}

//˼�� ѭ��һ�ξͽ����� ���ʹ���ظ��ж� 
