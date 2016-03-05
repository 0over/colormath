#include "conversions.h"
#include <math.h>

xyz_t rgb2xyz( rgb_t value ) {
	double r = value.r / 255.0;
	double g = value.g / 255.0;
	double b = value.b / 255.0;

	if ( r > 0.04045 ) 
		r = pow( ( r + 0.055 ) / 1.055, 2.4 );
	else 
		r /= 12.92;

	if ( g > 0.04045 ) 
		g = pow( ( g + 0.055 ) / 1.055, 2.4 );
	else 
		g /= 12.92;

	if ( b > 0.04045 ) 
		b = pow( ( b + 0.055 ) / 1.055, 2.4 );
	else 
		b /= 12.92;

	r *= 100;
	g *= 100;
	b *= 100;

	xyz_t result;
	result.x = r * 0.4124 + g * 0.3576 + b * 0.1805;
	result.y = r * 0.2126 + g * 0.7152 + b * 0.0722;
	result.z = r * 0.0193 + g * 0.1192 + b * 0.9505;

	return result;
}

rgb_t xyz2rgb( xyz_t value ) {
	value.x /= 100;
	value.y /= 100;
	value.z /= 100;

	double r = value.x *  3.2406 + value.y * -1.5372 + value.z * -0.4986;
	double g = value.x * -0.9689 + value.y *  1.8758 + value.z *  0.0415;
	double b = value.x *  0.0557 + value.y * -0.2040 + value.z *  1.0570;

	if ( r > 0.0031308 )
		r = 1.055 * pow( r, 1 / 2.4 ) - 0.055;
	else
		r *= 12.92;

	if ( g > 0.0031308 )
		g = 1.055 * pow( g, 1 / 2.4 ) - 0.055;
	else
		g *= 12.92;

	if ( b > 0.0031308 )
		b = 1.055 * pow( b, 1 / 2.4 ) - 0.055;
	else
		b *= 12.92;

	rgb_t result;
	result.r = r * 255;
	result.g = g * 255;
	result.b = b * 255;

	return result;
}
