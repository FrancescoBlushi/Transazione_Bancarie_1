#include "gtest/gtest.h"
#include "../Client.h"
#include <string>
#include <fstream>
#include <memory>
using namespace std;

TEST(ClientTest, Creafile){
    Client client1("Gabriele","Tosi",22,60005,1500.30);
    client1.creaFile();
    std::ifstream file("Gabriele_Tosi.txt");
    ASSERT_TRUE(file.is_open());

}
TEST(ClientTest,Controllo){
    Client c("Isabel","Blushi",23,60006,2500.30);
    EXPECT_EQ(c.getName(),"Isabel");
    EXPECT_EQ(c.getSurname(),"Blushi");
    EXPECT_EQ(c.getAge(),23);
    EXPECT_EQ(c.getConto(),60006);
    EXPECT_EQ(c.getSaldo(),2500.30);
}
TEST(ClientTest,ControlloMemoria){
    unique_ptr <Client> clientPtr (new Client("Stefano","Rossi",65,60056,99900.3));
    EXPECT_NE(clientPtr, nullptr);
}
TEST(ClientTest,ControlloMemoria_Test){

    unique_ptr <Client> clientPtr (new Client("Stefano","Rossi",65,60056,99900.3));
    clientPtr.reset();
    EXPECT_EQ(clientPtr, nullptr);
}