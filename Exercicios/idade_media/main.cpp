#include <iostream>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;


    cout << "Dados da primeira pessoa: "<<endl;
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout<<"Digite dados da segunda pesso:" <<endl;
    cout<<"Nome: ";
    cin.ignore(INT_MAX, 'n');
    getline(cin,nome2);
    cout<<"Idade :";
    cin >> idade2;

    media = idade1 + idade2/ 2.0;

    cout << "A idade media de "<<nome1 <<" e " << nome2 << " eh de" << media << "anos" <<endl;

    return 0;
}
