#ifndef EDITABLE_IMAGE
#define EDITABLE_IMAGE

#include <SFML\Graphics.hpp>
#include <iostream>

class EditableImage
{
private:
	sf::Image *baseImage;
	sf::Image *workingImage;
public:
	EditableImage();
	~EditableImage();
	bool loadFromFile(std::string filename, std::string inputImagePath);
	bool saveToFile(std::string filename, std::string outputPath);
	sf::Image *getBaseImage();
	void setPixel(unsigned int x, unsigned int y, const sf::Color & color);
	sf::Color *getPixel(unsigned int x, unsigned int y);
};

#endif