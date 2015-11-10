#include<iostream>
using namespace std;
#define N 100000

extern void print1(void)
{
	const unsigned long long a = 0x49204c6f76652055;
	cout << "0x49204c6f76652055翻译为";
	for (int i = 0; i <= 8; ++i)
		cout << (char)(a >> (((8 - i) * (1 << 3))) & 0xff) << " ";
	cout << endl;
	system("pause");
	return;
}

extern void print2(int price)
{
	int f[3], i = 2;
	f[0] = 1; f[1] = 1;
	while (1)
	{
		f[i % 3] = f[(i + 2) % 3] + f[(i + 1) % 3];
		if ((f[i % 3] << 1)*price >= N) break;
		i++;
	}
	cout << "共需要：" << i + 1 << "个月才能凑齐彩礼\n";
	system("pause");
	return;
}

