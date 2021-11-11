#include "gtest/gtest.h"
#include "src/lib/dio/dio.h"

//using namespace dhi;

// test init
GTEST_TEST( DIO_TEST, Test_Init ) {
    //ASSERT_NO_THROW(dio::Init(kDIO0.BOARD, kInput));
    //ASSERT_NO_THROW(dio::Init(kDIO1.BOARD, kOutput));
    ASSERT_NO_THROW(pinMode(0,0));

};

// test write
GTEST_TEST( DIO_TEST, Test_Write ) {
    EXPECT_EQ(1,1);
    ASSERT_EQ(1,1);
    std::cout << "Just to be sure this is executed..." << std::endl;
};

// test read
GTEST_TEST( DIO_TEST, Test_Read ) {
    EXPECT_EQ(1,1);
    ASSERT_EQ(1,1);
    std::cout << "Just to be sure this is executed..." << std::endl;
};

