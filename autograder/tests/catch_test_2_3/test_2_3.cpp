//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "are_permutations.h"
#include <string>
using namespace std;

static void test_2_3() {
  std::cout << std::boolalpha << are_permutations<std::wstring>(L"abc", L"cab", L"bac", L"cba"); // true
}

TEST_CASE("Question #2.3") {
  execute_test("test_2_3.in", test_2_3);
}