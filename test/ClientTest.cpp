#include "gtest/gtest.h"
#include "../Client.h"
#include <string>
#include <fstream>
#include <memory>
using namespace std;

TEST(Client, Creafile){
    Client client1("Gabriele","Tosi",22,60005,1500.30);
    client1.creaFile();
    ifstream file("Gabriele_Tosi.txt");
    ASSERT_TRUE(file.is_open());

}
TEST(Client,Controllo){
    Client c("Isabel","Blu",23,60006,2500.30);
    EXPECT_EQ(c.getName(),"Isabel");
    EXPECT_EQ(c.getSurname(),"Blu");
    EXPECT_EQ(c.getAge(),23);
    EXPECT_EQ(c.getConto(),60006);
    EXPECT_EQ(c.getSaldo(),2500.30);
}
TEST(Client,ControlloMemoria){
    unique_ptr <Client> clientPtr (new Client("Stefano","Maestro",65,60056,99900.3));
    EXPECT_NE(clientPtr, nullptr);
}
TEST(Client,ControlloMemoria_Test){

    unique_ptr <Client> clientPtr (new Client("Stefano","Maestro",65,60056,99900.3));
    clientPtr.reset();
    EXPECT_EQ(clientPtr, nullptr);
}