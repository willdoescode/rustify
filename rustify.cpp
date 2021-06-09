#include "rustify.hpp"
#include <iostream>
#include <string.h>
#include <vector>

struct Hello {
  public:
    static fn hello() -> String;
};

fn Hello::hello() -> String {
  return "World!";
}

enum Test {
  Thing,
  Also
};

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

  Test t = Thing;

  println(Hello::hello());

  match(t) {
    case Thing:
      println("It is a thing");
      break;
  }

  return 0;
}
