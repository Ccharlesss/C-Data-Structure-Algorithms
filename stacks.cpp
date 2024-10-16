#include "stacks.h"

// Constructor
Stack::Stack(void) : top(nullptr) {}

// =============================================== - Push method - =============================================================
// Time complexity: O(1)
void Stack::push(int value) {
    // 1) Append an int at the top of the stack
    pile.push_back(value);
    // 2) Set the pointer to the top of the stack by holding its reference
    top = &pile.back();
}

// =============================================== - isEmpty method - ==========================================================
// Time complexity: O(1)
bool Stack::isEmpty(void) {
    // 1) Assess if the stack is empty by looking at what the top points to
    if (top == nullptr) {
        throw std::out_of_range("Stack is empty. Cannot pop from an empty stack.");
        return true;
    }
    return false;
}

// =============================================== - Pop method - ===============================================================
// Time complexity: O(1)
int Stack::pop(void) {
    // 1) Assess whether the stack is empty:
    if (isEmpty()) {
        return 0;
    }

    // 2) Remove and return the element on top of the stack:
    int element_popped = *top;
    pile.pop_back(); // Remove the top element

    // 3) Update the top pointer
    if (!isEmpty()) {
        top = &pile.back();
    } else {
        top = nullptr;
    }

    // 4) Return the popped element
    return element_popped;
}

// =============================================== - Peek method - ===============================================================
// Time complexity: O(n)
void Stack::peek(void) {
    // 1) Assess whether the stack is empty:
    if (isEmpty()) {
        return;
    }

    std::cout << "Content of the stack: ";
    for (std::size_t i = 0; i < pile.size(); i++) {
        std::cout << pile[i] << ", ";
    }
    std::cout << std::endl;
}

// =============================================== - Destructor method - ==========================================================
// Time complexity: O(n)
void Stack::destroy(void) {
    // 1) Assess whether the stack is empty:
    if (isEmpty()) {
        return;
    }

    // 2) Destroy the stack (remove all spaces allocated to elements)
    pile.clear();
    top = nullptr;  // Set the top pointer to null
}
