#ifndef _TEMPLATE_CLASS_
#define _TEMPLATE_CLASS_
/**
 * @namespace template_namespace
 * @brief Placeholder namespace for the template
 */
namespace template_namespace {
/**
 * @brief A placeholder class for the project.
 *
 * Holds two integers a and b as placeholders
 * source for documentation and tests.
 *
 * Example:
 *
 * @snippet class-example.cpp template-class-initialize
 */
struct TemplateClass {
  int a; ///< Placeholder a
  int b; ///< Placeholder b
};
/**
 * @brief Placeholder function to sum TemplateClass objects
 *
 * @param a The first TemplateClass parameter
 * @param b The second TemplateClass parameter
 * @return  A TemplateClass object with sum of `a.a` and `b.a` as `a` and the sum of `a.b` and `b.b` as `b`.
 *
 * Example:
 *
 * @snippet class-example.cpp add-function
 */
TemplateClass add(const TemplateClass &a, const TemplateClass &b);
} // namespace template_namespace
#endif
