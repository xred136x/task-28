#include<iostream>
#include<string>
#include"Products.h"
using namespace std;

void print_prod(product& p) {
	cout << "\nНаименование товара: " << p.name << "\nКоличество, шт: " << p.number << "\nЦена, $: " << p.price;
}

int full_price(product& p) {
	int res = p.number * p.price;
	return res;
}

void sell(product& p, int num) {
	cout << "\nОсталось, шт: " << p.number - num;
}

