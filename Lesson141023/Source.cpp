#include <iostream>
#include <vector>

using namespace std;


class Products
{
public:


private:
	string name;
	string description;
	int price;
	int quantity_in_warehouse;

};

class Bascket : public Products
{
public:


private:
	vector<Products> productList;
};

void Order();

class Users
{
public:


private:
	string login;
	string password;
};

void Payment();


int main()
{
	cout << "Test" << endl;
	return 0;
}