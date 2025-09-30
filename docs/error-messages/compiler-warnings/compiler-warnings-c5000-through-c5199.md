---
title: "Microsoft C/C++ compiler (MSVC) warnings C5000 through C5199"
description: "Table of Microsoft C/C++ (MSVC) compiler warnings C5000 through C5199."
ms.date: 04/17/2024
f1_keywords: ["C5022", "C5023", "C5024", "C5025", "C5026", "C5027", "C5028", "C5029", "C5030", "C5031", "C5032", "C5034", "C5035", "C5036", "C5039", "C5040", "C5041", "C5042", "C5043", "C5044", "C5047", "C5048", "C5049", "C5051", "C5052", "C5053", "C5057", "C5058", "C5059", "C5060", "C5061", "C5062", "C5063", "C5081", "C5100", "C5101", "C5102", "C5103", "C5104", "C5106", "C5107", "C5108", "C5109", "C5110"]
helpviewer_keywords: ["C5022", "C5023", "C5024", "C5025", "C5026", "C5027", "C5028", "C5029", "C5030", "C5031", "C5032", "C5034", "C5035", "C5036", "C5039", "C5040", "C5041", "C5042", "C5043", "C5044", "C5047", "C5048", "C5049", "C5051", "C5052", "C5053", "C5057", "C5058", "C5059", "C5060", "C5061", "C5062", "C5063", "C5081", "C5100", "C5101", "C5102", "C5103", "C5104", "C5106", "C5107", "C5108", "C5109", "C5110"]
---
# Microsoft C/C++ compiler warnings C5000 through C5199

The articles in this section describe Microsoft C/C++ compiler warning messages C5000 through C5199.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## Warning messages

| Warning | Message |
|--|--|
| Compiler warning C5022 | '*type*': multiple move constructors specified |
| Compiler warning C5023 | '*type*': multiple move assignment operators specified |
| Compiler warning (level 4, off) C5024 | '*type*': move constructor was implicitly defined as deleted |
| Compiler warning (level 4, off) C5025 | '*type*': move assignment operator was implicitly defined as deleted |
| Compiler warning (level 1 and level 4, off) C5026 | '*type*': move constructor was implicitly defined as deleted |
| Compiler warning (level 1 and level 4, off) C5027 | '*type*': move assignment operator was implicitly defined as deleted |
| Compiler warning (level 1) C5028 | '*name*': Alignment specified in prior declaration (*number*) not specified in definition |
| Compiler warning (level 4, off) C5029 | nonstandard extension used: alignment attributes in C++ apply to variables, data members and tag types only |
| Compiler warning (level 3) C5030 | attribute `[[`*attribute_name*`]]` is not recognized |
| Compiler warning (level 4, off) C5031 | `#pragma warning(pop)`: likely mismatch, popping warning state pushed in different file |
| Compiler warning (level 4, off) C5032 | detected `#pragma warning(push)` with no corresponding `#pragma warning(pop)` |
| [Compiler warning (level 1) C5033](c5033.md) | '*storage-class*' is no longer a supported storage class |
| Compiler warning (level 4, off) C5034 | use of intrinsic '*intrinsic*' causes function *function-name* to be compiled as guest code |
| Compiler warning (level 4, off) C5035 | use of feature '*feature*' causes function *function-name* to be compiled as guest code |
| Compiler warning (level 1) C5036 | `varargs` function pointer conversion when compiling with /hybrid:x86arm64 from type '*type1*' to type '*type2*' |
| [Compiler warning (level 3, error) C5037](c5037.md) | '*member-function*': an out-of-line definition of a member of a class template cannot have default arguments |
| [Compiler warning (level 4, off) C5038](c5038.md) | *data member* '*member1*' will be initialized after *data member* '*member2*' |
| Compiler warning (level 4, off) C5039 | '*function*': pointer or reference to potentially throwing function passed to '`extern "C"`' function under `-EHc`. Undefined behavior may occur if this function throws an exception. |
| Compiler warning (level 3) C5040 | dynamic exception specifications are valid only in C++14 and earlier; treating as noexcept(false) |
| Compiler warning (level 4, off) C5041 | '*definition*': out-of-line definition for `constexpr` static data member is not needed and is deprecated in C++17 |
| Compiler warning (level 3, off) C5042 | '*declaration*': function declarations at block scope cannot be specified '`inline`' in standard C++; remove '`inline`' specifier |
| Compiler warning (level 2) C5043 | '*specification*': exception specification does not match previous declaration |
| Compiler warning (level 4) C5044 | An argument to command-line option *option-name* points to a path '*path-name*' that does not exist |
| [Compiler warning (level 4) C5045](c5045.md) | Compiler will insert Spectre mitigation for memory load if `/Qspectre` switch specified |
| [Compiler warning (level 2) C5046](c5046.md) | '*function*': Symbol involving type with internal linkage not defined |
| Compiler warning (level 1, error) C5047 | use of nonstandard '*keyword*' with modules is not supported |
| Compiler warning (level 1) C5048 | Use of macro '*macroname*' may result in non-deterministic output |
| Compiler warning (level 1) C5049 | '*string*': Embedding a full path may result in machine-dependent output |
| [Compiler warning (level 1) C5050](c5050.md) | Possible incompatible environment while importing module '*module_name*': *issue* |
| Compiler warning (level 1) C5051 | attribute `[[`*attribute-name*`]]` requires at least '*standard_version*'; ignored |
| Compiler warning (level 3, off) C5052 | Keyword '*keyword-name*' was introduced in `C++`*version* and requires use of the '*switch*' command-line option |
| Compiler warning (level 1) C5053 | support for '`explicit(<expr>)`' in C++17 and earlier is a vendor extension |
| [Compiler warning (level 4) C5054](c5054.md) | operator '*operator-name*': deprecated between enumerations of different types |
| [Compiler warning (level 1) C5055](c5055.md) | operator '*operator-name*': deprecated between enumerations and floating-point types |
| [Compiler warning (level 1) C5056](c5056.md) | operator '*operator-name*': deprecated for array types |
| Compiler warning (level 1) C5057 | header unit reference to '*name*' already exists.  Ignoring header unit '*header-name*' |
| Compiler warning (level 1) C5058 | file system error: cannot find header file '*file-name*' for header unit '*unit-name*' |
| Compiler warning C5059 | runtime checks and address sanitizer is not currently supported - disabling runtime checks |
| Compiler warning (level 4) C5060 | `/Qpar` and address sanitizer not currently supported - disabling auto-parallelization |
| Compiler warning (level 4) C5061 | the use of a comma operator as a subscript expression has been deprecated |
| Compiler warning (level 4) C5062 | `enum` direct list initialization between '*type-1*' and '*type-2*' is no longer supported |
| Compiler warning (level 1) C5063 | '`std::is_constant_evaluated`' always evaluates to true in manifestly constant-evaluated expressions |
| [Compiler warning (level 1) C5072](compiler-warning-c5072.md) | ASAN enabled without debug information emission. Enable debug info for better ASAN error reporting |
| Compiler warning (level 1) C5081 | Secure hotpatch is not supported with `/GENPROFILE`, `/FASTGENPROFILE` or `/LTCG:PGI`, disabling secure hotpatch. |
| Compiler warning (level 1) C5100 | `__VA_ARGS__` is reserved for use in variadic macros |
| Compiler warning (level 1) C5101 | use of preprocessor directive in function-like macro argument list is undefined behavior |
| Compiler warning (level 1) C5102 | ignoring invalid command-line macro definition '*value*' |
| Compiler warning (level 1) C5103 | pasting '*token1*' and '*token2*' does not result in a valid preprocessing token |
| Compiler warning (level 1) C5104 | found '*string1*`#`*string2*' in macro replacement list, did you mean '*string1*`""#`*string2*'? |
| [Compiler warning (level 1) C5105](c5105.md) | macro expansion producing 'defined' has undefined behavior |
| Compiler warning (level 1) C5106 | macro redefined with different parameter names |
| Compiler warning (level 1) C5107 | missing terminating '*char*' character |
| Compiler warning (level 1) C5108 | `__VA_OPT__` is reserved for use in variadic macros |
| Compiler warning (level 1) C5109 | `__VA_OPT__` use in macro requires '`/Zc:preprocessor`' |
| Compiler warning (level 4, off) C5110 | `__VA_OPT__` is an extension prior to C++20 or C23 |

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md)\
[Compiler warnings C4000 - C5999](compiler-warnings-c4000-c5999.md)
