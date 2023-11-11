#include <stdio.h>
#include <math.h>

int main()
{
    double X = 530.0;  // Wavelength of green light in nm
    int m1 = 3;              // Order of the green light maximum
    double theta_1 = 65.0;    // Angle for the green light maximum in degrees

    double Y = 700.0;    // Wavelength of red light in nm
    int m2 = 2;                // Order of the red light maximum

    double theta_1_rad =  theta_1 * M_PI / 180.0;


    double d = (m1 * X) / sin(theta_1_rad);


    double theta_2_rad = asin((m2 * Y) / d);
    double theta_2 = theta_2_rad * 180.0 / M_PI;


    printf("The angle for the second-order bright spot for red light: %.2f degrees\n", theta_2);

    return 0;
}
