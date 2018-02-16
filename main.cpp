//Mikołaj Brycki
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
double stopnie;
cout << "Podaj kat w stopniach: ";
cin >> stopnie;
double radiany =( stopnie * M_PI ) / 180.0f;
cout<< ""<<endl;
cout<<stopnie<<" stopni w radiantach wynosi: "<<radiany<<endl;
    return 0;
}

