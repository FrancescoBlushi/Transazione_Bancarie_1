#include <fstream>
#include "Client.h"

void Client::creaFile() const {
    ofstream myfile(name + "_"+surname + ".txt");
    if(myfile.is_open()){
        myfile<<"Nome : "<<name<<endl;
        myfile<<"Cognome : "<<surname<<endl;
        myfile<<"Eta: "<<age<<endl;
        myfile<<"Numero conto: "<<conto<<endl;
        myfile<<"Saldo: "<<saldo<<endl;
        myfile.close();
    }
    else{
        cerr<<"Errore: Il file non si apre"<<endl;
    }

}

void Client::readFile(string &nomeFile) const {
    {
        ifstream file(nomeFile);
        if(file.is_open()){
            string riga;
            while(getline(file,riga)){
                cout<<riga<<endl;
            }
            file.close();
        }
        else{
            cerr<<"Errore: File non aperto"<<endl;
        }
    }

}

const string &Client::getName() const {
    return name;
}

const string &Client::getSurname() const {
    return surname;
}

int Client::getAge() const {
    return age;
}

double Client::getSaldo() const {
    return saldo;
}

int Client::getConto() const {
    return conto;
}

void Client::setName(const string &name) {
    Client::name = name;
}

void Client::setSurname(const string &surname) {
    Client::surname = surname;
}

void Client::setAge(int age) {
    Client::age = age;
}

void Client::setSaldo(double saldo) {
    Client::saldo = saldo;
}

void Client::setConto(int conto) {
    Client::conto = conto;
}
