//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "are_permutations.h"
using namespace std;

static void test_2_1() {
  std::cout << std::boolalpha << are_permutations<string>("listen", "silent", "enlist");
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}