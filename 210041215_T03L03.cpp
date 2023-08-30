#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    int hours()
    {
        return hour;
    }

    int minutes()
    {
        return minute;
    }

    int seconds()
    {
        return second;
    }

    void reset(int h, int m, int s)
    {
        if (h >= 0 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
        {
            hour = h;
            minute = m;
            second = s;
        }
        else
        {
            cout << "Invalid time values. Time not reset." << endl;
        }
    }

    void advance(int h, int m, int s)
    {
        int totalSeconds = hour * 3600 + minute * 60 + second;
        totalSeconds += h * 3600 + m * 60 + s;

        hour = (totalSeconds / 3600) % 24;
        minute = (totalSeconds / 60) % 60;
        second = totalSeconds % 60;
    }g

    void print()
    {
        cout << "Time: " << hour << " hours, " << minute << " minutes, " << second << " seconds." << endl;
    }
};

int main()
{
    Time now;

    int h, m, s;

    cout << "Enter hour: ";
    cin >> h;

    cout << "Enter minute: ";
    cin >> m;

    cout << "Enter second: ";
    cin >> s;

    now.reset(h, m, s);
    now.print();

    cout << "Enter hours to advance: ";
    cin >> h;

    cout << "Enter minutes to advance: ";
    cin >> m;

    cout << "Enter seconds to advance: ";
    cin >> s;

    now.advance(h, m, s);
    now.print();

    return 0;
}
