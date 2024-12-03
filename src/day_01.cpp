#include "day_01.hpp"

#include <cmath>
#include <fstream>

namespace ac {
    auto read_columns(std::istream &input) -> std::pair<std::vector<int>, std::vector<int>> {

        auto v1 = std::vector<int>{};
        auto v2 = std::vector<int>{};
        int first_value{}, second_value{};
        while (input >> first_value >> second_value) {
            v1.push_back(first_value);
            v2.push_back(second_value);
        }

        return {v1, v2};
    }

    auto read_columns(const std::filesystem::path &path)
            -> std::pair<std::vector<int>, std::vector<int>> {
        std::ifstream input_file{path};

        if (not input_file.is_open()) {
            const auto error_msg = "Could not open input file" + path.string();
            throw std::runtime_error{error_msg};
        }

        return read_columns(input_file);
    }

    auto distance(const std::vector<int> &v1, const std::vector<int> &v2) -> std::vector<int> {
        std::vector<int> result{};
        result.reserve(v1.size());
        for (size_t i = 0; i < v1.size(); ++i) { result.push_back(std::abs(v1[i] - v2[i])); }
        return result;
    }
}// namespace ac