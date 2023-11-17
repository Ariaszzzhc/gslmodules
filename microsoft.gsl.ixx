module;

#include <gsl/gsl>

export module microsoft.gsl;

export namespace gsl {
  /* Views */

  using gsl::basic_zstring;
  using gsl::cu16zstring;
  using gsl::cu32zstring;
  using gsl::cwzstring;
  using gsl::czstring;
  using gsl::not_null;
  using gsl::owner;
  using gsl::span;
  using gsl::u16zstring;
  using gsl::u32zstring;
  using gsl::wzstring;
  using gsl::zstring;

  /* Owners */

  using gsl::shared_ptr;
  using gsl::unique_ptr;

  /* Assertions */

#undef GSL_CONTRACT_CHECK
#undef Ensures
#undef Expects

  template <class Type> constexpr void GSL_CONTRACT_CHECK(Type t, bool cond) noexcept {
    if (!cond) {
      details::terminate();
    }
  }

  constexpr void Expects(bool cond) noexcept { GSL_CONTRACT_CHECK("Precondition", cond); }
  constexpr void Ensures(bool cond) noexcept { GSL_CONTRACT_CHECK("Postcondition", cond); }

  /* Utilities */

  using gsl::byte;
  using gsl::final_action;
  using gsl::finally;
  using gsl::index;
  using gsl::narrow;
  using gsl::narrow_cast;
  using gsl::narrowing_error;
}  // namespace gsl
