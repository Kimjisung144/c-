#pragma once
#include <iostream>
#include <string.h>


using namespace std;

class P0000 {
	string p0000_name; // 영어이름
	string p0000_id; // 회원id
	int p0000_age; // 나이
public:
	P0000();
	P0000(int r);
	void getter(string user_name, string user_id, int user_age);
	void setter(string user_name, string user_id, int user_age);
};
