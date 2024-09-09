#include <iostream>

using namespace std;
/*
currencies
    USD = 0.077
    EUR = 0.071
    CAD = 0.10
    JPY = 11.64
    AUD = 0.12

    */
float result = 0;

//Function for conversion
float currency(float gCedis, float bRate)
{
    result = gCedis * bRate;
   return result;
}

int main()

{

//User Option
int option;


//Rates for conversion
float usdrate = 0.077;
float eurrate = 0.071;
float cadrate = 0.10;
float jpyrate = 11.64;
float audrate = 0.12;



//Conversion Display
cout << "Convert from Ghana Cedis to " << endl;
cout << "1. USD" << endl;
cout << "2. EUR" << endl;
cout << "3. CAD" << endl;
cout << "4. JPY" << endl;
cout << "5. AUD" << endl;
cout << "Enter option(1 - 5): ";
   cin >> option;

//Variable Ghana Cedis
float gCedis;



//User option handler
 switch (option)
 {

 case 1:
    cout << "Enter Ghana Cedis: ";
    cin >> gCedis;
    cout << "New currency: USD " << currency(gCedis, usdrate);

    break;
 case 2:
    cout << "Enter Ghana Cedis: ";
    cin >> gCedis;
    cout << "New currency: EUR " << currency(gCedis, eurrate);

    break;
 case 3:
    cout << "Enter Ghana Cedis: ";
    cin >> gCedis;
    cout << "New currency: CAD " << currency(gCedis, cadrate);

    break;
 case 4:
    cout << "Enter Ghana Cedis: ";
    cin >> gCedis;
    cout << "New currency: JPY " << currency(gCedis, jpyrate);

    break;
 case 5:
    cout << "Enter Ghana Cedis: ";
    cin >> gCedis;
    cout << "New currency: AUD " << currency(gCedis, audrate);
    break;
 default:

    cout << "Wrong Input";
    break;
 }



    return 0;
}
