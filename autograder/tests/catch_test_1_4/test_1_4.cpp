//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "can_text_split.h"
#include <list>
#include <string>
using namespace std;

static void test_1_4() {
    cout << boolalpha
         << can_text_split<wstring>(L"estaprueba",
                                    {L"esta", L"texto", L"UTEC", L"prueba"}) << endl;
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}