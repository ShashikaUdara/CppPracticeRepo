#include <cstdio>
#include <iostream>

using namespace std;

const string unk = "unknown";
const string clone_prefix= "clone-";

class Animal
{
	string type = "";
	string name = "";
	string sound = "";

public:
	Animal(); // default constructor with 0 arguments
	Animal(const string & _type, const string & _name, const string & _sound); // overloaded constructor with 3 arguments
	Animal(const Animal &); // copy costructor
	Animal & operator = (const Animal &); // copy operator
	~Animal(); // destructor
	void print() const;
};

// implementation
Animal :: Animal() : type(unk), name(unk), sound(unk)
{
	puts("Default constructor");
}

Animal :: Animal(const string & _type, const string & _name, const string & _sound) : type(_type), name(_name), sound(_sound)
{
	puts("overloaded constructor");
}

Animal :: Animal(const Animal & rhs)
{
	puts("copy constructor");
	type = clone_prefix + rhs.type;
	name = rhs.name;
	sound = rhs.sound;
}

Animal & Animal :: operator = (const Animal &rhs)
{
	puts("copy operator");
	if(this != &rhs)
	{
		type = clone_prefix + rhs.type;
		name = rhs.name;
		sound = rhs.sound;
	}
	return *this;
}

Animal :: ~Animal()
{
	puts("destructor");
}

void Animal :: print() const
{
	printf("The %s %s says %s\n", name.c_str(), type.c_str(), sound.c_str());
}

int main()
{
	Animal a;
	a.print();

	const Animal b("cat", "mase", "meoww");
	b.print();

	const Animal c = b;
	c.print();

	a=c;
	a.print();
}