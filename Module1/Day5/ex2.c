#include <stdio.h>

typedef struct
{
   float real;
   float img;
} Complex;

Complex Scan_Complex()
{
   Complex c;
   printf("\nEnter the real part: ");
   scanf("%f", &c.real);
   printf("\nEnter the imaginary part: ");
   scanf("%f", &c.img);
   return c;
}

void Print_Complex(Complex c)
{
   printf("\nComplex number: %.2f + %.2fi\n", c.real, c.img);
}

Complex add_Complex(Complex c1, Complex c2)
{
   Complex sum;
   sum.real = c1.real + c2.real;
   sum.img = c1.img + c2.img;
   return sum;
}

Complex multiply_Complex(Complex c1, Complex c2)
{
   Complex product;
   product.real = c1.real * c2.real - c1.img * c2.img;
   product.img = c1.real * c2.img + c1.img * c2.real;
   return product;
}

int main()
{
   Complex num1, num2, sum, product;

   printf("Please enter first complex number:\n");
   num1 = Scan_Complex();

   printf("\nPlease enter second complex number:\n");
   num2 = Scan_Complex();

   sum = add_Complex(num1, num2);
   printf("\nSum of complex numbers: %.2f + %.2fi\n", sum.real, sum.img);

   product = multiply_Complex(num1, num2);
   printf("\nProduct of complex numbers: %.2f + %.2fi\n", product.real, product.img);

   return 0;
}