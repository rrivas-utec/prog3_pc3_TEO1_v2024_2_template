//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "are_permutations.h"
using namespace std;

static void test_2_2() {
  std::cout << std::boolalpha << are_permutations<std::string>("listen", "hello"); // false
}

TEST_CASE("Question #2.2") {
  execute_test("test_2_2.in", test_2_2);
}