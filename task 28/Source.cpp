#include<iostream>
#include<string>
#include"Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	product p;
	p.name = "Water";
	p.number = 100;
	p.price = 10;
	cout << "���������� � ������:\n";
	print_prod(p);
	cout << "\n��������� ���� �������, $: " << full_price(p);
	sell(p, 43);
	return 0;
}