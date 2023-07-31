#include <iomanip>
#include "TeleCoColor.h"

void TelCoColorCoder::ShowColorCodeReference()
{
	std::cout << "----------------------------- " << std::endl;
	std::cout << " Color Code reference Manual " << std::endl;
	std::cout << "----------------------------- " << std::endl;
	std::cout << "PairNumber | MajorColor | MinorColor " << std::endl;

	int maxPairCount = TelCoColorCoder::numberOfMajorColors * TelCoColorCoder::numberOfMinorColors;

	for (int pairNumber = 1; pairNumber <= maxPairCount; ++pairNumber)
	{
		TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
		std::cout << std::setw(6) << pairNumber << " \t   | \t " << colorPair.ToString() << std::endl;
	}
}