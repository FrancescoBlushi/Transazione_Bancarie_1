#include "gtest/gtest.h"
#include "../Operazioni_Finanziarie.h"
#include <string>
#include <fstream>


TEST(Operazioni_Finanziarie,Test_Prelievo){
    Client client("Isabel","Blu",22,305066,30500);
    Operazioni_Finanziarie op(client);
    op.Prelievo(500);
    EXPECT_DOUBLE_EQ(30000,client.getSaldo());
}
TEST(Operazioni_Finanziarie,Test_Versamento){
    Client client("Gabriele","D'Annunzio",65,306655,3000);
    Operazioni_Finanziarie op(client);
    op.Versamento("Lavoro",1000);
    EXPECT_EQ(4000,client.getSaldo());

}

TEST(Operazioni_Finanziarie,Test_Bonifico){
    Client client("Gabriele","D'Annunzio",65,306655,3000);
    Operazioni_Finanziarie op(client);
    op.Bonifico("Andrea",653266,1000);
    EXPECT_EQ(2000,client.getSaldo());

}