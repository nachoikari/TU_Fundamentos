
#include <iostream>
using namespace std;

int suma(int a, int b);

int suma(int a, int b) {
    int u = 0;
    cout << u << endl;
    return a + b;

}


void swap(int& x,int& z) {
    int auxiliar = x;
    x = z;
    z = auxiliar;
}


int main(){
    /*cout << suma(2, 2) << endl;
    cout << suma(3, 2) << endl;
    cout << suma(3, 3) << endl;*/
    int x = 6;
    int z = 8;
    swap(x, z);
    cout << x << "  " << z << endl;


    string nombre = "Isaac";
    for (int i = 0; i <= nombre.length() - 1;i++) {
        cout << nombre[i] << endl;
    }
    return 0;

}
