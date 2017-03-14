#include <iostream>

int main(int argc, char const *argv[])
{
	const float PHI = 3.14;

	float jari_jari, luas;

	jari_jari = 25.0;
	luas = 0.5 * PHI * jari_jari * jari_jari;

	std::cout << "Data Lingkaran: ";
	std::cout << "\njari jari " << jari_jari;
	std::cout << "\nluas ";
	std::cout << luas << std::endl;

	return 0;
}