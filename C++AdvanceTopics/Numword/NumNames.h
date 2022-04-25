#ifndef _NUM_NAMES_H_
#define _NUM_NAMES_H_

#include <iostream>
#include <cstring>
#include <string>
#include <inttypes.h>

namespace bw
{
	class NumNames
	{
		char _num1[15]             =	 "one";
		char _num2[15]             =	 "two";
		char _num3[15]             =	 "three";
		char _num4[15]             =	 "four";
		char _num5[15]             =	 "five";
		char _num6[15]             =	 "six";
		char _num7[15]             =	 "seven";
		char _num8[15]             =	 "eight";
		char _num9[15]             =	 "nine";
		char _num10[15]            =	 "ten";
		char _num11[15]            =	 "eleven";
		char _num12[15]            =	 "twelve";
		char _num13[15]            =	 "thirteen";
		char _num14[15]            =	 "fourteen";
		char _num15[15]            =	 "fifteen";
		char _num16[15]            =	 "sixteen";
		char _num17[15]            =	 "seventeen";
		char _num18[15]            =	 "eighteen";
		char _num19[15]            =	 "nineteen";
		char _num20[15]            =	 "twenty";
		char _num21[15]            =	 "twenty-one";
		char _num22[15]            =	 "twenty-two";
		char _num23[15]            =	 "twenty-three";
		char _num24[15]            =	 "twenty-four";
		char _num25[15]            =	 "twenty-five";
		char _num26[15]            =	 "twenty-six";
		char _num27[15]            =	 "twenty-seven";
		char _num28[15]            =	 "twenty-eight";
		char _num29[15]            =	 "twenty-nine";
		char _num30[15]            =	 "thirty";
		char _num31[15]            =	 "thirty-one";
		char _num32[15]            =	 "thirty-two";
		char _num33[15]            =	 "thirty-three";
		char _num34[15]            =	 "thirty-four";
		char _num35[15]            =	 "thirty-five";
		char _num36[15]            =	 "thirty-six";
		char _num37[15]            =	 "thirty-seven";
		char _num38[15]            =	 "thirty-eight";
		char _num39[15]            =	 "thirty-nine";
		char _num40[15]            =	 "forty";
		char _num41[15]            =	 "forty-one";
		char _num42[15]            =	 "forty-two";
		char _num43[15]            =	 "forty-three";
		char _num44[15]            =	 "forty-four";
		char _num45[15]            =	 "forty-five";
		char _num46[15]            =	 "forty-six";
		char _num47[15]            =	 "forty-seven";
		char _num48[15]            =	 "forty-eight";
		char _num49[15]            =	 "forty-nine";
		char _num50[15]            =	 "fifty";
		char _num51[15]            =	 "fifty-one";
		char _num52[15]            =	 "fifty-two";
		char _num53[15]            =	 "fifty-three";
		char _num54[15]            =	 "fifty-four";
		char _num55[15]            =	 "fifty-five";
		char _num56[15]            =	 "fifty-six";
		char _num57[15]            =	 "fifty-seven";
		char _num58[15]            =	 "fifty-eight";
		char _num59[15]            =	 "fifty-nine";
		char _num60[15]            =	 "sixty";
		char _num61[15]            =	 "sixty-one";
		char _num62[15]            =	 "sixty-two";
		char _num63[15]            =	 "sixty-three";
		char _num64[15]            =	 "sixty-four";
		char _num65[15]            =	 "sixty-five";
		char _num66[15]            =	 "sixty-six";
		char _num67[15]            =	 "sixty-seven";
		char _num68[15]            =	 "sixty-eight";
		char _num69[15]            =	 "sixty-nine";
		char _num70[15]            =	 "seventy";
		char _num71[15]            =	 "seventy-one";
		char _num72[15]            =	 "seventy-two";
		char _num73[15]            =	 "seventy-three";
		char _num74[15]            =	 "seventy-four";
		char _num75[15]            =	 "seventy-five";
		char _num76[15]            =	 "seventy-six";
		char _num77[15]            =	 "seventy-seven";
		char _num78[15]            =	 "seventy-eight";
		char _num79[15]            =	 "seventy-nine";
		char _num80[15]            =	 "eighty";
		char _num81[15]            =	 "eighty-one";
		char _num82[15]            =	 "eighty-two";
		char _num83[15]            =	 "eighty-three";
		char _num84[15]            =	 "eighty-four";
		char _num85[15]            =	 "eighty-five";
		char _num86[15]            =	 "eighty-six";
		char _num87[15]            =	 "eighty-seven";
		char _num88[15]            =	 "eighty-eight";
		char _num89[15]            =	 "eighty-nine";
		char _num90[15]            =	 "ninety";
		char _num91[15]            =	 "ninety-one";
		char _num92[15]            =	 "ninety-two";
		char _num93[15]            =	 "ninety-three";
		char _num94[15]            =	 "ninety-four";
		char _num95[15]            =	 "ninety-five";
		char _num96[15]            =	 "ninety-six";
		char _num97[15]            =	 "ninety-seven";
		char _num98[15]            =	 "ninety-eight";
		char _num99[15]            =	 "ninety-nine";
		char _num100[15]           =	 "hundred";
		char _num1000[15]          =	 "thousend";
		char _num1000000[15]       =	 "million";
		char _num1000000000[15]    =	 "billion";
		char _num1000000000000[15] =	 "trillion";
		char _and[8]               =	 "-and-";
		char _numBuffer[30];
		char _numWord[200];
		char _error[10] = "Error";
		unsigned int numLength;

	public:
		char * words(uint64_t num)
		{
			sprintf(_numBuffer, "%" PRIu64 "", num);
			numLength = (unsigned)strlen(_numBuffer);
			printf("Length of the enterd number: %u\n", numLength);
			if(numLength > 13)
			{
				return _error;
			}

			// if(numLength)
			return _num12;
		}
	};
}

#endif