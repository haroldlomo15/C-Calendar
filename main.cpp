#include <iostream>	//library for input/output 
#include <string>	//library for strings
#include <fstream>	//for the file opening
#include <iomanip>	//library for setw
using namespace std;
int get_year(); // identity for get year
int get_starting_date(); // identity for stating date
int read_num_days();  // identity to read num of days
void print_heading(int year); // identity to print heading
int print_month(int starting_date, int num_day, string month_name); // identity for print month
string read_month_name(), month_name;
ifstream myfile; // myfile global
int main()
{
	int year, starting_date, num_day; // declaring interger values
	myfile.open("infile.txt"); // opens the file
	year = get_year();
	starting_date = get_starting_date();
	cout << endl;
	print_heading(year);
	int count = 0;
	while (count < 12)	// while loop to count 12 times
	{
		cout << endl;
		cout << endl;
		month_name = read_month_name();
		num_day = read_num_days();
		starting_date = print_month(starting_date, num_day, month_name);
		count++;
	}
	system("pause");
}

int get_year() // value returning function for get year
{
	int year;
	cout << "Enter the year:" << endl;
	cin >> year;
	return year;
}

int get_starting_date() // value returnng function for start date
{
	int start_date;
	cout << "Enter the start date <0= Sun, 1 = Mon, 2 = Tues, \n 3 = Wed, 4 = Thurs, 5 = Fri, 6 = Sat>: ";
	cin >> start_date;
	return start_date;
}
void print_heading(int year) // value returnng fnction for printing heading
{
	cout << "\t\t\t YEAR -- "<< year << "\n" << endl;

}
string read_month_name() // value returning function for read month name
{
	string month;
	myfile >> month;
	return month;
}

int read_num_days()
{
	int num_day;
	myfile >> num_day;
	return num_day;
}

int print_month(int starting_date, int num_day, string month_name)
{
	cout <<"\t\t\t" << month_name << "\n " << endl;
	cout << "Sun:\tMon:\tTue:\tWed:\tThu:\tFri:\tSat:" << endl;
	int dayofweek;
	dayofweek = starting_date;
	for (starting_date; starting_date > 0; starting_date--)
	{
		cout << "\t";
	}

	int count = num_day;
	for (int x = 1; x < count; x++)
	{
		cout << x << "\t";
		dayofweek++;
		if (dayofweek % 7 == 0)
		{
			cout << endl;
			dayofweek = 0;
		}
		
	}
	return dayofweek;
}


//Enter the year :
//2010
//Enter the start date <0 = Sun, 1 = Mon, 2 = Tues,
//3 = Wed, 4 = Thurs, 5 = Fri, 6 = Sat> : 3
//
//YEAR-- 2010
//
//
//
//January
//
//Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//	  1       2       3       4
//	  5       6       7       8       9       10      11
//	  12      13      14      15      16      17      18
//	  19      20      21      22      23      24      25
//	  26      27      28      29      30
//
//	  February
//
//  Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//		1       2
//		3       4       5       6       7       8       9
//		10      11      12      13      14      15      16
//		17      18      19      20      21      22      23
//		24      25      26      27
//
//		March
//
//	Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//		  1       2       3
//		  4       5       6       7       8       9       10
//		  11      12      13      14      15      16      17
//		  18      19      20      21      22      23      24
//		  25      26      27      28      29      30
//
//		  April
//
//	  Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//			1
//			2       3       4       5       6       7       8
//			9       10      11      12      13      14      15
//			16      17      18      19      20      21      22
//			23      24      25      26      27      28      29
//
//
//			May
//
//		Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//			  1       2       3       4       5       6       7
//			  8       9       10      11      12      13      14
//			  15      16      17      18      19      20      21
//			  22      23      24      25      26      27      28
//			  29      30
//
//			  June
//
//		  Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//				1       2       3       4       5
//				6       7       8       9       10      11      12
//				13      14      15      16      17      18      19
//				20      21      22      23      24      25      26
//				27      28      29
//
//				July
//
//			Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//				  1       2       3       4
//				  5       6       7       8       9       10      11
//				  12      13      14      15      16      17      18
//				  19      20      21      22      23      24      25
//				  26      27      28      29      30
//
//				  August
//
//			  Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//					1       2
//					3       4       5       6       7       8       9
//					10      11      12      13      14      15      16
//					17      18      19      20      21      22      23
//					24      25      26      27      28      29      30
//
//
//					September
//
//				Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//					  1       2       3       4       5       6       7
//					  8       9       10      11      12      13      14
//					  15      16      17      18      19      20      21
//					  22      23      24      25      26      27      28
//					  29
//
//					  October
//
//				  Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//						1       2       3       4       5       6
//						7       8       9       10      11      12      13
//						14      15      16      17      18      19      20
//						21      22      23      24      25      26      27
//						28      29      30
//
//						November
//
//					Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//						  1       2       3       4
//						  5       6       7       8       9       10      11
//						  12      13      14      15      16      17      18
//						  19      20      21      22      23      24      25
//						  26      27      28      29
//
//						  December
//
//					  Sun : Mon : Tue : Wed : Thu : Fri : Sat :
//							1       2       3
//							4       5       6       7       8       9       10
//							11      12      13      14      15      16      17
//							18      19      20      21      22      23      24
//							25      26      27      28      29      30      