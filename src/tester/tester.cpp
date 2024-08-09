import std;

import m1;
import d1;
// /reference d1.ixx.ifc

int main() {
    std::println("m1::MyFunc() = {}", m1::MyFunc());
    std::println("m1::MyFunc2() = {}", m1::MyFunc2());
    std::println("d1::MyFunc() = {}", d1::MyFunc());
}
