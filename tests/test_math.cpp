#include <catch2/catch_all.hpp>
#include "../src/Math.h"  // Include the Math header

// Test cases for the add function
TEST_CASE("Addition works correctly", "[add]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, -1) == -2);
    REQUIRE(add(0, 0) == 0);
    REQUIRE(add(2, -3) == -1);
}

// Additional test cases for other functions
TEST_CASE("Subtraction works correctly", "[subtract]") {
    REQUIRE(subtract(5, 3) == 2);
    REQUIRE(subtract(-1, -1) == 0);
}

TEST_CASE("Multiplication works correctly", "[multiply]") {
    REQUIRE(multiply(2, 3) == 6);
    REQUIRE(multiply(-1, -1) == 1);
}

TEST_CASE("Division works correctly", "[divide]") {
    REQUIRE(divide(6, 3) == 2.0);
    REQUIRE(divide(-6, -3) == 2.0);
    REQUIRE_THROWS_AS(divide(1, 0), std::invalid_argument); // Check for division by zero
}