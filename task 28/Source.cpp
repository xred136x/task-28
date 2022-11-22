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
	cout << "Информация о товаре:\n";
	print_prod(p);
	cout << "\nСтоймость всех товаров, $: " << full_price(p);
	sell(p, 43);
	return 0;
}