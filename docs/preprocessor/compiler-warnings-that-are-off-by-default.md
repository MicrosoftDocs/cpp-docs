---
description: "Learn more about: Compiler warnings that are off by default"
title: "Compiler warnings that are off by default"
ms.date: 02/28/2023
helpviewer_keywords: ["warnings, compiler", "cl.exe compiler, setting options"]
ms.assetid: 69809cfb-a38a-4035-b154-283a61938df8
---
# Compiler warnings that are off by default

The compiler supports warnings that are turned off by default, because most developers don't find them useful. In some cases, they warn about a stylistic choice, or about common idioms in older code. Other warnings are about use of a Microsoft extension to the language. Some warnings indicate an area where programmers often make incorrect assumptions, which may lead to unexpected or undefined behavior. If all of these warnings are enabled, some of them may appear many times in library headers. The C runtime libraries and the C++ standard libraries are intended to emit no warnings only at warning level [`/W4`](../build/reference/compiler-option-warning-level.md).

## Enable warnings that are off by default

You can enable warnings that are normally off by default by using one of the following options:

- **`#pragma warning(default :`** *warning_number* **`)`**

   The specified warning (*warning_number*) is enabled at its default level. Documentation for the warning contains the default level of the warning.

- **`#pragma warning(`** *warning_level* **`:`** *warning_number* **`)`**

   The specified warning (*warning_number*) is enabled at the specified level (*warning_level*).

- [`/Wall`](../build/reference/compiler-option-warning-level.md)

   `/Wall` enables all warnings that are off by default. If you use this option, you can turn off individual warnings by using the [`/wd`](../build/reference/compiler-option-warning-level.md) option.

- [`/wL`*nnnn*](../build/reference/compiler-option-warning-level.md)

   This option enables warning *nnnn* at level *L*.

## Warnings that are off by default

### Visual Studio 2015 and later versions

The following warnings are turned off by default in Visual Studio 2015 and later versions:

| Warning | Message |
|--|--|
| [C4061](../error-messages/compiler-warnings/compiler-warning-level-4-c4061.md) (level 4) | enumerator '*identifier*' in a switch of enum '*enumeration*' is not explicitly handled by a case label. |
| [C4062](../error-messages/compiler-warnings/compiler-warning-level-4-c4062.md) (level 4) | enumerator '*identifier*' in a switch of enum '*enumeration*' is not handled. |
| [C4165](../error-messages/compiler-warnings/compiler-warning-level-1-c4165.md) (level 1) | 'HRESULT' is being converted to 'bool'; are you sure this is what you want? |
| [C4191](../error-messages/compiler-warnings/compiler-warning-level-3-c4191.md) (level 3) | '*operator*': unsafe conversion from '*type_of_expression*' to '*type_required*' |
| [C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) (level 4) | '*identifier*': conversion from '*type1*' to '*type2*', possible loss of data |
| [C4254](../error-messages/compiler-warnings/compiler-warning-level-4-c4254.md) (level 4) | '*operator*': conversion from '*type1*' to '*type2*', possible loss of data |
| [C4255](../error-messages/compiler-warnings/compiler-warning-level-4-c4255.md) (level 4) | '*function*': no function prototype given: converting '()' to '(void)' |
| [C4263](../error-messages/compiler-warnings/compiler-warning-level-4-c4263.md) (level 4) | '*function*': member function does not override any base class virtual member function |
| [C4264](../error-messages/compiler-warnings/compiler-warning-level-1-c4264.md) (level 1) | '*virtual_function*': no override available for virtual member function from base '*class*'; function is hidden |
| [C4265](../error-messages/compiler-warnings/compiler-warning-level-3-c4265.md) (level 3) | '*class*': class has virtual functions, but destructor is not virtual |
| [C4266](../error-messages/compiler-warnings/compiler-warning-level-4-c4266.md) (level 4) | '*function*': no override available for virtual member function from base '*type*'; function is hidden |
| [C4287](../error-messages/compiler-warnings/compiler-warning-level-3-c4287.md) (level 3) | '*operator*': unsigned/negative constant mismatch |
| [C4289](../error-messages/compiler-warnings/compiler-warning-level-4-c4289.md) (level 4) | nonstandard extension used : '*var*' : loop control variable declared in the for-loop is used outside the for-loop scope |
| [C4296](../error-messages/compiler-warnings/compiler-warning-level-4-c4296.md) (level 4) | '*operator*': expression is always false |
| [C4339](../error-messages/compiler-warnings/compiler-warning-level-4-c4339.md) (level 4) | '*type*' : use of undefined type detected in CLR meta-data - use of this type may lead to a runtime exception |
| [C4342](../error-messages/compiler-warnings/compiler-warning-level-1-c4342.md) (level 1) | behavior change: '*function*' called, but a member operator was called in previous versions |
| [C4350](../error-messages/compiler-warnings/compiler-warning-level-1-c4350.md) (level 1) | behavior change: '*member1*' called instead of '*member2*' |
| [C4355](../error-messages/compiler-warnings/compiler-warning-c4355.md) | 'this' : used in base member initializer list |
| [C4365](../error-messages/compiler-warnings/compiler-warning-level-4-c4365.md) (level 4) | '*action*': conversion from '*type_1*' to '*type_2*', signed/unsigned mismatch |
| C4370 (level 3) | layout of class has changed from a previous version of the compiler due to better packing |
| [C4371](../error-messages/compiler-warnings/c4371.md) (level 3) | '*class-name*': layout of class may have changed from a previous version of the compiler due to better packing of member '*member*' |
| [C4388](../error-messages/compiler-warnings/c4388.md) (level 4) | signed/unsigned mismatch |
| [C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md) (level 2) | '*function*': function signature contains type '*type*'; C++ objects are unsafe to pass between pure code and mixed or native |
| C4426 (level 1) | optimization flags changed after including header, may be due to #pragma optimize() <sup>14.1</sup> |
| [C4435](../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md) (level 4) | '*class1*' : Object layout under /vd2 will change due to virtual base '*class2*'. |
| [C4437](../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md) (level 4) | dynamic_cast from virtual base '*class1*' to '*class2*' could fail in some contexts. |
| C4444 (level 3) | top level '__unaligned' is not implemented in this context. |
| [C4464](../error-messages/compiler-warnings/compiler-warning-level-4-c4464.md) (level 4) | relative include path contains '..' |
| [C4471](../error-messages/compiler-warnings/compiler-warning-level-4-c4471.md) (level 4) | a forward declaration of an unscoped enumeration must have an underlying type (int assumed) <sup>Perm</sup> |
| C4472 (level 1) | '*identifier*' is a native enum: add an access specifier (private/public) to declare a managed enum |
| [C4514](../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md) (level 4) | '*function*': unreferenced inline function has been removed |
| [C4536](../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md) (level 4) | 'type name': type-name exceeds meta-data limit of '*limit*' characters |
| [C4545](../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md) (level 1) | expression before comma evaluates to a function which is missing an argument list |
| [C4546](../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md) (level 1) | function call before comma missing argument list |
| [C4547](../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md) (level 1) | '*operator*': operator before comma has no effect; expected operator with side-effect |
| [C4548](../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md) (level 1) | expression before comma has no effect; expected expression with side-effect |
| [C4549](../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md) (level 1) | '*operator1*': operator before comma has no effect; did you intend '*operator2*'? |
| [C4555](../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md) (level 1) | expression has no effect; expected expression with side-effect |
| [C4557](../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md) (level 3) | '__assume' contains effect '*effect*' |
| [C4571](../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md) (level 4) | informational: catch(...) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught |
| C4574 (level 4) | '*identifier*' is defined to be '0': did you mean to use '#if *identifier*'? |
| [C4577](../error-messages/compiler-warnings/compiler-warning-level-1-c4577.md) (level 1) | '`noexcept`' used with no exception handling mode specified; termination on exception is not guaranteed. Specify `/EHsc` |
| C4582 (level 4) | '*type*': constructor is not implicitly called |
| C4583 (level 4) | '*type*': destructor is not implicitly called |
| C4587 (level 1) | '*anonymous_structure*': behavior change: constructor is no longer implicitly called |
| C4588 (level 1) | '*anonymous_structure*': behavior change: destructor is no longer implicitly called |
| [C4596](../error-messages/compiler-warnings/c4596.md) (level 4) | '*identifier*': illegal qualified name in member declaration <sup>14.3</sup> <sup>Perm</sup> |
| C4598 (level 1 and level 3) | '#include "*header*"': header number *header-number* in the precompiled header does not match current compilation at that position <sup>14.3</sup> |
| C4599 (level 3) | '*option* *path*': command-line argument number *arg_number* does not match pre-compiled header <sup>14.3</sup> |
| C4605 (level 1) | '/D*macro*' specified on current command line, but was not specified when precompiled header was built |
| [C4608](../error-messages/compiler-warnings/compiler-warning-level-3-c4608.md) (level 3) | '*union_member*' has already been initialized by another union member in the initializer list, '*union_member*' <sup>Perm</sup> |
| [C4619](../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md) (level 3) | #pragma warning: there is no warning number '*number*' |
| [C4623](../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md) (level 4) | 'derived class': default constructor could not be generated because a base class default constructor is inaccessible |
| [C4625](../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md) (level 4) | 'derived class': copy constructor could not be generated because a base class copy constructor is inaccessible |
| [C4626](../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md) (level 4) | 'derived class': assignment operator could not be generated because a base class assignment operator is inaccessible |
| [C4628](../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md) (level 1) | digraphs not supported with -Ze. Character sequence '*digraph*' not interpreted as alternate token for '*char*' |
| [C4640](../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md) (level 3) | '*instance*': construction of local static object is not thread-safe |
| C4643 (level 4) | Forward declaring '*identifier*' in namespace std is not permitted by the C++ Standard. <sup>15.8</sup> |
| C4647 (level 3) | behavior change: __is_pod(*type*) has different value in previous versions |
| C4654 (level 4) | Code placed before include of precompiled header line will be ignored. Add code to precompiled header. <sup>14.1</sup> |
| [C4668](../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md) (level 4) | '*symbol*' is not defined as a preprocessor macro, replacing with '0' for '*directives*' |
| [C4682](../error-messages/compiler-warnings/compiler-warning-level-4-c4682.md) (level 4) | '*symbol*' : no directional parameter attribute specified, defaulting to \[in] |
| [C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md) (level 3) | '*user-defined type*': possible change in behavior, change in UDT return calling convention |
| [C4692](../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md) (level 1) | '*function*': signature of non-private member contains assembly private native type '*native_type*' |
| [C4710](../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md) (level 4) | '*function*': function not inlined |
| [C4738](../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md) (level 3) | storing 32-bit float result in memory, possible loss of performance |
| [C4746](../error-messages/compiler-warnings/compiler-warning-c4746.md) | volatile access of '*expression*' is subject to /volatile:\<iso\|ms> setting; consider using __iso_volatile_load/store intrinsic functions |
| C4749 (level 4) | conditionally supported: offsetof applied to non-standard-layout type '*type*' |
| C4767 (level 4) | section name '*symbol*' is longer than 8 characters and will be truncated by the linker |
| C4774 (level 4) | '*string*' : format string expected in argument *number* is not a string literal |
| C4777 (level 4) | '*function*' : format string '*string*' requires an argument of type '*type1*', but variadic argument *number* has type '*type2*' |
| C4786 (level 3) | '*symbol*' : object name was truncated to '*number*' characters in the debug information |
| [C4800](../error-messages/compiler-warnings/compiler-warning-level-3-c4800.md) (level 4) | Implicit conversion from '*type*' to bool. Possible information loss <sup>16.0</sup> |
| [C4820](../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md) (level 4) | '*bytes*' bytes padding added after construct '*member_name*' |
| [C4822](../error-messages/compiler-warnings/compiler-warning-level-1-c4822.md) (level 1) | '*member*': local class member function does not have a body |
| C4826 (level 2) | Conversion from '*type1*' to '*type2*' is sign-extended. This may cause unexpected runtime behavior. |
| C4837 (level 4) | trigraph detected: '`??`*character*' replaced by '*character*' |
| [C4841](../error-messages/compiler-warnings/c4841.md) (level 4) | non-standard extension used: compound member designator used in offsetof |
| C4842 (level 4) | the result of 'offsetof' applied to a type using multiple inheritance is not guaranteed to be consistent between compiler releases |
| [C4866](../error-messages/compiler-warnings/c4866.md) (level 4) | '*file*(*line-number*)' compiler may not enforce left-to-right evaluation order for call to *operator* |
| [C4868](../error-messages/compiler-warnings/compiler-warning-c4868.md) (level 4) | '*file*(*line_number*)' compiler may not enforce left-to-right evaluation order in braced initialization list |
| [C4905](../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md) (level 1) | wide string literal cast to 'LPSTR' |
| [C4906](../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md) (level 1) | string literal cast to 'LPWSTR' |
| [C4917](../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md) (level 1) | '*declarator*': a GUID can only be associated with a class, interface, or namespace |
| [C4928](../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md) (level 1) | illegal copy-initialization; more than one user-defined conversion has been implicitly applied |
| [C4931](../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md) (level 4) | we are assuming the type library was built for number-bit pointers |
| [C4946](../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md) (level 1) | reinterpret_cast used between related classes: '*class1*' and '*class2*' |
| [C4962](../error-messages/compiler-warnings/compiler-warning-c4962.md) | '*function*': profile-guided optimizations disabled because optimizations caused profile data to become inconsistent |
| [C4986](../error-messages/compiler-warnings/compiler-warning-c4986.md) (level 4) | '*symbol*': exception specification does not match previous declaration |
| C4987 (level 4) | nonstandard extension used: 'throw (...)' |
| C4988 (level 4) | '*symbol*': variable declared outside class/function scope |
| C5022 | '*type*': multiple move constructors specified |
| C5023 | '*type*': multiple move assignment operators specified |
| C5024 (level 4) | '*type*': move constructor was implicitly defined as deleted |
| C5025 (level 4) | '*type*': move assignment operator was implicitly defined as deleted |
| C5026 (level 1 and level 4) | '*type*': move constructor was implicitly defined as deleted |
| C5027 (level 1 and level 4) | '*type*': move assignment operator was implicitly defined as deleted |
| C5029 (level 4) | nonstandard extension used: alignment attributes in C++ apply to variables, data members and tag types only |
| C5031 (level 4) | #pragma warning(pop): likely mismatch, popping warning state pushed in different file <sup>14.1</sup> |
| C5032 (level 4) | detected #pragma warning(push) with no corresponding #pragma warning(pop) <sup>14.1</sup> |

### Visual Studio 2017 and later versions

The following warnings are turned off by default in Visual Studio 2017 and later versions:

| Warning | Message |
|--|--|
| C5034 | use of intrinsic '*intrinsic*' causes function *function-name* to be compiled as guest code <sup>15.3</sup> |
| C5035 | use of feature '*feature*' causes function *function-name* to be compiled as guest code <sup>15.3</sup> |
| C5036 (level 1) | varargs function pointer conversion when compiling with /hybrid:x86arm64 '*type1*' to '*type2*' <sup>15.3</sup> |
| [C5038](../error-messages/compiler-warnings/c5038.md) (level 4) | data member '*member1*' will be initialized after data member '*member2*' <sup>15.3</sup> |
| C5039 (level 4) | '*function*': pointer or reference to potentially throwing function passed to extern C function under `-EHc`. Undefined behavior may occur if this function throws an exception. <sup>15.5</sup> |
| C5041 (level 4) | '*member-name*': out-of-line definition for constexpr static data member is not needed and is deprecated in C++17. <sup>15.2</sup> |
| C5042 (level 3) | '*function*': function declarations at block scope cannot be specified 'inline' in standard C++; remove 'inline' specifier <sup>15.5</sup> |
| [C5045](../error-messages/compiler-warnings/c5045.md) | Compiler will insert Spectre mitigation for memory load if /Qspectre switch specified <sup>15.7</sup> |

### Visual Studio 2019 and later versions

The following warnings are turned off by default in Visual Studio 2019 and later versions:

| Warning | Message |
|--|--|
| C5052 (level 3) | Keyword '*keyword-name*' was introduced in C++ *version* and requires use of the '*option*' command-line option` <sup>16.1</sup> |
| C5204 (level 3) | A class with virtual functions has non-virtual trivial destructor. <sup>16.5</sup> |
| C5214 (level 4) | applying '*keyword*' to an operand with a volatile qualified type is deprecated in C++20 <sup>16.7</sup> |
| C5215 (level 4) | '*function-parameter*' a function parameter with a volatile qualified type is deprecated in C++20 <sup>16.7</sup> |
| C5216 (level 4) | '*return-type*' a volatile qualified return type is deprecated in C++20 <sup>16.7</sup> |
| C5217 (level 4) | a structured binding declaration that includes volatile is deprecated in C++20 <sup>16.7</sup> |
| C5219 (level 2) | implicit conversion from '*type-1*' to '*type-2*', possible loss of data <sup>16.7</sup> |
| C5220 (level 4) | '*member*': a non-static data member with a volatile qualified type no longer implies that<br/> compiler generated copy/move constructors and copy/move assignment operators are not trivial <sup>16.7</sup> |
| C5233 (level 4) | explicit lambda capture '*identifier*' is not used <sup>16.10</sup> |
| [C5240 (level 4)](../error-messages/compiler-warnings/c5240.md)  | '*attribute-name*': attribute is ignored in this syntactic position <sup>16.10</sup> |
| [C5243 (level 1)](../error-messages/compiler-warnings/c5247.md) | '*type-name*': using incomplete class '*class-name*' can cause potential one definition rule violation due to ABI limitation <sup>16.10</sup> |
| C5245 (level 4) | '*function*': unreferenced function with internal linkage has been removed |
| C5246 (level 1) | '*member*': the initialization of a subobject should be wrapped in braces <sup>16.10</sup> |
| [C5247 (level 1)](../error-messages/compiler-warnings/c5247.md) | Section '*section-name*' is reserved for C++ dynamic initialization. Manually creating the section will interfere with C++ dynamic initialization and may lead to undefined behavior <sup>16.11</sup> |
| [C5248 (level 1)](../error-messages/compiler-warnings/c5248.md) | Section '*section-name*' is reserved for C++ dynamic initialization. Variable manually put into the section may be optimized out and its order relative to compiler generated dynamic initializers is unspecified <sup>16.11</sup> |

### Visual Studio 2022 and later versions

The following warnings are turned off by default in Visual Studio 2022 and later versions:

| Warning | Message |
|--|--|
| C5249 (level 1) | '*bitfield*' of type '*enumeration_name*' has named enumerators with values that cannot be represented in the given bit field width of '*bitfield_width*'. <sup>17.0</sup> |
| C5250 (level 3) | '*function_name*': intrinsic function not declared. <sup>17.0</sup> |
| C5251 (level 4) | *segment-name* changed after including header <sup>17.1</sup> |
| C5254 (level 4) | language feature 'terse static assert' requires compiler flag '/std:c++17' <sup>17.1</sup> |
| C5256 (level 1) | '*enumeration*': a non-defining declaration of an enumeration with a fixed underlying type is only permitted as a standalone declaration <sup>17.2</sup> |
| C5258 (level 4) | explicit capture of '*symbol*' is not required for this use <sup>17.2</sup> |
| C5259 (level 4) | '*specialized-type*': explicit specialization requires '`template <>`' <sup>17.3</sup> |
| [C5262](../error-messages/compiler-warnings/c5262.md) (level 1, error) | implicit fall-through occurs here; are you missing a `break` statement? Use `[[fallthrough]]` when a `break` statement is intentionally omitted between cases <sup>17.4</sup> |
| C5263 (level 4) | calling '`std::move`' on a temporary object prevents copy elision <sup>17.4</sup> |
| C5264 (level 4) | '*variable-name*': 'const' variable is not used <sup>17.4</sup> |

<sup>14.1</sup> This warning is available starting in Visual Studio 2015 Update 1.\
<sup>14.3</sup> This warning is available starting in Visual Studio 2015 Update 3.\
<sup>15.2</sup> This warning is available starting in Visual Studio 2017 version 15.2.\
<sup>15.3</sup> This warning is available starting in Visual Studio 2017 version 15.3.\
<sup>15.5</sup> This warning is available starting in Visual Studio 2017 version 15.5.\
<sup>15.7</sup> This warning is available starting in Visual Studio 2017 version 15.7.\
<sup>15.8</sup> This warning is available starting in Visual Studio 2017 version 15.8.\
<sup>16.0</sup> This warning is available starting in Visual Studio 2019 RTM.\
<sup>16.5</sup> This warning is available starting in Visual Studio 2019 version 16.5.\
<sup>16.7</sup> This warning is available starting in Visual Studio 2019 version 16.7.\
<sup>16.10</sup> This warning is available starting in Visual Studio 2019 version 16.10.\
<sup>16.11</sup> This warning is available starting in Visual Studio 2019 version 16.11.\
<sup>17.0</sup> This warning is available starting in Visual Studio 2022 version 17.0.\
<sup>17.1</sup> This warning is available starting in Visual Studio 2022 version 17.1.\
<sup>17.2</sup> This warning is available starting in Visual Studio 2022 version 17.2.\
<sup>17.3</sup> This warning is available starting in Visual Studio 2022 version 17.3.\
<sup>17.4</sup> This warning is available starting in Visual Studio 2022 version 17.4.\
<sup>Perm</sup> This warning is off unless the [`/permissive-`](../build/reference/permissive-standards-conformance.md) compiler option is set.

## Warnings off by default in earlier versions

This warning was off by default in Visual Studio 2015 version 15.3, and enabled in Visual Studio 2015 version 15.5:

| Warning | Message |
|--|--|
| [C4768](../error-messages/compiler-warnings/c4768.md) | `__declspec` attributes before linkage specification are ignored |

These warnings were off by default in versions of the compiler before Visual Studio 2015:

| Warning | Message |
|--|--|
| [C4302](../error-messages/compiler-warnings/compiler-warning-level-2-c4302.md) (level 2) | '*conversion*': truncation from '*type1*' to '*type2*' |
| [C4311](../error-messages/compiler-warnings/compiler-warning-level-1-c4311.md) (level 1) | '*variable*': pointer truncation from '*type*' to '*type*' |
| [C4312](../error-messages/compiler-warnings/compiler-warning-level-1-c4312.md) (level 1) | '*operation*': conversion from '*type1*' to '*type2*' of greater size |
| [C4319](../error-messages/compiler-warnings/compiler-warning-level-1-c4319.md) (level 1) | '*operator*': zero extending '*type1*' to '*type2*' of greater size |

This warning was off by default in versions of the compiler before Visual Studio 2012:

| Warning | Message |
|--|--|
| [C4431](../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md) (level 4) | missing type specifier - int assumed. Note: C no longer supports default-int |

## See also

[`warning` pragma](../preprocessor/warning.md)
