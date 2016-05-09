/*
 * conversions.h
 * Part of https://github.com/1over/colormath by Andrii Buriachevskyi.
 * See LICENSE for details.
 */

#ifndef CONVERSIONS_H
#define CONVERSIONS_H

#include "colors.h"

xyz_t rgb2xyz( rgb_t value );
rgb_t xyz2rgb( xyz_t value );
lab_t xyz2lab( xyz_t value );
xyz_t lab2xyz( lab_t value );

#endif /* CONVERSIONS_H */
