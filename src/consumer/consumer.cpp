import std;

import m1;
import d1;
// /reference m1.ixx.ifc /reference m1-p1.ixx.ifc /reference d1.ixx.ifc

int main() {
	std::println("Hello, m1::MyFunc() == {}", m1::MyFunc());
	std::println("Hello, m1::MyFunc2() == {}", m1::MyFunc2());
	std::println("Hello, d1::MyFunc() == {}", d1::MyFunc());
}

#pragma comment(lib, "m1.lib")
#pragma comment(lib, "d1.lib")
