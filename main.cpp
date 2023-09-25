#include <iostream>

void printPortions(unsigned int input){
	unsigned int i;
	bool fl = 0;
	if (input % 4 != 0){
		fl = 1;
	}
		unsigned int part = (input+fl)>>2; // 1 part out of same 4
		
		std::cout << part*2 - fl << "\n";
		for (i = 1; i <= part - fl; i++) // print 1st part for P
			std::cout << i << " ";
		for (i = 3 * part + 1 - fl; i <= input; i++) // print 2nd part for P
		    std::cout << i << " ";
		
		std::cout << "\n" << part*2 << "\n";
		for (i = part+1-fl; i <= 3 * part - fl; i++) // print for M
		    std::cout << i << " ";

}

int main(){
	int input_q;
	std::cout << "Введите кол-во тарелок:"; std::cin >> input_q;
	if ((input_q+1)*input_q/2 % 2 != 0){
		std::cout << "NO";
	} else {
		std::cout << "YES\n";
		printPortions(input_q);
	}
	return 0;
}
