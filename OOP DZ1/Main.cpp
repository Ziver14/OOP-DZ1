#include<iostream>
#include<string>


class Animal {
protected:
	std::string name;
	int age;
	int weight;

public:
	Animal() {
		name = "noname";
		age = 0;
		weight = 0;
	}

	Animal(std::string name, int age, int weight) {

		this->name = name;
		this->age = age;
		this->weight = weight;
	}
};

class Cat :public Animal {
private:
	std::string type;
	
public:
	Cat() :Animal() {}
		
	

	Cat(std::string name, int age, int weight): Animal(name,age,weight) {};

	void voice() {
		std::cout << "Мяу\n";
}
	void eat(std::string food) {
		std::cout << name << " съел " << food;
	}
};


int main() {
	setlocale(LC_ALL, "ru");

	Cat m1("Veilien", 10, 10);
	
	m1.voice();
	m1.eat("chiken");

	return 0;
}