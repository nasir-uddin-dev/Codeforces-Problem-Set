// https://codeforces.com/contest/1950/problem/C
// Clock Conversion
// Given the time in 24-hour format, output the equivalent time in 12-hour format.
//   24-hour format divides the day into 24 hours from 00 to 23, each of which has 60 minute's from 00 to 59.
//   12-hour format divides the day into two halves : the first half is AM, and the second half is PM. In each half, the hours are numbered in the order 12, 01, 02, 03,...., 11. Each hour has 60 minutes numbered from 00 to 59.

// Input
// The only line of each test case contains a string s of length 5 with format hh:mm representing a valid time in the 24-hour format, hh represents the hour from 00 to 23, and mm represents the minute from 00 to 59.
// The input will always be a valid time in 24-hour format.

// Output
// For each test case, output two strings separated by a space ("hh:mm AM" or "hh:mm PM"), which are the 12-hour equivalent to the time provided in the test case (without quotes).
// You should output the time exactly as indicated; in particular, you should not remove leading zeros.

// AM(ante meridiem) : Refers to the time period from midnight (12:00 AM) to noon (12:00 PM).
// PM(post meridiem) : Refers to the time period from noon (12:00 PM) to midnight (12:00 AM).

// From 24-hour format to 12-hour format, the minutes are the same. For the hours :
//   If hh is 00, then it should become 12 AM.
//   If hh is from 01 to 11, then it should become hh AM.
//   If hh is 12, then it should become 12 PM.
//   If hh is from 13 to 23, then it should become (hh - 12) PM.
// A fast way to implement this : replace the hours h by h mod 12, and if this value is 0, set it to 12, Be careful to handle the case when h and m are single digits.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hour24, minute;
        char colon; // to read the colon between hour and minute

        // Input format: HH:MM (24-hour)
        cin >> hour24 >> colon >> minute;

        string period; // AM or PM
        int hour12;

        if (hour24 == 0)
        { // midnight
            hour12 = 12;
            period = "AM";
        }
        else if (hour24 < 12)
        { // morning
            hour12 = hour24;
            period = "AM";
        }
        else if (hour24 == 12)
        { // noon
            hour12 = 12;
            period = "PM";
        }
        else
        { // afternoon/evening
            hour12 = hour24 - 12;
            period = "PM";
        }

        // Output with leading zeros for minutes
        cout << setw(2) << setfill('0') << hour12 << ":"
             << setw(2) << setfill('0') << minute << " " << period << endl;
    }
    return 0;
}