#include <cmath>
#include "operaciones.h"

double suma(double a, double b) {return a + b; }
double resta(double a, double b) {return a - b; }
double multiplicar(double a, double b) {return a * b; } 
double divion(double a, double b) {return b != 0 ? /b : NAN; }
double potencia(double base, double exp) {return pow(base, exp); }
double raiz(double x) {return x >= 0 ? sqrt(x) : NAN; }
double modulo(double a, double b) {return fmod(a, b); }
double porcentaje(double base, double prc) {return (base * porc) / 100.0;}