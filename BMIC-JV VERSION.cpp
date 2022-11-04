// JUNEBERD LEGARDE GONO CS-1101
#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int Menu1option, Menu2option, backop;
double k, cm, cm2, bmi, result, lb, in, in2, ebmi, engsult;
char again; 
string name;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void bmistandard()
{
	if ( result < 18.5) 
	{
		cout << "'Underweight'\n";
	}
	if (result >= 18.5 && result < 25.4) 
	{
		cout << "'Normal'\n";
	}
	if (result >= 25.5 && result < 30.4) 
	{
		cout << "'OverWeight'\n";
	}
	if (result >= 30.5) 
	{
		cout << "'Obese'\n";
	}
}

void singleconti()
{
	gotoxy(70,5);
	cout << "1 - Single Calculator";
	gotoxy(70,6);
	cout << "2 - Continues Calculator";
	gotoxy(70,7);
	cout << "3 - Back to Menu Once\n" ;
	gotoxy(70,8);
	cout << "4 - Quit/Exit";
}

void out()
{
	system ("cls");
	gotoxy(70,15);
	cout << "Bye bye!" << endl;
	system ("pause");
	exit(0);
}

void invalid()
{
	system ("cls");
	gotoxy(70,15);
	cout << "Next Time Choose the number properly according to Option";
	system ("pause");
}


void met()
{
	cout << "\n\n\t\t\t\t\tEnter Your Weight(kg):\t" ;
	cin >> k;
	cout << "\n\t\t\t\t\tEnter Your Height(cm):\t" ;
	cin >> cm;

	bmi = k / cm/ cm;
	result = bmi*10000;	
	cout << "\n\t\t\t\t\tThe result: "<< result << " " << "category to ";		
}

void eng()
{
	cout << "\n\n\t\t\t\t\tEnter your Weight(lb):\t";
	cin >> lb;
	cout << "\n\t\t\t\t\tEnter your Height(in):\t";
	cin >> in;
			
	in2 = in * in;
	ebmi = lb / in2;
	result = ebmi * 703;	
	cout << "\n\t\t\t\t\tThe result:\t" << result << " " << "category to ";
}

int main ()
{
cout << fixed << setprecision(2);

menu1: 	
	system ("cls");	
	gotoxy(70,2);
	cout << "Body Mass Index";
	gotoxy(70,3);
	cout << "================\n\n";
	gotoxy(70,5);
	cout << "1 - Metric System";
	gotoxy(70,6);
	cout << "2 - English System";
	gotoxy(70,7);
	cout << "3 - Quit/Exit";
	gotoxy(70,10);
	cout << "Type the number to choose:\t";
	cin >> Menu1option;
		gotoxy(70,15);
		cout << "The Category for Body Mass Index";
		gotoxy(70,16);
		cout <<"===================================";
		gotoxy(70,17);
		cout << "Less than 18.5 --- 'Underweight'";
		gotoxy(70,18);
		cout << "Greater than 18.5 to  25.4 --- 'Normal'";
		gotoxy(70,19);
		cout << "Greater than 25.5 to 30.4 --- 'Overweight'";
		gotoxy(70,20);
		cout <<"Greater than 30.5 --- 'Obese'";
		gotoxy(70,21);
		cout<<"-World Health Organization";
		gotoxy(70,24);
		system("Pause");

mmenu1:
	if (Menu1option == 1)
	{
		system("cls");
		gotoxy(70,2);
		cout << "BMI - Metric System" ;
		gotoxy(70,3);
		cout << "===================";
		singleconti ();
		gotoxy(70,10);
		cout << "Press you choose:\t";
		cin >> Menu2option;
		
	
		
		if (Menu2option == 1)
		{
			system ("cls");
			gotoxy(70,2);
			cout << "BMI-Metric System - Single Calculator";
			gotoxy(70,3);
			cout << "====================================\n\n";
			met();
			bmistandard();
			cout << "\n--------------------------------------------------------------------------------------------------------\n";
			cout << "Press '3' to back Menu Once or Press '4' to to quit:\t";
			cin >> backop;
			
			if (backop == 3)
			{
				goto mmenu1;
			}
			if (backop == 4)
			{
				out();
			}
			else 
			{
				invalid();
				goto mmenu1;
			}
		}
	
		if (Menu2option == 2)
		{
			system ("cls");
			gotoxy(70,2);
			cout << "BMI-Metric System - Continous Calculator";
			gotoxy(70,3);
			cout << "========================================";
			do 
			{
			cout << "\n\n\tEnter your Name:\t";
			cin >> name;
			met();
			bmistandard();
			cout << "\n---------------------------------------------------------------------------------------\n";
			cout << "Please Press: 'y' to use again // 'b' - to back Menu Once // 'q' - to quit:\t";
			cin >> again;
			if (again == 'b')
			{
				goto mmenu1;
			}
			if (again == 'q')
			{
				out();
			}
			cout << "\n========================================================================================\n";	
			}while(again == 'y' || again == 'Y' );
			system ("pause");	
		}
		
		if (Menu2option == 3)
		{
			goto menu1;
		}
		
		if (Menu2option == 4)
		{
			out ();
		}
		
		else
		{
			invalid ();
			goto mmenu1;
		}
		
	}

emenu2:	
	if(Menu1option == 2)
	{
		system("cls");
		gotoxy(70,2);
		cout << "BMI-English System";
		gotoxy(70,3);
		cout << "===================";
		singleconti();
		gotoxy(70,10);
		cout << "Press you choose:\t";
		cin >> Menu2option;
		
		if (Menu2option == 1)
		{
			system ("cls");
			gotoxy(70,2);
			cout << "BMI-English System - Single Calculator";
			gotoxy(70,3);
			cout << "====================================\n\n";
			eng();
			bmistandard();
			cout << "\n================================================================================\n";	
			cout << "Press '3' to back Menu Once or Press '4'' to to quit:\t" ;
			cin >> backop;
		
			if (backop == 3)
			{
				goto emenu2;
			}
			
			if (backop == 4)
			{
				out();
			}
		}
		
		if (Menu2option == 2)
		{
			system ("cls");
			gotoxy(70,2);
			cout << "BMI-English System - Continous Calculator";
			gotoxy(70,3);
			cout << "========================================";
			
			do 
			{
			cout << "\n\n\tEnter your Name:\t";
			cin >> name;
			eng();
			bmistandard();
			cout << "\n---------------------------------------------------------------------------------------\n";
			cout << "Please Press: 'y' to use again // 'b' - to back Menu Once // 'q' - to quit:\t";
			cin >> again;
			if (again == 'b')
			{
				goto emenu2;
			}
			if (again == 'q')
			{
				out();
			}
			cout << "\n========================================================================================\n";	
			}while(again == 'y' || again == 'Y' );
			system ("pause");	
		}
		
		if (Menu2option == 3)
		{
			goto menu1;
		}
		if (Menu2option == 4)
		{
			out();
		}
		else
		{
			invalid();
		}
		
	}
	
	if (Menu1option == 3)
	{
		out();
	}
	
	else 
	{
		invalid();
		goto menu1;
	}
	
	
}
	
	
	
	
	


