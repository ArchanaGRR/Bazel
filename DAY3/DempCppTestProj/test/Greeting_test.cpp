#include "gtest/gtest.h"

#include "src/lib/Greeting.h"

 

TEST(GreetingShould, ReturnHelloBazel)

{

    Greeting *greet = new Greeting();

    std::string actual = greet->getGreetingMessage();

    std:: string expected = "Hello Bazel!";

    EXPECT_EQ(expected, actual);

}

 

TEST(GreetingShould1, ReturnHelloBazel1)

{

    Greeting *greet = new Greeting();

    std::string actual = greet->getGreetingMessage();

    std:: string expected = "Hello World!";

    EXPECT_EQ(expected, actual);

}
