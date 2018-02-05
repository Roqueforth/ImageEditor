#include "EditableImage.h"

#ifndef FILE_MANAGER
#define FILE_MANAGER
#include <iostream>

static const std::string DEFAULT_INPUT_IMAGE_PATH = "resources/input_images";
static const std::string DEFAULT_OUTPUT_IMAGE_PATH = "resources/output_images";

class FileManager
{
private:
	std::string inputImagePath;
	std::string outputImagePath;
public:
	FileManager();
	~FileManager();
	EditableImage *loadImage(std::string path);
	bool saveImage(EditableImage *image, std::string path);
};

#endif