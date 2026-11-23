#include "cpp-template/template-class.hpp"

namespace template_namespace
{
  TemplateClass add(const TemplateClass &a, const TemplateClass &b)
  {
    return {a.a + b.a, a.b + b.b};
  }
} // namespace template_namespace
