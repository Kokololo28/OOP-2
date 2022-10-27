#include <iostream>
#include <string>
#define NL std::cout << '\n'
using namespace std;

class TimeController
{
private:
	int Hour;
	int Minute;
	int Second;
public:
	TimeController(int H, int M, int S)
	{
		Hour = H; Minute = M; Second = S;
	}

	TimeController() {}

	int getH()
	{
		return Hour;
	}

	int getM()
	{
		return Minute;
	}

	int getS()
	{
		return Second;
	}

	void setH(int H)
	{
		Hour = H;
	}

	void setM(int M)
	{
		Minute = M;
	}

	void setS(int S)
	{
		Second = S;
	}
};


class DataController
{
private:
	int Year;
	int Month;
	int Day;
public:
	DataController(int Y, int M, int D)
	{
		Year = Y; Month = M; Day = D;
	}

	DataController() {}

	int getY()
	{
		return Year;
	}

	int getM()
	{
		return Month;
	}

	int getD()
	{
		return Day;
	}

	void setY(int Y)
	{
		Year = Y;
	}

	void setM(int M)
	{
		Month = M;
	}

	void setD(int D)
	{
		Day = D;
	}
};

class DigitalWatch
{
private:
	TimeController A;
	DataController B;
	string Alarm;
public:
	void setAlarm(string Al)
	{
		Alarm = Al;
	}

	string getAlarm()
	{
		return Alarm;
	}

	void AlarmTrigger()
	{
		cout << "\tIT'S TIME TO GET UP ! ! ! " << getAlarm() << endl;
	}

	DigitalWatch(int Hour, int Minute, int Second, int Year, int Month, int Day) 
	{
		B.setD(Day);
		B.setM(Month);
		B.setY(Year);
		A.setH(Hour);
		A.setM(Minute);
		A.setS(Second);
	}

	void Display()
	{
		cout << "\tDate: " << B.getD() << "." << B.getM() << "." << B.getY() << endl;
		cout << "\tTime: " << A.getH() << ":" << A.getM() << ":" << A.getS() << endl;
	}
};

void main()
{
	DigitalWatch C(12, 27, 45, 2022, 10, 17); NL; NL; NL;
	C.Display();
	C.setAlarm(""); NL; NL;
	C.AlarmTrigger(); NL; NL; NL; NL; NL;
	system("pause");
}










