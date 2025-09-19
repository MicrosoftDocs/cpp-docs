---
title: "Microsoft C/C++ compiler (MSVC) compiler warnings C5200 through C5399"
description: "Table of Microsoft C/C++ compiler (MSVC) warnings C5200 through C5399."
ms.date: 04/19/2024
f1_keywords: ["C5200", "C5201", "C5202", "C5203", "C5204", "C5205", "C5206", "C5207", "C5209", "C5210", "C5212", "C5213", "C5214", "C5215", "C5216", "C5217", "C5218", "C5219", "C5220", "C5221", "C5222", "C5223", "C5224", "C5225", "C5226", "C5227", "C5228", "C5229", "C5230", "C5231", "C5232", "C5233", "C5234", "C5235", "C5236", "C5237", "C5238", "C5239", "C5241", "C5242", "C5244", "C5245", "C5246", "C5249", "C5250", "C5251", "C5252", "C5253", "C5254", "C5255", "C5256", "C5257", "C5258", "C5259", "C5260", "C5261", "C5263", "C5264", "C5265", "C5268", "C5269", "C5270", "C5271", "C5272", "C5273", "C5274", "C5275", "C5276", "C5277", "C5278", "C5279", "C5280", "C5281", "C5282", "C5283", "C5284", "C5285", "C5286", "C5287", "C5300", "C5303", "C5304", "C5305", "C5306", "C5307", "C5308", "C5309"]
helpviewer_keywords: ["C5200", "C5201", "C5202", "C5203", "C5204", "C5205", "C5206", "C5207", "C5209", "C5210", "C5212", "C5213", "C5214", "C5215", "C5216", "C5217", "C5218", "C5219", "C5220", "C5221", "C5222", "C5223", "C5224", "C5225", "C5226", "C5227", "C5228", "C5229", "C5230", "C5231", "C5232", "C5233", "C5234", "C5235", "C5236", "C5237", "C5238", "C5239", "C5241", "C5242", "C5244", "C5245", "C5246", "C5249", "C5250", "C5251", "C5252", "C5253", "C5254", "C5255", "C5256", "C5257", "C5258", "C5259", "C5260", "C5261", "C5263", "C5264", "C5265", "C5268", "C5269", "C5270", "C5271", "C5272", "C5273", "C5274", "C5275", "C5276", "C5277", "C5278", "C5279", "C5280", "C5281", "C5282", "C5283", "C5284", "C5285", "C5286", "C5287", "C5300", "C5303", "C5304", "C5305", "C5306", "C5307", "C5308", "C5309"]
---
# Microsoft C/C++ compiler warnings C5200 through C5399

The articles in this section describe Microsoft C/C++ compiler warning messages C5200 through C5399.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## Warning messages

| Warning | Message |
|--|--|
| Compiler warning (level 1) C5200 | *feature* '*feature-name*' requires compiler flag '*option-name*' |
| Compiler warning (level 1) C5201 | a module declaration can appear only at the start of a translation unit unless a global module fragment is used |
| Compiler warning (level 1) C5202 | a global module fragment can only contain preprocessor directives |
| Compiler warning (level 1) C5203 | a parenthesized declarator name after '`explicit`' will be considered an explicit-specifier in C++20 |
| Compiler warning (level 3, off) C5204 | '*type-name*': class has virtual functions, but its trivial destructor is not virtual; instances of objects derived from this class may not be destructed correctly |
| Compiler warning (level 4) C5205 | delete of an abstract class '*type-name*' that has a non-virtual destructor results in undefined behavior |
| Compiler warning (level 3) C5206 | deduced return types for coroutines is a non-standard extension |
| Compiler warning (level 1) C5207 | the simple requirement asserts the validity of expression '`e->id`'. Did you mean '`{ e } -> id`'? You can suppress the warning using '`{ e->id }`' |
| [Compiler warning (level 1, error) C5208](c5208.md) | unnamed class used in `typedef` name cannot declare members other than non-static data members, member enumerations, or member classes |
| Compiler warning (level 1) C5209 | the C++20 syntax for an init-capture has changed to '`& ...opt identifier initializer`' |
| Compiler warning (level 1) C5210 | '*name*' is not a valid header unit reference; ignoring |
| Compiler warning (level 1) C5212 | '*name*' is not a valid named reference; treating as reference to file |
| Compiler warning (level 1) C5213 | '*name*' named reference is treated as a named partition but the *module* name is not specified; treating as reference to file |
| Compiler warning (level 4, off) C5214 | applying '*modifier*' to an operand with a volatile qualified type is deprecated in C++20 |
| Compiler warning (level 4, off) C5215 | '*name*' a function parameter with a volatile qualified type is deprecated in C++20 |
| Compiler warning (level 4, off) C5216 | '*name*' a volatile qualified return type is deprecated in C++20 |
| Compiler warning (level 4, off) C5217 | a structured binding declaration that includes volatile is deprecated in C++20 |
| Compiler warning (level 1) C5218 | destroying delete may not behave as intended when non-conforming switches '`/Zc:sizedDealloc-`' or '`/Zc:alignedNew-`' are used |
| Compiler warning (level 2, off) C5219 | implicit conversion from '*type-1*' to '*type-2*', possible loss of data |
| Compiler warning (level 4, off) C5220 | '*name*': a non-static data member with a volatile qualified type no longer implies<br> that compiler generated copy/move constructors and copy/move assignment operators are not trivial |
| Compiler warning (level 1) C5221 | `xfg::rename` is deprecated. |
| Compiler warning (level 3) C5222 | '*attribute-name*': all unscoped attribute names are reserved for future standardization |
| Compiler warning (level 3) C5223 | all attribute names in the attribute namespace '`msvc`' are reserved for the implementation |
| Compiler warning (level 3) C5224 | all attribute names in the attribute namespace '*namespace-name*' are reserved for future standardization |
| Compiler warning (level 1) C5225 | '*symbol*': exported inline function defined in a private module fragment is a non-standard extension |
| Compiler warning (level 1) C5226 | '*symbol*': exported template defined in private module fragment has no reachable instantiation |
| Compiler warning (level 4) C5227 | nonstandard extension, resolved '*symbol*' to '*value*' which is not visible with `/permissive-` on. |
| Compiler warning (level 4) C5228 | nonstandard extension, '*identifier*' resolved to a member of a dependent base. This lookup is not allowed under `/permissive-`. |
| Compiler warning (level 4) C5229 | nonstandard extension, the hidden friend function '*function-name*' was found by name lookup which isn't allowed under `/permissive-`. |
| Compiler warning C5230 | nonstandard extension, '*identifier*' was resolved to '*symbol-1*' under `/permissive`. Under `/permissive-` it would resolve to '*symbol-2*'. |
| Compiler warning (level 3, error) C5231 | the expression '`co_await promise.final_suspend()`' must be non-throwing |
| Compiler warning (level 1) C5232 | in C++20 this comparison calls '*name*' recursively |
| Compiler warning (level 4, off) C5233 | explicit lambda capture '*identifier*' is not used |
| Compiler warning (level 1) C5234 | file system error: '*filename*' is not a valid header-name; ignoring |
| Compiler warning (level 1) C5235 | JSON parse error: *message*; ignoring '*filename*' |
| Compiler warning (level 1) C5236 | JSON ill-formed: *message*; ignoring '*filename*' |
| Compiler warning (level 1) C5237 | cannot resolve header unit entry '*name*' to a header file in '*filename*'; ignoring entry |
| Compiler warning (level 1) C5238 | file system error: cannot open '*filename*' for reading; ignoring |
| Compiler warning (level 4) C5239 | '*symbol*': potentially-throwing function called from a function declared `__declspec(nothrow)`. Undefined behavior may occur if an exception is thrown. |
| [Compiler warning (level 4, off) C5240](c5240.md) | '*attribute-name*': attribute is ignored in this syntactic position |
| Compiler warning (level 1) C5241 | '`/exportHeader`' usage to lookup header-name is deprecated; prefer '`/headerName:`*name* *value*`=`*filename*' |
| Compiler warning (level 1) C5242 | syntax error in pragma '*identifier*' |
| [Compiler warning (level 1, off) C5243](c5243.md) | '*type-name*': using incomplete class '*class-name*' can cause potential one definition rule violation due to ABI limitation |
| Compiler warning (level 1) C5244 | '`#include <`*filename*`>`' in the purview of module '*module-name-1*' appears erroneous.  Consider moving that directive before the module declaration, or replace the textual inclusion with '`import <`*module-name-2*`>;`'. |
| Compiler warning (level 4, off) C5245 | '*function*': unreferenced function with internal linkage has been removed |
| Compiler warning (level 1, off) C5246 | '*member*': the initialization of a subobject should be wrapped in braces |
| [Compiler warning (level 1, off) C5247](c5247.md) | section '*section-name*' is reserved for C++ dynamic initialization. Manually creating the section will interfere with C++ dynamic initialization and may lead to undefined behavior |
| [Compiler warning (level 1, off) C5248](c5248.md) | section '*section-name*' is reserved for C++ dynamic initialization. Variables manually put into the section may be optimized out and their order relative to compiler generated dynamic initializers is unspecified |
| Compiler warning (level 1, off) C5249 | '*bitfield*' of type '*enumeration_name*' has named enumerators with values that cannot be represented in the given bit field width of '*bitfield_width*'. |
| Compiler warning (level 3, off) C5250 | '*function_name*': intrinsic function not declared |
| Compiler warning (level 4, off) C5251 | the value of `#pragma` *pragma name* changed after `#include`; `#pragma `*pragma name*`(pop)` missing in this header? |
| Compiler warning (level 4) C5252 | Multiple different types resulted in the same XFG type-hash *hash-value*; the PDB will only record information for one of them |
| Compiler warning (level 4) C5253 | a non-local lambda cannot have a capture default |
| Compiler warning (level 4, off) C5254 | language feature 'terse static assert' requires compiler flag '*/std:c++17*' |
| Compiler warning (level 3) C5255 | unterminated bidirectional character encountered: '`U+`*XXXX*' |
| Compiler warning (level 1, off) C5256 | '*enumeration*': a non-defining declaration of an enumeration with a fixed underlying type is only permitted as a standalone declaration |
| Compiler warning (level 1 and level 4) C5257 | '*enumeration*': enumeration was previously declared without a fixed underlying type |
| Compiler warning (level 4, off) C5258 | explicit capture of '*symbol*' is not required for this use |
| Compiler warning (level 4, off) C5259 | '*specialized-type*': explicit specialization requires 'template <>' |
| Compiler warning (level 1) C5260 | the constant variable '*variable-name*' has internal linkage in an included header file context, but external linkage in imported header unit context; consider declaring it 'inline' as well if it will be shared across translation units, or 'static' to express intent to use it local to this translation unit |
| Compiler warning (level 2) C5261 | no integer type can represent all enumerator values in enumeration '*enum-name*' |
| [Compiler warning (level 1, off) C5262](c5262.md) | implicit fall-through occurs here; are you missing a break statement? Use `[[fallthrough]]` when a `break` statement is intentionally omitted between cases |
| Compiler warning (level 4, off) C5263 | calling '`std::move`' on a temporary object prevents copy elision |
| Compiler warning (level 4, off) C5264 | '*variable-name*': 'const' variable is not used |
| Compiler warning (level 1) C5265 | cannot open search path '*path*' |
| [Compiler warning (level 4, off) C5266](compiler-warning-level-4-c5266.md) | '*const*' qualifier on return type has no effect |
| [Compiler warning (level 4, off) C5267](c5267.md) | definition of implicit *copy constructor/assignment operator* for '*type*' is deprecated because it has a user-provided *assignment operator/copy constructor* |
| Compiler warning (level 1) C5268 | Failed to allocate memory at fixed address 0x*address*. Use `/Yb` to specify a specific address base if bit-identical .pch files are required. |
| Compiler warning (level 1) C5269 | Failed to allocate PCH memory at fixed address 0x*address*. Use `/Ym` to specify a specific address base if bit-identical .pch files are required. |
| Compiler warning (level 3) C5270 | '*value*' is not allowed for option '*switch name*'; allowed values are: *value list* |
| Compiler warning (level 4) C5271 | previously imported assembly '*assembly1*' has the same name as assembly '*assembly2*' being imported. Is this intentional? |
| Compiler warning (level 1) C5272 | throwing an object of non-copyable type '*type*' is non-standard. If a copy is needed at runtime it will be made as if by `memcpy`. |
| Compiler warning (level 1) C5273 | behavior change: `_Alignas` on anonymous type no longer ignored (promoted members will align) |
| Compiler warning (level 1) C5274 | behavior change: `_Alignas` no longer applies to the type '*type*' (only applies to declared data objects) |
| Compiler warning (error) C5275 | assembly '*name*' being imported under '*/clr*' does not contain the required fundamental types |
| Compiler warning (level 1) C5276 | `/experimental:ifcDebugRecords` currently requires `/Z7` to be enabled.  Please recompile with `/Z7` enabled.|
| Compiler warning (level 1) C5277 | type trait optimization for '*class name*' is disabled |
| Compiler warning (level 1) C5278 | adding a specialization for '*type*' has undefined behavior |
| Compiler warning (level 1) C5279 | a lambda declarator without a parameter list requires at least '*language version*' |
| Compiler warning (level 1) C5280 | a static operator '*operator name*' requires at least '*language version*'|
| Compiler warning (level 1) C5281 | a static lambda requires at least '*language version*' |
| Compiler warning (level 1) C5282 | '`if consteval`' requires at least '*language version*' |
| Compiler warning (level 1) C5283 | an attribute in this position requires at least '*language version*' |
| Compiler warning (level 4) C5284 | conversion from value '*value*' of type '*type 1*' to '*type 2*' requires a narrowing conversion |
| Compiler warning (level 1) C5285 | cannot declare a specialization for '*template name*': *template argument* |
| Compiler warning (level 1) C5286 | implicit conversion from `enum` type '*type 1*' to `enum` type '*type 2*'; use an explicit cast to silence this warning |
| Compiler warning (level 1) C5287 | operands are different `enum` types '*type 1*' and '*type 2*'; use an explicit cast to silence this warning |
| Compiler warning (error) C5300 | '`#pragma omp atomic` *clause*': expression mismatch for lvalue being updated |
| [Compiler warning (level 1) C5301](c5301-c5302.md) | '`#pragma omp for`': '*loop-index*' increases while loop condition uses '*comparison*'; non-terminating loop? |
| [Compiler warning (level 1) C5302](c5301-c5302.md) | '`#pragma omp for`': '*loop-index*' decreases while loop condition uses '*comparison*'; non-terminating loop? |
| Compiler warning (level 1) C5303 | function marked with `[[msvc::intrinsic]]` did not result in a no-op cast |
| Compiler warning (level 1) C5304 | a declaration designated by the using-declaration '*name1*' exported from this module has internal linkage and using such a name outside the module is ill-formed; consider declaring '*name2*' '`inline`' to use it outside of this module |
| Compiler warning (level 1) C5305 | '*name*': an explicit instantiation declaration that follows an explicit instantiation definition is ignored |
| Compiler warning (level 1) C5306 | parameter array behavior change: overload '*identifier 1*' resolved to '*identifier 2*'; previously, it would have resolved to '*identifier 3*'. Use `/clr:ECMAParamArray` to revert to old behavior |
| Compiler warning (level 3) C5307 | '*function*': argument (*argument number*) converted from '*type 1*' to '*type 2*'. Missing '`L`' encoding-prefix for character literal? |
| Compiler warning (level 1, error) C5308 | Modifying reserved macro name '*macro name*' may cause undefined behavior |
| Compiler warning (level 1, error) C5309 | literal suffix '*name*' requires at least '*language version*'|

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md)\
[Compiler warnings C4000 - C5999](compiler-warnings-c4000-c5999.md)
