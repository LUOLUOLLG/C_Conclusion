#include<iostream>
#include<math.h>
#include<limits>

using namespace std;
int main() {
	cout << "type:\t\t" << "************size*************" << endl;
	cout << "bool\t\t" << "��ռ�ֽ�����" << sizeof(bool);
	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
	cout << "char\t\t" << "��ռ�ֽ�����" << sizeof(char);
	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
	cout << "short\t\t" << "��ռ�ֽ�����" << sizeof(short);
	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
	cout << "int\t\t" << "��ռ�ֽ�����" << sizeof(int);
	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
	cout << "long\t\t" << "��ռ�ֽ�����" << sizeof(long);
	cout << "\t���ֵ��" << (numeric_limits < long > ::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
	cout << "float\t\t" << "��ռ�ֽ�����" << sizeof(float);
	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
	cout << "double\t\t" << "��ռ�ֽ�����" << sizeof(double);
	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;

	cout << "long int\t" << "��ռ�ֽ�����" << sizeof(long int);
	cout << "\t���ֵ��" << (numeric_limits<long int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long int>::min)() << endl;
	cout << "unsinged int\t" << "��ռ�ֽ�����" << sizeof(unsigned int);
	cout << "\t���ֵ��" << (numeric_limits<unsigned int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned int>::min)() << endl;
	cout << "long float\t" << "��ռ�ֽ�����" << sizeof(long float);
	cout << "\t���ֵ��" << (numeric_limits<long float>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long float>::min)() << endl;
	cout << "wchar_t\t\t" << "��ռ�ֽ�����" << sizeof(wchar_t);
	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
}