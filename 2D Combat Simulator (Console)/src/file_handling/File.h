#pragma once
#include "../Definitions.h"

class File
{
public:
	File(conststr filename);
	~File();

	void Read();
	std::string GetContents();
	std::string& GetContentsAsRef();

private:
	std::string Filename;
	std::string Contents;
};

