#include<iostream>
#include<string>
#include"Products.h"
using namespace std;

void print_prod(product& p) {
	cout << "\n������������ ������: " << p.name << "\n����������, ��: " << p.number << "\n����, $: " << p.price;
}

int full_price(product& p) {
	int res = p.number * p.price;
	return res;
}

void sell(product& p, int num) {
	cout << "\n��������, ��: " << p.number - num;
}

