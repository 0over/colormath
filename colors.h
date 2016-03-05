/*
 * colors.h
 * Part of https://github.com/1over/colormath by Andrii Buriachevskyi.
 * See LICENSE for details.
 */

#ifndef COLORS_H
#define COLORS_H

typedef unsigned char byte;

typedef struct rgb_s {
	byte r, g, b;
} rgb_t;

typedef struct xyz_s {
	double x, y, z;
} xyz_t;

typedef struct lab_s {
	double l, a, b;
} lab_t;

#endif /* COLORS_H */
