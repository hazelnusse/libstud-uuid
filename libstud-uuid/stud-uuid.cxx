#include <libstud-uuid/stud-uuid.hxx>

#include <ostream>
#include <stdexcept>

namespace stud_uuid
{
  void say_hello(std::ostream& o, const std::string& n)
  {
    if (n.empty())
      throw std::invalid_argument ("empty name");

    o << "Hello, " << n << "!\n";
  }
}
