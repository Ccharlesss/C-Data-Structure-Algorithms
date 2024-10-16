#ifndef STACKS_H
#define STACKS_H

#include <iostream>
#include <vector>

using namespace std;

class Stack {
public:
    std::vector<int> pile;
    int* top;

    Stack(void);

    void push(int value);
    bool isEmpty(void);
    int pop(void);
    void peek(void);
    void destroy(void);
};

#endif
