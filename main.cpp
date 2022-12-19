#include <iostream>
#include <utility>
using namespace std;


int main()
{
//PAIR
//first
pair < string , int > PAIR1;
PAIR1.first = "number";
PAIR1.second = 100;

cout << PAIR1.first << "";
cout << PAIR1.second <<endl;

//second , (he best for me)
pair <char,int> PAIR2(1,'A');
cout << PAIR2.first << "";
cout << PAIR2.second << endl;

//third
pair<string,char> PAIR3;
PAIR3 = make_pair("char : ",'a');
cout<<PAIR3.first<<"";
cout<<PAIR3.second<<endl;



    return 0;
}
