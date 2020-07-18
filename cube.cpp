#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include <iostream>
#include <cstring>
#include <Windows.h>

#define RESET SetConsoleTextAttribute(h, 15);
#define WHITE SetConsoleTextAttribute(h, 15 | BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY);


// Cube Library Class

// Cube is a super light - weight and beginner oriented graphics module that can be used in C++.
// It is tailored to be used by individuals who are just starting out to code in C++
// and want to make minimal graphical projects.

class Cube {

private:
	static HANDLE h;

public:

	// Cube Internal Class Definitions
	class Shape {
	public:
		Shape(int x = 0, int y = 0) {
			this->x = x, this->y = y;
			colorCode = 15;
		}

	public:
		int x, y;
		int colorCode;

	};

	class Rect : public Shape {

	public:
		Rect(int height = 0, int width = 0) {
			this->height = height, this->width = width;
		}

		void setPosition(int x, int y) {
			Shape::x = x;
			Shape::y = y;
		}

	public:
		int height, width;

	};

	// Member functions

	static void moveTo(int x = 0, int y = 0) {

		COORD scrn;
		scrn.X = x;
		scrn.Y = y;

		SetConsoleCursorPosition(h, scrn);

	}

	static void draw(const Rect& r) {

		WHITE
		
		for (int i = 0; i < r.height / 2; i++) {
			for (int j = 0; j < r.width; j++) {
				std::cout << "-";
			}
			std::cout << "\n";
		}

		RESET



	}


};

// This variable keeps the STDHandle that is required by
// the Window.h library
HANDLE Cube::h = GetStdHandle(STD_OUTPUT_HANDLE);


int main() {

	
	// Code to create and print rectangle shapes.

	Cube::Rect r(7, 15);
	Cube::draw(r);


	return 0;
}