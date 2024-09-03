#include <iostream>
#include <conio.h>

using namespace std;

double GetLengthFromUser()
{
	double length = 0;	


	while (true)
	{
		cout << "Enter the lenght of the rectangle: ";
		cin >> length;

		if (length <= 0)
			{
				cout << "Please enter a valid number.\n ";				
			}
		else
		{
			return length;
		}
	}	
}
double GetWidthFromUser()
{
	double width;	

	while (true)
	{
		cout << "Enter the width of the rectangle: ";
		cin >> width;

		if (width <= 0)
			{
				cout << "Please enter a valid number.\n ";				
			}
		else
		{
			return width;
		}
	}	
}
double CalculateArea(double length, double width)
{	

	return length * width;
	
}
void DisplayArea(double area)
{
	cout << "The area of your rectangle is: " << area ;
}

int main()
{
	
	double length = GetLengthFromUser();
	double width = GetWidthFromUser();
	double area = CalculateArea(length, width);
	DisplayArea(area);
	

	(void)_getch();
	return 0;
}