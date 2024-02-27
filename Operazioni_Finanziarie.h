//
// Created by franc on 27/02/2024.
//

#ifndef TRANSAZIONE_BANCARIE_OPERAZIONI_FINANZIARIE_H
#define TRANSAZIONE_BANCARIE_OPERAZIONI_FINANZIARIE_H



#include "Client.h"
#include <fstream>
#include <iostream>


class Operazioni_Finanziarie {
public:
    explicit Operazioni_Finanziarie(Client& cliente): client(cliente) {}


    void Bonifico(string Destinatario,int numero_conto,double import);
    void Versamento(string fonte,double importo);
    void Prelievo(double importo);

private:
    Client& client;

};






#endif //TRANSAZIONE_BANCARIE_OPERAZIONI_FINANZIARIE_H
