#ifndef GRADE_TWO_H
#define GRADE_TWO_H

#include "SalaryStructure.h"

class CGradeTwo: public ISalaryStructure
{
public:
	CGradeTwo(char *executiveName,bool isCalOnMonthlyBasis);
	~CGradeTwo();
private:
	void getEmployeeData(PTREMPDATA ptrEmpData);
	void structureSalaryComponent(UDT empAmount,short calcViaType);
	void salaryStructuringViaGross();
	void salaryStructuringViaCTC();
	void salaryStructuringViaNetPay();
};
#endif