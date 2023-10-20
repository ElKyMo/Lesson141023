#include <iostream>
#include <vector>
using namespace std;


// Тут я создал три массива в которых будет храниться айди заказа, если заказ меняет свой статус - тогда
// он удаляется с текущего массива и переносится в другой - в зависимости от того какой у него статус
vector <int> order_processing;
vector <int> order_sent;
vector <int> order_arrived;




// Тут я создал вектора с названием товаров которые есть в каталоге
// они будут хранить в себе айди заказа
// это служит для того чтоб понять что было заказано.
// Например если два раза заказали товар1, тогда айди заказа в нем будет фигурировать два раза
// И тогда после проверки всех товаров, мы поймем что входило в заказ и какое количество
// Программа будет выводить артикул товара и его количество

// артикул товара1 #31254
int price1 = 100;
int articul1 = 31254;
vector <int> tovar1;

// артикул товара2 #97654
int price2 = 230;
int articul2 = 97654;
vector <int> tovar2;

// артикул товара 3 #34875
int price3 = 210;
int articul3 = 34875;
vector <int> tovar3;

// артикул товара 4 #46132
int price4 = 200;
int articul4 = 46132;
vector <int> tovar4;

// артикул товара 5 #79520
int price5 = 250;
int articul5 = 79520;
vector <int> tovar5;

// артикул товара 6 #34025
int price6 = 200;
int articul6 = 34025;
vector <int> tovar6;


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





void Order(id_order) {
	//цикл который выводит статус заказа
	if (order_processing == id_order) {
		cout << "Order:" << id_order << "\t" << "order is being processed!" << endl;
	}
	else if (order_sent == id_order) {
		cout << "Order:" << id_order << "\t" << "order has been sent!" << endl;
	}
	if else (order_arrived == id_order) {
		cout << "Order:" << id_order << "\t" << "order has arrived!" << endl;
	}
}

void all_orders() {
	//цикл который выводит все заказы и их статус
	for (int i = 0; i < order_processing.size(); i++)
	{
		cout << "order: " << order_processing[i] << " order is being processed!" << endl;
	}
	for (int i = 0; i < order_processing.size(); i++)
	{
		cout << "order: " << order_sent[i] << "order has been sent!" << endl;
	}
	for (int i = 0; i < order_arrived.size(); i++)
	{
		cout << "order: " << order_arrived[i] << " order has arrived!" << endl;
	}
}




void Order_details(id_order) {
	// временная запись кол. каждого товара
	int quntity_tovar1 = 0;
	int quntity_tovar2 = 0;
	int quntity_tovar3 = 0;
	int quntity_tovar4 = 0;
	int quntity_tovar5 = 0;
	int quntity_tovar6 = 0;

	//циклы добавляющие каждый раз еденицу к количеству как только встречают айди в базе товара
	for (int i = 0; i < tovar1.size(); i++)
	{
		if (tovar1 == id_order) {
			quntity_tovar1++;
		}
	}
	for (int i = 0; i < tovar2.size(); i++)
	{
		if (tovar2 == id_order) {
			quntity_tovar2++;
		}
	}
	for (int i = 0; i < tovar3.size(); i++)
	{
		if (tovar3 == id_order) {
			quntity_tovar3++;
		}
	}
	for (int i = 0; i < tovar4.size(); i++)
	{
		if (tovar4 == id_order) {
			quntity_tovar4++;
		}
	}
	for (int i = 0; i < tovar5.size(); i++)
	{
		if (tovar5 == id_order) {
			quntity_tovar5++;
		}
	}
	for (int i = 0; i < tovar6.size(); i++)
	{
		if (tovar6 == id_order) {
			quntity_tovar6++;
		}
	}




	// цикл который выводит количество детали заказа вместе с его артикулом
	for (int i = 0; i < 1; i++)
	{
		if (quntity.tovar1 != 0) {
			cout << "#31254 tovar1: " << quntity_tovar1 << endl;
		}
		else if (quntity.tovar2 != 0) {
			cout << "#97654 tovar2: " << quntity_tovar2 << endl;
		}
		else if (quntity.tovar3 != 0) {
			cout << "#34875 tovar3: " << quntity_tovar3 << endl;
		}
		else if (quntity.tovar4 != 0) {
			cout << "#46132 tovar4: " << quntity_tovar4 << endl;
		}
		else if (quntity.tovar5 != 0) {
			cout << "#79520 tovar5: " << quntity_tovar5 << endl;
		}
		else if (quntity.tovar6 != 0) {
			cout << "#79520 tovar5: " << quntity_tovar5 << endl;
		}
		else if (quntity_tovar1 == 0 and quntity_tovar2 == 0 and quntity_tovar3 == 0 and quntity_tovar4 == 0 and quntity_tovar5 == 0 and quntity_tovar6) {
			cout << "Order is empty" << endl;
		}
	}
}



class Users{
private:
	string login;
	string password;
public:
	int id_user = 465232;
	float balance = 328;

	int id_order = id_user;
	
	void Registration(string p_login, string p_password) 
	{
		login = p_login;
		password = p_password;
	}

	void log_in(string p_login, string p_password)
	{
		if (login == p_login and password == p_password) {

			cout << "Entry allowed!" << endl;

		}

		else {

			cout << "Wrong login or password" << endl;

		}
	}
};



void Payment() {

}


int main()
{
	cout << "Test" << endl;
	return 0;
}