#include <string>
#include "FileManager.h"

FileManager::FileManager()
{
	this->inputImagePath = DEFAULT_INPUT_IMAGE_PATH;
	this->outputImagePath = DEFAULT_OUTPUT_IMAGE_PATH;
}


FileManager::~FileManager()
{
}

EditableImage * FileManager::loadImage(std::string path)
{

	EditableImage *image = new EditableImage();
	if (image->loadFromFile(path, this->inputImagePath)) {
		std::cout << "successfully loaded image from path: " << this->inputImagePath << "/" << path << std::endl;
	}
	else {
		std::cout << "ERROR: failed to load image from path: " << this->inputImagePath << "/" << path << std::endl;
	}
	return image;
}

bool FileManager::saveImage(EditableImage * image, std::string path)
{
	if (image == NULL) {
		std::cout << "ERROR: image was null, so failed to save image to path: " << path << std::endl;
		return false;
	}
	if (image->saveToFile(path, this->outputImagePath)) {
		std::cout << "successfully saved image to path: " << path << std::endl;
		return true;
	}
	std::cout << "ERROR: failed to save image to path: " << this->outputImagePath << "/" << path << std::endl;
	return false;
}