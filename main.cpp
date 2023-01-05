#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    stack S;
    createStack_1301213106(S);

    push_1301213106(S, 'I');
    push_1301213106(S, 'R');
    push_1301213106(S, 'I');
    push_1301213106(S, 'D');
    push_1301213106(S, 'A');
    push_1301213106(S, 'Y');
    push_1301213106(S, 'A');
    push_1301213106(S, 'C');
    push_1301213106(S, 'R');
    push_1301213106(S, 'E');
    push_1301213106(S, 'P');

    cout<<"Isi Stack di Awal : \n";
    printInfo_1301213106(S);


    pop_1301213106(S);
    pop_1301213106(S);
    pop_1301213106(S);
    pop_1301213106(S);
    pop_1301213106(S);
    pop_1301213106(S);
    pop_1301213106(S);


    cout<<"\n\nIsi Stack Sesudah pop :\n";
    printInfo_1301213106(S);
    return 0;
}
