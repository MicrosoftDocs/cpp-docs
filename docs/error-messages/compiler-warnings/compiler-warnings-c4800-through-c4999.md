---
title: "Microsoft C/C++ compiler (MSVC) warnings C4800 through C4999"
description: "Table of Microsoft C/C++ compiler (MSVC) warnings C4800 through C4999."
ms.date: 04/17/2024
f1_keywords: ["C4801", "C4808", "C4809", "C4815", "C4826", "C4827", "C4828", "C4837", "C4842", "C4844", "C4845", "C4846", "C4847", "C4848", "C4849", "C4854", "C4855", "C4856", "C4857", "C4858", "C4859", "C4860", "C4861", "C4869", "C4872", "C4880", "C4881", "C4882", "C4883", "C4907", "C4916", "C4921", "C4934", "C4954", "C4955", "C4963", "C4966", "C4970", "C4971", "C4973", "C4974", "C4975", "C4976", "C4981", "C4983", "C4987", "C4988", "C4989", "C4990", "C4991", "C4992", "C4998"]
helpviewer_keywords: ["C4801", "C4808", "C4809", "C4815", "C4826", "C4827", "C4828", "C4837", "C4842", "C4844", "C4845", "C4846", "C4847", "C4848", "C4849", "C4854", "C4855", "C4856", "C4857", "C4858", "C4859", "C4860", "C4861", "C4869", "C4872", "C4880", "C4881", "C4882", "C4883", "C4907", "C4916", "C4921", "C4934", "C4954", "C4955", "C4963", "C4966", "C4970", "C4971", "C4973", "C4974", "C4975", "C4976", "C4981", "C4983", "C4987", "C4988", "C4989", "C4990", "C4991", "C4992", "C4998"]
---
# Microsoft C/C++ compiler warnings C4800 through C4999

The articles in this section describe Microsoft C/C++ compiler warning messages C4800-C4999.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## Warning messages

| Warning | Message |
|--|--|
| [Compiler warning (level 4, off) C4800](compiler-warning-level-3-c4800.md) | Implicit conversion from '*type*' to `bool`. Possible information loss |
| Compiler warning C4801 | Return by reference is not verifiable: *message* |
| [Compiler warning (level 1) C4803](compiler-warning-level-1-c4803.md) | '*method*': the raise method has a different storage class from that of the event, '*event*' |
| [Compiler warning (level 1) C4804](compiler-warning-level-1-c4804.md) | '*operation*': unsafe use of type '`bool`' in operation |
| [Compiler warning (level 1) C4805](compiler-warning-level-1-c4805.md) | '*operation*': unsafe mix of type '*type1*' and type '*type2*' in operation |
| [Compiler warning (level 1) C4806](compiler-warning-level-1-c4806.md) | '*operation*': unsafe operation: no value of type '*type1*' promoted to type '*type2*' can equal the given constant |
| [Compiler warning (level 1) C4807](compiler-warning-level-1-c4807.md) | '*operation*': unsafe mix of type '*type1*' and signed bit field of type '*type2*' |
| Compiler warning (level 1) C4808 | `case` '*value*' is not a valid value for `switch` condition of type '`bool`' |
| Compiler warning (level 1) C4809 | `switch` statement has redundant '`default`' label; all possible '`case`' labels are given |
| [Compiler warning (level 1) C4810](compiler-warning-level-1-c4810.md) | value of `pragma pack(show)` == *number* |
| [Compiler warning (level 1) C4811](compiler-warning-level-1-c4811.md) | value of `pragma conform(forScope, show)` == *value* |
| [Compiler warning (level 1) C4812](compiler-warning-level-1-c4812.md) | obsolete declaration style: please use '*new_syntax*' instead |
| [Compiler warning (level 1) C4813](compiler-warning-level-1-c4813.md) | '*function*': a friend function of a local class must have been previously declared |
| Compiler warning (level 4) C4815 | '*object name*': zero-sized array in stack object will have no elements (unless the object is an aggregate that has been aggregate initialized) |
| [Compiler warning (level 4) C4816](compiler-warning-level-4-c4816.md) | '*param*': parameter has a zero-sized array which will be truncated (unless the object is passed by reference) |
| [Compiler warning (level 1) C4817](compiler-warning-level-1-c4817.md) | '*member*': illegal use of '`.`' to access this member; compiler replaced with '`->`' |
| [Compiler warning (level 1) C4819](compiler-warning-level-1-c4819.md) | The file contains a character that cannot be represented in the current code page (*number*). Save the file in Unicode format to prevent data loss |
| [Compiler warning (level 4, off) C4820](compiler-warning-level-4-c4820.md) |'*type*': '*bytes*' bytes padding added after *class* '*member_name*'|
| [Compiler warning (level 1) C4821](compiler-warning-level-1-c4821.md) | Unable to determine Unicode encoding type, please save the file with signature (BOM) |
| [Compiler warning (level 4, off) C4822](compiler-warning-level-1-c4822.md) | '*member function*': local class member function does not have a body |
| [Compiler warning (level 3) C4823](compiler-warning-level-3-c4823.md) | '*function*': uses pinning pointers but unwind semantics are not enabled. Consider using `/EHa` |
| Compiler warning (level 2, off) C4826 | Conversion from '*type1*' to '*type2*' is sign-extended. This may cause unexpected runtime behavior. |
| Compiler warning (level 3) C4827 | A public '`ToString`' method with 0 parameters should be marked as `virtual` and `override` |
| Compiler warning (level 1) C4828 | The file contains a character starting at offset `0x`*HexOffset* that is illegal in the current source character set (codepage *codepage*). |
| [Compiler warning (level 1) C4829](compiler-warning-level-1-c4829.md) | Possibly incorrect parameters to function `main`. Consider '`int main(Platform::Array<Platform::String^>^ argv)`' |
| [Compiler warning (level 1) C4834](c4834.md) |discarding return value of function with `[[nodiscard]]` attribute|
| [Compiler warning (level 1) C4835](compiler-warning-level-1-c4835.md) | '*variable*': the initializer for exported data will not be run until managed code is first executed in the host assembly |
| Compiler warning (level 4, off) C4837 | trigraph detected: '`??`*character*' replaced by '*character*' |
| [Compiler warning (level 1) C4838](compiler-warning-level-1-c4838.md) | conversion from '*type_1*' to '*type_2*' requires a narrowing conversion |
| [Compiler warning (level 3, error) C4839](compiler-warning-level-3-c4839.md) | non-standard use of class '*type*' as an argument to a variadic function |
| [Compiler warning (level 4) C4840](compiler-warning-level-4-c4840.md) | non-portable use of class '*type*' as an argument to a variadic function |
| [Compiler warning (level 4, off) C4841](c4841.md) | non-standard extension used: *message* |
| Compiler warning (level 4, off) C4842 | the result of '`offsetof`' applied to a type using multiple inheritance is not guaranteed to be consistent between compiler releases |
| [Compiler warning (level 4) C4843](c4843.md) | '*type1*': An exception handler of reference to array or function type is unreachable, use '*type2*' instead |
| Compiler warning (level 1) C4844 | '`export module` *`module_name`*`;`' is now the preferred syntax for declaring a module interface |
| Compiler warning (level 4) C4845 |'`__declspec(no_init_all)`' is ignored unless '`/d1initall[0|1|2|3]`' or '`/presetPadding`' is specified on the command line|
| Compiler warning (level 4) C4846 | '*value*' is not a valid argument for '`/d1initall`': command-line flag ignored |
| Compiler warning (level 4) C4847 |'*identifier*': '`__declspec(no_init_all)`' can only be applied to a function, a class type, or a local variable: ignored |
| Compiler warning (level 1) C4848 | support for attribute `[[`*attribute*`]]` in C++17 and earlier is a vendor extension |
| Compiler warning (level 1) C4849 | OpenMP '*clause*' clause ignored in '*directive*' directive |
| Compiler warning (Level 1, error) C4854 | binding dereferenced null pointer to reference has undefined behavior |
| Compiler warning (level 1, off) C4855 | implicit capture of '`this`' via '`[=]`' is deprecated in '*version*' |
| Compiler warning (level 4) C4856 | '*value*' is not a valid argument for '`/d1initAll:FillPattern`' (value must be between `0` and `255`). Command-line flag ignored |
| Compiler warning (level 1) C4857 | C++/CLI mode does not support C++ versions newer than C++*ver*; setting language to `/std:c++`*ver* |
| Compiler warning (level 1) C4858 | discarding return value: *function name* |
| Compiler warning (level 4) C4859 | '*value*' is not a valid argument for '`/presetWarn`': it must be a decimal value > 0. Command-line flag ignored |
| Compiler warning (level 4) C4860 | '*object name*': compiler zero initialized '*number*' bytes of storage |
| Compiler warning (level 4) C4861 | compiler zero initialized '*number*' bytes of storage |
| [Compiler warning (level 4) C4866](c4866.md) | compiler may not enforce left-to-right evaluation order for call to *operator_name* |
| [Compiler warning (level 1, error) C4867](compiler-warning-c4867.md) |'*function name*': non-standard syntax; use '`&`' to create a pointer to member|
| [Compiler warning (level 4) C4868](compiler-warning-c4868.md) | '*file*(*line_number*)' compiler may not enforce left-to-right evaluation order in braced initialization list |
| Compiler warning (level 3) C4869 | '`nodiscard`' may only be applied to classes, enumerations, and functions |
| Compiler warning (level 2) C4872 | floating point division by zero detected when compiling the call graph for the `concurrency::parallel_for_each` at: '*location*' |
| Compiler warning (level 1) C4880 | casting from '*const type_1*' to '*type_2*': casting away constness from a pointer or reference may result in undefined behavior in an `amp` restricted function |
| Compiler warning (level 4) C4881 | the constructor and/or the destructor will not be invoked for `tile_static` variable '*variable-name*' |
| Compiler warning (level 1) C4882 | passing functors with non-const call operators to `concurrency::parallel_for_each` is deprecated |
| Compiler warning C4883 | '*function name*': function size suppresses optimizations |
| [Compiler warning C4900](compiler-warning-level-1-c4900.md) | Il mismatch between '*tool1*' version '*version1*' and '*tool2*' version '*version2*' |
| [Compiler warning (level 1, off) C4905](compiler-warning-level-1-c4905.md) | wide string literal cast to '*type*' |
| [Compiler warning (level 1, off) C4906](compiler-warning-level-1-c4906.md) | string literal cast to '*type*' |
| Compiler warning (error) C4907 | multiple calling conventions cannot be specified; last given will be used |
| [Compiler warning (level 1) C4910](compiler-warning-level-1-c4910.md) |'*identifier*': '`__declspec(dllexport)`' and '`extern`' are incompatible on an explicit instantiation|
| [Compiler warning (level 1) C4912](compiler-warning-level-1-c4912.md) | '*attribute*': attribute has undefined behavior on a nested UDT |
| [Compiler warning (level 4) C4913](compiler-warning-level-4-c4913.md) | user defined binary operator '`,`' exists but no overload could convert all operands, default built-in binary operator '`,`' used |
| Compiler warning (level 1) C4916 | in order to have a `dispid`, '*description*': must be introduced by an interface |
| [Compiler warning (level 1, off) C4917](compiler-warning-level-1-c4917.md) | '*declarator*': a GUID can only be associated with a class, interface or namespace |
| [Compiler warning (level 4) C4918](compiler-warning-level-4-c4918.md) | '*character*': invalid character in pragma optimization list |
| [Compiler warning (level 1) C4920](compiler-warning-level-1-c4920.md) | `enum` *enum-name* member *member_1*`=`*value_1* already seen in `enum` *enum-name* as *member_2*`=`*value_2* |
| Compiler warning (level 3) C4921 | '*description*': attribute value '*attribute*' should not be multiply specified |
| [Compiler warning (level 1) C4925](compiler-warning-level-1-c4925.md) | '*method*': `dispinterface` method cannot be called from script |
| [Compiler warning (level 1) C4926](compiler-warning-level-1-c4926.md) | '*identifier*': symbol is already defined: attributes ignored |
| [Compiler warning (level 1) C4927](compiler-warning-level-1-c4927.md) | illegal conversion; more than one user-defined conversion has been implicitly applied |
| [Compiler warning (level 1, off) C4928](compiler-warning-level-1-c4928.md) | illegal copy-initialization; more than one user-defined conversion has been implicitly applied |
| [Compiler warning (level 1) C4929](compiler-warning-level-1-c4929.md) | '*file*': `typelibrary` contains a union; ignoring the '`embedded_idl`' qualifier |
| [Compiler warning (level 1) C4930](compiler-warning-level-1-c4930.md) | '*prototype*': prototyped function not called (was a variable definition intended?) |
| [Compiler warning (level 4, off) C4931](compiler-warning-level-4-c4931.md) | we are assuming the type library was built for *number*-bit pointers |
| [Compiler warning (level 4) C4932](compiler-warning-level-4-c4932.md) | `__identifier(`*identifier*`)` and `__identifier(`*identifier*`)` are indistinguishable |
| Compiler warning (level 1) C4934 | '`__delegate(multicast)`' is deprecated, use '`__delegate`' instead |
| [Compiler warning (level 1) C4935](compiler-warning-level-1-c4935.md) | assembly access specifier modified from '*access*' |
| [Compiler warning (level 1, error) C4936](compiler-warning-c4936.md) | this `__declspec` is supported only when compiled with `/clr` or `/clr:pure` |
| [Compiler warning (level 4) C4937](compiler-warning-level-4-c4937.md) | '*text1*' and '*text2*' are indistinguishable as arguments to '*directive*' |
| [Compiler warning (level 4) C4938](compiler-warning-level-4-c4938.md) | '*var*': Floating point reduction variable may cause inconsistent results under `/fp:strict` or `#pragma fenv_access` |
| [Compiler warning (level 1) C4939](compiler-warning-level-1-c4939.md) | `#pragma vtordisp` is deprecated and will be removed in a future release of Visual C++ |
| [Compiler warning (level 1) C4944](compiler-warning-level-1-c4944.md) | '*symbol*': cannot import symbol from '*assembly1*': as '*symbol*' already exists in the current scope |
| [Compiler warning (level 1) C4945](compiler-warning-level-1-c4945.md) | '*symbol*': cannot import symbol from '*assembly1*': as '*symbol*' has already been imported from another assembly '*assembly2*' |
| [Compiler warning (level 1, off) C4946](compiler-warning-level-1-c4946.md) | `reinterpret_cast` used between related classes: '*class1*' and '*class2*' |
| [Compiler warning (level 1) C4947](compiler-warning-level-1-c4947.md) | '*type_or_member*': marked as obsolete |
| [Compiler warning (level 2) C4948](compiler-warning-level-2-c4948.md) | return type of '*accessor*' does not match the last parameter type of the corresponding setter |
| [Compiler warning (level 1 and level 4) C4949](compiler-warning-level-1-and-level-4-c4949.md) | `pragma` '*pragma*' is meaningful only when compiled with '`/clr[:option]`'|
| [Compiler warning (level 1, error) C4950](compiler-warning-c4950.md) | '*type_or_member*': marked as obsolete |
| [Compiler warning (level 1) C4951](compiler-warning-level-1-c4951.md) | '*function*' has been edited since profile data was collected, function profile data not used |
| [Compiler warning (level 1) C4952](compiler-warning-level-1-c4952.md) | '*function*': no profile data found in program database '*pgd-file*' |
| [Compiler warning (level 1) C4953](compiler-warning-level-1-c4953.md) | Inlinee '*function*' has been edited since profile data was collected, profile data not used |
| Compiler warning C4954 | '*function*': not profiled (contains `__int64` switch expression) |
| Compiler warning C4955 | '*import2*': import ignored; already imported from '*import1*' |
| [Compiler warning (level 1, error) C4956](compiler-warning-c4956.md) | '*type*': this type is not verifiable |
| [Compiler warning (level 1, error) C4957](compiler-warning-c4957.md) | '*cast*': explicit cast from '*cast_from*' to '*cast_to*' is not verifiable |
| [Compiler warning (level 1, error) C4958](compiler-warning-c4958.md) | '*operation*': pointer arithmetic is not verifiable |
| [Compiler warning (level 1, error) C4959](compiler-warning-c4959.md) | cannot define unmanaged *type* '*identifier*' in `/clr:safe` because accessing its members yields unverifiable code |
| [Compiler warning (level 4) C4960](compiler-warning-level-4-c4960.md) | '*function*' is too big to be profiled |
| [Compiler warning (level 1) C4961](compiler-warning-c4961.md) | No profile data was merged into '*pgd-file*', profile-guided optimizations disabled |
| [Compiler warning (level 4, off) C4962](compiler-warning-c4962.md) | '*function*': Profile-guided optimizations disabled because optimizations caused profile data to become inconsistent |
| Compiler warning (level 1) C4963 | '*description*': no profile data found; different compiler options were used in instrumented build |
| [Compiler warning (level 1) C4964](compiler-warning-level-1-c4964.md) | No optimization options were specified; profile info will not be collected |
| [Compiler warning (level 1) C4965](compiler-warning-level-1-c4965.md) | implicit box of integer `0`; use `nullptr` or explicit cast |
| Compiler warning (level 1) C4966 | '*function*' has `__code_seg` annotation with unsupported segment name, annotation ignored |
| Compiler warning C4970 | delegate constructor: target object ignored since '*type*' is static |
| Compiler warning (level 1, no longer emitted) C4971 |Argument order: `<target object>`, `<target function>` for delegate constructor is deprecated, use `<target function>`, `<target object>`|
| [Compiler warning (level 1, error) C4972](compiler-warning-c4972.md) | Directly modifying or treating the result of an unbox operation as an lvalue is unverifiable |
| Compiler warning (level 1) C4973 | '*symbol*': marked as deprecated |
| Compiler warning (level 1) C4974 | '*symbol*': marked as deprecated |
| Compiler warning (level 1) C4975 | modopt '[*modifier*]' was ignored for formal parameter '*parameter*' |
| Compiler warning (level 1) C4976 | invalid value '*value*' for '`/W`'; assuming '`1`' |
| Compiler warning (level 3) C4981 | Warbird: function '*function*' marked as `__forceinline` not inlined because it contains exception semantics |
| Compiler warning (level 3) C4983 | '`/analyze:sarif:hashname`' ignored because the argument to '`/analyze:log`' is a single file rather than a directory |
| [Compiler warning (level 1) C4984](compiler-warning-c4984.md) | '`if constexpr`' is a C++17 language extension |
| [Compiler warning (level 3) C4985](compiler-warning-level-4-c4985.md) | '*symbol_name*': attributes not present on previous declaration. |
| [Compiler warning (level 2 and level 4, off) C4986](compiler-warning-c4986.md) | '*declaration*': exception specification does not match previous declaration |
| Compiler warning (level 4, off) C4987 | nonstandard extension used: '`throw (...)`' |
| Compiler warning (level 4, off) C4988 | '*variable*': variable declared outside class/function scope |
| Compiler warning (level 4) C4989 | '*type*': type has conflicting definitions. |
| Compiler warning (level 3) C4990 | Warbird: *message* |
| Compiler warning (level 3) C4991 | Warbird: function '*function*' marked as `__forceinline` not inlined because protection level of inlinee is greater than the parent |
| Compiler warning (level 3) C4992 | Warbird: function '*function-name*' marked as `__forceinline` not inlined because it contains inline assembly which cannot be protected |
| [Compiler warning (level 3) C4995](compiler-warning-level-3-c4995.md) | '*function*': name was marked as `#pragma deprecated` |
| [Compiler warning (level 3) C4996](compiler-warning-level-3-c4996.md) | '*deprecated-declaration*': *deprecation-message* |
| [Compiler warning (level 1) C4997](compiler-warning-level-1-c4997.md) | '*class*': `coclass` does not implement a COM interface or pseudo-interface |
| Compiler warning (level 1) C4998 | EXPECTATION FAILED: *expectation*(*value*) |

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md)\
[Compiler warnings C4000 - C5999](compiler-warnings-c4000-c5999.md)
