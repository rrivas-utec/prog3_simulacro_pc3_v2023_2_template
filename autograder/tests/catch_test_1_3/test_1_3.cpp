//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "can_text_split.h"
#include <list>
#include <string>
using namespace std;

static void test_1_3() {
    list<string> vec = {"este", "texto", "UTEC", "prueba"};
    string text1 = "este_texto";
    cout << boolalpha << can_text_split(text1, vec) << endl;

}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}