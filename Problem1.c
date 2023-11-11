#include <stdio.h>
#include <math.h>

int main() {
    double d, theta;
    int m;


    printf("Enter the values of m : ");//order of diffraction
    scanf("%d", &m);
    printf("Enter the values of d : ");//distance between slits in micrometers
    scanf("%lf", &d);
    printf("Enter the values of theta : ");//angle of diffraction in degrees
    scanf("%lf", &theta);


    double theta_rad = theta * 0.0175;// Convert angle from degrees to radians


    double d_meters = d * 1e-6;// Convert d to meters (1 μm = 1e-6 m)


    double wavelength_nm = (d_meters * sin(theta_rad)) / m * 1e9;
    const char* colour;

    if (wavelength_nm >= 380 && wavelength_nm < 450)
        colour = "violet";
    else if (wavelength_nm >= 450 && wavelength_nm < 485)
        colour = "blue";
    else if (wavelength_nm >= 485 && wavelength_nm < 500)
        colour = "cyan";
    else if (wavelength_nm >= 500 && wavelength_nm < 565)
        colour = "green";
    else if (wavelength_nm >= 565 && wavelength_nm < 590)
        colour = "yellow";
    else if (wavelength_nm >= 590 && wavelength_nm < 625)
        colour = "orange";
    else if (wavelength_nm >= 625 && wavelength_nm <= 750)
        colour = "red";
    else
        colour = "unknown";

    printf("a. Wavelength: %.2f nm\n", wavelength_nm);
    printf("b. Colour: %s\n", colour);

    return 0;
}
