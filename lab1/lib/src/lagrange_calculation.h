#ifndef LAB1_LAGRANGE_CALCULATION_H
#define LAB1_LAGRANGE_CALCULATION_H

#include <vector>

/** @file */

/**
 * Строит интерполяционный полином в форме Лагранжа для функции,
 * заданной таблично, и вычисляет значения этого полинома в заданных точках.
 * @param points константная ссылка на вектор точек таблично-заданной функции,
 * для которой строится полином, с индексацией от 0.
 * @param values константная ссылка на вектор значений таблично-заданной функции,
 * для которой строится полином, с индексацией от 0.
 * @param calculationPoints константная ссылка на вектор точкек,
 * в которых вычисляются значения полинома Лагранжа.
 * @return Вектор значений интерполяционного полинома Лагранжа в заданных точках.
 */
const std::vector<double> calculateLagrangeValues(const std::vector<double> &points,
                                                  const std::vector<double> &values,
                                                  const std::vector<double> &calculationPoints);

#endif //LAB1_LAGRANGE_CALCULATION_H
