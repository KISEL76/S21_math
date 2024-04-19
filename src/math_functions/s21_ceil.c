#include "../s21_math.h"

long double s21_ceil(double x) {
  long double count = 0, result = 0;
  double x_tmp = 0;

  if (x == s21_INFINITY)
    result = s21_INFINITY;
  else if (x == -s21_INFINITY)
    result = -s21_INFINITY;
  else if (x != x)
    result = s21_NAN;

  else {
    if ((int)(x) == x)
      result = x;
    else {
      if (x < 0)
        x_tmp = (-1) * x;
      else
        x_tmp = x;

      while (count < x_tmp) count += 1;

      if (x < 0)
        result = (-1) * count + 1;
      else
        result = count;
    }
  }

  return result;
}
