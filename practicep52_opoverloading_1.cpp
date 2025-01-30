// #include <iostream>
// using namespace std;

// class abc{
//     private:
//     int x;
//     int y;
//     int z;
//     public:
//     abc(int x, int y, int z){
//         this->x=x;
//         this->y=y;
//         this->z=z;

//     };
//     void display(){
//         cout<<x<<" ";
//         cout<<y<<" ";
//         cout<<z<<" "<<endl;
//     };
//     void operator-(){
//         x=-x;
//         y=-y;
//         z=-z;
//     };
// };

// int main(){
//     abc obj(10,20,30);
//     cout<<"Before operator: ";
//     obj.display();
//     cout<<endl;
//     -obj;
//     cout<<"After operator: ";
//     obj.display();
//     cout<<endl;
//     return 0;
// }

#include <iostream>
#include <cmath> // for M_PI
using namespace std;

class Circle {
    private:
        double radius;
    
    public:
        // Constructor to initialize the radius
        Circle(double r) {
            radius = r;
        }

        // Function to calculate the area of the circle
        double area() const {
            return M_PI * radius * radius;
        }

        // Overload + operator to add the areas of two circles
        double operator+(const Circle& c) {
            return this->area() + c.area();
        }
};

int main() {
    // Create two circle objects with different radii
    Circle circle1(5.0);  // Circle with radius 5
    Circle circle2(3.0);  // Circle with radius 3

    // Calculate and display the sum of their areas
    double totalArea = circle1 + circle2;
    
    cout << "Sum of areas of the two circles: " << totalArea << endl;

    return 0;
}
