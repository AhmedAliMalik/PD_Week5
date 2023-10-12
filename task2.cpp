#include<iostream>
using namespace std;

string pyramidVolume(float length, float width, float height, string unit){

    float volume;

    if (unit=="meters"){

        volume=(length*width*height)/3;

    }

    if (unit=="millimeters"){

        volume=((length*1000)*(width*1000)*(height*1000))/3;

    }

    if (unit=="centimeters"){

        volume=((length*100)*(width*100)*(height*100))/3;

    }

    if (unit=="kilometers"){

        volume=((length/1000)*(width/1000)*(height/1000))/3;

    } 

    return to_string(volume);

}

main(){

    float length, width, height, volume;
    string unit;

    cout<<"Enter the length of the pyramid (in meters): ";
        cin>>length;

    cout<<"Enter the height of the pyramid (in meters): ";
        cin>>height;

    cout<<"Enter the width of the pyramid (in meters): ";
        cin>>width;

    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
        cin>>unit;

    
    pyramidVolume(length,width,height,unit);

    cout<<"The volume of the pyramid is: "<<pyramidVolume(length,width,height,unit)<<" cubic "<<unit;

}