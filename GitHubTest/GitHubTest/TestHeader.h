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

int minusnum(int x, int y)
{
	return x - y;
}