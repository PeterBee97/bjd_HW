#include<iostream>
#define N 100000
#define PRICE 20

int calc(int price)
{
	int f[3], i = 2;
	f[0] = 1; f[1] = 1;
	while (1)
	{
		f[i % 3] = f[(i + 2) % 3] + f[(i + 1) % 3];
		if ((f[i % 3] << 1)*price >= N) break;
		i++;
	}
	return i+1;
}

int main()
{

    std::cout << "共需要：" << calc(PRICE) << "个月才能凑齐彩礼\n";
    return 0;
}
