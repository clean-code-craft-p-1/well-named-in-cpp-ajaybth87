#include <iomanip>
#include "TeleCoColor.h"

int TelCoColorCoder::ShowColorCodeReference()
{
	int maxPairCount = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;
	int pairNumber = 1;
	std::cout << "---------------------------------------- " << std::endl;
	std::cout << maxPairCount<< " Color Code reference Manual " << std::endl;
	std::cout << "---------------------------------------- " << std::endl;
	std::cout << "Pair Number| Major Color | Minor Color " << std::endl;
	std::cout << "---------------------------------------- " << std::endl;
	for (; pairNumber <= maxPairCount; ++pairNumber)
	{
		TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
		std::cout << std::setw(6) << pairNumber << " \t   | \t " << colorPair.ToString() << std::endl;
		if (0 == (pairNumber % numberOfMajorColors))
		{
			std::cout << "---------------------------------------- " << std::endl;
		}
	}
	return pairNumber - 1;
}