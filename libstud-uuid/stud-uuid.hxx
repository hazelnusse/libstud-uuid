#pragma once

#include <iosfwd>
#include <string>

#include <libstud-uuid/export.hxx>

namespace stud_uuid
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBSTUD_UUID_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
