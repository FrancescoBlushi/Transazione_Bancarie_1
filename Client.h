

#ifndef TRANSAZIONE_BANCARIE_CLIENT_H
#define TRANSAZIONE_BANCARIE_CLIENT_H
#include <iostream>
using namespace std;


class Client {
public:
    Client(string nome="Nome",string cognome="Cognome",int eta=18,int nr_conto=0,double saldo=0) : name(nome),surname(cognome),age(eta),saldo(saldo),
    conto(nr_conto){
        if(age<18){
            cerr<<"L'eta del cliente deve essere maggiore o uguale a 18 anni"<<endl;
            return;
        }
        creaFile();

    }
    void creaFile()const ;
    void readFile(string& nomeFile) const;

public:
    const string &getName() const;

    const string &getSurname() const;

    int getAge() const;

    double getSaldo() const;

    int getConto() const;

private:
    string name;
public:
    void setName(const string &name);

    void setSurname(const string &surname);

    void setAge(int age);

    void setSaldo(double saldo);

    void setConto(int conto);

private:
    string surname;
    int age;
    double saldo;
    int conto;


};


#endif //TRANSAZIONE_BANCARIE_CLIENT_H
