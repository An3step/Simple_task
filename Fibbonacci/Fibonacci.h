// Fibonacci.h
#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <vector>

template <typename T>
class IFibonacciGenerator {
public:
    virtual T generate(int index) = 0;
};

class Fibonacci : public IFibonacciGenerator<int> {
public:
    Fibonacci(int n) : n_(n) {}

    std::vector<int> getSequence();

protected:
    int generate(int index);

private:
    int n_;
};

std::vector<int> Fibonacci::getSequence() {
    std::vector<int> sequence;
    for (int i = 0; i < n_; ++i) {
        sequence.push_back(generate(i));
    }
    return sequence;
}

int Fibonacci::generate(int index) {
    if (index == 0) return 0;
    if (index == 1) return 1;
    return generate(index - 1) + generate(index - 2);
}

class TestableFibonacci : public Fibonacci {
public:
    TestableFibonacci(int n) : Fibonacci(n) {}
    using Fibonacci::generate;
};

#endif // FIBONACCI_H
