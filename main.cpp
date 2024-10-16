#include <iostream>
#include "stacks.h"

using namespace std;

int main() {
    Stack stack;
    
    // Example usage
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    stack.peek();  // Should print: 10, 20, 30,

    stack.pop();
    stack.peek();  // Should print: 10, 20,

    return 0;
}