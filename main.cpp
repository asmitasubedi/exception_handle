#include <iostream>
#include "MyTime.h"
#include "OutofBoundException.h"

using namespace std;

MyTime nexttime(MyTime t1);
MyTime previoustime(MyTime t1);

int main()
{
	int hour,minute,second;
    MyTime t1;

    while(cout << "Enter hour, minute and second (HH:MM:SS): ")
    {
        cin>>hour>>minute>>second;
        try
        {
            t1.setTime(hour,minute,second);
            break;
        }
        catch(OutofBoundException &OutofBoundException){
            cout << "Exception Occurred! " << OutofBoundException.what() << endl;
        }
    }
    cout <<"The present time is: ";
    t1.toString();

    cout<< "\n\nThe next(afterwards) time will be:";
    t1=nexttime(t1);

    //cout<< "\n\nThe previous time was:";
    //t1=previoustime(t1);

}
MyTime nexttime(MyTime t1)
{
    t1.nextHour();

    t1.nextMinute();

    t1.nextSecond();
    t1.toString();
}
/*MyTime previoustime(MyTime t1)
{
    t1.previousHour();

    t1.previousMinute();

    t1.previousSecond();
    t1.toString();
}*/
