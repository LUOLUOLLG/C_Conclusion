#include<iostream>
#include<string>
using namespace std;

int global_a = 10;
int global_b = 10;
static int static_a = 10;
static int static_b = 10;

string string_a = "hello world";
string string_b = "hello";

const int const_global_a = 10;
const int const_global_b = 10;

void Global_Local_Static_String() {
	int local_a = 10;
	int local_b = 10;
	int p;
	const int const_local_a = 10;
	const int const_local_b = 10;
	//局部变量：每次编译，a、b的地址都会变化
	cout << "局部变量a的地址：" << &local_a << endl;
	cout << "局部变量b的地址：" << &local_b << endl;
	//全局变量：每次编译，a、b的地址都不会变化   
	cout << "全局变量a的地址：" << &global_a << endl;
	cout << "全局变量b的地址：" << &global_b << endl;
	//静态变量：每次编译，a、b的地址都不会变化
	//全局变量和静态变量待在一块分区里面，局部变量待在另一块分区里面
	 cout << "静态变量a的地址：" << &static_a << endl;
	 cout << "静态变量b的地址：" << &static_b << endl;
	 //字符串常量：
	 cout << "字符串常量a的地址：" << &string_a<< endl;
	 cout << "字符串常量a的地址：" << &string_a[0] << endl;
	 /*字符串对象通常包含指向字符数组的指针，以及其他成员变量（如长度等），
	 因此字符串对象的大小通常会比字符串的实际长度大。这可能导致字符串对象的
	 地址比字符串的起始地址高4个字节（32位系统）或更多（64位系统），具体取决
	 于实现。*/
	 cout << "字符串常量a[0]的地址：" << static_cast<void*>(&string_a[0]) << endl;
	 cout << "字符串常量b的地址：" << &string_b << endl;
	 //const修饰的常量
	 cout << "const修饰全局变量a的地址：" << &const_global_a << endl;
	 cout << "const修饰全局变量b的地址：" << &const_global_b << endl;
	 cout << "const修饰局部变量a的地址：" << &const_local_a << endl;
	 cout << "const修饰局部变量a的地址：" << &const_local_b << endl;

}
