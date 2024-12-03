#include <algorithm>

#include <day_01.hpp>
#include <iostream>
#include <numeric>

int main() {
    const auto input_path =
            std::filesystem::path{"/home/santiago/git/advent_of_code_2024/input/day_01.txt"};
    auto [v1, v2] = ac::read_columns(input_path);

    std::ranges::sort(v1);
    std::ranges::sort(v2);

    const auto diffs = ac::distance(v1, v2);

    const auto result_part_1 = std::accumulate(diffs.begin(), diffs.end(), 0);
    std::cout << "Result part 1: " << result_part_1 << std::endl;

    int result_part_2{};
    for (const auto value : v1) {
        const auto repetitions = ac::num_repetitions(v2, value);
        result_part_2 += repetitions * value;
    }

    std::cout << "Result part 2: " << result_part_2 << std::endl;

    return 0;
}