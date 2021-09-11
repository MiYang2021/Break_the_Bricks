#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
void main()
{
	float data;
	unsigned long buff;
	int i;
	char s[35];
	data = (float)0.1;
	memcpy(&buff, &data, 4);
	for (i = 33; i >= 0; i--)
	{
		if (i == 1 || i == 10)
		{
			s[i] = '-';
		}
		else
		{
			if (buff % 2 == 1)
				s[i] = '1';
			else
				s[i] = '0';
			buff /= 2;
		}
		
	}
	s[34] = '\0';
	
	/*for (int j = 0; j < 34; j++)
	{
		cout << s[j];
	}*/
	printf("%s\n", s);
}