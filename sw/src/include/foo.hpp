#pragma once

namespace foo {

  /// @brief Add 41 to the input number
  /// @param i input number
  /// @return result
  [[nodiscard]] constexpr int bar(int const i) noexcept 
  { 
    return i + 41; 
  }

} // namespace foo

