#ifndef _NUM_NAMES_H_
#define _NUM_NAMES_H_

#include <iostream>
#include <cstring>
#include <string>
#include <inttypes.h>
#include <map>

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

		std::map<std::string, std::string> names;

	public:
		void setMap()
		{
			names.insert(std::pair<std::string, std::string>("1", "one"));
			names.insert(std::pair<std::string, std::string>("2", "two"));
			names.insert(std::pair<std::string, std::string>("3", "three"));
			names.insert(std::pair<std::string, std::string>("4", "four"));
			names.insert(std::pair<std::string, std::string>("5", "five"));
			names.insert(std::pair<std::string, std::string>("6", "six"));
			names.insert(std::pair<std::string, std::string>("7", "seven"));
			names.insert(std::pair<std::string, std::string>("8", "eight"));
			names.insert(std::pair<std::string, std::string>("9", "nine"));
			names.insert(std::pair<std::string, std::string>("10", "ten"));
			names.insert(std::pair<std::string, std::string>("11", "eleven"));
			names.insert(std::pair<std::string, std::string>("12", "twelve"));
			names.insert(std::pair<std::string, std::string>("13", "thirteen"));
			names.insert(std::pair<std::string, std::string>("14", "fourteen"));
			names.insert(std::pair<std::string, std::string>("15", "fifteen"));
			names.insert(std::pair<std::string, std::string>("16", "sixteen"));
			names.insert(std::pair<std::string, std::string>("17", "seventeen"));
			names.insert(std::pair<std::string, std::string>("18", "eighteen"));
			names.insert(std::pair<std::string, std::string>("19", "nineteen"));
			names.insert(std::pair<std::string, std::string>("20", "twenty"));
			names.insert(std::pair<std::string, std::string>("21", "twenty-one"));
			names.insert(std::pair<std::string, std::string>("22", "twenty-two"));
			names.insert(std::pair<std::string, std::string>("23", "twenty-three"));
			names.insert(std::pair<std::string, std::string>("24", "twenty-four"));
			names.insert(std::pair<std::string, std::string>("25", "twenty-five"));
			names.insert(std::pair<std::string, std::string>("26", "twenty-six"));
			names.insert(std::pair<std::string, std::string>("27", "twenty-seven"));
			names.insert(std::pair<std::string, std::string>("28", "twenty-eight"));
			names.insert(std::pair<std::string, std::string>("29", "twenty-nine"));
			names.insert(std::pair<std::string, std::string>("30", "thirty"));
			names.insert(std::pair<std::string, std::string>("31", "thirty-one"));
			names.insert(std::pair<std::string, std::string>("32", "thirty-two"));
			names.insert(std::pair<std::string, std::string>("33", "thirty-three"));
			names.insert(std::pair<std::string, std::string>("34", "thirty-four"));
			names.insert(std::pair<std::string, std::string>("35", "thirty-five"));
			names.insert(std::pair<std::string, std::string>("36", "thirty-six"));
			names.insert(std::pair<std::string, std::string>("37", "thirty-seven"));
			names.insert(std::pair<std::string, std::string>("38", "thirty-eight"));
			names.insert(std::pair<std::string, std::string>("39", "thirty-nine"));
			names.insert(std::pair<std::string, std::string>("40", "forty"));
			names.insert(std::pair<std::string, std::string>("41", "forty-one"));
			names.insert(std::pair<std::string, std::string>("42", "forty-two"));
			names.insert(std::pair<std::string, std::string>("43", "forty-three"));
			names.insert(std::pair<std::string, std::string>("44", "forty-four"));
			names.insert(std::pair<std::string, std::string>("45", "forty-five"));
			names.insert(std::pair<std::string, std::string>("46", "forty-six"));
			names.insert(std::pair<std::string, std::string>("47", "forty-seven"));
			names.insert(std::pair<std::string, std::string>("48", "forty-eight"));
			names.insert(std::pair<std::string, std::string>("49", "forty-nine"));
			names.insert(std::pair<std::string, std::string>("50", "fifty"));
			names.insert(std::pair<std::string, std::string>("51", "fifty-one"));
			names.insert(std::pair<std::string, std::string>("52", "fifty-two"));
			names.insert(std::pair<std::string, std::string>("53", "fifty-three"));
			names.insert(std::pair<std::string, std::string>("54", "fifty-four"));
			names.insert(std::pair<std::string, std::string>("55", "fifty-five"));
			names.insert(std::pair<std::string, std::string>("56", "fifty-six"));
			names.insert(std::pair<std::string, std::string>("57", "fifty-seven"));
			names.insert(std::pair<std::string, std::string>("58", "fifty-eight"));
			names.insert(std::pair<std::string, std::string>("59", "fifty-nine"));
			names.insert(std::pair<std::string, std::string>("60", "sixty"));
			names.insert(std::pair<std::string, std::string>("61", "sixty-one"));
			names.insert(std::pair<std::string, std::string>("62", "sixty-two"));
			names.insert(std::pair<std::string, std::string>("63", "sixty-three"));
			names.insert(std::pair<std::string, std::string>("64", "sixty-four"));
			names.insert(std::pair<std::string, std::string>("65", "sixty-five"));
			names.insert(std::pair<std::string, std::string>("66", "sixty-six"));
			names.insert(std::pair<std::string, std::string>("67", "sixty-seven"));
			names.insert(std::pair<std::string, std::string>("68", "sixty-eight"));
			names.insert(std::pair<std::string, std::string>("69", "sixty-nine"));
			names.insert(std::pair<std::string, std::string>("70", "seventy"));
			names.insert(std::pair<std::string, std::string>("71", "seventy-one"));
			names.insert(std::pair<std::string, std::string>("72", "seventy-two"));
			names.insert(std::pair<std::string, std::string>("73", "seventy-three"));
			names.insert(std::pair<std::string, std::string>("74", "seventy-four"));
			names.insert(std::pair<std::string, std::string>("75", "seventy-five"));
			names.insert(std::pair<std::string, std::string>("76", "seventy-six"));
			names.insert(std::pair<std::string, std::string>("77", "seventy-seven"));
			names.insert(std::pair<std::string, std::string>("78", "seventy-eight"));
			names.insert(std::pair<std::string, std::string>("79", "seventy-nine"));
			names.insert(std::pair<std::string, std::string>("80", "eighty"));
			names.insert(std::pair<std::string, std::string>("81", "eighty-one"));
			names.insert(std::pair<std::string, std::string>("82", "eighty-two"));
			names.insert(std::pair<std::string, std::string>("83", "eighty-three"));
			names.insert(std::pair<std::string, std::string>("84", "eighty-four"));
			names.insert(std::pair<std::string, std::string>("85", "eighty-five"));
			names.insert(std::pair<std::string, std::string>("86", "eighty-six"));
			names.insert(std::pair<std::string, std::string>("87", "eighty-seven"));
			names.insert(std::pair<std::string, std::string>("88", "eighty-eight"));
			names.insert(std::pair<std::string, std::string>("89", "eighty-nine"));
			names.insert(std::pair<std::string, std::string>("90", "ninety"));
			names.insert(std::pair<std::string, std::string>("91", "ninety-one"));
			names.insert(std::pair<std::string, std::string>("92", "ninety-two"));
			names.insert(std::pair<std::string, std::string>("93", "ninety-three"));
			names.insert(std::pair<std::string, std::string>("94", "ninety-four"));
			names.insert(std::pair<std::string, std::string>("95", "ninety-five"));
			names.insert(std::pair<std::string, std::string>("96", "ninety-six"));
			names.insert(std::pair<std::string, std::string>("97", "ninety-seven"));
			names.insert(std::pair<std::string, std::string>("98", "ninety-eight"));
			names.insert(std::pair<std::string, std::string>("99", "ninety-nine"));
			names.insert(std::pair<std::string, std::string>("100", "hundred"));
			names.insert(std::pair<std::string, std::string>("1000", "thousend"));
			names.insert(std::pair<std::string, std::string>("1000000", "million"));
			names.insert(std::pair<std::string, std::string>("1000000000", "billion"));
			names.insert(std::pair<std::string, std::string>("1000000000000", "trillion"));
		}

		char * words(uint64_t num)
		{
			int i = 0;
			setMap();
			sprintf(_numBuffer, "%" PRIu64 "", num);
			numLength = (unsigned)strlen(_numBuffer);
			printf("Length of the enterd number: %u\n", numLength);
			// if(numLength > 13)
			// {
			// 	return _error;
			// }

			for(i=0; i<numLength; i++)
			{
				std::cout<<_numBuffer[i]<<std::endl;
			}

			std::cout<<"sayName- "<<sayName(_numBuffer, numLength)<<std::endl;
			return _num12;
		}

		char * sayName(char * cNum, int len)
		{
			std::cout<<cNum<<std::endl;
			std::string sNum = std::string(cNum);
			char * cRet = (char *)malloc(20);

			std::map<std::string, std::string> :: iterator it;

			for(it=names.begin(); it!=names.end(); ++it)
			{
				std::cout<<it->first<<" - "<<it->second<<std::endl;
			}

			if(len == 2)
			{
				sprintf(cRet, "%s", (names.find(sNum)->second).c_str());
				return cRet;
			}

			getString(sNum, 1, 3);

			if(len == 3)
			{
				sprintf(cRet, "%s%s", (names.find(sNum)->second).c_str(), _and);
				return cRet;
			}

			// while(getString())


			return cNum;
		}

		std::string getString(std::string str, int start, int end)
		{
			int i=0;
			std::string buffer = "";
			for(i=start; i<=(end-start); i++)
			{
				std::cout<<"str - "<<str[i]<<std::endl;
				buffer += str[i];
			}
			std::cout<<"buffer - "<<buffer<<std::endl;
			return buffer;
		}
	};
}

#endif