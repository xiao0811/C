/*
 * 打印任意位水仙花数
 * 水仙花数是指一个 n 位数（n≥3 ），它的每个位上的数字的 n 次幂之和等于它本身
 *（例如：1^3 + 5^3+ 3^3 = 153）
 * author: 骁傻
 * date: 2018-05-12
 */
#include <stdio.h>

int xiao(int a, int n);
int sha(int a, int n);
int main()
{
	int n;
	scanf("%d", &n);

	int i, num_s;
	num_s = 1;
	for (i = 1; i < n; i++) {
		num_s *= 10;
	}

	for (i = num_s; i < num_s * 10; i++) {
		if (i == sha(i, n)) {
			printf("%d\n", i);
		}
	}

	return 0;
}

// a 的n 次方
int xiao(int a, int n)
{
	int i, num;
	num = a;
	for (i = 1; i < n; i++){
		num *= a;
	}
	return num;
}

// a 的所有位上数的 长度次方和
int sha(int a, int n)
{
	int num = 0;
	while (a >= 1) {
		int d = a % 10;
		num += xiao(d, n);
		a /= 10;
	}

	return num;
}
