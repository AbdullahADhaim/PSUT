#include<iostream>
#include<string>
#include"Transaction.h"
#include"SalesRep.h"
#include"SalesRepManager.h"
#define SIZE 100
#define SIZE_R 10
using namespace std; 

int main() {

	Transaction data[SIZE];
	SalesRep reps[SIZE_R];

	double a; 
	string r , n , c;
	int id_ , num; 
	Transaction *t = NULL; 
	for (int i = 0; i < SIZE; i++) {
		cout << "Transaction #" << i + 1 << " - Please Enter Amount & Rep Code: ";
		cin >> a >> r;
		data[i].SetAmount(a);
		data[i].SetRepCode(r);
	}

	for (int i = 0; i < SIZE_R; i++) {
		cout << "Sales Representor #" << i + 1 << " - Please Enter Name, ID, Code: ";
		cin >> n >> id_ >> c;
		reps[i].setName(n);
		reps[i].setId(id_);
		reps[i].setCode(c);

		cout << "How Many Transactions SalesRep #" << i + 1 << " has  ? ";
		cin >> num;
		t = new Transaction[num];
		for (int j = 0; j < num; j++) {
			cout << "Transaction #" << j + 1 << " - Please Enter Amount For " << n << ": ";
			cin >> a ;
			t[j].SetAmount(a);
			t[j].SetRepCode(c);
		}

		// reps[i].setNum_tx(num);
		// reps[i].setTransactions(t, num); this does the same thing as ExtractRepTransactions(t, num)

		reps[i].ExtractRepTransactions(t, num);
		delete[] t;

		cout << "Rep #" << i + 1 << " Total Sales Is: " << reps[i].GetSalesTotal() << endl;
	}

	int maxIndex = 0;
	float max = reps[0].GetSalesTotal();
	for (int i = 1; i < SIZE_R; i++) {
		if (reps[i].GetSalesTotal() > max)
		{
			max = reps[i].GetSalesTotal();
			maxIndex = i;
		}
	}

	cout << endl << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "Info Of The Sales Represontor With The Max Total Amount Of Sales: " << endl; 
	cout << "Name : " << reps[maxIndex].getName() << " - Code: " << reps[maxIndex].getCode() << endl;
	cout << "Number Of Transactions: " << reps[maxIndex].getNum_tx() << " - Sales: " << max << endl;

	 SalesRepManager SRM1;
	 SRM1.setCode("weq"); // use this code to test the extract function in the manager 
	 for (int i = 0; i < 5; i++)
	 	SRM1.addrep(reps[i]);
	 
	 SRM1.ExtractRepTransactions(data, SIZE);
	 
	 cout << endl << "* * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
	 cout << "Sales Made By Manager & His Reps: " << SRM1.GetManagerTotal() << endl;


	return 0;
}