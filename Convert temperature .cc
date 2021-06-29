#include<iostream>
#include<conio.h>
 using namespace std ;
int main()
{
 z:{
    char from, to, b;
    double C, F, K, c, k, f  ;
     x:
        {
    cout << "What you convert?" << "\n for Celsius, type: c"  << "\n for Fahrenheit, type: f" << "\n for Kelvin, type: k" << endl;
    cin >> from;
    from = tolower(from);


    switch (from){
        case 'c':
            cout << "Enter the value of celsius: ";
        cin >> c;
            break;

        case 'f':
            cout << "Enter the value of Fahrenheit: ";
        cin >> f;
            break;

        case 'k':
             cout << "Enter the value of Kelvin: ";
        cin >> k;
            break;

        default :
            cout << "Please type only c/k/f "<< endl;
            goto x;
    }
        }

  y:{  cout << "Transfer to what? " << endl;
    cin >> to;
     to = tolower(to);
    if ((from == 'c')&&(to == 'f')){
         f = (1.8 * c) + 32;
         cout<< f <<"* Fahrenheit"<<endl;
          goto u;}
    else if ((from == 'c')&&(to == 'k')){
         k = c + 273;
         cout<< k << " Kelvin"<< endl;
        goto u;}

    else if ((from == 'f')&&(to == 'c')){
         c = (f-32)/1.8;
         cout<< c << " Celcius"<< endl;
         goto u;}
    else if ((from == 'f')&&(to == 'k')){
         k = (f-32)* 0.555+ 273.15;
         cout<< k << " Kelvin"<< endl;
         goto u;}
    else if ((from == 'k')&&(to == 'c')){
         c = (k-273.15);
         cout<< c << " Celcius"<< endl;
         goto u;}
    if ((from == 'k')&&(to == 'f')){
         f = (k - 273.15) * 1.8 + 32;
         cout<< f <<"* Fahrenheit"<<endl;
          goto u;}
    else {
        cout << "Please type only c/k/f "<< endl;
        goto y;}
 getch();
  }
 }
 u: {
         char b;
          cout<< "Do you want more Transaction? y/n "<< endl;
         cin >> b;
         if (b=='y'){
          goto z ;}
         }
}


