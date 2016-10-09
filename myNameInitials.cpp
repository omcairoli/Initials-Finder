// Program: Initials
// Enter your full name and your initials are returned
// Created by: Oscar Cairoli

#include <iostream>;
#include <string>;
 using namespace std;
 
int main()
{
	string myName;
	string myArray[3];
	int counter = 0;
	
	printf("Please enter your name: ");
	cin >> myName;
	
	for (int i = 0; i <= myName.length(); i++)
	{
		if (i == 0) 
		{
			myArray[i] = myName[i];
			counter++;
		}
		else if (myName[i] == '')
		{
			myArray[counter] = myArray[i+1]; 
			counter++;
		}
	}
	
	printf("Your initials are: %/s", myArray);
}