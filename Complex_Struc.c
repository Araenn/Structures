/* It is desired to manipulate complex numbers in a program, 
with the following functions performing the calculations of the addition and multiplication of two complexes, respectively, 
and the calculations of the modulus and argument of a complex. */


#include <stdio.h>
#include <math.h>

typedef struct {

    double re;
    double im;

} complexe ;

complexe sum(complexe x, complexe y){
    complexe z;
    z.re = x.re + y.re;
    z.im = x.im + y.im;
    return z;
}
complexe multiplication(complexe x,complexe y){
    complexe z;
    z.re = x.re * y.re;
    z.im = x.im * y.im;
    return z;
}
double modul(complexe x){
    return sqrt(pow(x.re, 2) + pow(x.im, 2));
}
double argument(complexe x){
    return atan(x.im / x.re);
}

main(){

    complexe x, y, a, b;
    double arg, mod;
    
    printf("Write the x complexe : ");
    scanf("%lf + i%lf", &x.re, &x.im);
    printf("Write the y complexe : ");
    scanf("%lf + i%lf", &y.re, &y.im);

    a = sum(x, y);
    b = multiplication(x, y);
    arg = argument(x);
    mod = modul(x);

    printf("The sum of the two complexes is : %lf + i%lf\n", a.re, a.im);
    printf("The multiplication of the two complexes is : %lf + i%lf\n", b.re, b.im);
    printf("The argument of x is : %lf\n", arg);
    printf("The modul of x is : %lf\n", mod);  
  
  /* A complex number x is conventionally denoted x = a + ib where a and b are two real numbers that 
  are the real and imaginary parts respectively. A complex number can therefore be simply
  seen as a data of dimension 2 (such as a point of the plan). */

    return 0;
}
