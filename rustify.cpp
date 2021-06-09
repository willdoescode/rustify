#include "rustify.hpp"
#include <iostream>
#include <string.h>
#include <vector>

fn hello(String h) -> i32 {
  println("Hello World");
  return 5;
}

fn other(str x) -> void {
  println(x);
}

fn main() -> i32 {
  println("Hello World");
  other("Hello Other");

  Vec<i32> x = {1, 2, 3, 4};

  for (auto& i : x)
    println(i);

  return 0;
}
