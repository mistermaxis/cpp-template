// [template-class-initialize]
#include "cpp-template/template-class.hpp"

int main(int, char **)
{
  template_namespace::TemplateClass tc = { 12, 22 };
}
// [template-class-initialize]

// [add-function]
#include "cpp-template/template-class.hpp"
#include <iostream>

int main(int, char **)
{
  template_namespace::TemplateClass tc1 = { 3, 5 };
  template_namespace::TemplateClass tc2 = { 3, 5 };
  template_namespace::TemplateClass tcr = template_namespace::add(tc1, tc2);
  std::cout << "Result: { a: " << tcr.a << ", b: " << tcr.b << " }\n";
}
// [add-function]
