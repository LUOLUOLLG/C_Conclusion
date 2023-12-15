#include<iostream>
#include<math.h>
#include<limits>

using namespace std;
int main() {
	cout << "type:\t\t" << "************size*************" << endl;
	cout << "bool\t\t" << "所占字节数：" << sizeof(bool);
	cout << "\t最大值：" << (numeric_limits<bool>::max)();
	cout << "\t最小值：" << (numeric_limits<bool>::min)() << endl;
	cout << "char\t\t" << "所占字节数：" << sizeof(char);
	cout << "\t最大值：" << (numeric_limits<char>::max)();
	cout << "\t最小值：" << (numeric_limits<char>::min)() << endl;
	cout << "short\t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "int\t\t" << "所占字节数：" << sizeof(int);
	cout << "\t最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "long\t\t" << "所占字节数：" << sizeof(long);
	cout << "\t最大值：" << (numeric_limits < long > ::max)();
	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
	cout << "float\t\t" << "所占字节数：" << sizeof(float);
	cout << "\t最大值：" << (numeric_limits<float>::max)();
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
	cout << "double\t\t" << "所占字节数：" << sizeof(double);
	cout << "\t最大值：" << (numeric_limits<double>::max)();
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;

	cout << "long int\t" << "所占字节数：" << sizeof(long int);
	cout << "\t最大值：" << (numeric_limits<long int>::max)();
	cout << "\t最小值：" << (numeric_limits<long int>::min)() << endl;
	cout << "unsinged int\t" << "所占字节数：" << sizeof(unsigned int);
	cout << "\t最大值：" << (numeric_limits<unsigned int>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned int>::min)() << endl;
	cout << "long float\t" << "所占字节数：" << sizeof(long float);
	cout << "\t最大值：" << (numeric_limits<long float>::max)();
	cout << "\t最小值：" << (numeric_limits<long float>::min)() << endl;
	cout << "wchar_t\t\t" << "所占字节数：" << sizeof(wchar_t);
	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
	cout << "\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
}