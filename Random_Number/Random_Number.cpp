#include <iostream>
using namespace std;


int RandomNambur(int From, int To) {
    
     int random = rand() % (To - From + 1) + From;

     return random;
}

int main()
{
    srand((unsigned)time(NULL));

   cout<<  RandomNambur(1, 100);
}
