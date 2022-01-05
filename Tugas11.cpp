#include <iostream>
using namespace std;

int area(int alas,int tinggi)
{
	cout<<"Luas Segitiga Adalah : "<<0.5*alas*tinggi<<endl;
	return 0;
}

int main()
{
    int a, t = 0;
    cout << "Inputkan alas segitita : ";
    cin >> a;
    cout << "Inputkan tinggi segitiga : ";
    cin >> t;
	area(a,t);
    return 0;
}


//Inputkan alas segitita : 10

//Inputkan tinggi segitiga : 20

//Luas Segitiga Adalah : 100
