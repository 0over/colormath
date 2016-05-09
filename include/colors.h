/*
 * colors.h
 * Part of https://github.com/1over/colormath by Andrii Buriachevskyi.
 * See LICENSE for details.
 */

#ifndef COLORS_H
#define COLORS_H

#include <stdint.h>

typedef struct rgb_s {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} rgb_t;

typedef struct xyz_s {
	double x;
	double y;
	double z;
} xyz_t;

typedef struct lab_s {
	double l;
	double a;
	double b;
} lab_t;

#endif /* COLORS_H */
