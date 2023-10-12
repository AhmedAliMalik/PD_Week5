#include<iostream>
using namespace std;


string projectTimeCalculation(float hours, float days, int workers){

    int hours_have=((days*0.9)*10)*workers;
    int needed_hours=hours-hours_have;
    int hours_left=hours_have-hours;

    if (hours_have<hours){

       return "Not enough time! "+to_string(needed_hours)+" hours needed."; 

    }

    if (hours_have>=hours){

        return "Yes!"+to_string(hours_left)+" hours left.";

    }

}


main(){

    float hours, days;
    int workers;
    
    
    cout<<"Enter the needed hours: ";
        cin>>hours;

    cout<<"Enter the days that the firm has: ";
        cin>>days;

    cout<<"Enter the number of all workers: ";
        cin>>workers;
    
    cout<<projectTimeCalculation(hours,days,workers);
    
    }