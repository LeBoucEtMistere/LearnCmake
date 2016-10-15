#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "sqr.h"

TEST_CASE( "SQRT are computed", "SQRT" ) {
    REQUIRE( sqr(1) == 1 );
    REQUIRE( sqr(4) == 16 );
    REQUIRE( sqr(3) == 9 );
}