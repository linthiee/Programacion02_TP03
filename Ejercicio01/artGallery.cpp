#include "artGallery.h"

#include <fstream>
#include <string>
#include <conio.h>

ArtGallery::ArtGallery()
{
	filePaths[0] = "ASCII/axe.txt";
	filePaths[1] = "ASCII/bartSimpson.txt";
	filePaths[2] = "ASCII/laraCroft.txt";
	filePaths[3] = "ASCII/link.txt";
	filePaths[4] = "ASCII/lisaSimpson.txt";
	filePaths[5] = "ASCII/margeSimpson.txt";
	filePaths[6] = "ASCII/meowth.txt";
	filePaths[7] = "ASCII/pikachu.txt";
	filePaths[8] = "ASCII/surprised.txt";
	filePaths[9] = "ASCII/sword.txt";
}

ArtGallery::~ArtGallery()
{
}

void ArtGallery::saveFiles()
{
	for (int i = 0; i < totalFiles; i++)
	{
		std::ifstream file(filePaths[i]);
		std::string line;

		if (file.is_open())
		{
			while (std::getline(file, line))
			{
				docLines.push_back(line);
			}

			startExhibit(i);
			std::cin.get();
			file.close();
		}
	}
}

void ArtGallery::startExhibit(int lastPiece)
{
	for (int i = 0; i < docLines.size(); i++)
	{
		std::cout << docLines[i] << "\n";
	}
}
