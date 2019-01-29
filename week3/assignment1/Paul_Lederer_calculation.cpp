#include <iostream>
int main()
{
    double radius = 11;                       //centimeters
    const double PI = 3.14159265358979323846; //more exact value of pi
    double sphere_volume = (4 / 3) * PI * (radius * radius * radius);
    double surface_area = 4 * PI * radius * radius; //the correct equation for the surface area of a sphere
    // std::cout << "Volume = " << sphere_volume << " Area = " << surface_area;
    printf("Volume = %f Area = %f", sphere_volume, surface_area);
    return 0;
}
