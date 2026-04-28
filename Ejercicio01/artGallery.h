#pragma once
#include <iostream>
#include <vector>

class ArtGallery
{
private:

	static const int totalFiles = 10;
	std::string filePaths[totalFiles];
	std::vector<std::string> docLines;

public:

	ArtGallery();
	~ArtGallery();

	void saveFiles();
	void startExhibit(int lastPiece);
};

