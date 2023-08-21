#ifndef SRC_LOGGING_LOGGING_HPP_
#define SRC_LOGGING_LOGGING_HPP_

#include <spdlog/fmt/ostr.h>
#include <spdlog/spdlog.h>

#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>

namespace std {

ostream &operator<<(ostream &o, const std::vector<int> &arr);
ostream &operator<<(ostream &o, const std::vector<float> &arr);
ostream &operator<<(ostream &o, const std::vector<double> &arr);
ostream &operator<<(ostream &o, const std::vector<std::string> &arr);
ostream &operator<<(ostream &o, const std::vector<char> &arr);

ostream &operator<<(ostream &o, const std::unordered_set<std::string> &arr);

template <typename T>
ostream &operator<<(ostream &o, const std::vector<std::vector<T>> &arr) {
  o << "\n";
  for (const auto &vec : arr) {
    o << vec << "\n";
  }
  return o;
}

template <typename T1, typename T2>
ostream &operator<<(ostream &o, const std::vector<std::pair<T1, T2>> &arr) {
  o << "[";
  for (const auto &p : arr) {
    o << fmt::format("[{},{}] ", p.first, p.second);
  }
  o << "\b]";
  return o;
}

}  // namespace std

template <>
struct fmt::formatter<std::vector<int>> : fmt::ostream_formatter {};

template <>
struct fmt::formatter<std::vector<float>> : fmt::ostream_formatter {};

template <>
struct fmt::formatter<std::vector<double>> : fmt::ostream_formatter {};

template <>
struct fmt::formatter<std::vector<std::string>> : fmt::ostream_formatter {};

template <>
struct fmt::formatter<std::vector<char>> : fmt::ostream_formatter {};

template <>
struct fmt::formatter<std::unordered_set<std::string>>
    : fmt::ostream_formatter {};

template <typename T>
struct fmt::formatter<std::vector<std::vector<T>>> : fmt::ostream_formatter {};

template <typename T1, typename T2>
struct fmt::formatter<std::vector<std::pair<T1, T2>>> : fmt::ostream_formatter {
};

#endif  // SRC_LOGGING_LOGGING_HPP_
