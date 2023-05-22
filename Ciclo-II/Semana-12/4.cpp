#include <iostream>
#include <cstring>

using namespace std;

union uni_1{

    int a;
    char cad[50];
};

int main(){
    uni_1 pw;
    strcpy(pw.cad, "María");
    pw.a = 100;

    cout << "Valor de pw.a: " << pw.a << endl;

    cout << "Tamaño en memoria: " << sizeof(pw.a) << "bytes" << endl;

    cout << "Valor de pw.cad: " << pw.cad << endl;

    cout << "Tamaño en memoria: " << sizeof(pw.cad) << "bytes" << endl;

    cout << "sizeof(uni_1): " << sizeof(uni_1) << "bytes" << endl;

    return 0;
}