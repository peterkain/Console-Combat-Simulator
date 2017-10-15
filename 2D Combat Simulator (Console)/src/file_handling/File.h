#pragma once
#include "../Definitions.h"
#include <vector>

class File
{
public:
	File(conststr_ref filename);
	~File();

	void Read();
	std::vector<std::string> GetContents();
	std::vector<std::string>& GetContentsAsRef();

private:
	std::string Filename;
	std::vector<std::string> Contents;
};

