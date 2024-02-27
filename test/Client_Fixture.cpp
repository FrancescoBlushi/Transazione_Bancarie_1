#include "gtest/gtest.h"
#include "../Client.h"

#include <string>

#include <memory>
using namespace std;

class SuiteClient : public ::testing::Test {
protected:
    void SetUp() override{

    }
    Client client;

};

TEST_F(SuiteClient,DefaultCostructor){
    EXPECT_EQ("Nome",client.getName());
    EXPECT_EQ("Cognome",client.getSurname());
    EXPECT_EQ(18,client.getAge());
    EXPECT_EQ(0,client.getConto());
    EXPECT_EQ(0,client.getSaldo());
}
