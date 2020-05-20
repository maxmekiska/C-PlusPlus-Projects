#include<iostream>



float fetchUserInput()
{
	float o{};
	std::cout << "Enter R0: ";
	std::cin >> o;
	return o;
}


float calcTreshold()
{
	float treshold{};
	float R0{};
	R0 = fetchUserInput();
	if (R0 < 1)
	{
		std::cout << "A R0 rate of: " << R0 << " indicates a declining infection rate" << '\n';
	}
	else if (R0 == 1)
	{
		std::cout << "A R0 rate of: " << R0 << " indicates a constant infection rate" << '\n';
	}
	else
	{
		treshold = ((R0 - 1) / (R0)) * 100;
		std::cout << "Herd Immunity reached when: " << treshold << "% of population is immune" << '\n';
	}
	return 0;
}

float generalCases()
{
	std::cout << "-------------------------------------------General cases--------------------------------------------------------------------" <<'\n';
	float general[]{ 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int i{};
	for (i=0; i < std::size(general); i++)
		std::cout <<"R0: " << general[i] << '\t' << " Herd immunity is reached when: " << '\t' << ((general[i] - 1) / (general[i])*100) << "% are immune" << '\n';
	return 0;
}

int main()
{
	calcTreshold();
	generalCases();
	return 0;
}