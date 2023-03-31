#include <iostream>
using namespace std;

//array of integrers to hold values
int arr[20];
int cmp_count = 0		// number of comparasion
int mov_count = 0		// number of movement
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang element array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}

	cout << "\n======================" << endl;
	cout << "\nMasukkan elemen array" << endl;
	cout << "\n======================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}

}
// swap the element at_index x with the element at index y

void swap(int x, int y)
{
	int temp;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void q_sort(int low, int high)
{
	int pivot, i, j;
	if (low > high)		// langkah 1
		return;

	// partition the list into two parts
	// one containing element less that or equal to pivot
	// outher containing element

	i = low + 1;		// langkah 2
	j = high;			// langkah 4
	pivot = arr[low]	// langkah 2

		while (i <= j)	//langkah 10
		{
			// Search
			while ((arr[i] <= pivot) && (i <= high))	//langkah 5
		}
}