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
	//�ֲ�������ÿ�α��룬a��b�ĵ�ַ����仯
	cout << "�ֲ�����a�ĵ�ַ��" << &local_a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << &local_b << endl;
	//ȫ�ֱ�����ÿ�α��룬a��b�ĵ�ַ������仯   
	cout << "ȫ�ֱ���a�ĵ�ַ��" << &global_a << endl;
	cout << "ȫ�ֱ���b�ĵ�ַ��" << &global_b << endl;
	//��̬������ÿ�α��룬a��b�ĵ�ַ������仯
	//ȫ�ֱ����;�̬��������һ��������棬�ֲ�����������һ���������
	 cout << "��̬����a�ĵ�ַ��" << &static_a << endl;
	 cout << "��̬����b�ĵ�ַ��" << &static_b << endl;
	 //�ַ���������
	 cout << "�ַ�������a�ĵ�ַ��" << &string_a<< endl;
	 cout << "�ַ�������a�ĵ�ַ��" << &string_a[0] << endl;
	 /*�ַ�������ͨ������ָ���ַ������ָ�룬�Լ�������Ա�������糤�ȵȣ���
	 ����ַ�������Ĵ�Сͨ������ַ�����ʵ�ʳ��ȴ�����ܵ����ַ��������
	 ��ַ���ַ�������ʼ��ַ��4���ֽڣ�32λϵͳ������ࣨ64λϵͳ��������ȡ��
	 ��ʵ�֡�*/
	 cout << "�ַ�������a[0]�ĵ�ַ��" << static_cast<void*>(&string_a[0]) << endl;
	 cout << "�ַ�������b�ĵ�ַ��" << &string_b << endl;
	 //const���εĳ���
	 cout << "const����ȫ�ֱ���a�ĵ�ַ��" << &const_global_a << endl;
	 cout << "const����ȫ�ֱ���b�ĵ�ַ��" << &const_global_b << endl;
	 cout << "const���ξֲ�����a�ĵ�ַ��" << &const_local_a << endl;
	 cout << "const���ξֲ�����a�ĵ�ַ��" << &const_local_b << endl;

}
