//Time:2020/08/20 
//works:cout��ӡ��ϰ
//by:dec-cpp v5.11
//autor:wanghao 


#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,k,f;
    for (i=1;i<=4;i++){
        for (j=1;j<=30;j++)
            cout<<" ";
        for (k=1;k<=8-2*i;k++)
            cout<<" ";
        for (f=1;f<=2*i;f++)
            cout<<'*';
        cout<<endl;
    }
    for(i=1;i<=3;i++){
        for (j=1;j<=30;j++)
            cout<<" ";
        for (f=1;f<=7-2*i;f++)
            cout<<'*';
        cout<<endl;
    }
    system("pause");
    return 0;
}
