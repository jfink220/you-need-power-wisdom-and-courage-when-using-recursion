#include "TriangleNumberCalculator.hpp"
#include <string>

int TriangleNumberCalculator::value(int n){
   return (n==1) ? 1 : n+value(n-1);
}
int TriangleNumberCalculator::add(int n, int m){
   return value(n)+value(m);
}
int TriangleNumberCalculator::subtract(int n, int m){
   return value(n)-value(m);
}
int TriangleNumberCalculator::multiply(int n, int m){
   return value(n)*value(m);
}
double TriangleNumberCalculator::divide(int n, int m){
   return static_cast<double>(value(n))/value(m);
}
