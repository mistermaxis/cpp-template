#include <cpp-template/template-class.hpp>
#include <iostream>

int main(int, char**){
  template_namespace::TemplateClass t1 { 2, 3 };
  template_namespace::TemplateClass t2 { -22, 4 };

  template_namespace::TemplateClass t3;
  t3 = template_namespace::add(t1, t2);

  std::cout << t3.a << std::endl;
  std::cout << t3.b << std::endl;
}
