#ifndef DAY_01_HPP
#define DAY_01_HPP

#include <filesystem>
#include <vector>

namespace ac {
    auto read_columns(std::istream &input) -> std::pair<std::vector<int>, std::vector<int>>;
    auto read_columns(const std::filesystem::path &path)
            -> std::pair<std::vector<int>, std::vector<int>>;
    auto distance(const std::vector<int> &v1, const std::vector<int> &v2) -> std::vector<int>;
    auto num_repetitions(const std::vector<int> &ordered_values, int value) -> int;
}// namespace ac

#endif//DAY_01_HPP
