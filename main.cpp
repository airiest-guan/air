#include <iostream>

// Function to calculate the surface area of a rectangular prism
double calculateRectangularPrismSurfaceArea(double length, double width, double height) {
    double surfaceArea = 2.0 * (length * width + width * height + height * length);
    return surfaceArea;
}

int main() {
    double length, width, height;

    // Get the dimensions from the user
    std::cout << "Enter the length of the rectangular prism: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangular prism: ";
    std::cin >> width;

    std::cout << "Enter the height of the rectangular prism: ";
    std::cin >> height;

    // Calculate and display the surface area of the rectangular prism
    double surfaceArea = calculateRectangularPrismSurfaceArea(length, width, height);

    std::cout << "Surface area of the rectangular prism: " << surfaceArea << std::endl;

    return 0;
}
