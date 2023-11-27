//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "can_text_split.h"
#include <string>
using namespace std;

static void test_1_2() {
    cout << boolalpha
         << can_text_split<string>("prueba",
                                   {"este", "texto", "UTEC", "prueba"}) << endl;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}