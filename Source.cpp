#include <iostream>
#include <string>
#include<vector>
#include <cmath>
using namespace std;


class Medicine {
protected:
	float price, quantity, expirationdate;
	string name, isprescriptionneeded;
	vector<string>my_name;
	vector<int>myvector;
	int i;
	
	
public:
	
	float getprice(float price) {
		return price;
	
	}
	float getquantity() {
		return quantity;
	}
	float getexpirationdate() {
		return expirationdate;
	}
	string getname() {
		return name;
	}
	string getisprescriptionneede() {
		return isprescriptionneeded;
	}

	Medicine(float price, float quantity, float expirationdate, string name, string isprescriptionneeded) {
		this->quantity = quantity;
		this->expirationdate = expirationdate;
		this->name = name;
		this->isprescriptionneeded = isprescriptionneeded;
		this->price = price;
		myvector.push_back(price);
		my_name.push_back(name);

		
	}void print() {
		cout << "\n Name:" << name
			<< "\n Price:" << price
			<< "\n Quantity:" << quantity
			<< "\n Expirationdate:" << expirationdate
			<< "\n Ispresciptionneede:" << isprescriptionneeded;
		int year = 0;
		cout << "\n Enter today=";
		cin >> year;
		if (expirationdate > year) {
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

		int index=0;
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
	
	Pharmacy b4 ;
	Medicine b1{ 60, 11, 13, "alah", "yes" };
	b1.print();
	b1.sale();
	Medicine b2{ 113,14,5,"oro","no" };
	Medicine b3{ 10,12,6,"Oleg","yes" };
	b2.print();
	//cout << "\n Num=" << myvector.size();
	b2.sale();
	b1.minprice();
	b4.addpharmacy();
	

	

	
	/*vector<Pharmacy>Pharmacy;
	string buffer = "";

	cout << "Enter name "  ;
		

	do {
		getline(cin, buffer);
		if (buffer.size() > 0) {
			
			Pharmacy.push_back(buffer);
		}
	} while (buffer != "");


	unsigned int vector_size = Pharmacy.size();


	cout << "Name";
	for (int i = 0; i < vector_size; i++) {
		cout <<"\n Your pharmacy=",  Pharmacy[i] ;
	}

	return 0;*/
}

