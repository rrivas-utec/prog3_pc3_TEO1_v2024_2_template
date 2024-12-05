//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimize_merge_time.h"
#include <list>
using namespace std;

static void test_1_2() {
  std::list<int> file_sizes = {50};
  std::cout << minimize_merge_time(file_sizes);
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}