#include <iostream>//cin,cout
#include <iomanip>//setprecision,fixed
#include <algorithm>//max,min
using namespace std;

//setprecision(2)是保留两位小数，自动四舍五入
//fixed是固定小数点格式，不是科学计数法

int main()
{
	int n;
	cin >> n;

	int max_score = -1;
	int min_score = 101;
	long long sum = 0;

	for (int i = 0; i < n; i++)
	{
		int score;
		cin >> score;

		max_score = max(max_score, score);
		min_score = min(min_score, score);

		sum += score;
	}

	cout << max_score << "\n"
		<< min_score << "\n"
		<< fixed << setprecision(2) << (double)sum / n << "\n";
	return 0;
}