#ifndef GRADE_ONE_H
#define GRADE_ONE_H

#include "SalaryStructure.h"

class CGradeOne: public ISalaryStructure
{
public:
	CGradeOne(char *executiveName,bool isCalOnMonthlyBasis);
	~CGradeOne();
private:
	void getEmployeeData(PTREMPDATA ptrEmpData);
	void structureSalaryComponent(UDT empAmount,short calcViaType);
	void salaryStructuringViaGross();
	void salaryStructuringViaCTC();
	void salaryStructuringViaNetPay();
};
#endif