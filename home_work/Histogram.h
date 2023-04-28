#pragma once
#include <iostream>
#include <string.h>
#ifndef HISTOGRAM_H
#define HISTOGRAM_H

class Histogram {
	string str;
public:
	Histogram(string str);//생성자  
	void put(string str); // 
	void print();
};
#endif
