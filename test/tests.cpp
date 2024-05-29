// Copyright 2024 Savchuk Anton

#include <gtest/gtest.h>
#include "alg.h"

TEST(CheckPrimeTest, HandlesSingleDigitPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
}

TEST(CheckPrimeTest, HandlesSingleDigitNonPrimes) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
}

TEST(CheckPrimeTest, HandlesLargePrimes) {
    EXPECT_TRUE(checkPrime(101));
    EXPECT_TRUE(checkPrime(103));
    EXPECT_TRUE(checkPrime(107));
    EXPECT_TRUE(checkPrime(109));
}

TEST(CheckPrimeTest, HandlesLargeNonPrimes) {
    EXPECT_FALSE(checkPrime(100));
    EXPECT_FALSE(checkPrime(102));
    EXPECT_FALSE(checkPrime(104));
    EXPECT_FALSE(checkPrime(105));
}

TEST(NPrimeTest, HandlesFirstPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NPrimeTest, HandlesLargerPrimes) {
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
}

TEST(NextPrimeTest, HandlesImmediateNextPrime) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(8), 11);
    EXPECT_EQ(nextPrime(14), 17);
}

TEST(NextPrimeTest, HandlesLargeValues) {
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(102), 103);
}

TEST(SumPrimeTest, HandlesSumOfPrimes) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(SumPrimeTest, HandlesLargeSumOfPrimes) {
    EXPECT_EQ(sumPrime(50), 328);
}

TEST(SumPrimeTest, HandlesSumOfPrimesBelowTwoMillion) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
