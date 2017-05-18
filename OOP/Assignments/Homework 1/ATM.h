class ATM {

	int fifties, twenties, tens; 

public:
	ATM();
	ATM(int f, int t, int te);
	int getFifties();
	void deposit(int f, int t, int te);
	int  getATMTotalCash();
	bool HasMoreCash(ATM &a1);
	bool Withdraw(int amount, int &fifties_count, int &twenties_count, int &tens_count); 




};