#include <iostream>
#include <string>
#include<vector>
#include <cmath>
using namespace std;


class Medicine {
protected:
	float price, quantity, expiration_date;
	string name, is_prescription_needed;
	vector<string>my_name;
	vector<int>my_vector;
	int i;
	
	
public:
	
	float getprice(float price) {
		return price;
	
	}
	float getquantity() {
		return quantity;
	}
	float getexpirationd_ate() {
		return expiration_date;
	}
	string getname() {
		return name;
	}
	string getisprescriptionneede() {
		return is_prescription_needed;
	}

	Medicine(float price, float quantity, float expirationdate, string name, string isprescriptionneeded) {
		this->quantity = quantity;
		this->expiration_date = expirationdate;
		this->name = name;
		this->is_prescription_needed = isprescriptionneeded;
		this->price = price;
		my_vector.push_back(price);
		my_name.push_back(name);

		
	}void print() {
		cout << "\n Name:" << name
			<< "\n Price:" << price
			<< "\n Quantity:" << quantity
			<< "\n Expirationdate:" << expiration_date
			<< "\n Ispresciptionneede:" << is_prescription_needed;
		int year = 0;
		cout << "\n Enter today=";
		cin >> year;
		if (expiration_date > year) {
			cout << "False\n";


		}
		else cout << "True\n";
	}
	void sale() {
		

		int saleprice = 0 ;
		saleprice = price - price / 10;
		cout << "\n Saleprice="<< saleprice;

	}void minprice() {
		vector<string>my_name;
		vector<int>myvector;
		int i;

		int index = 0;
		int min_cost=myvector[0];
		int size = myvector.size();
		for (i = 1; i < size; i++) {
			if (myvector[i] < min_cost) {
				min_cost = myvector[i];
				index = i;
			}
		}
		cout << "/n Vect" << my_name[index];
	

	}
			
	
		
	

	
	Medicine() {};
~Medicine() {};
};
class Pharmacy:public Medicine {
protected:
	string pharmacy_name;

public:


	
	void addpharmacy() {
		vector<string>pharmacy;
		cout << "Enter pharmacy:\n";
		do {
			cout << "Pharmacy=";
			cin >>pharmacy_name;
			pharmacy.push_back(pharmacy_name);


		} while
			(cout << "\n myvector stores " << float(pharmacy.size()));
		
		return ;



	}
	Pharmacy() {};
	~Pharmacy() {};


};
int main() {

	Pharmacy b4;
	Medicine b1{ 60, 11, 13, "alah", "yes" };
	b1.print();
	b1.sale();
	Medicine b2{ 113,14,5,"oro","no" };
	Medicine b3{ 10,12,6,"Oleg","yes" };
	b2.print();
	
	b2.sale();
	b1.minprice();
	b4.addpharmacy();


}



	

