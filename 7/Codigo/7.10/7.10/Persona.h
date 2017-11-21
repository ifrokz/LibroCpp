#pragma once

#include<string>
#include<array>
class Persona {
public:
	Persona(const std::string &, const short unsigned &);
private:
	std::string name;
	unsigned short age;

};