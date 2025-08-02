---
title: "Compiler Warnings by compiler version"
description: "Table of Microsoft C/C++ compiler warnings by compiler version."
ms.date: 01/18/2024
helpviewer_keywords: ["warnings, by compiler version", "cl.exe compiler, setting warning options"]
---
# Compiler Warnings by compiler version

The compiler can suppress warnings that were introduced after a version you specify by using the [`/Wv`](../../build/reference/compiler-option-warning-level.md) compiler option. This option is useful for managing your build process when you introduce a new toolset version, and want to temporarily suppress new warnings. This option only suppresses warnings, not new error messages. Don't suppress all new warnings permanently! We recommend you always compile at the highest regular warning level, **`/W4`**, and remove the **`/Wv`** option in your build as soon as practical.

These versions of the compiler introduced new warnings:

| Product | Compiler version number |
|--|--|
| Visual Studio 2022 version 17.14 | 19.44 |
| Visual Studio 2022 version 17.13 | 19.43 |
| Visual Studio 2022 version 17.12 | 19.42 |
| Visual Studio 2022 version 17.11 | 19.41 |
| Visual Studio 2022 version 17.10 | 19.40 |
| Visual Studio 2022 version 17.9 | 19.39 |
| Visual Studio 2022 version 17.8 | 19.38 |
| Visual Studio 2022 version 17.7 | 19.37 |
| Visual Studio 2022 version 17.6 | 19.36 |
| Visual Studio 2022 version 17.5 | 19.35 |
| Visual Studio 2022 version 17.4 | 19.34 |
| Visual Studio 2022 version 17.3 | 19.33 |
| Visual Studio 2022 version 17.2 | 19.32 |
| Visual Studio 2022 version 17.1 | 19.31 |
| Visual Studio 2022 version 17.0 RTW | 19.30 |
| Visual Studio 2019 version 16.11 | 19.29.30100.0 |
| Visual Studio 2019 version 16.10 | 19.29.30000.0 |
| Visual Studio 2019 version 16.9 | 19.28.29700.0 |
| Visual Studio 2019 version 16.8 | 19.28.29333.0 |
| Visual Studio 2019 version 16.7 | 19.27.29112.0 |
| Visual Studio 2019 version 16.6 | 19.26.28805.0 |
| Visual Studio 2019 version 16.5 | 19.25.28610.0 |
| Visual Studio 2019 version 16.4 | 19.24.28314.0 |
| Visual Studio 2019 version 16.3 | 19.23.28105.0 |
| Visual Studio 2019 version 16.2 | 19.22.27905.0 |
| Visual Studio 2019 version 16.1 | 19.21.27702.0 |
| Visual Studio 2019 RTM | 19.20.27004.0 |
| Visual Studio 2017 version 15.9 | 19.16.26926.0 |
| Visual Studio 2017 version 15.8 | 19.15.26726.0 |
| Visual Studio 2017 version 15.7 | 19.14.26428.0 |
| Visual Studio 2017 version 15.6 | 19.13.26128.0 |
| Visual Studio 2017 version 15.5 | 19.12.25830.0 |
| Visual Studio 2017 version 15.3 | 19.11.25506.0 |
| Visual Studio 2017 RTM | 19.10.25017.0 |
| Visual Studio 2015 Update 3 | 19.00.24215.1 |
| Visual Studio 2015 Update 2 | 19.00.23918.0 |
| Visual Studio 2015 Update 1 | 19.00.23506.0 |
| Visual Studio 2015 RTM | 19.00.23026.0 |
| Visual Studio 2013 | 18.00.21005.1 |
| Visual Studio 2012 | 17.00.51106.1 |
| Visual Studio 2010 | 16.00.40219.01 |
| Visual Studio 2008 | 15.00.21022.08 |
| Visual Studio 2005 | 14.00.50727.762 |
| Visual Studio 2003 | 13.10.3077 |
| Visual Studio 2002 | 13.00.9466 |

You can specify only the major number, the major and minor numbers, or the major, minor, and build numbers to the **`/Wv`** option. The compiler reports all warnings that match versions that begin with the specified number. It suppresses all warnings for versions greater than the specified number. For example, **`/Wv:17`** reports warnings introduced in or before any version of Visual Studio 2012, and suppresses warnings introduced by any compiler from Visual Studio 2013 (version 18) or later. To suppress warnings introduced in Visual Studio 2015 update 2 and later, you can use **`/Wv:19.00.23506`**. Use **`/Wv:19.11`** to report the warnings introduced in any version of Visual Studio before Visual Studio 2017 version 15.5, but suppress warnings introduced in Visual Studio 2017 version 15.5 and later.

The following sections list the warnings introduced by each version of Visual C++ that you can suppress by using the **`/Wv`** compiler option. The **`/Wv`** option can't suppress warnings that aren't listed, which predate the specified versions of the compiler.

::: moniker range=">= msvc-170"

## Warnings introduced in Visual Studio 2022 version 17.14 (compiler version 19.44)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.43`**.

| Warning | Message |
|--|--|

## Warnings introduced in Visual Studio 2022 version 17.13 (compiler version 19.43)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.42`**.

| Warning | Message |
|--|--|
|C5277| type trait optimization for '*class name*' is disabled
|C5308| Modifying reserved macro name '*macro name*' may cause undefined behavior
|C5309| literal suffix '*name*' requires at least '*language version*'

## Warnings introduced in Visual Studio 2022 version 17.12 (compiler version 19.42)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.41`**.

| Warning | Message |
|--|--|
|C5086| Arch setting *arch* and vector length *number* are not allowed. Using the default vector length - *number*.
|C5276| `/experimental:ifcDebugRecords` currently requires `/Z7` to be enabled.  Please recompile with `/Z7` enabled.
|C5306| parameter array behavior change: overload '*identifier 1*' resolved to '*identifier 2*'; previously, it would have resolved to '*identifier 3*'. Use `/clr:ECMAParamArray` to revert to old behavior
|C5307| '*function*': argument (*argument number*) converted from '*type 1*' to '*type 2*'. Missing '`L`' encoding-prefix for character literal?


## Warnings introduced in Visual Studio 2022 version 17.11 (compiler version 19.41)

There were no new warnings introduced in 17.11

## Warnings introduced in Visual Studio 2022 version 17.10 (compiler version 19.40)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.39`**.

| Warning | Message |
|--|--|
|C4859 | '*value*' is not a valid argument for '`/presetWarn`': it must be a decimal value > 0. Command-line flag ignored|
|C4860 | '*object name*': compiler zero initialized '*number*' bytes of storage|
|C4861 | compiler zero initialized '*number*' bytes of storage|
|C5273 | behavior change: `_Alignas` on anonymous type no longer ignored (promoted members will align)|
|C5274 | behavior change: `_Alignas` no longer applies to the type '*type*' (only applies to declared data objects)|
|C5275 | facade assembly '*name*' being imported under '`/clr`'; missing option '`/clr:netcore`'?|
|C5304 | a declaration designated by the using-declaration '*name1*' exported from this module has internal linkage and using such a name outside the module is ill-formed; consider declaring '*name2*' '`inline`' to use it outside of this module|
|C5305 | '*name*': an explicit instantiation declaration that follows an explicit instantiation definition is ignored|

## Warnings introduced in Visual Studio 2022 version 17.9 (compiler version 19.39)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.38`**.

| Warning | Message |
|--|--|
|C4975 | modopt '[*modifier*]' was ignored for formal parameter '*parameter*'|
|C5272 | throwing an object of non-copyable type '*type*' is non-standard. If a copy is needed at runtime it will be made as if by `memcpy`.|

## Warnings introduced in Visual Studio 2022 version 17.8 (compiler version 19.38)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.37`**.

| Warning | Message |
|--|--|
|C5109|`__VA_OPT__` use in macro requires '`/Zc:preprocessor`'|
|C5110|`__VA_OPT__` is an extension prior to C++20 or C23|
|C5271 | previously imported assembly '*assembly1*' has the same name as assembly '*assembly2*' being imported. Is this intentional?|
|C5303 | function marked with `[[msvc::intrinsic]]` did not result in a no-op cast|

## Warnings introduced in Visual Studio 2022 version 17.7 (compiler version 19.37)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.36`**.

| Warning | Message |
|--|--|
|C4907|multiple calling conventions cannot be specified; last given will be used|
|[C5267](c5267.md) | definition of implicit copy constructor/assignment operator for '*type*' is deprecated because it has a user-provided assignment operator/copy constructor|
|C5268 | Failed to allocate memory at fixed address 0x*address*. Use `/Yb` to specify a specific address base if bit-identical .pch files are required.|
|C5269 | Failed to allocate PCH memory at fixed address 0x*address*. Use `/Ym` to specify a specific address base if bit-identical .pch files are required.|
|C5270 | '*value*' is not allowed for option '*switch name*'; allowed values are: *value list*|

## Warnings introduced in Visual Studio 2022 version 17.6 (compiler version 19.36)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.35`**.

| Warning | Message |
|--|--|
|[C5266](compiler-warning-level-4-c5266.md) | 'const' qualifier on return type has no effect|

## Warnings introduced in Visual Studio 2022 version 17.5 (compiler version 19.35)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.34`**.

| Warning | Message |
|--|--|
|C5082|second argument to 'va_start' is not the last named parameter|
|C5265 | cannot open search path '*path*'|

## Warnings introduced in Visual Studio 2022 version 17.4 (compiler version 19.34)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.33`**.

| Warning | Message |
|--|--|
| C5260 | the constant variable '*variable-name*' has internal linkage in an included header file context, but external linkage in imported header unit context; consider declaring it '`inline`' as well if it will be shared across translation units, or '`static`' to express intent to use it local to this translation unit |
| C5261 | no integer type can represent all enumerator values in enumeration '*enum-name*' |
| [C5262](c5262.md) | implicit fall-through occurs here; are you missing a `break` statement? Use `[[fallthrough]]` when a `break` statement is intentionally omitted between cases |
| C5263 | calling '`std::move`' on a temporary object prevents copy elision |
| C5264 | '*variable-name*': '`const`' variable is not used |

## Warnings introduced in Visual Studio 2022 version 17.3 (compiler version 19.33)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.32`**.

| Warning | Message |
|--|--|
| C5259 | '*specialized-type*': explicit specialization requires 'template <>' |

## Warnings introduced in Visual Studio 2022 version 17.2 (compiler version 19.32)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.31`**.

| Warning | Message |
|--|--|
| C4983 | '/analyze:sarif:hashname' ignored because the argument to '/analyze:log' is a single file rather than a directory |
| C5081 | Secure hotpatch is not supported with /GENPROFILE, /FASTGENPROFILE or /LTCG:PGI, disabling secure hotpatch. |
| C5255 | unterminated bidirectional character encountered: 'U+XXXX' |
| C5256 | '*enumeration*': a non-defining declaration of an enumeration with a fixed underlying type is only permitted as a standalone declaration |
| C5257 | '*enumeration*': enumeration was previously declared without a fixed underlying type |
| C5258 | explicit capture of '*symbol*' is not required for this use |
| C5300 | '#pragma omp atomic': left operand of '*operator*' must match left hand side of assignment-expression |
|[C5301](c5301-c5302.md) | '#pragma omp for': '*loop-index*' increases while loop condition uses '*comparison*'; non-terminating loop?|
|[C5302](c5301-c5302.md) | '#pragma omp for': '*loop-index*' decreases while loop condition uses '*comparison*'; non-terminating loop?|

## Warnings introduced in Visual Studio 2022 version 17.1 (compiler version 19.31)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.30`**.

| Warning | Message |
|--|--|
| C5251 | *segment-name* changed after including header |
| C5253 | a non-local lambda cannot have a capture default |
| C5254 | language feature 'terse static assert' requires compiler flag '`/std:c++17`' |

## Warnings introduced in Visual Studio 2022 version 17.0 (compiler version 19.30)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.29`**.

| Warning | Message |
|--|--|
| C5244 | '#include \<*filename*>' in the purview of module '*module-name-1*' appears erroneous.  Consider moving that directive before the module declaration, or replace the textual inclusion with 'import \<*filename*>;'. |
| C5245 | '*function*': unreferenced function with internal linkage has been removed |
| C5246 | '*member*': the initialization of a subobject should be wrapped in braces |
| C5249 | '*bitfield*' of type '*enumeration_name*' has named enumerators with values that cannot be represented in the given bit field width of '*bitfield_width*'. |
| C5250 | '*function_name*': intrinsic function not declared. |
| C5252 | Multiple different types resulted in the same XFG type-hash *hash-value*; the PDB will only record information for one of them |

::: moniker-end

::: moniker range=">= msvc-160"

## Warnings introduced in Visual Studio 2019 version 16.11 (compiler version 19.29.30100.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.29.30099`**.

| Warning | Message |
|--|--|
| [C5247](c5247.md) | section '*section-name*' is reserved for C++ dynamic initialization. Manually creating the section will interfere with C++ dynamic initialization and may lead to undefined behavior |
| [C5248](c5248.md) | section '*section-name*' is reserved for C++ dynamic initialization. Variables manually put into the section may be optimized out and their order relative to compiler generated dynamic initializers is unspecified |

## Warnings introduced in Visual Studio 2019 version 16.10 (compiler version 19.29.30000.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.28`**.

| Warning | Message |
|--|--|
| C5233 | explicit lambda capture '*identifier*' is not used |
| C5234 | file system error: '*filename*' is not a valid header-name; ignoring |
| C5235 | JSON parse error: issue; ignoring '*filename*' |
| C5236 | JSON ill-formed: issue; ignoring '*filename*' |
| C5237 | cannot resolve header unit entry '*string*' to a header file in '*filename*'; ignoring entry |
| C5238 | file system error: cannot open '*filename*' for reading; ignoring |
| C5239 | '*Symbol*': potentially-throwing function called from a function declared `__declspec(nothrow)`. Undefined behavior may occur if an exception is thrown. |
| [C5240](c5240.md) | '*attribute-string*': attribute is ignored in this syntactic position |
| C5241 | '`/exportHeader`' usage to lookup header-name is deprecated; prefer '`/headerName:arg-1 arg-2=filename`' |
| C5242 | syntax error in pragma '*pragma-name*' |
| [C5243](c5243.md) | '*Type-name*': using incomplete class '*symbol*' can cause potential one definition rule violation due to ABI limitation |

## Warnings introduced in Visual Studio 2019 version 16.9 (compiler version 19.28.29700.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.28.29699`**.

| Warning | Message |
|--|--|
| C5232 | in C++20 this comparison calls '*identifier*' recursively |

## Warnings introduced in Visual Studio 2019 version 16.8 (compiler version 19.28.29333.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.27`**.

| Warning | Message |
|--|--|
| [C5072](compiler-warning-c5072.md) | `ASAN enabled without debug information emission. Enable debug info for better ASAN error reporting` |
| C5211 | `'keyword-1' has been deprecated; prefer using 'keyword-2' instead` |
| C5222 | `'attribute-name': all unscoped attribute names are reserved for future standardization` |
| C5223 | `all attribute names in the attribute namespace 'msvc' are reserved for the implementation` |
| C5224 | `all attribute names in the attribute namespace 'a-namespace' are reserved for future standardization` |
| C5225 | `'symbol': exported inline function defined in a private module fragment is a non-standard extension` |
| C5226 | `'symbol': exported template defined in private module fragment has no reachable instantiation` |
| C5227 | `nonstandard extension, resolved 'symbol' to 'instance' which is not visible with /permissive- on.` |
| C5228 | `nonstandard extension, 'identifier' resolved to a member of a dependent base. This lookup is not allowed under /permissive-.` |
| C5229 | `nonstandard extension, the hidden friend function 'function-name' was found by name lookup which isn't allowed under /permissive-.` |
| C5230 | `nonstandard extension, 'identifier' was resolved to 'symbol' under /permissive. Under /permissive- it would resolve to 'other-symbol'.` |
| C5231 | `the expression 'co_await promise.final_suspend()' must be non-throwing`)

## Warnings introduced in Visual Studio 2019 version 16.7 (compiler version 19.27.29112.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.26`**.

| Warning | Message |
|--|--|
| C5207 | `the simple requirement asserts the validity of expression 'e->id'. Did you mean '{ e } -> id'? You can suppress the warning using '{ e->id }'` |
| C5209 | `the C++20 syntax for an init-capture has changed to '& ...opt identifier initializer'` |
| C5210 | `'name' is not a valid header unit reference; ignoring` |
| C5212 | `'name' is not a valid named reference; treating as reference to file` |
| C5213 | `'name' named reference is treated as a named partition but the name is not specified; treating as reference to file` |
| C5214 | `applying 'modifier' to an operand with a volatile qualified type is deprecated in C++20` |
| C5215 | `'name' a function parameter with a volatile qualified type is deprecated in C++20` |
| C5216 | `'name' a volatile qualified return type is deprecated in C++20` |
| C5217 | `a structured binding declaration that includes volatile is deprecated in C++20` |
| C5218 | `destroying delete may not behave as intended when non-conforming switches '/Zc:sizedDealloc-' or '/Zc:alignedNew-' are used` |
| C5219 | `implicit conversion from 'type-1' to 'type-2', possible loss of data` |
| C5220 | `'name': a non-static data member with a volatile qualified type no longer implies%$N that compiler generated copy/move constructors and copy/move assignment operators are not trivial` |
| C5221 | `xfg::rename is deprecated.` |

## Warnings introduced in Visual Studio 2019 version 16.6 (compiler version 19.26.28805.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.25`**.

| Warning | Message |
|--|--|
| C5207 | `the simple requirement asserts the validity of expression 'e->id'. Did you mean '{ e } -> id'? You can suppress the warning using '{ e->id }'` |
| [C5208](c5208.md) | `unnamed class used in typedef name cannot declare members other than non-static data members, member enumerations, or member classes` |

## Warnings introduced in Visual Studio 2019 version 16.5 (compiler version 19.25.28610.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.24`**.

|Warning|Message|
|-|-|
| C5061 | `the use of a comma operator as a subscript expression has been deprecated` |
| C5062 | `enum direct list initialization between 'type-1' and 'type-2' is no longer supported` |
| C5063 | `'std::is_constant_evaluated' always evaluates to true in manifestly constant-evaluated expressions` |
| C5108 | `__VA_OPT__ is reserved for use in variadic macros` |
| C5204 | `'type-name': class has virtual functions, but its trivial destructor is not virtual; instances of objects derived from this class may not be destructed correctly` |
| C5205 | `delete of an abstract class 'type-name' that has a non-virtual destructor results in undefined behavior` |
| C5206 | `deduced return types for coroutines is a non-standard extension` |

## Warnings introduced in Visual Studio 2019 version 16.4 (compiler version 19.24.28314.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.23`**.

| Warning | Message |
|--|--|
| C5200 | `feature 'feature-name' requires compiler flag 'option-name'` |
| C5201 | `a module declaration can appear only at the start of a translation unit unless a global module fragment is used` |
| C5202 | `a global module fragment can only contain preprocessor directives` |
| C5203 | `a parenthesized declarator name after 'explicit' will be considered an explicit-specifier in C++20` |

## Warnings introduced in Visual Studio 2019 version 16.3 (compiler version 19.23.28105.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.22`**.

| Warning | Message |
|--|--|
| C4856 | `'value' is not a valid argument for '/d1initAll:FillPattern' (value must be between 0 and 255). Command-line flag ignored` |
| C4857 | `C++/CLI mode does not support C++ versions newer than C++17; setting language to /std:c++17` |

## Warnings introduced in Visual Studio 2019 version 16.2 (compiler version 19.22.27905.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.21`**.

| Warning | Message |
|--|--|
| C4855 | `implicit capture of 'this' via '[=]' is deprecated in 'version'` |
| [C5054](c5054.md) | `operator 'operator-name': deprecated between enumerations of different types` |
| [C5055](c5055.md) | `operator 'operator-name': deprecated between enumerations and floating-point types` |
| [C5056](c5056.md) | `operator 'operator-name': deprecated for array types` |
| C5057 | `header unit reference to 'name' already exists.  Ignoring header unit 'header-name'` |
| C5058 | `file system error: cannot find header file 'file-name' for header unit 'unit-name'` |
| C5059 | `runtime checks and address sanitizer is not currently supported - disabling runtime checks` |
| C5060 | `/Qpar and address sanitizer not currently supported - disabling auto-parallelization` |

## Warnings introduced in Visual Studio 2019 version 16.1 (compiler version 19.21.27702.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.20`**.

| Warning | Message |
|--|--|
| C5052 | `Keyword 'keyword-name' was introduced in C++<version> and requires use of the 'option-name' command-line option` |
| C5053 | `support for 'explicit(<expr>)' in C++17 and earlier is a vendor extension` |

## Warnings introduced in Visual Studio 2019 RTW (compiler version 19.20.27004.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.15`**.

| Warning | Message |
|--|--|
| C4848 | `support for standard attribute 'no_unique_address' in C++17 and earlier is a vendor extension` |
| C4854 | `binding dereferenced null pointer to reference has undefined behavior` |
| C5051 | `attribute 'attribute-name' requires at least 'standard-level'; ignored` |

::: moniker-end
::: moniker range=">= msvc-150"

## Warnings introduced in Visual Studio 2017 version 15.8 (compiler version 19.15.26726.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.14`**.

| Warning | Message |
|--|--|
| C4643 | `Forward declaring 'identifier' in namespace std is not permitted by the C++ Standard.` |
| C4644 | `usage of the macro-based offsetof pattern in constant expressions is non-standard; use offsetof defined in the C++ standard library instead` |
| C4845 | `'__declspec(no_init_all)' is ignored if '/d1initall[0|1|2|3]' was not specified on the command line` |
| C4846 | `'value' is not a valid argument for '/d1initall': command-line flag ignored` |
| C4847 | `'__declspec(no_init_all)' can only be applied to a function, a class type, or a local variable: ignored` |
| C4866 | `compiler may not enforce left-to-right evaluation order for call to 'function'` |
| [C5046](c5046.md) | `'function': Symbol involving type with internal linkage not defined` |
| C5047 | `use of nonstandard __if_exists with modules is not supported` |
| C5048 | `Use of macro 'macroname' may result in non-deterministic output` |
| C5049 | `'string': Embedding a full path may result in machine-dependent output` |
| [C5050](c5050.md) | `Possible incompatible environment while importing module 'module_name': issue` |
| C5100 | `__VA_ARGS__ is reserved for use in variadic macros` |
| C5101 | `use of preprocessor directive in function-like macro argument list is undefined behavior` |
| C5102 | `ignoring invalid command-line macro definition 'value'` |
| C5103 | `pasting 'token1' and 'token2' does not result in a valid preprocessing token` |
| C5104 | `found 'string1#string2' in macro replacement list, did you mean 'string1""#string2'?` |
| [C5105](c5105.md) | `macro expansion producing 'defined' has undefined behavior` |
| C5106 | `macro redefined with different parameter names` |
| C5107 | `missing terminating 'char' character` |

## Warnings introduced in Visual Studio 2017 version 15.7 (compiler version 19.14.26428.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.13`**.

| Warning | Message |
|--|--|
| C4642 | `'issue': could not import the constraints for generic parameter 'parameter'` |
| [C5045](c5045.md) | `Compiler will insert Spectre mitigation for memory load if /Qspectre switch specified` |

## Warnings introduced in Visual Studio 2017 version 15.6 (compiler version 19.13.26128.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.12`**.

| Warning | Message |
|--|--|
| C5044 | `An argument to command-line option option points to a path 'path' that does not exist` |

## Warnings introduced in Visual Studio 2017 version 15.5 (compiler version 19.12.25830.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.11`**.

| Warning | Message |
|--|--|
| [C4843](c4843.md) | `'type1': An exception handler of reference to array or function type is unreachable, use 'type2' instead` |
| C4844 | `'export module module_name;' is now the preferred syntax for declaring a module interface` |
| C5039 | `'function': pointer or reference to potentially throwing function passed to extern C function under -EHc. Undefined behavior may occur if this function throws an exception.` |
| C5040 | `dynamic exception specifications are valid only in C++14 and earlier; treating as noexcept(false)` |
| C5041 | `'definition': out-of-line definition for constexpr static data member is not needed and is deprecated in C++17` |
| C5042 | `'declaration': function declarations at block scope cannot be specified 'inline' in standard C++; remove 'inline' specifier` |
| C5043 | `'specification': exception specification does not match previous declaration` |

## Warnings introduced in Visual Studio 2017 version 15.3 (compiler version 19.11.25506.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.10`**.

| Warning | Message |
|--|--|
| [C4597](c4597.md) | `undefined behavior: description` |
| C4604 | `'type': passing argument by value across native and managed boundary requires valid copy constructor. Otherwise the runtime behavior is undefined` |
| C4749 | `conditionally supported: description` |
| [C4768](c4768.md) | `__declspec attributes before linkage specification are ignored` |
| [C4834](c4834.md) | `discarding return value of function with 'nodiscard' attribute` |
| [C4841](c4841.md) | `non-standard extension used: extension` |
| C4842 | `the result of 'offsetof' applied to a type using multiple inheritance is not guaranteed to be consistent between compiler releases` |
| C4869 | `'nodiscard' may only be applied to classes, enumerations, and functions with non-void return type` |
| [C4984](compiler-warning-c4984.md) | `'if constexpr' is a C++17 language extension` |
| [C5033](c5033.md) | `'*storage-class*' is no longer a supported storage class` |
| C5034 | `use of intrinsic 'intrinsic' causes function function to be compiled as guest code` |
| C5035 | `use of feature 'feature' causes function function to be compiled as guest code` |
| C5036 | `varargs function pointer conversion when compiling with /hybrid:x86arm64 'type1' to 'type2'` |
| [C5037](c5037.md) | `'*member-function*': an out-of-line definition of a member of a class template cannot have default arguments` |
| [C5038](c5038.md) | `data member 'member1' will be initialized after data member 'member2'` |

## Warnings introduced in Visual Studio 2017 RTM (compiler version 19.10.25017.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.00`**.

| Warning | Message |
|--|--|
| C4468 | `'fallthrough': attribute must be followed by a case label or a default label` |
| [C4698](c4698.md) | `'feature' is for evaluation purposes only and is subject to change or removal in future updates.` |
| [C4839](compiler-warning-level-3-c4839.md) | `non-standard use of class 'class' as an argument to a variadic function` |
| [C4840](compiler-warning-level-4-c4840.md) | `non-portable use of class 'class' as an argument to a variadic function` |

::: moniker-end

## Warnings introduced in Visual Studio 2015 Update 3 (compiler version 19.00.24215.1)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.00.23918`**.

| Warning | Message |
|--|--|
| C4467 | `usage of ATL attributes is deprecated` |
| [C4596](c4596.md) | `'name': illegal qualified name in member declaration` |
| C4598 | `'#include <header>': header number number in the source does not match source at that position` |
| C4599 | `'argument': source argument number number does not match source` |

## Warnings introduced in Visual Studio 2015 Update 2 (compiler version 19.00.23918.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.00.23506`**.

| Warning | Message |
|--|--|
| C4466 | `Could not perform coroutine heap elision` |
| C4595 | `'class': non-member operator new or delete functions may not be declared inline` |
| C4828 | `The file contains a character starting at offset 0xvalue that is illegal in the current source character set (codepage number).` |
| [C4868](compiler-warning-c4868.md) | `compiler may not enforce left-to-right evaluation order in braced initializer list` |

## Warnings introduced in Visual Studio 2015 Update 1 (compiler version 19.00.23506.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:19.00.23026`**.

| Warning | Message |
|--|--|
| C4426 | `optimization flags changed after including header, may be due to #pragma optimize()` |
| C4654 | `Code placed before include of precompiled header line will be ignored. Add code to precompiled header.` |
| C5031 | `#pragma warning(pop): likely mismatch, popping warning state pushed in different file` |
| C5032 | `detected #pragma warning(push) with no corresponding #pragma warning(pop)` |

## Warnings introduced in Visual Studio 2015 RTM (compiler version 19.00.23026.0)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:18`**.

| Warning | Message |
|--|--|
| C4427 | `'error': overflow in constant division, undefined behavior` |
| C4438 | `'type': cannot be called safely in /await:clrcompat mode. If 'type' calls into the CLR it may result in CLR head corruption` |
| C4455 | `'operator name': literal suffix identifiers that do not start with an underscore are reserved` |
| [C4456](compiler-warning-level-4-c4456.md) | `declaration of 'name' hides previous local declaration` |
| [C4457](compiler-warning-level-4-c4457.md) | `declaration of 'name' hides function parameter` |
| [C4458](compiler-warning-level-4-c4458.md) | `declaration of 'name' hides class member` |
| [C4459](compiler-warning-level-4-c4459.md) | `declaration of 'name' hides global declaration` |
| [C4462](compiler-warning-level-1-c4462.md) | `'type' : cannot determine the GUID of the type. Program may fail at runtime.` |
| [C4463](compiler-warning-level-4-c4463.md) | `overflow; assigning value to bit-field that can only hold values from value to value` |
| [C4473](c4473.md) | `'function' : not enough arguments passed for format string` |
| C4474 | `'function' : too many arguments passed for format string` |
| C4475 | `'function' : length modifier 'modifier' cannot be used with type field character 'character' in format specifier` |
| C4476 | `'function' : unknown type field character 'character' in format specifier` |
| [C4477](c4477.md) | `'function' : format string 'string' requires an argument of type 'type', but variadic argument number has type 'type'` |
| C4478 | `'function' : positional and non-positional placeholders cannot be mixed in the same format string` |
| C4494 | `'type' : Ignoring __declspec(allocator) because the function return type is not a pointer or reference` |
| C4495 | `nonstandard extension '__super' used: replace with explicit base class name` |
| C4496 | `nonstandard extension 'for each' used: replace with ranged-for statement` |
| C4497 | `nonstandard extension 'sealed' used: replace with 'final'` |
| C4498 | `nonstandard extension used: 'extension'` |
| C4499 | `'specialization': an explicit specialization cannot have a storage class (ignored)` |
| C4576 | `a parenthesized type followed by an initializer list is a non-standard explicit type conversion syntax` |
| [C4577](compiler-warning-level-1-c4577.md) | `'noexcept' used with no exception handling mode specified; termination on exception is not guaranteed. Specify /EHsc` |
| C4578 | `'abs': conversion from 'type' to 'type', possible loss of data (Did you mean to call 'name' or to #include <cmath>?)` |
| C4582 | `'type': constructor is not implicitly called` |
| C4583 | `'type': destructor is not implicitly called` |
| C4587 | `'type': behavior change: constructor is no longer implicitly called` |
| C4588 | `'type': behavior change: destructor is no longer implicitly called` |
| C4589 | `Constructor of abstract class 'type' ignores initializer for virtual base class 'type'` |
| C4591 | `'constexpr' call-depth limit of number exceeded (/constexpr:depth<NUMBER>)` |
| C4592 | `'type': symbol will be dynamically initialized (implementation limitation)` |
| C4593 | `'type': 'constexpr' call evaluation step limit of value exceeded; use /constexpr:steps<NUMBER> to increase the limit` |
| C4647 | `behavior change: __is_pod(type) has different value in previous versions` |
| C4648 | `standard attribute 'carries_dependency' is ignored` |
| C4649 | `attributes are ignored in this context` |
| C4753 | `Cannot find bounds for pointer; MPX intrinsic function ignored` |
| C4771 | `Bounds must be created using a simple pointer; MPX intrinsic function ignored` |
| C4774 | `'description' : format string expected in argument number is not a string literal` |
| C4775 | `nonstandard extension used in format string 'string' of function 'function'` |
| C4776 | `'%character' is not allowed in the format string of function 'function'` |
| C4777 | `'description' : format string 'string' requires an argument of type 'type', but variadic argument number has type 'type'` |
| C4778 | `'description' : unterminated format string 'string'` |
| [C4838](compiler-warning-level-1-c4838.md) | `conversion from 'type' to 'type' requires a narrowing conversion` |
| C5022 | `'type': multiple move constructors specified` |
| C5023 | `'type': multiple move assignment operators specified` |
| C5024 | `'declaration': move constructor was implicitly defined as deleted` |
| C5025 | `'declaration': move assignment operator was implicitly defined as deleted` |
| C5026 | `'type': move constructor was implicitly defined as deleted` |
| C5027 | `'type': move assignment operator was implicitly defined as deleted` |
| C5028 | `'name': Alignment specified in prior declaration (number) not specified in definition` |
| C5029 | `nonstandard extension used: alignment attributes in C++ apply to variables, data members and tag types only` |
| C5030 | `attribute 'attribute' is not recognized` |

## Warnings introduced in Visual Studio 2013 (compiler version 18.00.21005.1)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:17`**.

| Warning | Message |
|--|--|
| C4301 | `'type': overriding virtual function only differs from 'declaration' by const/volatile qualifier` |
| [C4316](compiler-warning-level-3-c4316.md) | `'type': object allocated on the heap may not be aligned number` |
| C4380 | `'type': A default constructor cannot be deprecated` |
| [C4388](c4388.md) | `'token': signed/unsigned mismatch` |
| C4423 | `'std::bad_alloc': will be caught by class ('type') on line number` |
| C4424 | `catch for 'type' preceded by 'type' on line number; unpredictable behavior may result if 'std::bad_alloc' is thrown` |
| C4425 | `A SAL annotation cannot be applied to '...'` |
| [C4464](compiler-warning-level-4-c4464.md) | `relative include path contains '..'` |
| C4575 | `'__vectorcall' incompatible with the '/clr' option: converting to '__stdcall'` |
| C4609 | `'type' derives from default interface 'type' on type 'type'. Use a different default interface for 'type', or break the base/derived relationship.` |
| [C4754](compiler-warning-level-4-c4754.md) | `Conversion rules for arithmetic operations in the comparison at description(number) mean that one branch cannot be executed. Cast 'type' to 'type' (or similar type of number bytes).` |
| C4755 | `Conversion rules for arithmetic operations in the comparison at description(number) mean that one branch cannot be executed in an inlined function. Cast 'type' to 'type' (or similar type of number bytes).` |
| C4767 | `section name 'name' is longer than 8 characters and will be truncated by the linker` |
| [C4770](c4770.md) | `partially validated enum 'name' used as index` |
| C4827 | `A public 'ToString' method with 0 parameters should be marked as virtual and override` |
| C4882 | `passing functors with non-const call operators to concurrency::parallel_for_each is deprecated` |
| C4973 | `'type': marked as deprecated` |
| C4974 | `'type': marked as deprecated` |
| C4981 | `Warbird: function 'declaration' marked as __forceinline not inlined because it contains exception semantics` |
| C4990 | `Warbird: message` |
| C4991 | `Warbird: function 'declaration' marked as __forceinline not inlined because protection level of inlinee is greater than the parent` |
| C4992 | `Warbird: function 'declaration' marked as __forceinline not inlined because it contains inline assembly which cannot be protected` |

## Warnings introduced in Visual Studio 2012 (compiler version 17.00.51106.1)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:16`**.

| Warning | Message |
|--|--|
| C4330 | `attribute 'attribute' for section 'section' ignored` |
| C4415 | `duplicate __declspec(code_seg('name'))` |
| C4416 | `__declspec(code_seg(...)) contains empty string: ignored` |
| C4417 | `an explicit template instantiation cannot have __declspec(code_seg(...)): ignored` |
| C4418 | `__declspec(code_seg(...)) ignored on an enum` |
| C4419 | `'name' has no effect when applied to private ref class 'type'.` |
| [C4435](compiler-warning-level-4-c4435.md) | `'type': Object layout under /vd2 will change due to virtual base 'type'` |
| [C4436](compiler-warning-level-1-c4436.md) | `dynamic_cast from virtual base 'type' to 'type' in constructor or destructor could fail with partially-constructed object` |
| [C4437](compiler-warning-level-4-c4437.md) | `dynamic_cast from virtual base 'type' to 'type' could fail in some contexts` |
| C4443 | `expected pragma parameter to be '0', '1', or '2'` |
| C4446 | `'type': cannot map member 'name' into this type, due to conflict with the type name. The method was renamed to 'name'` |
| C4447 | `'main' signature found without threading model. Consider using 'int main(Platform::Array<Platform::String^>^ args)'.` |
| C4448 | `'type' does not have a default interface specified in metadata. Picking: 'type', which may fail at runtime.` |
| C4449 | `'type' an unsealed type should be marked as '[WebHostHidden]'` |
| C4450 | `'type' should be marked as '[WebHostHidden]' because it derives from 'type'` |
| C4451 | `'type': Usage of ref class 'type' inside this context can lead to invalid marshaling of object across contexts` |
| C4452 | `'type': public type cannot be at global scope. It must be in a namespace that is a child of the name of the output .winmd file.` |
| C4453 | `'type': A '[WebHostHidden]' type should not be used on the published surface of a public type that is not '[WebHostHidden]'` |
| C4454 | `'type' is overloaded by more than the number of input parameters without having [DefaultOverload] specified. Picking 'declaration' as the default overload` |
| [C4471](compiler-warning-level-4-c4471.md) | `'name': a forward declaration of an unscoped enumeration must have an underlying type (int assumed)` |
| C4472 | `'name' is a native enum: add an access specifier (private/public) to declare a managed/WinRT enum` |
| C4492 | `'type': matches base ref class method 'type', but is not marked 'override'` |
| C4493 | `delete expression has no effect as the destructor of 'type' does not have 'public' accessibility` |
| C4585 | `'type': A WinRT 'public ref class' must either be sealed or derive from an existing unsealed class` |
| C4586 | `'type': A public type cannot be declared in a top-level namespace called 'Windows'` |
| C4695 | `#pragma execution_character_set: 'argument' is not a supported argument: currently only 'UTF-8' is supported` |
| [C4703](compiler-warning-level-4-c4703.md) | `potentially uninitialized local pointer variable 'name' used` |
| C4728 | `/Yl- option ignored because PCH reference is required` |
| C4745 | `volatile access of 'name' cannot be honored due to its size` |
| [C4746](compiler-warning-c4746.md) | `volatile access of 'name' is subject to /volatile:<iso | ms> setting; consider using __iso_volatile_load/store intrinsic functions` |
| C4872 | `floating point division by zero detected when compiling the call graph for the concurrency::parallel_for_each at: 'description'` |
| C4880 | `casting from 'type' to 'type': casting away constness from a pointer or reference may result in undefined behavior in an amp restricted function` |
| C4881 | `the constructor and/or the destructor will not be invoked for tile_static variable 'type'` |
| C4966 | `'description' has __code_seg annotation with unsupported segment name, annotation ignored` |
| C4988 | `'type': variable declared outside class/function scope` |
| C4989 | `'description': type has conflicting definitions.` |

## Warnings introduced in Visual Studio 2010 (compiler version 16.00.40219.01)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:15`**.

| Warning | Message |
|--|--|
| C4352 | `'name': intrinsic function already defined` |
| C4573 | `the usage of 'type' requires the compiler to capture 'this' but the current default capture mode does not allow it` |
| C4574 | `'name' is defined to be '0': did you mean to use '#if name'?` |
| C4689 | `'character': unsupported character in #pragma detect_mismatch; #pragma ignored` |
| C4751 | `/arch AVX flag does not apply to Intel(R) Streaming SIMD Extensions that are within inline ASM` |
| C4752 | `found Intel(R) Advanced Vector Extensions; consider using the appropriate /arch AVX flag` |
| C4837 | `trigraph detected: '??character' replaced by 'character'` |
| [C4986](compiler-warning-c4986.md) | `'declaration': exception specification does not match previous declaration` |
| C4987 | `nonstandard extension used: 'throw (...)'` |

## Warnings introduced in Visual Studio 2008 (compiler version 15.00.21022.08)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:14`**.

| Warning | Message |
|--|--|
| [C4396](compiler-warning-level-2-c4396.md) | `'type': the inline specifier cannot be used when a friend declaration refers to a specialization of a function template` |
| C4413 | `'declaration': reference member is initialized to a temporary that doesn't persist after the constructor exits` |
| C4491 | `'description': has an illegal IDL version format` |
| [C4603](compiler-warning-level-1-c4603.md) | `'name': macro is not defined or definition is different after precompiled header use` |
| [C4627](compiler-warning-level-1-c4627.md) | `'description': skipped when looking for precompiled header use` |
| [C4750](compiler-warning-level-1-c4750.md) | `'description': function with _alloca() inlined into a loop` |
| [C4910](compiler-warning-level-1-c4910.md) | `'type': '__declspec(dllexport)' and 'extern' are incompatible on an explicit instantiation` |
| [C4985](compiler-warning-level-4-c4985.md) | `'declaration': attributes not present on previous declaration.` |

## Warnings introduced in Visual Studio 2005 (compiler version 14.00.50727.762)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:13`**.

| Warning | Message |
|--|--|
| [C4272](compiler-warning-level-1-c4272.md) | `'type': is marked __declspec(dllimport); must specify native calling convention when importing a function.` |
| [C4333](compiler-warning-level-1-c4333.md) | `'expression': right shift by too large amount, data loss` |
| [C4334](compiler-warning-level-3-c4334.md) | `'expression': result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)` |
| [C4335](compiler-warning-c4335.md) | `Mac file format detected: please convert the source file to either DOS or UNIX format` |
| [C4342](compiler-warning-level-1-c4342.md) | `behavior change: 'type' called, but a member operator was called in previous versions` |
| [C4350](compiler-warning-level-1-c4350.md) | `behavior change: 'declaration' called instead of 'declaration'` |
| [C4357](compiler-warning-level-3-c4357.md) | `param array argument found in formal argument list for delegate 'declaration' ignored when generating 'type'` |
| [C4358](compiler-warning-level-1-c4358.md) | `'expression': return type of combined delegates is not 'void'; returned value is undefined` |
| [C4359](compiler-warning-level-3-c4359.md) | `'type': Alignment specifier is less than actual alignment (number), and will be ignored.` |
| C4362 | `'type': alignment greater than 8 bytes is not supported by CLR` |
| [C4364](compiler-warning-level-1-c4364.md) | `#using for assembly 'name' previously seen at description(number) without as_friend attribute; as_friend not applied` |
| [C4365](compiler-warning-level-4-c4365.md) | `'expression': conversion from 'type' to 'type', signed/unsigned mismatch` |
| [C4366](compiler-warning-level-4-c4366.md) | `The result of the unary 'operator' operator may be unaligned` |
| C4367 | `Conversion from 'type' to 'type' may cause datatype misalignment exception` |
| [C4368](compiler-warning-c4368.md) | `cannot define 'name' as a member of managed 'type': mixed types are not supported` |
| [C4369](compiler-warning-level-1-c4369.md) | `'type':  enumerator value 'number' cannot be represented as 'type', value is 'number'` |
| [C4374](compiler-warning-level-1-c4374.md) | `'declaration': interface method will not be implemented by non-virtual method 'declaration'` |
| [C4375](compiler-warning-level-1-c4375.md) | `non-public method 'declaration' does not override 'declaration'` |
| [C4376](compiler-warning-level-1-c4376.md) | `access specifier 'specifier:' is no longer supported: please use 'specifier:' instead` |
| [C4377](compiler-warning-level-1-c4377.md) | `native types are private by default; -d1PrivateNativeTypes is deprecated` |
| [C4378](compiler-warning-level-1-c4378.md) | `Must obtain function pointers to run initializers; consider System::ModuleHandle::ResolveMethodHandle` |
| [C4379](compiler-warning-level-1-c4379.md) | `Version version of the common language runtime is not supported by this compiler. Using this version may cause unexpected results` |
| [C4381](compiler-warning-level-1-c4381.md) | `'declaration': interface method will not be implemented by non-public method 'declaration'` |
| [C4382](compiler-warning-level-1-c4382.md) | `throwing 'type': a type with __clrcall destructor or copy constructor can only be caught in /clr:pure module` |
| [C4383](compiler-warning-level-1-c4383.md) | `'type': the meaning of dereferencing a handle can change, when a user-defined 'operator' operator exists; write the operator as a static function to be explicit about the operand` |
| [C4384](compiler-warning-level-1-c4384.md) | `#pragma 'directive' should only be used at global scope` |
| [C4393](compiler-warning-level-1-c4393.md) | `'type': const has no effect on description data member; ignored` |
| [C4394](compiler-warning-c4394.md) | `'type': per-appdomain symbol should not be marked with __declspec(value)` |
| [C4395](compiler-warning-level-1-c4395.md) | `'type': member function will be invoked on a copy of the initonly data member 'type'` |
| [C4397](compiler-warning-level-1-c4397.md) | `DefaultCharSetAttribute is ignored` |
| [C4398](compiler-warning-level-3-c4398.md) | `'type': per-process global object might not work correctly with multiple appdomains; consider using __declspec(appdomain)` |
| [C4399](compiler-warning-level-1-c4399.md) | `'type': per-process symbol should not be marked with __declspec(value) when compiled with /clr:pure` |
| [C4400](compiler-warning-level-4-c4400.md) | `'type': const/volatile qualifiers on this type are not supported` |
| [C4412](compiler-warning-level-2-c4412.md) | `'declaration': function signature contains type 'type'; C++ objects are unsafe to pass between pure code and mixed or native.` |
| [C4429](compiler-warning-level-4-c4429.md) | `possible incomplete or improperly formed universal-character-name` |
| [C4430](compiler-warning-c4430.md) | `missing type specifier - int assumed. Note: C++ does not support default-int` |
| [C4431](compiler-warning-level-4-c4431.md) | `missing type specifier - int assumed. Note: C no longer supports default-int` |
| [C4434](compiler-warning-level-4-c4434.md) | `a static constructor must have private accessibility; changing to private access` |
| [C4439](compiler-warning-c4439.md) | `'type': function definition with a managed type in the signature must have a __clrcall calling convention` |
| [C4441](compiler-warning-level-1-c4441.md) | `calling convention of 'convention' ignored; 'convention' used instead` |
| [C4445](compiler-warning-level-1-c4445.md) | `'declaration': in a managed/WinRT type a virtual method cannot be private` |
| [C4460](compiler-warning-level-4-c4460.md) | `CLR/WinRT operator 'type', has parameter passed by reference. CLR/WinRT operator 'operator' has different semantics from C++ operator 'operator', did you intend to pass by value?` |
| [C4461](compiler-warning-level-1-c4461.md) | `'type': this class has a finalizer '!type' but no destructor '~type'` |
| [C4470](compiler-warning-level-1-c4470.md) | `floating-point control pragmas ignored under /clr` |
| C4480 | `nonstandard extension used: specifying underlying type for enum 'type'` |
| [C4481](compiler-warning-level-4-c4481.md) | `nonstandard extension used: override specifier 'specifier'` |
| C4482 | `nonstandard extension used: enum 'type' used in qualified name` |
| C4483 | `syntax error: expected C++ keyword` |
| [C4484](compiler-warning-c4484.md) | `'type': matches base ref class method 'type', but is not marked 'virtual', 'new' or 'override'; 'new' (and not 'virtual') is assumed` |
| [C4485](compiler-warning-c4485.md) | `'type': matches base ref class method 'type', but is not marked 'new' or 'override'; 'new' (and 'virtual') is assumed` |
| [C4486](compiler-warning-level-1-c4486.md) | `'type': a private virtual method of a ref class or value class should be marked 'sealed'` |
| [C4487](compiler-warning-level-4-c4487.md) | `'type': matches inherited non-virtual method 'type' but is not explicitly marked 'new'` |
| [C4488](compiler-warning-level-1-c4488.md) | `'type': requires 'keyword' keyword to implement the interface method 'type'` |
| [C4489](compiler-warning-level-1-c4489.md) | `'keyword': not allowed on interface method 'name'; override specifiers are only allowed on ref class and value class methods` |
| [C4490](compiler-warning-level-1-c4490.md) | `'keyword': incorrect use of override specifier; 'type' does not match a base ref class method` |
| [C4538](compiler-warning-level-3-c4538.md) | `'type': const/volatile qualifiers on this type are not supported` |
| [C4559](compiler-warning-level-4-c4559.md) | `'type': redefinition; the function gains __declspec(value)` |
| [C4565](compiler-warning-level-4-c4565.md) | `'type': redefinition; the symbol was previously declared with __declspec(value)` |
| [C4566](compiler-warning-level-1-c4566.md) | `character represented by universal-character-name 'character' cannot be represented in the current code page (number)` |
| C4568 | `'type': no members match the signature of the explicit override` |
| C4569 | `'type': no members match the signature of the explicit override` |
| [C4570](compiler-warning-level-3-c4570.md) | `'type': is not explicitly declared as abstract but has abstract functions` |
| [C4571](compiler-warning-level-4-c4571.md) | `Informational: catch(...) semantics changed since Visual C++ 7.1; structured exceptions (SEH) are no longer caught` |
| [C4572](compiler-warning-level-1-c4572.md) | `[ParamArray] attribute is deprecated under /clr, use '...' instead` |
| [C4580](compiler-warning-level-3-c4580.md) | `[attribute] is deprecated; instead specify specifiedAttribute as a base class` |
| [C4581](compiler-warning-level-1-c4581.md) | `deprecated behavior: '"name"' replaced with 'name' to process attribute` |
| [C4606](compiler-warning-level-1-c4606.md) | `#pragma warning: 'number' ignored; Code Analysis warnings are not associated with warning levels` |
| [C4631](compiler-warning-level-1-c4631.md) | `MSXML or XPath unavailable, XML document comments will not be processed. description` |
| [C4632](compiler-warning-level-1-c4632.md) | `XML document comment: description - access denied: description` |
| [C4633](compiler-warning-level-3-c4633.md) | `XML document comment description: error: description` |
| [C4634](compiler-warning-level-4-c4634.md) | `XML document comment description: cannot be applied: description` |
| [C4635](compiler-warning-level-3-c4635.md) | `XML document comment description: badly-formed XML: description` |
| [C4636](compiler-warning-level-3-c4636.md) | `XML document comment description: tag requires non-empty 'description' attribute.` |
| [C4637](compiler-warning-level-3-c4637.md) | `XML document comment description: <include> tag discarded. description` |
| [C4638](compiler-warning-level-3-c4638.md) | `XML document comment description: reference to unknown symbol 'description'.` |
| [C4639](compiler-warning-level-4-c4639.md) | `MSXML error, XML document comments will not be processed. description` |
| [C4641](compiler-warning-level-3-c4641.md) | `XML document comment has an ambiguous cross reference:` |
| [C4678](compiler-warning-level-1-c4678.md) | `base class 'declaration' is less accessible than 'name'` |
| [C4679](compiler-warning-level-1-c4679.md) | `'description': could not import member` |
| [C4687](compiler-warning-c4687.md) | `'type': a sealed abstract class cannot implement an interface 'type'` |
| [C4688](compiler-warning-level-1-c4688.md) | `'name': constraint list contains assembly private type 'declaration'` |
| [C4690](compiler-warning-level-4-c4690.md) | `[ emitidl( pop ) ]: more pops than pushes` |
| [C4691](compiler-warning-level-1-c4691.md) | `'type': type referenced was expected in unreferenced module 'description', type defined in current translation unit used instead` |
| [C4692](compiler-warning-level-1-c4692.md) | `'name': signature of non-private member contains assembly private native type 'declaration'` |
| [C4693](compiler-warning-c4693.md) | `'type': a sealed abstract class cannot have any instance members 'name'` |
| [C4694](compiler-warning-c4694.md) | `'type': a sealed abstract class cannot have a base-class 'type'` |
| C4720 | `in-line assembler reports: 'description'` |
| C4721 | `'description': not available as an intrinsic` |
| [C4722](compiler-warning-level-1-c4722.md) | `'description': destructor never returns, potential memory leak` |
| C4726 | `ARM arch4/4T supports only '<cpsr_f> or <spsr_f>' with immediate value` |
| [C4727](compiler-warning-level-1-c4727.md) | `PCH named name with same timestamp found in name and name.  Using first PCH.` |
| [C4729](compiler-warning-level-1-c4729.md) | `function too big for flow graph based warnings` |
| [C4730](compiler-warning-level-1-c4730.md) | `'description': mixing _m64 and floating point expressions may result in incorrect code` |
| [C4731](compiler-warning-level-1-c4731.md) | `'description': frame pointer register 'register' modified by inline assembly code` |
| C4732 | `intrinsic 'intrinsic' is not supported in this architecture` |
| [C4733](compiler-warning-level-1-c4733.md) | `Inline asm assigning to 'FS:0': handler not registered as safe handler` |
| C4734 | `More than 64k line numbers in a COFF debug info section; stop emitting COFF debug line numbers for module 'module'` |
| [C4738](compiler-warning-level-3-c4738.md) | `storing 32-bit float result in memory, possible loss of performance` |
| [C4739](compiler-warning-level-1-c4739.md) | `reference to variable 'variable' exceeds its storage space` |
| [C4740](compiler-warning-level-4-c4740.md) | `flow in or out of inline asm code suppresses global optimization` |
| [C4742](compiler-warning-level-1-c4742.md) | `'variable' has different alignment in 'location' and 'location': number and number` |
| [C4743](compiler-warning-level-1-c4743.md) | `'name' has different size in 'location' and 'location': number and number bytes` |
| [C4744](compiler-warning-level-1-c4744.md) | `'name' has different type in 'location' and 'location': 'type' and 'type'` |
| [C4747](compiler-warning-level-1-c4747.md) | `Calling managed 'type': Managed code may not be run under loader lock, including the DLL entrypoint and calls reached from the DLL entrypoint` |
| C4761 | `integral size mismatch in argument; conversion supplied` |
| [C4764](compiler-warning-level-4-c4764.md) | `Cannot align catch objects to greater than 16 bytes` |
| [C4788](compiler-warning-level-1-c4788.md) | `'identifier': identifier was truncated to 'number' characters` |
| [C4789](compiler-warning-level-1-c4789.md) | `buffer 'name' of size number bytes will be overrun; number bytes will be written starting at offset number` |
| C4801 | `Return by reference is not verifiable: description` |
| [C4819](compiler-warning-level-1-c4819.md) | `The file contains a character that cannot be represented in the current code page (number). Save the file in Unicode format to prevent data loss` |
| C4826 | `Conversion from 'type' to 'type' is sign-extended. This may cause unexpected runtime behavior.` |
| [C4829](compiler-warning-level-1-c4829.md) | `Possibly incorrect parameters to function main. Consider 'int main(Platform::Array<Platform::String^>^ argv)'` |
| [C4835](compiler-warning-level-1-c4835.md) | `'type': the initializer for exported data will not be run until managed code is first executed in the host assembly` |
| [C4867](compiler-warning-c4867.md) | `'type': non-standard syntax; use '&' to create a pointer to member` |
| [C4936](compiler-warning-c4936.md) | `this __declspec is supported only when compiled with /clr or /clr:pure` |
| [C4937](compiler-warning-level-4-c4937.md) | `'name' and 'name' are indistinguishable as arguments to 'option'` |
| [C4938](compiler-warning-level-4-c4938.md) | `'type': Floating point reduction variable may cause inconsistent results under /fp:strict or #pragma fenv_access` |
| [C4939](compiler-warning-level-1-c4939.md) | `#pragma vtordisp is deprecated and will be removed in a future release of Visual C++` |
| [C4947](compiler-warning-level-1-c4947.md) | `'type': marked as obsolete` |
| [C4949](compiler-warning-level-1-and-level-4-c4949.md) | `pragmas 'managed' and 'unmanaged' are meaningful only when compiled with '/clr[:option]'` |
| [C4950](compiler-warning-c4950.md) | `'type': marked as obsolete` |
| C4955 | `'description': import ignored; already imported from 'source'` |
| [C4956](compiler-warning-c4956.md) | `'type': this type is not verifiable` |
| [C4957](compiler-warning-c4957.md) | `'expression': explicit cast from 'type' to 'type' is not verifiable` |
| [C4958](compiler-warning-c4958.md) | `'expression': pointer arithmetic is not verifiable` |
| [C4959](compiler-warning-c4959.md) | `cannot define unmanaged class 'type' in /clr:safe because accessing its members yields unverifiable code` |
| [C4960](compiler-warning-level-4-c4960.md) | `'description' is too big to be profiled` |
| [C4961](compiler-warning-c4961.md) | `No profile data was merged into 'location', profile-guided optimizations disabled` |
| [C4962](compiler-warning-c4962.md) | `'description': Profile-guided optimizations disabled because optimizations caused profile data to become inconsistent` |
| C4963 | `'description': no profile data found; different compiler options were used in instrumented build` |
| [C4964](compiler-warning-level-1-c4964.md) | `No optimization options were specified; profile info will not be collected` |
| [C4965](compiler-warning-level-1-c4965.md) | `implicit box of integer 0; use nullptr or explicit cast` |
| C4970 | `delegate constructor: target object ignored since 'declaration' is static` |
| C4971 | `Argument order: <target object>, <target function> for delegate constructor is deprecated, use <target function>, <target object>` |
| [C4972](compiler-warning-c4972.md) | `Directly modifying or treating the result of an unbox operation as an lvalue is unverifiable` |

## Warnings introduced in Visual Studio 2003 (compiler version 13.10.3077)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:13.00.9466`**.

| Warning | Message |
|--|--|
| [C4343](compiler-warning-level-4-c4343.md) | `#pragma optimize(description,off) overrides /Og option` |
| [C4344](compiler-warning-level-1-c4344.md) | `behavior change: use of explicit template arguments results in call to 'declaration'` |
| [C4346](compiler-warning-level-1-c4346.md) | `'type': dependent name is not a type` |
| [C4348](compiler-warning-level-1-c4348.md) | `'declaration': redefinition of default parameter: parameter number` |
| [C4356](compiler-warning-level-2-c4356.md) | `'type': static data member cannot be initialized via derived class` |
| [C4408](compiler-warning-level-4-c4408.md) | `anonymous struct did not declare any data members` |
| [C4544](compiler-warning-level-1-c4544.md) | `'declaration': default template argument ignored on this template declaration` |
| [C4545](compiler-warning-level-1-c4545.md) | `expression before comma evaluates to a function which is missing an argument list` |
| [C4546](compiler-warning-level-1-c4546.md) | `function call before comma missing argument list` |
| [C4547](compiler-warning-level-1-c4547.md) | `'expression': operator before comma has no effect; expected operator with side-effect` |
| [C4548](compiler-warning-level-1-c4548.md) | `expression before comma has no effect; expected expression with side-effect` |
| [C4549](compiler-warning-level-1-c4549.md) | `'expression': operator before comma has no effect; did you intend 'expression'?` |
| [C4628](compiler-warning-level-1-c4628.md) | `digraphs not supported with -Ze. Character sequence 'sequence' not interpreted as alternate token for 'token'` |
| [C4629](compiler-warning-level-4-c4629.md) | `digraph used, character sequence 'sequence' interpreted as token 'token' (insert a space between the two characters if this is not what you intended)` |
| C4671 | `'description': the copy constructor is inaccessible` |
| C4676 | `'description': the destructor is inaccessible` |
| [C4677](compiler-warning-level-1-c4677.md) | `'name': signature of non-private member contains assembly private type 'declaration'` |
| [C4686](compiler-warning-level-3-c4686.md) | `'type': possible change in behavior, change in UDT return calling convention` |
| [C4812](compiler-warning-level-1-c4812.md) | `obsolete declaration style: please use 'type::name' instead` |
| [C4813](compiler-warning-level-1-c4813.md) | `'type': a friend function of a local class must have been previously declared` |
| [C4821](compiler-warning-level-1-c4821.md) | `Unable to determine Unicode encoding type, please save the file with signature (BOM)` |
| [C4822](compiler-warning-level-1-c4822.md) | `'type': local class member function does not have a body` |
| [C4823](compiler-warning-level-3-c4823.md) | `'type': uses pinning pointers but unwind semantics are not enabled. Consider using /EHa` |
| [C4913](compiler-warning-level-4-c4913.md) | `user defined binary operator ',' exists but no overload could convert all operands, default built-in binary operator ',' used` |
| [C4948](compiler-warning-level-2-c4948.md) | `return type of 'declaration' does not match the last parameter type of the corresponding setter` |
| [C4951](compiler-warning-level-1-c4951.md) | `'description' has been edited since profile data was collected, function profile data not used` |
| [C4952](compiler-warning-level-1-c4952.md) | `'description': no profile data found in program database 'description'` |
| [C4953](compiler-warning-level-1-c4953.md) | `Inlinee 'description' has been edited since profile data was collected, profile data not used` |
| C4954 | `'description': not profiled (contains __int64 switch expression)` |

## Warnings introduced in Visual Studio 2002 (compiler version 13.00.9466)

These warnings, and all warnings in later versions, are suppressed by using the compiler option **`/Wv:12`**.

| Warning | Message |
|--|--|
| [C4096](compiler-warning-level-1-c4096.md) | `'type': interface is not a COM interface; will not be emitted to IDL` |
| [C4097](compiler-warning-level-1-c4097.md) | `expected pragma parameter to be 'restore' or 'off'` |
| [C4165](compiler-warning-level-1-c4165.md) | `'HRESULT' is being converted to 'bool'; are you sure this is what you want?` |
| [C4183](compiler-warning-level-1-c4183.md) | `'name': missing return type; assumed to be a member function returning 'int'` |
| C4199 | `description` |
| [C4255](compiler-warning-level-4-c4255.md) | `'name': no function prototype given: converting '()' to '(void)'` |
| [C4256](compiler-warning-level-4-c4256.md) | `'declaration': constructor for class with virtual bases has '...'; calls may not be compatible with older versions of Visual C++` |
| [C4258](compiler-warning-level-1-c4258.md) | `'name': definition from the for loop is ignored; the definition from the enclosing scope is used` |
| [C4263](compiler-warning-level-4-c4263.md) | `'declaration': member function does not override any base class virtual member function` |
| [C4264](compiler-warning-level-1-c4264.md) | `'declaration': no override available for virtual member function from base 'class'; function is hidden` |
| [C4265](compiler-warning-level-3-c4265.md) | `'type': class has virtual functions, but destructor is not virtual instances of this class may not be destructed correctly` |
| [C4266](compiler-warning-level-4-c4266.md) | `'declaration': no override available for virtual member function from base 'class'; function is hidden` |
| [C4267](compiler-warning-level-3-c4267.md) | `'expression': conversion from 'size_t' to 'type', possible loss of data` |
| [C4274](compiler-warning-level-1-c4274.md) | `#ident ignored; see documentation for #pragma comment(exestr, 'string')` |
| C4277 | `imported item 'type::name' exists as both data member and function member; data member ignored` |
| [C4278](compiler-warning-level-3-c4278.md) | `'name': identifier in type library 'description' is already a macro; use the 'rename' qualifier` |
| C4279 | `'name': identifier in type library 'description' is a keyword; use the 'rename' qualifier` |
| [C4287](compiler-warning-level-3-c4287.md) | `'expression': unsigned/negative constant mismatch` |
| [C4288](compiler-warning-level-1-c4288.md) | `nonstandard extension used: 'name': loop control variable declared in the for-loop is used outside the for-loop scope; it conflicts with the declaration in the outer scope` |
| [C4289](compiler-warning-level-4-c4289.md) | `nonstandard extension used: 'name': loop control variable declared in the for-loop is used outside the for-loop scope` |
| [C4293](compiler-warning-level-1-c4293.md) | `'expression': shift count negative or too big, undefined behavior` |
| [C4295](compiler-warning-level-4-c4295.md) | `'type': array is too small to include a terminating null character` |
| [C4296](compiler-warning-level-4-c4296.md) | `'expression': expression is always value` |
| [C4297](compiler-warning-level-1-c4297.md) | `'type': function assumed not to throw an exception but does` |
| C4298 | `'name': identifier in type library 'description' is already a macro; renaming to '__name'` |
| C4299 | `'name': identifier in type library 'description' is a keyword; renaming to '__name'` |
| [C4302](compiler-warning-level-2-c4302.md) | `'expression': truncation from 'type' to 'type'` |
| C4303 | `conversion from 'type' to 'type' is deprecated, use static_cast, __try_cast or dynamic_cast` |
| C4314 | `expected pragma parameter to be '32' or '64'` |
| C4315 | `'type': 'this' pointer for member 'type' may not be aligned number as expected by the constructor` |
| C4318 | `passing constant zero as the length to memset` |
| [C4319](compiler-warning-level-1-c4319.md) | `'expression': zero extending 'type' to 'type' of greater size` |
| C4321 | `automatically generating an IID for interface 'type'` |
| C4322 | `automatically generating a CLSID for class 'type'` |
| C4323 | `re-using registered CLSID for class 'type'` |
| [C4324](compiler-warning-level-4-c4324.md) | `'type': structure was padded due to alignment specifier` |
| [C4325](compiler-warning-level-1-c4325.md) | `attributes for standard section 'description' ignored` |
| [C4326](compiler-warning-level-1-c4326.md) | `return type of 'name' should be 'type' instead of 'type'` |
| C4327 | `'expression': indirection alignment of LHS (number) is greater than RHS (number)` |
| C4328 | `'description': indirection alignment of formal parameter number (number) is greater than the actual argument alignment (number)` |
| [C4329](compiler-warning-level-1-c4329.md) | `alignment specifier is ignored on enum` |
| [C4336](compiler-warning-level-4-c4336.md) | `import cross-referenced type library 'library' before importing 'description'` |
| [C4337](compiler-warning-level-4-c4337.md) | `cross-referenced type library 'library' in 'description' is being automatically imported` |
| C4338 | `#pragma description: standard section 'section' is used` |
| [C4339](compiler-warning-level-4-c4339.md) | `'type': use of undefined type detected in CLR/WinRT meta-data - use of this type may lead to a runtime exception` |
| [C4353](compiler-warning-level-1-c4353.md) | `nonstandard extension used: constant 0 as function expression.  Use '__noop' function intrinsic instead` |
| C4370 | `'declaration': layout of class has changed from a previous version of the compiler due to better packing` |
| [C4371](c4371.md) | `'declaration': layout of class may have changed from a previous version of the compiler due to better packing of member 'member'` |
| [C4373](compiler-warning-level-3-c4373.md) | `'type': virtual function overrides 'declaration', previous versions of the compiler did not override when parameters only differed by const/volatile qualifiers` |
| C4387 | `'description': was considered` |
| [C4389](compiler-warning-level-4-c4389.md) | `'expression': signed/unsigned mismatch` |
| [C4391](compiler-warning-level-1-c4391.md) | `'declaration': incorrect return type for intrinsic function, expected 'type'` |
| [C4392](compiler-warning-level-1-c4392.md) | `'declaration': incorrect number of arguments for intrinsic function, expected 'number' arguments` |
| [C4407](compiler-warning-level-1-c4407.md) | `cast between different pointer to member representations, compiler may generate incorrect code` |
| [C4420](compiler-warning-level-1-c4420.md) | `'name': operator not available, using 'name' instead; run-time checking may be compromised` |
| [C4440](compiler-warning-level-1-c4440.md) | `calling convention redefinition from 'description' to 'description' ignored` |
| C4442 | `embedded null terminator in __annotation argument.  Value will be truncated.` |
| C4444 | `'name': top level '__unaligned' is not implemented in this context` |
| [C4526](compiler-warning-level-1-c4526.md) | `'type': static member function cannot override virtual function 'declaration' override ignored, virtual function will be hidden` |
| C4531 | `C++ exception handling not available on Windows CE. Use Structured Exception Handling` |
| [C4532](compiler-warning-level-1-c4532.md) | `'description': jump out of finally block has undefined behavior during termination handling` |
| [C4533](compiler-warning-level-1-c4533.md) | `initialization of 'declaration' is skipped by 'goto declaration'` |
| [C4534](compiler-warning-level-3-c4534.md) | `'declaration' will not be a default constructor for class 'type' due to the default argument` |
| [C4535](compiler-warning-level-3-c4535.md) | `calling _set_se_translator() requires /EHa` |
| [C4536](compiler-warning-level-4-c4536.md) | `'description': type-name exceeds meta-data limit of 'number' characters` |
| [C4537](compiler-warning-level-1-c4537.md) | `'declaration': '.' applied to non-UDT type` |
| C4542 | `Skipping generation of merged injected text file, cannot write type file: 'filename': error` |
| [C4543](compiler-warning-level-3-c4543.md) | `Injected text suppressed by attribute 'no_injected_text'` |
| [C4555](compiler-warning-level-1-c4555.md) | `expression has no effect; expected expression with side-effect` |
| [C4557](compiler-warning-level-3-c4557.md) | `'__assume' contains effect 'effect'` |
| [C4558](compiler-warning-level-1-c4558.md) | `value of operand 'number' is out of range 'number - number'` |
| [C4561](compiler-warning-level-1-c4561.md) | `'__fastcall' incompatible with the '/clr' option: converting to '__stdcall'` |
| C4562 | `fully prototyped functions are required with the '/clr' option: converting '()' to '(void)'` |
| [C4564](compiler-warning-level-4-c4564.md) | `method 'name' of class 'type' defines unsupported default parameter 'parameter'` |
| [C4584](compiler-warning-level-1-c4584.md) | `'type': base-class 'declaration' is already a base-class of 'declaration'` |
| [C4608](compiler-warning-level-3-c4608.md) | `Initializing multiple members of union: 'type' and 'type'` |
| [C4619](compiler-warning-level-3-c4619.md) | `#pragma warning: there is no warning number 'number'` |
| [C4623](compiler-warning-level-4-c4623.md) | `'type': default constructor was implicitly defined as deleted` |
| [C4624](compiler-warning-level-1-c4624.md) | `'type': destructor was implicitly defined as deleted` |
| [C4625](compiler-warning-level-4-c4625.md) | `'type': copy constructor was implicitly defined as deleted` |
| [C4626](compiler-warning-level-4-c4626.md) | `'type': assignment operator was implicitly defined as deleted` |
| [C4645](compiler-warning-level-3-c4645.md) | `function declared with 'noreturn' has a return statement` |
| [C4646](compiler-warning-level-3-c4646.md) | `function declared with 'noreturn' has non-void return type` |
| [C4659](compiler-warning-level-1-c4659.md) | `#pragma 'description': use of reserved segment 'name' has undefined behavior, use #pragma comment(linker, ...)` |
| [C4667](compiler-warning-level-1-c4667.md) | `'declaration': no function template defined that matches forced instantiation` |
| [C4668](compiler-warning-level-4-c4668.md) | `'name' is not defined as a preprocessor macro, replacing with '0' for 'value'` |
| [C4669](compiler-warning-level-1-c4669.md) | `'expression': unsafe conversion: 'type' is a managed/WinRT type object` |
| [C4674](compiler-warning-level-1-c4674.md) | `'name' should be declared 'static' and have exactly one parameter` |
| [C4680](compiler-warning-level-4-c4680.md) | `'type': coclass does not specify a default interface` |
| [C4681](compiler-warning-level-4-c4681.md) | `'type': coclass does not specify a default interface that is an event source` |
| [C4682](compiler-warning-level-4-c4682.md) | `'type': no directional parameter attribute specified, defaulting to [in]` |
| [C4683](compiler-warning-level-1-c4683.md) | `'declaration': event source has an 'out'-parameter; exercise caution when hooking multiple event handlers` |
| [C4684](compiler-warning-level-1-c4684.md) | `'description': WARNING!! attribute may cause invalid code generation: use with caution` |
| [C4685](compiler-warning-level-1-c4685.md) | `expecting '> >' found '>>' when parsing template parameters` |
| [C4700](compiler-warning-level-1-and-level-4-c4700.md) | `uninitialized local variable 'name' used` |
| [C4701](compiler-warning-level-4-c4701.md) | `potentially uninitialized local variable 'name' used` |
| [C4702](compiler-warning-level-4-c4702.md) | `unreachable code` |
| [C4711](compiler-warning-level-1-c4711.md) | `function 'name' selected for automatic inline expansion` |
| [C4714](compiler-warning-level-4-c4714.md) | `function 'declaration' marked as __forceinline not inlined` |
| [C4715](compiler-warning-level-1-c4715.md) | `'function': not all control paths return a value` |
| [C4716](compiler-warning-level-1-c4716.md) | `'function': must return a value` |
| [C4717](compiler-warning-level-1-c4717.md) | `'function': recursive on all control paths, function will cause runtime stack overflow` |
| [C4718](compiler-warning-level-4-c4718.md) | `'function': recursive call has no side effects, deleting` |
| C4719 | `Double constant found when Qfast specified - use 'f' as a suffix to indicate single precision` |
| [C4723](compiler-warning-level-3-c4723.md) | `potential divide by 0` |
| [C4724](compiler-warning-level-3-c4724.md) | `potential mod by 0` |
| [C4725](compiler-warning-level-4-c4725.md) | `instruction may be inaccurate on some Pentiums` |
| C4757 | `subscript is a large unsigned value, did you intend a negative constant?` |
| [C4772](compiler-warning-level-1-c4772.md) | `#import referenced a type from a missing type library; 'description' used as a placeholder` |
| [C4792](compiler-warning-level-3-c4792.md) | `function 'function' declared using sysimport and referenced from native code; import library required to link` |
| [C4794](compiler-warning-level-1-c4794.md) | `segment of thread local storage variable 'name' changed from 'segment' to 'segment'` |
| C4798 | `native code generated for p-code function 'name' with exception handler or unwind semantics` |
| [C4799](compiler-warning-level-1-c4799.md) | `function 'function' has no EMMS instruction` |
| [C4803](compiler-warning-level-1-c4803.md) | `'declaration': the raise method has a different storage class from that of the event, 'declaration'` |
| [C4810](compiler-warning-level-1-c4810.md) | `value of pragma pack(show) == number` |
| [C4811](compiler-warning-level-1-c4811.md) | `value of pragma conform(forScope, show) == value` |
| [C4820](compiler-warning-level-4-c4820.md) | `'type': 'number' bytes padding added after type 'type'` |
| [C4905](compiler-warning-level-1-c4905.md) | `wide string literal cast to 'type'` |
| [C4906](compiler-warning-level-1-c4906.md) | `string literal cast to 'type'` |
| [C4912](compiler-warning-level-1-c4912.md) | `'attribute': attribute has undefined behavior on a nested UDT` |
| C4916 | `in order to have a dispid, 'type': must be introduced by an interface` |
| [C4917](compiler-warning-level-1-c4917.md) | `'type': a GUID can only be associated with a class, interface or namespace` |
| [C4918](compiler-warning-level-4-c4918.md) | `'character': invalid character in pragma optimization list` |
| [C4920](compiler-warning-level-1-c4920.md) | `enum name member name=number already seen in enum name as name=number` |
| C4921 | `'name': attribute value 'value' should not be multiply specified` |
| [C4925](compiler-warning-level-1-c4925.md) | `'declaration': dispinterface method cannot be called from script` |
| [C4926](compiler-warning-level-1-c4926.md) | `'declaration': symbol is already defined: attributes ignored` |
| [C4927](compiler-warning-level-1-c4927.md) | `illegal conversion; more than one user-defined conversion has been implicitly applied` |
| [C4928](compiler-warning-level-1-c4928.md) | `illegal copy-initialization; more than one user-defined conversion has been implicitly applied` |
| [C4929](compiler-warning-level-1-c4929.md) | `'description': typelibrary contains a union; ignoring the 'embedded_idl' qualifier` |
| [C4930](compiler-warning-level-1-c4930.md) | `'declaration': prototyped function not called (was a variable definition intended?)` |
| [C4931](compiler-warning-level-4-c4931.md) | `we are assuming the type library was built for number-bit pointers` |
| [C4932](compiler-warning-level-4-c4932.md) | `__identifier(description) and __identifier(description) are indistinguishable` |
| C4934 | `'__delegate(multicast)' is deprecated, use '__delegate' instead` |
| [C4935](compiler-warning-level-1-c4935.md) | `assembly access specifier modified from 'description'` |
| [C4944](compiler-warning-level-1-c4944.md) | `'name': cannot import symbol from 'source': as 'declaration' already exists in the current scope` |
| [C4945](compiler-warning-level-1-c4945.md) | `'name': cannot import symbol from 'source': as 'declaration' has already been imported from another assembly 'source'` |
| [C4946](compiler-warning-level-1-c4946.md) | `reinterpret_cast used between related classes: 'declaration' and 'declaration'` |
| [C4995](compiler-warning-level-3-c4995.md) | `'name': name was marked as #pragma deprecated` |
| [C4996](compiler-warning-level-3-c4996.md) | `'deprecated declaration': deprecation message (or "was declared deprecated")` |
| [C4997](compiler-warning-level-1-c4997.md) | `'type': coclass does not implement a COM interface or pseudo-interface` |
| C4998 | `EXPECTATION FAILED: description(number)` |

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md) \
[Compiler warnings C4000 - C5999](compiler-warnings-c4000-c5999.md) \
[/Wv compiler option](../../build/reference/compiler-option-warning-level.md) \
[Compiler Warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) \
[warning](../../preprocessor/warning.md)
