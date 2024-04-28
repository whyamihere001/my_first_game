#include <iostream>
#include <cmath>
// Function to calculate the sum of two numbers
int calculateSum(int a, int b)
{
    return a + b;
}

// Function to display a message
void displayMessage()
{
    std::cout << "Hello from the displayMessage function!" << std::endl;
}
int main()
{
      // Call the calculateSum function and store the result in a variable
    int result = calculateSum(5, 3);

    // Display the result
    std::cout << "The sum is: " << result << std::endl;

    // Call the displayMessage function
    displayMessage();
    

    

    double x = 2.5;
    double resulta = std::sqrt(x);

    std::cout << "The square root of " << x << " is " << resulta << std::endl;

    return 0;
    displayMessage();
}
   
    

