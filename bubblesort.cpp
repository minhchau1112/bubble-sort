/*
Giá trị nhỏ nhất được nổi lên đến đầu danh sách
- Bắt đầu từ cuối mảng, lần lượt, hoán đổi hai yếu tố liền kề nếu
họ đang ở trong trật tự sai.
- Phần tử nhẹ nhất sẽ nổi lên đầu mảng, bước tiếp theo
Không tính đến nó.
*/

#include<iostream>
using namespace std;

void BubbleSort(int* a, int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1]) swap(a[j], a[j - 1]);
		}
	}
}

int main() {
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand();
	}
	BubbleSort(a, n);
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	delete[] a;
	return 0;
}