
//James-Lee S., 08/30/24
//Assignment 2: Rectangle Area

#include<iostream>
#include<conio.h>
using namespace std;

//function prototypes
int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
static void DisplayArea(int length, int width);

int main() {
	int length;
	int width;

	length = GetLengthFromUser();
	width = GetWidthFromUser();

	//CalculateArea(length, width) is called by DisplayArea();
	DisplayArea(length, width);

	(void)_getch();
	return 0;
}

int GetLengthFromUser() {
	int length;
	cout << "What's the length of the rectangle?\n";
	cin >> length;
	return length;
}

int GetWidthFromUser() {
	int width;
	cout << "What's the width of the rectangle?\n";
	cin >> width;
	return width;
}

int CalculateArea(int length, int width) {
	return length * width;
}

static void DisplayArea(int length, int width) {
	cout << "The area of the Rectangle is: " << CalculateArea(length, width);
}