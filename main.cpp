#include <iostream>
#include <vector>

class Counter
{
private:
	int count_ = 0;
	int min_;
	int max_;

public:
	Counter(int min, int max)
	{
		count_ = min;
		min_ = min;
		max_ = max;
	}

	void add()
	{
		if (count_ + 1 > max_)
			count_ = 1;
		else
			count_++;
	}

	int get()
	{
		return count_;
	}
};

class Student
{
};

class Group
{
private:
	int studentCount_ = 12;
	Student *students_ = new Student[studentCount_];

public:
	Group(int studentCount)
	{
		if (studentCount > 0)
		{
			studentCount_ = studentCount;
		}
	}

	Student *showInfo(int id)
	{
	}

	void delStudent(int id)
	{
		//
	}
};

class Fraction
{
private:
	int num_;
	int den_;

public:
	Fraction() {}

	void setNum(int num)
	{
		num_ = num;
	}

	void setDen(int den)
	{
		den_ = den;
	}

	int sum()
	{
		return num_ + den_;
	}

	int sub()
	{
		return num_ - den_;
	}

	int mult()
	{
		return num_ * den_;
	}

	double del()
	{
		return num_ / den_;
	}
};

class User
{
private:
	std::string fullname_;
	std::string homePhone_;
	std::string workPhone_;
	std::string mobPhone_;
	std::string info_;

public:
	User(std::string fullname, std::string homePhone, std::string workPhone, std::string mobPhone, std::string info)
	{
		fullname_ = fullname;
		homePhone_ = homePhone;
		workPhone_ = workPhone;
		mobPhone_ = mobPhone;
		info_ = info;
	}

	std::string getFullName()
	{
		return fullname_;
	}

	std::string getHomePhone()
	{
		return homePhone_;
	}

	std::string getWorkPhone()
	{
		return workPhone_;
	}

	std::string getMobPhone()
	{
		return mobPhone_;
	}

	std::string getInfo()
	{
		return info_;
	}
};

class PhoneBook
{
private:
	std::vector<User> users_;

public:
	PhoneBook() {}

	void add(std::string fullname, std::string homePhone, std::string workPhone, std::string mobPhone, std::string info)
	{
		users_.push_back(User(fullname, homePhone, workPhone, mobPhone, info));
	}

	void rm(int idx)
	{
		if (idx > 0 && idx < users_.size())
			users_.erase(users_.begin() + idx);
	}

	void show()
	{
		for (auto user : users_)
			std::cout << user.getFullName() << '\t' << user.getHomePhone() << '\n';
	}

	User search(std::string fullname)
	{
		for (auto user : users_)
			if (user.getFullName() == fullname)
				return user;
	}
};

int main()
{
	Counter counter(3, 7);

	std::cout << counter.get() << '\n';
	counter.add();
	std::cout << counter.get() << '\n';
	counter.add();
	std::cout << counter.get() << '\n';
	counter.add();
	std::cout << counter.get() << '\n';
	counter.add();
	std::cout << counter.get() << '\n';
	counter.add();
	std::cout << counter.get() << '\n';
	counter.add();

	Fraction fr;

	fr.setNum(3);
	fr.setDen(2);

	std::cout << fr.sum() << '\n';
	std::cout << fr.sub() << '\n';
	std::cout << fr.mult() << '\n';
	std::cout << fr.del() << '\n';

	PhoneBook phoneBook;

	phoneBook.add("Petr", "24653", "5453345", "545245", "fsdvfd");
	phoneBook.add("Alexey", "24653", "5453345", "545245", "fsdvfd");
	phoneBook.add("Ulia", "24653", "5453345", "545245", "fsdvfd");
	phoneBook.add("Vadim", "24653", "5453345", "545245", "fsdvfd");
	phoneBook.show();

	return 0;
}
