#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float area, lado_a, lado_b, perimetro;
    printf ("Ingresa el valor de lado a: ");
    scanf ("%f", &lado_a);
    (void) getchar ();
    printf ("Ingresa el valor de lado b: ");
    scanf ("%f", &lado_b);
    (void) getchar ();
    area=lado_a*lado_b;
    perimetro=(lado_a+lado_b)*2;
    if(lado_a==lado_b)
        printf ("Es un cuadrado\n");
    else
        printf ("Es un rect\240ngulo\n");
    printf ("Valor de area: %g\n", area);
    printf ("Valor de perimetro: %g\n", perimetro);
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}