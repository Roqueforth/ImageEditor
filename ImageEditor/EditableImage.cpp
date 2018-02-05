#include "EditableImage.h"



EditableImage::EditableImage()
{
}


EditableImage::~EditableImage()
{
}

bool EditableImage::loadFromFile(std::string path, std::string inputPath)
{
	sf::Image *image1 = new sf::Image();
	sf::Image *image2 = new sf::Image();
	if (image1->loadFromFile(inputPath + "/" + path)
		&& image2->loadFromFile(inputPath + "/" + path)) {
		this->baseImage = image1;
		this->workingImage = image2;
		return true;
	}
	return false;
}

bool EditableImage::saveToFile(std::string path, std::string outputPath)
{
	sf::Image *image = this->workingImage;
	if (image == NULL) {
		return false;
	}
	if (image->saveToFile(outputPath + "/" + path)) {
		return true;
	}
	return false;
}

sf::Image * EditableImage::getBaseImage()
{
	return this->baseImage;
}

void EditableImage::setPixel(unsigned int x, unsigned int y, const sf::Color & color)
{
	if (this->workingImage == NULL) {
		return;
	}
	this->workingImage->setPixel(x, y, color);
}

sf::Color * EditableImage::getPixel(unsigned int x, unsigned int y)
{
	if (this->workingImage = NULL) {
		return NULL;
	}
	return &this->workingImage->getPixel(x, y);
}
