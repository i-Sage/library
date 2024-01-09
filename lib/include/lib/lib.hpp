#pragma once

namespace lib
{

  [[nodiscard]]
  inline bool is_odd (int i)
  {
    return i % 2;
  }

  [[nodiscard]]
  int return_five ();

  [[nodiscard]]
  inline bool give_even (int i)
  {
    return !(i % 2);
  }

}
