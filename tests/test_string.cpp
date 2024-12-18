// tests/test_string.cpp
#define CATCH_CONFIG_MAIN  // This defines the main() function for Catch2
#include <catch2/catch_all.hpp>
#include "../src/String.h"  // Ensure this path is correct

TEST_CASE("String construction and c_str") {
    String str("Hello, World!");
    REQUIRE(strcmp(str.c_str(), "Hello, World!") == 0);
}

TEST_CASE("Default construction") {
    String str;
    REQUIRE(strcmp(str.c_str(), "") == 0);
}


// Parameterized test for String construction
TEST_CASE("String construction and c_str with different inputs", "[String]") {
    const char* testStrings[] = {
        "Hello, World!",
        "Catch2 is great!",
        "Parameterized tests are useful."
    };

    for (const char* testString : testStrings) {
        String str(testString);
        REQUIRE(strcmp(str.c_str(), testString) == 0);
    }
}
