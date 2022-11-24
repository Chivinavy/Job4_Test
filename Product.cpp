#include "Product.h"

Product::Product(unsigned int id, std::string name, double price)
{
	this->id = id;
	this->name = name;
	this->price = price;
}

Product Product::operator=(const Product& p1)
{
	if (&p1 == this)
		return *this;
	return Product(this->id = p1.id, this->name = p1.name, this->price = p1.price);
}

Product Product::operator+(double price)
{
	return Product(this->id, this->name, this->price + price);
}

Product Product::operator-(double price)
{
	return Product(this->id, this->name, this->price - price);
}

bool Product::operator<(const Product& p1)
{
	return this->price < p1.price;
}

bool Product::operator<=(const Product& p1)
{
	return this->price <= p1.price;
}

bool Product::operator>(const Product& p1)
{
	return this->price > p1.price;
}

bool Product::operator>=(const Product& p1)
{
	return this->price >= p1.price;
}

bool Product::operator==(const Product& p1)
{
	if (this->price == p1.price)
	{
		return true;
	}
	else
	{
		return false;
	}
}