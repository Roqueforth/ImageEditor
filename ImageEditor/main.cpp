#include <iostream>
#include "FileManager.h"
#include "EditableImage.h"
#include <SFML\Graphics.hpp>

int main(int argc, const char* argv[])
{
	std::cout << "launching ImageEditor" << std::endl;
	FileManager fileManager;
	EditableImage *testImage = fileManager.loadImage("test.bmp");
	sf::Color red(255, 0, 0);
	testImage->setPixel(1, 1, red);
	fileManager.saveImage(testImage, "test.bmp");
	while (1) {

	}
	std::cout << "closing ImageEditor" << std::endl;
}