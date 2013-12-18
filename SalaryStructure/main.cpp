#include "core.h"

#define CALC_VIA(X) ((X==1) ? (CALCULATE_VIA_GROSS) : ((X==2) ? (CALCULATE_VIA_CTC) : CALCULATE_VIA_NETPAY))
#define GRADE_TYPE(X) ((X==1) ? (GRADE_ONE) : ((X==2) ? (GRADE_TWO) : GRADE_THREE))
#define IS_MONTHLY(X) (((X=='Y')||(X=='y')) ? true : false)

int main(){
	cout<<"\n-------------------------------------------------\n";
	cout<<"          Welcome to Aditya Birla Nuvo Ltd";
	cout<<"\n-------------------------------------------------\n";
	char execName[MAX_NAME_LENGTH];
	UDT execAmount;
	short calculateViaType;
	short gradeType;
	char isMonthlyOrYearly;
	cout<<"\nEnter the name of the employee:";
	gets(execName);
	cout<<"\nEnter the Amount:";
	cin>>execAmount;
	cout<<"\nChoose Calculation Type(1 or 2 or 3):-";
	cout<<"\n1. Calculate Via Gross";
	cout<<"\n2. Calculate Via CTC(Currently Not Implemented!!!!)";
	cout<<"\n3. Calculate Via Net Pay(Currently Not Implemented!!!!)";
	cout<<"\nEnter your choice:";
	cin>>calculateViaType;
	cout<<"\nChoose Employee Grade Type(1 or 2 or 3):-";
	cout<<"\n1. Grade One";
	cout<<"\n2. Grade Two";
	cout<<"\n3. Grade Three";
	cout<<"\nEnter your choice:";
	cin>>gradeType;
	cout<<"\nIs the entered is monthly amount? Y or N:";
	cin>>isMonthlyOrYearly;
	EMPINPUTDETAILS empInputDetails(execName,execAmount,CALC_VIA(calculateViaType),GRADE_TYPE(gradeType),IS_MONTHLY(isMonthlyOrYearly));
	CSalaryCore *coreObj = new CSalaryCore(&empInputDetails);
	coreObj->doStructuringOfSalary();
	coreObj->printSalaryComponent();
	delete coreObj;
	return 0;
}