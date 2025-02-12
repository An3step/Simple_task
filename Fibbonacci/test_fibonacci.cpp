// test_fibonacci.cpp
#include <gtest/gtest.h>
#include "Fibonacci.h"

// Тестируем метод getSequence
TEST(FibonacciTest, ReturnsCorrectSequence) {
    Fibonacci fib(5);
    std::vector<int> expected = { 0, 1, 1, 2, 3 };
    EXPECT_EQ(fib.getSequence(), expected);
}

TEST(FibonacciTest, ReturnsEmptyForZero) {
    Fibonacci fib(0);
    std::vector<int> expected = {};
    EXPECT_EQ(fib.getSequence(), expected);
}

// Тестирование protected метода
TEST(FibonacciTest, TestGenerate) {
    TestableFibonacci fib(5); // Используем вспомогательный класс
    EXPECT_EQ(fib.generate(0), 0);
    EXPECT_EQ(fib.generate(1), 1);
    EXPECT_EQ(fib.generate(2), 1);
    EXPECT_EQ(fib.generate(3), 2);
    EXPECT_EQ(fib.generate(4), 3);
}