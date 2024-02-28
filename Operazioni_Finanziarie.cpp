
#include "Operazioni_Finanziarie.h"

void Operazioni_Finanziarie::Bonifico(string Destinatario, int numero_conto, double import) {
    double nuovo_saldo=0;
    if(import>0 && import<=client.getSaldo()){
        nuovo_saldo=client.getSaldo()-import;
        client.setSaldo(nuovo_saldo);
        ofstream file(Destinatario+".txt");
        if(file.is_open()){
            file<<"Eseguito Bonifico"<<endl;
            file<<"Mittente: "<<client.getName()<<client.getSurname()<<endl;
            file<<"Destinatario:"<<Destinatario<<endl;
            file<<"Numero conto destinatario:"<< numero_conto<<endl;
            file<<"Importo:"<<import<<" euro"<<endl;
            file.close();
        }else{
            cerr<<"Il file non e' stato creato"<<endl;
        }
    }else{
        return;
    }

}

void Operazioni_Finanziarie::Versamento(string fonte,double importo) {
    double nuovo_saldo=0;
    if(importo>0){
        nuovo_saldo=client.getSaldo()+importo;
        client.setSaldo(nuovo_saldo);
        ofstream file(client.getName()+"_"+client.getSurname()+"_"+fonte+".txt");
        if(file.is_open()){
            file<<"Versamento sul numero di conto: "<<client.getConto()<<"cliente "<<client.getName()<<" "<<client.getSurname()<<endl;
            file<<"Importo versato : "<<importo<<endl;
            file<<"Nuovo Saldo dopo versamento: "<<client.getSaldo()<<endl;
            file.close();
        }else{
            return;
        }
    }

}

void Operazioni_Finanziarie::Prelievo(double importo) {
    double nuovo_saldo=0;
    if(importo>0 || importo<=client.getSaldo()){
        nuovo_saldo=client.getSaldo() - importo;
        client.setSaldo(nuovo_saldo);
        ofstream file("Prelievo.txt");
        if(file.is_open()){
            file<<"Prelievo del cliente:"<<client.getName()<<" "<<client.getSurname()<<endl;
            file<<"Numero di conto: "<<client.getConto()<<endl;
            file<<"Nuovo saldo: "<<client.getSaldo()<<endl;
            file.close();
        }
    }

}
