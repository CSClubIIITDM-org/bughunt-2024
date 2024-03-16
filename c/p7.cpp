//using a counter function to count the length of a string (without directly using the length function)

#include<iostream>
#include<string>
using namespace std;

int func(string s){
	int counter=0;
	int i = 0;
	for(int i=0;i<s.length();i++)
    {
        counter++;
    }
	return counter;
}

int main(){
	string s = "Welcome to Vashisht 2024!!";
	cout << func(s) << endl;
	cout<<s.length();
	return 0;
}
