#include <conio.h>
#include <stdio.h>
int numberArray;
int number[100];
void NhapMang() {
	
	printf("Nhap so luong phan tu cua mang \n");
	scanf_s("%d", &numberArray);
	
	for (int i = 0; i < numberArray; i++)
	{

		printf("Nhap phan tu thu %d \n",i);
		scanf_s("%d", &number[i]);
     	}
	}
bool BinarySearch(int* a, int n, int x) {
	int i;
	if (n > 0) {
		i = n / 2;
		if (a[i] == x) return true;
		if (a[i] < x) return BinarySearch(&a[i + 1], n - i - 1, x);
		return BinarySearch(a, i, x);
	}
	return false;

}

int main() {
	bool x;
	int numberFind;
	NhapMang();
	printf("Nhap so can tim \n");
	scanf_s("%d", &numberFind);
	x= BinarySearch(number, numberArray, numberFind);
	if (x = true) {
		printf("dung\n");
	}
	else
	{
		printf("sai \n");
	}

_getch();
	return 0;
	
}

