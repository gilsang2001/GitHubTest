#pragma once

int plusnum(int x, int y)
{
	return x + y;
}

int pow(int x, int y)
{
	if (y == 1)
		return x;
	else
		return x * pow(x, y-1);
}

void zeronum(int* a, int* b)
{
	*a = 0;
	*b = 0;
}