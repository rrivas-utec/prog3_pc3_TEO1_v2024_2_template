//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimize_merge_time.h"
#include <deque>
using namespace std;

static void test_1_3() {
  std::deque<int> file_sizes = {5, 5, 5, 5};
  std::cout << minimize_merge_time(file_sizes);
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}