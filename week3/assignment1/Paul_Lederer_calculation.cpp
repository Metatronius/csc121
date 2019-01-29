#include <iostream>
int main()
{
    double radius = 11; //centimeters
    const double PI = 3.14159265358979323846;
    double sphere_volume = (4 / 3) * PI * (radius * radius * radius);
    double surface_area = 4 * PI * radius * radius;
    printf("Volume = %f Area = %f", sphere_volume, surface_area);
    // std::cout << "Volume = " << sphere_volume << " Area = " << surface_area;
    return 0;
}
