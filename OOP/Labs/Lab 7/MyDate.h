#pragma once
class MyDate {
private:
	int day, month, year, hour, minute;

public:

	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setHour(int);
	void setMinute(int);

	int getDay()const;
	int getMonth()const;
	int getYear()const;
	int getHour()const;
	int getMinute()const;

	MyDate();
	MyDate(int , int , int , int , int);

	 
};