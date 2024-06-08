#include <iostream>
#include <Windows.h>
#include <string>

class Animal
{
public:

	//конструкторы

	/*Animal()
	{

	}

	Animal(int data)
	{
		age = data;
	}*/

	
	//деструкторы

	~Animal()
	{
		//delete[]arr;
	}


	void PrintInform()
	{
		std::cout << type << " " << name << ", " << age << " лет, " << voice << "\n";
	}

	void SetAll(std::string Type, std::string Name, int Age, std::string Voice)
	{
		type = Type;
		name = Name;
		age = Age;
		voice = Voice;
	}

	std::string GetType()
	{
		return type;
	}
	std::string GetName()
	{
		return name;
	}
	int GetAge()
	{
		return age;
	}
	std::string GetVoice()
	{
		return voice;
	}

private:
	int age;
	std::string name;
	std::string type;
	std::string voice;

};



class Cat : public Animal
{
public:
	
	Cat(std::string Type, std::string Name, int Age, std::string Voice)
	{
		SetAll(Type, Name, Age, Voice);
	}

private:

};



class Dog : public Animal
{
public:

	Dog(std::string Type, std::string Name, int Age, std::string Voice)
	{
		SetAll(Type, Name, Age, Voice);
	}

private:

};



class Bird : public Animal
{
public:

	void iFly(bool fly)
	{
		if (fly == true)
		{
			std::cout << "im flyin";
		}
		else
		{
			std::cout << "no";
		}
	}

	void SetFly(bool IsFly)
	{
		isFly = IsFly;
	}

private:

	bool isFly;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*Animal one(4);
	Animal one(30, "fgs");
	std::cout << one.GetAge();*/
	/*Animal one;

	Bird two;
	two.SetAll(10, "ca");*/


	Cat barsick("Кот", "Барсик", 15, "Мяу");
	Dog layka("Собака", "Лайка", 9, "Гав");

	barsick.PrintInform();
	layka.PrintInform();



	return 0;
}