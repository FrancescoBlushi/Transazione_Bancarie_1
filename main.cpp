#include <iostream>
#include "Client.h"
#include "Operazioni_Finanziarie.h"

int main() {

    Client client1("Gabriele","D'Annunzio",60,651232,3500);
    Operazioni_Finanziarie Opcliente1(client1);
    client1.readFile("Gabriele_D'Annunzio.txt");


    Opcliente1.Bonifico("Romeo",500030,500);
    Opcliente1.ReadFile("Romeo.txt");




    return 0;
}
