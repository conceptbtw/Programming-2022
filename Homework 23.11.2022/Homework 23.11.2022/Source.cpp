#include <iostream>
#include <string>

using namespace std;

enum Month 
{
	NONE,
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

string get_f(string str) 
{
	string f_part;
	for (int i = 0; i < 3; i++) 
	{
		f_part += tolower(str[i]);
	}
	return f_part;
}

Month str_to_m(string str) 
{
	string f = get_f(str);
	if (f == "jan") 
	{
		return JANUARY;
	}
	else if (f == "feb") 
	{
		return FEBRUARY;
	}
	else if (f == "mar") 
	{
		return MARCH;
	}
	else if (f == "apr") 
	{
		return APRIL;
	}
	else if (f == "may") 
	{
		return MAY;
	}
	else if (f == "jun") 
	{
		return JUNE;
	}
	else if (f == "jul") 
	{
		return JULY;
	}
	else if (f == "aug") 
	{
		return AUGUST;
	}
	else if (f == "sep") 
	{
		return SEPTEMBER;

	}
	else if (f == "oct") 
	{
		return OCTOBER;
	}
	else if (f == "nov") 
	{
		return NOVEMBER;
	}
	else if (f == "dec") 
	{
		return DECEMBER;
	}
}

string m_to_str(Month month) 
{
	if (month == JANUARY) 
	{
		return "January";
	}
	else if (month == FEBRUARY) 
	{
		return "February";
	}
	else if (month == MARCH) 
	{
		return "March";
	}
	else if (month == APRIL) 
	{
		return "April";
	}
	else if (month == MAY) 
	{
		return "May";
	}
	else if (month == JUNE) 
	{
		return "June";
	}
	else if (month == JULY) 
	{
		return "July";
	}
	else if (month == AUGUST) 
	{
		return "August";
	}
	else if (month == SEPTEMBER) 
	{
		return "September";
	}
	else if (month == OCTOBER) 
	{
		return "October";
	}
	else if (month == NOVEMBER) 
	{
		return "November";
	}
	else if (month == DECEMBER) 
	{
		return "December";
	}
}

void pairs(Month* months, int n)
{
	Month* u = new Month[n];
	int count = 0;
	bool flag = true;
	int k = 0;

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++) 
		{
			if (months[i] == u[j]) 
			{
				flag = false;
			}
		}

		if (flag) 
		{
			u[k] = months[i];
			k++;
		}
		flag = true;
	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			if (u[i] == months[j]) 
			{
				count++;
			}
		}

		if (count != 0) 
		{
			cout << m_to_str(u[i]) << " - " << count << endl;
		}
		count = 0;
	}
}

struct Date 
{
	unsigned int day;
	Month month;
	unsigned int year;

	void fday() 
	{
		if (day > 31) 
		{
			day = 31;
		}
		else if (day < 1) 
		{
			day = 1;
		}
	}

	int compare(Date other) 
	{
		long long summa1 = (year - 1) * 365 + (month - 1) * 31 + day;
		long long summa2 = (other.year - 1) * 365 + (other.month - 1) * 31 + other.day;
		return abs(summa1 - summa2);
	}

};

int main() 
{
	int n;
	cin >> n;
	/*Month* months = new Month[n];
	for (int i = 0; i < n; i++) 
	{
		string input;
		cin >> input;
		months[i] = str_to_m(input);
	}
	pairs(months,n);*/

	Date* dates = new Date[n];
	for (int i = 0; i < n; i++) 
	{
		Date date;
		string input;
		int day;
		cout << "ENTER DATE (DD MM YYYY)" << endl;
		cin >> date.day >> input >> date.year;
		date.month = str_to_m(input);
		date.fday();
		dates[i] = date;
	}

	Date date;
	string input;
	int day;
	cout << "ENTER CURRENT DATE (DD MM YYYY)" << endl;
	cin >> date.day >> input >> date.year;
	date.month = str_to_m(input);
	date.fday();

	Date mindate = dates[0];
	for (int i = 0; i < n; i++) 
	{
		if (mindate.compare(date) > date.compare(dates[i])) 
		{
			mindate = dates[i];
		}
	}

	cout << "THE CLOSEST DATE -> " << mindate.day << ' ' << m_to_str(mindate.month) << ' ' << mindate.year;

	return 0;
}