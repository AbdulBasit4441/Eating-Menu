#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
double sum;
void ricee(string dish1[10] ,int dish1_prize[10]) {
	const int size = 10;
label4:
	int choice = 0;
	cout << "Dish 1 \t\t\t\t\t\t\tPrize" << endl;
	for (int i = 0; i < size; i++) {
		cout << "\n\n" << i << ". " << dish1[i] << "\t\t\t\t\t\t R.S " << dish1_prize[i] << "\n\n";
	}
	cin >> choice;
	for (int i = 0; i < size; i++) {
		if (choice == i) {
			cout << "Your " << dish1[i]<<" has been Ordered"<<endl;
			sum += dish1_prize[i];
		}
	}
	cout << "Press 1 to go back to Rice menu" << endl;
	cout << "Press 2 to go back to main menu" << endl;
	int num;
	cin >> num;
	switch (num) {
	case 1:
		goto label4;
		break;
	case 2:
		goto label5;
		break;
	}
label5:;
}
void sal(string dish2[10],int dish2_prize[10]) {
	const int size = 10;
label4:
	int choice = 0;
	cout << "Dish 2 \t\t\t\t\t\t\tPrize" << endl;
	for (int i = 0; i < size; i++) {
		cout <<"\n\n" << i << ". " << dish2[i] << "\t\t\t\t\t R.S" << dish2_prize[i] << "\n\n" << endl;
	}
	cin >> choice;
	for (int i = 0; i < size; i++) {
		if (choice == i) {
			cout << "Your " << dish2[i] << " has been Ordered" << endl;
			sum += dish2_prize[i];
		}
	}
	cout << "Press 1 to go back to Salan menu" << endl;
	cout << "Press 2 to go back to main menu" << endl;
	int num;
	cin >> num;
	switch (num) {
	case 1:
		goto label4;
		break;
	case 2:
		goto label5;
		break;
	}
label5:
	;
}
void dri(string drink[10],int drink_prize) {
	const int size = 10;
label4:
	int choice = 0;
	for (int i = 0; i < size; i++) {
		cout << i << ". " << drink[i] << endl;
	}
	cin >> choice;
	for (int i = 0; i < size; i++) {
		if (choice == i) {
			cout << "Your " << drink[i] << " has been Ordered" << endl;
			sum += drink_prize;
		}
	}
	cout << "Press 1 to go back to Salan menu" << endl;
	cout << "Press 2 to go back to main menu" << endl;
	int num;
	cin >> num;
	switch (num) {
	case 1:
		goto label4;
		break;
	case 2:
		goto label5;
		break;
	}
label5:
	;
}
void sweet(string sweet_dish[10],int sweet_dish_prize[10]) {
	const int size = 10;
label4:
	int choice = 0;
	for (int i = 0; i < size; i++) {
		cout << i << ". " << sweet_dish[i] << endl;
	}
	cin >> choice;
	for (int i = 0; i < size; i++) {
		if (choice == i) {
			cout << "Your " << sweet_dish[i] << " has been Ordered" << endl;
			sum += sweet_dish_prize[i];
		}
	}
	cout << "Press 1 to go back to Salan menu" << endl;
	cout << "Press 2 to go back to main menu" << endl;
	int num;
	cin >> num;
	switch (num) {
	case 1:
		goto label4;
		break;
	case 2:
		goto label5;
		break;
	}
label5:
	;
}
void payment() {
cout<<"\n\n\nR.s = " << sum;
}
int main() {
	const int size = 10;
	string dish1[size] = { "Biryani","Daal Chawal","Palao","Savour ","Boil Rice With Daal","Chiken Rice","Beef Rice","Mutton Rice","Simple Rice","Rice with Kabbab" };
	string dish2[size] = { "Nihari","Daleem","Chiken Karhaye","Beef Karhaye","Mutton Karhaye","Butter Chiken","B.Q.B","Matka Karhaye","Simple Chiken Salan","Masala Kabbab" };
	string drink[size] = {"Coke","Pepsi","Dew","7UP","fanta","Sprite","String","Redbull","diet Coke","diet pepsi"};
	string sweet_dish[size] = { "Cake","Gulab jaman","Berfee","Rasgulla","Jalaybee","Rass Malyee","Custard","Shahi Tukray","Meetha Chawal","Gajar ka halwa" };
	int dish1_prize[size] = { 1000,500,800,450,300,340,900,750,200,460 };
	int dish2_prize[size] = {2000,300,2500,500,800,1100,900,1200,1900,200 };
	int drink_prize=200;
	int sweet_dish_prize[size] = {1900,600,700,800,400,500,1100,900,1200,1000};
	int choice;
	while (true) {
		cout << "\n Press 1 for Rice";
		cout << "\n Press 2 for Salan";
		cout << "\n Press 3 for Cold Drink";
		cout << "\n Press 4 for Sweet dish";
		cout << "\n Press 5 for bill payments";
		cout << "\n Press 6 to exit from menu";
		cin >> choice;
		switch (choice) {
		case 1:
			ricee(dish1,dish1_prize);
			break;
		case 2:
			sal(dish2,dish2_prize);
			break;
		case 3:
			dri(drink,drink_prize);
			break;
		case 4:
			sweet(sweet_dish,sweet_dish_prize);
			break;
		case 5:
			payment();
			sum = 0;
			break;
		case 6:
			exit(0);
		}
	
	}
		return 0;
}