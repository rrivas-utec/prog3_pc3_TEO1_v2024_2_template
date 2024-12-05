//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimize_merge_time.h"
#include <vector>
using namespace std;

static void test_1_1() {
  std::vector<int> file_sizes = {10, 20, 30, 40};
  std::cout << minimize_merge_time(file_sizes);
}

 TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}