#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double principle,interest,canafford;	
	cout << "Enter initial loan: ";
	cin >> principle;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> canafford;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	for(int i = 1;true;i++){
	double DB = principle*(interest/100);
	double Total = principle+DB;
	double NewBalance = Total-canafford;
		if(principle <= canafford){
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << i; 
			cout << setw(13) << left << principle;
			cout << setw(13) << left << DB;
			cout << setw(13) << left << Total;
			cout << setw(13) << left << Total;
			cout << setw(13) << left << Total-Total;
			cout << "\n";
			break;
		}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << principle;
		cout << setw(13) << left << DB;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << canafford;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		principle = NewBalance;
		
	}
	
	return 0;
}
