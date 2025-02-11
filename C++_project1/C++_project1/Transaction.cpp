#include "Transaction.h"
using namespace std;

Transaction::Transaction(int amt, string kind)
{
	amount = amt;
	type = kind;
}


Transaction::~Transaction()
{
}

string Transaction::Report() const
{
	string report;
	report += "   ";
	report += type;
	report += "  ";
	report += to_string(amount);

	return report;
}
