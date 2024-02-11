#include <iostream>
using namespace std;


int RandomNambur(int From, int To) {

    int random = rand() % (To - From + 1) + From;

    return random;
}

enum enCharType{ SamallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };


char GetRandomCharacter(enCharType CharType) {

	switch (CharType)
	{
	case enCharType::SamallLetter : {
		return char(RandomNambur(97, 122));
			break;
	}
	case enCharType::CapitalLetter: {

		return char(RandomNambur(65, 90));
		break;
	}

	case enCharType::SpecialCharacter: {

		return char(RandomNambur(33, 47));
		break;
	}
	case enCharType::Digit: {
		 
		return char(RandomNambur(48, 57));
		break;
	}
	}
}



int main()
{
	//Seeds the random number generator in C++, called only once    
	srand((unsigned)time(NULL)); 

	cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
	cout << GetRandomCharacter(enCharType::SamallLetter) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enCharType::Digit)<<endl;
}
