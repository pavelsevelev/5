
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	struct tm buf;

	time_t t = time(NULL);

	localtime_s(&buf, &t);

	int date = buf.tm_mday;
	int sum = 0;
	const int N = 5;
	int array[N][N] = {};
	int sum_r[N] = { 0 };

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = i + j;
			cout << array[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum_r[i] += array[i][j];
		}
	}

	sum = sum + date % N;

	if (sum == 0)
	{
		cout << "the sum of the elements in the array row: " << sum_r[0] << endl;
	}
	else if (sum == 1)
	{
		cout << "the sum of the elements in the array row: " << sum_r[1] << endl;
	}
	else if (sum == 2)
	{
		cout << "the sum of the elements in the array row: " << sum_r[2] << endl;
	}
	else if (sum == 3)
	{
		cout << "the sum of the elements in the array row: " << sum_r[3] << endl;
	}
	else if (sum == 4)
	{
		cout << "the sum of the elements in the array row: " << sum_r[4] << endl;
	}
	cout << "remains: " << sum;
}
