#include <iostream>
using namespace std;

int main1()
{
	int m[4] = { 0 };
	for (int i = 0; i < 4; i++)
		cin >> m[i];
	
	int A, B, C;
	A = (m[0] + m[2]) / 2;
	B = (m[1] + m[3]) / 2;
	C = m[3] - B;

	if ((A - B == m[0]) && (B - C == m[1]) && (A + B == m[2]) && (B + C == m[3]))
	{
		cout << A << " " << B << " " << C << endl;
	}
	else
	{
		cout << "NO"<<endl;
	}

	system("pause");
	return 0;

}