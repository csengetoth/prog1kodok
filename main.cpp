#include <iostream>
#include "mlp.hpp"
#include "png++/png.hpp"

int main( int argc, char **argv)
{
	png::image <png::rgb_pixel> png_image ( argv[1] ); //az első paramétere a fv-nek és abból kivesszük az RGB pixeleket
	int size = png_image.get_width() *png_image.get_height();  //pixelek szélessege * hosszusaga

	Perceptron* p = new Perceptron ( 3, size, 256, 1); //neuralis háló létrehozása 3 réteg

	double* image=new double[size];
	for( int i{0}; i<png_image.get_width(); ++i)
		for( int j{0}; j<png_image.get_height(); ++j )
			image[i*png_image.get_width() +j] = png_image[i][j].red;

	double value = (*p) (image);

	std::cout<< value<< std::endl;

	delete p;
	delete [] image; 

}

