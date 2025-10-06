#include <stdio.h>  
#include <math.h>  
#include <locale.h> 

int main() {
    setlocale(LC_ALL, "Russian");
    
    double x = 4000;      // 0.4 × 10^4 = 4000
    double y = -0.875;
    double z = -0.000475;  // -0.475 × 10^-3 = -0.000475


    double part1 = fabs(cos(x) - cos(y));         // |cos(x) - cos(y)|
    double part2 = 1 + 2 * pow(sin(y), 2);     // (1 + 2 * sin^2(y))
    double part3 = (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4); 

    double w = pow(part1, part2) * part3;

    printf("Результат: w = %.4f\n", w);

    return 0;
}