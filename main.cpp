#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() 
{
 srand(time(NULL));
 int x=rand()%101; // random number
 cout << " The Computer thought of the number from 0 - 100. You have 8 tries. Your number? " << endl;
int user_choise; 
bool flag=false; 
for(int i=0; i<8; i++) {
cin >> user_choise;
if (x == user_choise) {cout << "You win  "; flag=true; break;};
if (x > user_choise) {cout << "More  ";}
if (x <  user_choise) {cout << "Less  ";}  
    }
if (flag==false) {cout << "YOU LOSE! NUMBER was " << x;};  
 
}
