//Time:2020/08/20
//works:����� union��ϰ 
//by:dev-cpp v5.11
//autor:wanghao 


#include<iostream>
using namespace std;
//��ͬ���ڴ��ַ
union myun 
{
    struct { int x; int y; int z; }u; 
    int k; 
}a; 
int main() 
{ 
    a.u.x =4;
    a.u.y =5; 
    a.u.z =6; 
    a.k = 0; //���ǵ���һ��int�ռ�ֵ
    printf("%d %d %d %d\n",a.u.x,a.u.y,a.u.z,a.k);
    system("pause");
    return 0;
}
