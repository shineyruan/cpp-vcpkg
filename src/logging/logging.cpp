#include "logging.hpp"

namespace std {
ostream& operator<<(ostream& o, const std::vector<int>& arr) {
  o << "[";
  for (const auto& i : arr) {
    o << fmt::format("{:5}", i);
  }
  o << "]";
  return o;
}
ostream& operator<<(ostream& o, const std::vector<float>& arr) {
  o << "[";
  for (const auto& i : arr) {
    o << fmt::format("{:9.3f}", i);
  }
  o << "]";
  return o;
}
ostream& operator<<(ostream& o, const std::vector<double>& arr) {
  o << "[";
  for (const auto& i : arr) {
    o << fmt::format("{:9.3f}", i);
  }
  o << "]";
  return o;
}
ostream& operator<<(ostream& o, const std::vector<std::string>& arr) {
  o << "[";
  for (const auto& i : arr) {
    o << i << ",";
  }
  (arr.empty()) ? o << "]" : o << "\b]";
  return o;
}
ostream& operator<<(ostream& o, const std::vector<char>& arr) {
  o << "[";
  for (const auto& i : arr) {
    o << i << " ";
  }
  (arr.empty()) ? o << "]" : o << "\b]";
  return o;
}
ostream& operator<<(ostream& o, const std::unordered_set<std::string>& arr) {
  o << "[";
  for (const auto& i : arr) {
    o << i << ",";
  }
  (arr.empty()) ? o << "]" : o << "\b]";
  return o;
}
}  // namespace std
