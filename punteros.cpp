#include <iostream>

using namespace std;

int arreglo[]={1,2,3,5};
int n2;
int *p;
int main(int argc, char** argv){
p=&arreglo[0];

cout<<"arreglo direcc"<< p<<endl;
cout<<"arreglo valor" << *p<<endl;
p++;
cout<<"arreglo valor" << *p<<endl;
return 0;
}

