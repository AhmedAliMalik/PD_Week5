#include<iostream>
using namespace std;

float taxCalculator(char code, float price){

    float final_price, tax_amount;

    if (code=='M'){

        final_price=price+(price*0.06);
    }

    if (code=='E'){

        final_price=price+(price*0.08);

    }

    if (code=='S'){

        final_price=price+(price*0.10);

    }

    if (code=='V'){

        final_price=price+(price*0.12);

    }

    if (code=='T'){

        final_price=price+(price*0.15);

    }

    return final_price;
}


main(){

    char code;
    float price,answer;


    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
        cin>>code;

    cout<<"Enter the price of the vehicle: $";
        cin>>price;


    answer=taxCalculator(code, price);

    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<answer;


}
