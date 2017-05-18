#pragma once
#include "SalesRep.h"
class SalesRepManager : public SalesRep
{
private:
	SalesRep managed_reps[100];
	int num_of_reps;
public:
	SalesRepManager();
	bool addrep(SalesRep& rep);
	double GetManagerTotal();
};

