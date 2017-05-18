#include "SalesRepManager.h"



SalesRepManager::SalesRepManager()
{
	num_of_reps = 0;
}


bool SalesRepManager::addrep(SalesRep& rep) {
	if (num_of_reps == 100) 
		return false;
	for (int i = 0; i < num_of_reps; i++)
		if (rep.getId() == managed_reps[i].getId())
			return false;

	managed_reps[num_of_reps].setId(rep.getId());
	managed_reps[num_of_reps].setNum_tx(rep.getNum_tx());
	managed_reps[num_of_reps].setName(rep.getName());
	managed_reps[num_of_reps].setCode(rep.getCode());

	Transaction *t = new Transaction[rep.getNum_tx()]; 
	for (int i = 0; i < rep.getNum_tx(); i++) {
		t[i] = rep.getTransaction(i);
	}

	managed_reps[num_of_reps].setTransactions(t , rep.getNum_tx());
	num_of_reps++;
	delete [] t; 
	return true;
}

double SalesRepManager::GetManagerTotal() {
	double sum = 0; 
	sum += GetSalesTotal();
	for (int i = 0; i < num_of_reps; i++)
		sum += managed_reps[i].GetSalesTotal();
	return sum; 

}