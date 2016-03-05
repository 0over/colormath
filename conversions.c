#include "conversions.h"
#include <stdio.h>
#include <math.h>

xyz_t rgb2xyz( rgb_t value ) {
	double r = value.r / 255.0;
	double g = value.g / 255.0;
	double b = value.b / 255.0;

	if ( r > 0.04045 ) 
		r = pow( ( r + 0.055 ) / 1.055, 2.4 );
	else 
		r = r / 12.92;

	if ( g > 0.04045 ) 
		g = pow( ( g + 0.055 ) / 1.055, 2.4 );
	else 
		g = g / 12.92;

	if ( b > 0.04045 ) 
		b = pow( ( b + 0.055 ) / 1.055, 2.4 );
	else 
		b = b / 12.92;

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

}
