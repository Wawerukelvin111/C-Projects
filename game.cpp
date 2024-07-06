// Making a quiz game full project in C++ By Codelivly

#include<iostream>

using namespace std;

int main(){

	string all_questions[10] = {    // all the questions
	"Which is the smallest country?",
	"Which is the capital of Argentina?",
	"Which is called world population day?",
	"Who is the first person to draw the map of earth?",
	"Who was the first lady astronaut?",
	"Who is the father of chemistry?",
	"Who is the inventor of Rail Engine?",
	"Which is the capital of America?",
	"Which is not the member of G-8?",
	"Which is the biggest ocean?" };

	string all_options[10][4] = {    // all options
	{"Maldivs","Vatican city","Fizi","Tuvalue"},
	{"Buenes aires","Havana","Tokiyo","None of them"},
	{"5 March","11 july","17 May","12 June"},
	{"Aristotol","Neuton","Anaximander","Thales"},
	{"Tomas alva","George King","Valentina Terescova","Nil Armstrong"},
	{"Thomson","Robert boyel","John Dalton","Demitri Mendelieve"},
	{"Jems watt","Michel Farady","Stiphenson","Kohen"},
	{"Washington Dc","Moscow","Hawaii","California"},
	{"France","Italy","Spain","Jarmany"},
	{"Arctic ocean","Pacific Ocean","Indian ocean","Atlantic"},
    };

	string correct_ans[10] = {    // correct options
		"Vatican city","Buenes aires","11 july","Anaximander",
		"Valentina Terescova","Robert boyel","Stiphenson",
		"Washington DC","Spain","Pacific Ocean"
    };

	int selected_option[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int totalQ = 10;
	int op;

	for(int i = 0; i < totalQ; i++){
		cout << "Question No: " << (i+1) << endl;
		cout << all_questions[i] << endl;
		cout << "1." << all_options[i][0] << endl;
		cout << "2."<<all_options[i][1] << endl;
		cout << "3." << all_options[i][2] << endl;
		cout << "4." << all_options[i][3] << endl << endl;

		cout << "Select your answer as 1, 2, 3 or 4 here : ";
		cin >> selected_option[i];
		cout << endl << "--------------------------------------------" << endl << endl;
	}

	//----- Printing Correct Options -----
	cout << "********************************* " << endl;
	cout << "****** Compare your answer ****** " << endl;
	cout << "********************************* " << endl << endl;

	for(int i = 0; i < totalQ; i++){
		cout << "Question No: " << (i+1) << endl;
		cout << all_questions[i] << endl;
		cout << "1." << all_options[i][0] << endl;
		cout << "2." << all_options[i][1] << endl;
		cout << "3."<< all_options[i][2] << endl;
		cout << "4." << all_options[i][3] << endl;

		if(selected_option[i] == 0 ){
			cout << "You have Skipped this Question." << endl;
		}else{
			cout << "You have Selected : " << all_options[i][selected_option[i]-1] << endl;
		}
		cout << "Correct Option was : " << correct_ans[i] << endl << endl;

		cout << "Press any key to continue checking..." << endl;
		cout << endl << "---------------------------------------------" << endl;
	}

	//----- Printing Result -----
	cout << endl << endl;
	cout << "************************************ " << endl;
	cout << "*********** Your Result ************ " << endl;
	cout << "************************************ " << endl << endl;

	int correct = 0;
	int incorrect = 0;
	int skipped = 0;

	for(int i = 0; i < totalQ; i++){
		if(selected_option[i] != 0){
			if(correct_ans[i] == all_options[i][selected_option[i]-1]){
				correct++;
			}else{
				incorrect++;
			}
		}else{
			skipped++;
		}
	}
	cout << "Total number of questions : " << totalQ << endl;
	cout << "Correct answer : " << correct << endl;
	cout << "Wrong answer : " << incorrect << endl;
	cout << "Skipped : " << skipped << endl;

	return 0;
}