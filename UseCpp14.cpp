#include <iostream>
#include <memory>

struct widget
{
	int value = 0;
};

int main(int argc, const char** argv)
{
  auto w = std::make_unique<widget>();
  w->value = argc;

  return (w->value == 0) ? -1 : 0;
} 
