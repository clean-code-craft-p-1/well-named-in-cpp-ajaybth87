#ifndef TELCOCOLOR_H
#define TELCOCOLOR_H

#include <iostream>

namespace TelCoColorCoder
{
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;

    class ColorPair {
    private:
        TelCoColorCoder::MajorColor majorColor;
        TelCoColorCoder::MinorColor minorColor;
    public:
        ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);
        ~ColorPair();
        MajorColor getMajor();
        MinorColor getMinor();
        std::string ToString();
    };

        ColorPair GetColorFromPairNumber(int);
        int GetPairNumberFromColor(MajorColor, MinorColor);
        int ShowColorCodeReference();
}
#endif  // !TELCOCOLOR_H