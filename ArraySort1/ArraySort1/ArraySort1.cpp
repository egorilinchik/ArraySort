#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
    vector<int> arr(10, 0);
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i] = rand() % 30;
		cout << arr[i] << " ";
	}

	sort(arr.begin(), arr.end());
	cout << endl;

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
}