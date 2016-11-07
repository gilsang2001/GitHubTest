#include "TestHeader.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "깃허브 프로젝트입니다" << endl;

	int a = 2, b = 10;
	cout << a << "의 " << b << "제곱은?: " << pow(a, b) << endl;

	zeronum(&a, &b);
	cout << "a와 b의 현재 값: " << a << ", " << b << endl;
}