#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int M;//十进制数字
	int N;//需要转化的进制
	cin >> M >> N;
	char num[100];
	int res = M, i = 0, cnt, p;

	while (res != 0)
	{
		//取商
		res = M / N;
		//取余
		p = M % N;
		//16进制ABCDEF
		if (p == 10)
			num[i++] = 'A';
		else if (p == 11)
			num[i++] = 'B';
		else if (p == 12)
			num[i++] = 'C';
		else if (p == 13)
			num[i++] = 'D';
		else if (p == 14)
			num[i++] = 'E';
		else if (p == 15)
			num[i++] = 'F';
		else 
			num[i++] = p + 48;
		M = res;
	}
	//记录转换后位数
	cnt = i;
	//倒叙输出转换后进制数
	for (i = cnt - 1; i >= 0; i--)
		cout << num[i];

	cout << endl;

	system("pause");
	return 0;
}
