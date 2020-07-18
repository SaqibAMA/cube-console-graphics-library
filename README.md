# Cube

Cube is a super light-weight and beginner oriented graphics module that can be used in C++. It is tailored to be used by individuals who are just starting out to code in C++ and want to make minimal graphical projects.

This documentation extensively covers the implementation of the functions. Furthermore, if you have any questions, you can drop them right away on GitHub.


## Installation

The installation of Cube only requires you to download the (cube.cpp) file from GitHub and then proceed to pasting the entire code into your project. You can also create a separate file and use the #include directive.

Currently, the library only works for Windows machines as it uses Windows.h as the primary dependency.

## Implemented Features

As of now, minimal functionality has been implemented in Cube. I will be working rigorously to improve and develop this over the course of Summer 2020.

### Cursor

Cursor is just like the cursor on your screen, however, just a bit different. Cursor in Cube terminology means the point where the drawing will happen. In case of shapes, they will be drawn at their designated positions. If you want to change the cursor position manually and print something at a certain place, you will be using this <code>Cube::moveTo(x, y)</code> utility.

### Rectangle Shape

A rectangle is one of the fundamental objects in Cube. In the hierarchy, it is being derived from Shape class. The prototype for creating rectangle is as follows.

<code> Cube::Rect r (width, height); </code>

The default parameters for <code>width</code> and <code>height</code> are 0. To initialize them later, you can manually do so by:

<code>
  Cube::Rect r;
  r.height = 100;
  r.width = 200;
</code>

### Draw

The <code>Cube::draw(shape)</code> function takes in a shape and prints it on the designated position on the screen. Currently, the function only supports Rect shape, however, more shapes will be added soon.

### License

MIT License. Credits due where used. No credits required for educational projects.

