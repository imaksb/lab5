#pragma once
#include "MainClass.h"

class NewClass : public MainClass {
private:
	char* name;
public:
	NewClass(int n, char * name) : MainClass(n) { 
		this->name = name;
	}
	
	void changeName(char* newName) {
		this->name = newName;
	}

	void ascendingSort() {
		bool isSwaped = true;
		int tmp;
		while (isSwaped)
		{
			isSwaped = false;
			for (int i = 0; i < this->size - 1; i++) {
				if (this->numbers[i] < this->numbers[i + 1]) {
					tmp = this->numbers[i];
					this->numbers[i] = this->numbers[i + 1];
					this->numbers[i + 1] = tmp;
				}
			}
		}
		--*(this);
	}

	bool operator!=(int a) const { 
		int sum = 0;
		for (int i = 0; i < this->size; i++) {
			sum += this->numbers[i];
		}
		// std::cout << (sum == a);
		return !(sum == a);
	}

}; 