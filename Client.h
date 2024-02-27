

#ifndef TRANSAZIONE_BANCARIE_CLIENT_H
#define TRANSAZIONE_BANCARIE_CLIENT_H
#include <iostream>
using namespace std;


class Client {
public:
    Client(string nome,string cognome,int eta,int nr_conto,double saldo=0) : name(nome),surname(cognome),age(eta),saldo(saldo),
    conto(nr_conto){
        if(age<18){
            cerr<<"L'eta del cliente deve essere maggiore o uguale a 18 anni"<<endl;
            return;
        }
        creaFile();

    }
    void creaFile()const ;
    void readFile(string& nomeFile) const;
private:
    string name;
public:
    const string &getName() const;

    const string &getSurname() const;

    int getAge() const;

    double getSaldo() const;

    int getConto() const;

private:
    string surname;
    int age;
    double saldo;
    int conto;


};


#endif //TRANSAZIONE_BANCARIE_CLIENT_H
