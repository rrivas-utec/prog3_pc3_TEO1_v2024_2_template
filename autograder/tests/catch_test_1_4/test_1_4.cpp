//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimize_merge_time.h"
#include <map>
using namespace std;

static void test_1_4() {
  std::map<std::string, int, std::less<>> file_sizes = {
      {"file_1.txt", 5},
      {"file_2.txt", 5},
      {"file_3.txt", 5},
      {"file_4.txt", 5}};
  std::cout << minimize_merge_time(file_sizes, [](auto item) { return item.second; });
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}