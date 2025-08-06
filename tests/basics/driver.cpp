#include <SimTKcommon/basics.h>

int main ()
{
  using namespace SimTK;

  String s{"hEllO"};

  bool b{true};
  float f{1.2};
  double d{3.4};

  return (!s.tryConvertToBool(b) &&
          !s.tryConvertToFloat(f) &&
          !s.tryConvertToDouble(d) &&
          s.toUpper() == "HELLO" &&
          s.toLower() == "hello") ? 0 : 1;
}
