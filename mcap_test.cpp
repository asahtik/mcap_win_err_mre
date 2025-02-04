#include <iostream>
#include "mcap/reader.hpp"

using namespace std;

int main()
{
	string path = "file.mcap";
	mcap::McapReader reader;
	{
		const auto res = reader.open(path);
		if (!res.ok()) {
			std::cerr << "Failed to open " << path << " for reading: " << res.message
				<< std::endl;
			return 1;
		}
	}
	reader.close();
	return 0;
}
