#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include <day_01.hpp>

using testing::Eq;

TEST(ReadColumns, ReturnsAPairOfVectors) {
    const auto input = std::string{"18944   47230\n"
                                   "94847   63037"};

    auto input_stream = std::istringstream{input};

    const auto [v1, v2] = ac::read_columns(input_stream);

    EXPECT_THAT(v1, Eq(std::vector{18944, 94847}));
    EXPECT_THAT(v2, Eq(std::vector{47230, 63037}));
}