#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/TriangleNumberCalculator.hpp"

TEST_CASE( "can calculate triangular number" ) {
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.value(3) == 6);
}
TEST_CASE("can add triangular numbers"){
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.add(3,3) == 12);
}
TEST_CASE("can subtract triangular numbers"){
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.subtract(4,3) == 4);
    REQUIRE(calculator.subtract(3,4) == -4);
}
TEST_CASE("can multiply triangular numbers"){
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.multiply(3,3) == 36);
}
TEST_CASE("can divide triangular numbers"){
    TriangleNumberCalculator calculator;
    REQUIRE(calculator.divide(3,3) == 1);
    REQUIRE(calculator.divide(2,3) == 0.5);
}
