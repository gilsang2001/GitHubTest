#include "TestHeader.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "����� ������Ʈ�Դϴ�" << endl;

	int a = 2, b = 10;
	cout << a << "�� " << b << "������?: " << pow(a, b) << endl;

	zeronum(&a, &b);
	cout << "a�� b�� ���� ��: " << a << ", " << b << endl;
}