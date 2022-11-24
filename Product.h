#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>

struct Product
{
    public:
    unsigned int id{};
    std::string name{};
    double price{};

    Product(unsigned int id, std::string name, double price);

    Product operator = (const Product& p1);

    Product operator + (double price);

    Product operator - (double price);

    bool operator < (const Product& p1);

    bool operator <= (const Product& p1);

    bool operator > (const Product& p1);

    bool operator >= (const Product& p1);

    bool operator == (const Product& p1);
};

#endif /* PRODUCT_H */