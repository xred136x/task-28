#pragma once
#include<iostream>
#include<string>
struct product {
	std::string name;
	int number = 0;
	int price = 0;
};
void print_prod(product& p);
int full_price(product& p);
void sell(product& p, int num);