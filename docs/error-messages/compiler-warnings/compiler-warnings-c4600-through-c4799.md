---
title: "Microsoft C/C++ compiler (MSVC) warnings C4600 through C4799"
description: "Table of Microsoft C/C++ compiler (MSVC) warnings C4600 through C4799"
ms.date: 05/03/2021
f1_keywords: ["C4604", "C4605", "C4609", "C4631", "C4642", "C4643", "C4644", "C4647", "C4648", "C4649", "C4654", "C4658", "C4671", "C4676", "C4689", "C4695", "C4696", "C4719", "C4720", "C4721", "C4725", "C4726", "C4728", "C4729", "C4732", "C4734", "C4735", "C4736", "C4745", "C4749", "C4751", "C4752", "C4753", "C4755", "C4757", "C4761", "C4767", "C4771", "C4774", "C4775", "C4776", "C4777", "C4778", "C4792", "C4798"]
helpviewer_keywords: ["C4604", "C4605", "C4609", "C4631", "C4642", "C4643", "C4644", "C4647", "C4648", "C4649", "C4654", "C4658", "C4671", "C4676", "C4689", "C4695", "C4696", "C4719", "C4720", "C4721", "C4725", "C4726", "C4728", "C4729", "C4732", "C4734", "C4735", "C4736", "C4745", "C4749", "C4751", "C4752", "C4753", "C4755", "C4757", "C4761", "C4767", "C4771", "C4774", "C4775", "C4776", "C4777", "C4778", "C4792", "C4798"]
---
# Microsoft C/C++ compiler warnings C4600 through C4799

The articles in this section describe Microsoft C/C++ compiler warning messages C4600 through C4799.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## Warning messages

|Warning|Message|
|-------------|-------------|
|[Compiler warning (level 1) C4600](compiler-warning-level-1-c4600.md)|`#pragma `'*macro name*': expected a valid non-empty string|
|[Compiler warning (level 1) C4602](compiler-warning-level-1-c4602.md)|`#pragma pop_macro: `'*macro name*' no previous `#pragma push_macro` for this identifier|
|[Compiler warning (level 1) C4603](compiler-warning-level-1-c4603.md)|'*identifier*': macro is not defined or definition is different after precompiled header use|
|Compiler warning (level 1) C4604|'*type*': passing an argument of this type by value across the native/managed boundary requires the type to be move- or copy-constructible. Otherwise, the runtime behavior is undefined|
|Compiler warning (level 1, off) C4605|'`/D`*macro*' specified on current command line, but was not specified when precompiled header was built|
|[Compiler warning (level 1) C4606](compiler-warning-level-1-c4606.md)|`#pragma warning:` '*warning number*' ignored; Code Analysis warnings are not associated with warning levels|
|[Compiler warning (level 3, off) C4608](compiler-warning-level-3-c4608.md)|Initializing multiple members of union: '*member1*' and '*member2*'|
|Compiler warning (level 3, error) C4609|'*type1*' derives from default interface '*interface*' on type '*type2*'. Use a different default interface for '*type1*', or break the base/derived relationship.|
|[Compiler warning (level 4) C4610](compiler-warning-level-4-c4610.md)|*class* '*name*' can never be instantiated - user defined constructor required|
|[Compiler warning (level 4) C4611](compiler-warning-level-4-c4611.md)|interaction between '*function*' and C++ object destruction is non-portable|
|[Compiler warning (level 1) C4612](compiler-warning-level-1-c4612.md)|error in include filename|
|[Compiler warning (level 1) C4613](compiler-warning-level-1-c4613.md)|'*symbol*': class of segment cannot be changed|
|[Compiler warning (level 1) C4615](compiler-warning-level-1-c4615.md)|`#pragma warning`: unknown user warning type|
|[Compiler warning (level 1) C4616](compiler-warning-level-1-c4616.md)|`#pragma warning`: warning number '*number*' not a valid compiler warning|
|[Compiler warning (level 1) C4618](compiler-warning-level-1-c4618.md)|pragma parameters included an empty string; pragma ignored|
|[Compiler warning (level 3, off) C4619](compiler-warning-level-3-c4619.md)|`#pragma warning`: there is no warning number '*number*'|
|[Compiler warning (level 1) C4620](compiler-warning-level-1-c4620.md)|no postfix form of '`operator ++`' found for type '*type*', using prefix form|
|[Compiler warning (level 1) C4621](compiler-warning-level-1-c4621.md)|no postfix form of '`operator --`' found for type '*type*', using prefix form|
|[Compiler warning (level 3) C4622](compiler-warning-level-3-c4622.md)|overwriting debug information formed during creation of the precompiled header in object file: '*file*'|
|[Compiler warning (level 1 and level 4, off) C4623](compiler-warning-level-4-c4623.md)|'*derived class*': default constructor was implicitly defined as deleted|
|[Compiler warning (level 1 and level 4) C4624](compiler-warning-level-1-c4624.md)|'*derived class*': destructor was implicitly defined as deleted|
|[Compiler warning (level 1 and level 4, off) C4625](compiler-warning-level-4-c4625.md)|'*derived class*': copy constructor was implicitly defined as deleted|
|[Compiler warning (level 1 and level 4, off) C4626](compiler-warning-level-4-c4626.md)|'*derived class*': assignment operator was implicitly defined as deleted|
|[Compiler warning (level 1, no longer emitted) C4627](compiler-warning-level-1-c4627.md)|'`identifier`': skipped when looking for precompiled header use|
|[Compiler warning (level 1, off) C4628](compiler-warning-level-1-c4628.md)|digraphs not supported with `-Ze`. Character sequence '*digraph*' not interpreted as alternate token for '*token*'|
|[Compiler warning (level 4, no longer emitted) C4629](compiler-warning-level-4-c4629.md)|digraph used, character sequence '*digraph*' interpreted as token '*char*' (insert a space between the two characters if this is not what you intended)|
|[Compiler warning (level 1) C4630](compiler-warning-level-1-c4630.md)|'*symbol*': '*extern*' storage-class specifier illegal on member definition|
|Compiler warning (level 2) C4631|`MSXML` or `XPath` unavailable, XML document comments will not be processed. *reason*|
|[Compiler warning (level 1) C4632](compiler-warning-level-1-c4632.md)|XML document comment: *file* - access denied: *reason*|
|[Compiler warning (level 3 and level 4) C4633](compiler-warning-level-3-c4633.md)|XML document comment *target*: error: *reason*|
|[Compiler warning (level 4) C4634](compiler-warning-level-4-c4634.md)|XML document comment *target*: cannot be applied: *reason*|
|[Compiler warning (level 3 and level 4) C4635](compiler-warning-level-3-c4635.md)|XML document comment *target*: badly-formed XML: *reason*|
|[Compiler warning (level 3) C4636](compiler-warning-level-3-c4636.md)|XML document comment *target*: tag requires non-empty '*attribute*' attribute.|
|[Compiler warning (level 3 and level 4) C4637](compiler-warning-level-3-c4637.md)|XML document comment *target*: `<include>` tag discarded. *Reason*|
|[Compiler warning (level 3) C4638](compiler-warning-level-3-c4638.md)|XML document comment *target*: reference to unknown symbol '*symbol*'.|
|[Compiler warning (level 2) C4639](compiler-warning-level-4-c4639.md)|`MSXML` error, XML document comments will not be processed. *Reason*|
|[Compiler warning (level 3, off) C4640](compiler-warning-level-3-c4640.md)|'*instance*': construction of local static object is not thread-safe|
|[Compiler warning (level 3) C4641](compiler-warning-level-3-c4641.md)|XML document comment has an ambiguous cross reference:|
|Compiler warning (level 1) C4642|'*class*': could not import the constraints for generic parameter '*name*'|
|Compiler warning (level 4, off) C4643|Forward declaring '*identifier*' in namespace std is not permitted by the C++ Standard.|
|Compiler warning (level 1) C4644|usage of the macro-based `offsetof` pattern in constant expressions is non-standard; use `offsetof` defined in the C++ standard library instead|
|[Compiler warning (level 3) C4645](compiler-warning-level-3-c4645.md)|function declared with '`noreturn`' has a return statement|
|[Compiler warning (level 3) C4646](compiler-warning-level-3-c4646.md)|function declared with '`noreturn`' has non-void return type|
|Compiler warning (level 3, off) C4647|behavior change: `__is_pod(`*type*`)` has different value in previous versions|
|Compiler warning (level 3) C4648|standard attribute `[[`*attribute*`]]` is ignored|
|Compiler warning (level 3) C4649|attributes are ignored in this context|
|[Compiler warning (level 1) C4650](compiler-warning-level-1-c4650.md)|debugging information not in precompiled header; only global symbols from the header will be available|
|[Compiler warning (level 1) C4651](compiler-warning-level-1-c4651.md)|'`/D`*definition*' specified for precompiled header but not for current compile|
|[Compiler warning (level 1) C4652](compiler-warning-level-1-c4652.md)|compiler option '*option*' inconsistent with precompiled header; current command-line option will override that defined in the precompiled header|
|[Compiler warning (level 1) C4653](compiler-warning-level-2-c4653.md)|compiler option '*option*' inconsistent with precompiled header; current command-line option ignored|
|Compiler warning (level 4, off) C4654|Code placed before include of precompiled header line will be ignored. Add code to precompiled header.|
|[Compiler warning (level 1) C4655](compiler-warning-level-1-c4655.md)|'*symbol*': variable type is new since the latest build, or is defined differently elsewhere|
|[Compiler warning (level 1) C4656](compiler-warning-level-1-c4656.md)|'*symbol*': data type is new or has changed since the latest build, or is defined differently elsewhere|
|[Compiler warning (level 1) C4657](compiler-warning-level-1-c4657.md)|expression involves a data type that is new since the latest build|
|Compiler warning (level 1) C4658|'*function*': function prototype is new since the latest build, or is declared differently elsewhere|
|[Compiler warning (level 1) C4659](compiler-warning-level-1-c4659.md)|`#pragma `'*pragma*': use of reserved segment '*segment*' has undefined behavior, use `#pragma comment(linker, ...)`|
|[Compiler warning (level 1) C4661](compiler-warning-level-1-c4661.md)|'*identifier*': no suitable definition provided for explicit template instantiation request|
|[Compiler warning (level 1) C4662](compiler-warning-level-1-c4662.md)|explicit instantiation; template-class '*identifier1*' has no definition from which to specialize '*identifier2*'|
|[Compiler warning (level 1) C4667](compiler-warning-level-1-c4667.md)|'*function*': cannot find a function template that matches the explicit instantiation|
|[Compiler warning (level 4, off) C4668](compiler-warning-level-4-c4668.md)|'*symbol*' is not defined as a preprocessor macro, replacing with '`0`' for '*directive*'|
|[Compiler warning (level 1) C4669](compiler-warning-level-1-c4669.md)|'*cast*': unsafe conversion: '*class*' is a *managed/WinRT* type object|
|[Compiler warning (level 4) C4670](compiler-warning-level-4-c4670.md)|'*identifier*': this base class is inaccessible|
|Compiler warning (level 4) C4671|'*identifier*': the copy constructor is inaccessible|
|[Compiler warning (level 4) C4672](compiler-warning-level-4-c4672.md)|'*identifier1*': ambiguous. First seen as '*identifier2*'|
|[Compiler warning (level 4) C4673](compiler-warning-level-4-c4673.md)|throwing '*identifier*' the following types will not be considered at the catch site|
|[Compiler warning (level 1) C4674](compiler-warning-level-1-c4674.md)|'*method*' should be declared '`static`' and have exactly one parameter|
|Compiler warning (level 4) C4676|'*class*': the destructor is inaccessible|
|[Compiler warning (level 1) C4677](compiler-warning-level-1-c4677.md)|'*function*': signature of non-private member contains assembly private type '*private_type*'|
|[Compiler warning (level 1) C4678](compiler-warning-level-1-c4678.md)|base class '*base_type*' is less accessible than '*derived_type*'|
|[Compiler warning (level 1 and level 4) C4679](compiler-warning-level-1-c4679.md)|'*member*': could not import item or its associated custom attribute|
|[Compiler warning (level 4) C4680](compiler-warning-level-4-c4680.md)|'*class*': `coclass` does not specify a default interface|
|[Compiler warning (level 4) C4681](compiler-warning-level-4-c4681.md)|'*class*': `coclass` does not specify a default interface that is an event source|
|[Compiler warning (level 4, off) C4682](compiler-warning-level-4-c4682.md)|'*parameter*': no directional parameter attribute specified, defaulting to `[in]`|
|[Compiler warning (level 1) C4683](compiler-warning-level-1-c4683.md)|'*function*': event source has an 'out'-parameter; exercise caution when hooking multiple event handlers|
|[Compiler warning (level 1) C4684](compiler-warning-level-1-c4684.md)|'*attribute*': WARNING!! attribute may cause invalid code generation: use with caution|
|[Compiler warning (level 1, no longer emitted) C4685](compiler-warning-level-1-c4685.md)|expecting '`> >`' found '`>>`' when parsing template parameters|
|[Compiler warning (level 3, off) C4686](compiler-warning-level-3-c4686.md)|'*user-defined type*': possible change in behavior, change in UDT return calling convention|
|[Compiler warning (level 1, error) C4687](compiler-warning-c4687.md)|'*class*': a sealed abstract class cannot implement an interface '*interface*'|
|[Compiler warning (level 1) C4688](compiler-warning-level-1-c4688.md)|'*constraint*': constraint list contains assembly private type '*type*'|
|Compiler warning (level 1) C4689|'*character*': unsupported character in `#pragma detect_mismatch`; `#pragma` ignored|
|[Compiler warning (level 4) C4690](compiler-warning-level-4-c4690.md)|`[ emitidl( pop ) ]`: more pops than pushes|
|[Compiler warning (level 1) C4691](compiler-warning-level-1-c4691.md)|'*type*': type referenced was expected in unreferenced *assembly* '*file*', type defined in current translation unit used instead|
|[Compiler warning (level 1, off) C4692](compiler-warning-level-1-c4692.md)|'*function*': signature of non-private member contains assembly private native type '*native_type*'|
|[Compiler warning (level 1, error) C4693](compiler-warning-c4693.md)|'*class*': a sealed abstract class cannot have any instance members '*instance member*'|
|[Compiler warning (level 1, error) C4694](compiler-warning-c4694.md)|'*class*': a sealed abstract class cannot have a base-class '*base_class*'|
|Compiler warning (level 1) C4695|`#pragma execution_character_set`: '*character set*' is not a supported argument: currently only '`UTF-8`' is supported|
|Compiler warning (level 1) C4696|`/ZBvalue1` option out of range; assuming 'value2'|
| [Compiler warning (level 3) C4698](c4698.md) | '*feature*' is for evaluation purposes only and is subject to change or removal in future updates. |
|[Compiler warning (level 1 and level 4) C4700](compiler-warning-level-1-and-level-4-c4700.md)|uninitialized local variable 'name' used|
|[Compiler warning (level 4) C4701](compiler-warning-level-4-c4701.md)|potentially uninitialized local variable 'name' used|
|[Compiler warning (level 4) C4702](compiler-warning-level-4-c4702.md)|unreachable code|
|[Compiler warning (level 4) C4703](compiler-warning-level-4-c4703.md)|potentially uninitialized local pointer variable '*identifier*' used|
|[Compiler warning (level 4) C4706](compiler-warning-level-4-c4706.md)|assignment used as a condition|
|[Compiler warning (level 4) C4709](compiler-warning-level-4-c4709.md)|comma operator within array index expression|
|[Compiler warning (level 4, off) C4710](compiler-warning-level-4-c4710.md)|'*function*': function not inlined|
|[Compiler warning (level 1) C4711](compiler-warning-level-1-c4711.md)|function 'function' selected for automatic inline expansion|
|[Compiler warning (level 4) C4714](compiler-warning-level-4-c4714.md)|function '*function*' marked as `__forceinline` not inlined|
|[Compiler warning (level 1) C4715](compiler-warning-level-1-c4715.md)|'function': not all control paths return a value|
|[Compiler warning (level 1, error) C4716](compiler-warning-level-1-c4716.md)|'function': must return a value|
|[Compiler warning (level 1) C4717](compiler-warning-level-1-c4717.md)|'function': recursive on all control paths, function will cause runtime stack overflow|
|[Compiler warning (level 4) C4718](compiler-warning-level-4-c4718.md)|'function call': recursive call has no side effects, deleting|
|Compiler warning (level 1) C4719|Double constant found when Qfast specified - use 'f' as a suffix to indicate single precision|
|Compiler warning (level 2) C4720|in-line assembler reports: 'message'|
|Compiler warning (level 1) C4721|'function': not available as an intrinsic|
|[Compiler warning (level 1) C4722](compiler-warning-level-1-c4722.md)|'function': destructor never returns, potential memory leak|
|[Compiler warning (level 3) C4723](compiler-warning-level-3-c4723.md)|potential divide by 0|
|[Compiler warning (level 3) C4724](compiler-warning-level-3-c4724.md)|potential mod by 0|
|Compiler warning (level 3) C4725|instruction may be inaccurate on some Pentiums|
|Compiler warning C4726|ARM arch4/4T supports only '`<cpsr_f>` or `<spsr_f>`' with immediate value|
|[Compiler warning (level 1) C4727](compiler-warning-level-1-c4727.md)|PCH named pch_file with same timestamp found in obj_file_1 and obj_file_2.  Using first PCH.|
|Compiler warning (level 1) C4728|`/Yl-` option ignored because PCH reference is required|
|Compiler warning (level 4) C4729|function too big for flow graph based warnings|
|[Compiler warning (Level 1) C4730](compiler-warning-level-1-c4730.md)|'main': mixing `_m64` and floating point expressions may result in incorrect code|
|[Compiler warning (Level 1) C4731](compiler-warning-level-1-c4731.md)|'pointer': frame pointer register 'register' modified by inline assembly code|
|Compiler warning (level 1) C4732|intrinsic '*identifier*' is not supported in this architecture|
|[Compiler warning (Level 1) C4733](compiler-warning-level-1-c4733.md)|Inline asm assigning to '`FS:0`': handler not registered as safe handler|
|Compiler warning C4734|More than 64k line numbers in a COFF debug info section; stop emitting COFF debug line numbers for module 'module'|
|Compiler warning C4735|`align_function` attribute argument '*argument*' is not a power of two and is not positive. Ignoring attribute|
|Compiler warning C4736|`align_function` attribute ignored because `/Gy` was not specified|
|[Compiler warning (Level 3) C4738](compiler-warning-level-3-c4738.md)|storing 32-bit float result in memory, possible loss of performance|
|[Compiler warning (level 1) C4739](compiler-warning-level-1-c4739.md)|reference to variable 'var' exceeds its storage space|
|[Compiler warning (Level 4) C4740](compiler-warning-level-4-c4740.md)|flow in or out of inline asm code suppresses global optimization|
|[Compiler warning (Level 1) C4742](compiler-warning-level-1-c4742.md)|'var' has different alignment in 'file1' and 'file2': number and number|
|[Compiler warning (Level 1) C4743](compiler-warning-level-1-c4743.md)|'type' has different size in 'file1' and 'file2': number and number bytes|
|[Compiler warning (Level 1) C4744](compiler-warning-level-1-c4744.md)|'var' has different type in 'file1' and 'file2': 'type1' and 'type2'|
|Compiler warning C4745|volatile access of 'name' cannot be honored due to its size|
|[Compiler warning C4746](compiler-warning-c4746.md)|volatile access of '*expression*' is subject to `/volatile:<iso|ms>` setting; consider using `__iso_volatile_load/store intrinsic functions`|
|[Compiler warning (level 1) C4747](compiler-warning-level-1-c4747.md)|Calling managed 'entrypoint': Managed code may not be run under loader lock, including the DLL entrypoint and calls reached from the DLL entrypoint|
|Compiler warning (level 4, off) C4749|conditionally supported: *message*|
|[Compiler warning (level 1) C4750](compiler-warning-level-1-c4750.md)|'identifier': function with `_alloca()` inlined into a loop|
|Compiler warning (level 4) C4751|`/arch:AVX` does not apply to Intel(R) Streaming SIMD Extensions that are within inline ASM|
|Compiler warning (level 4) C4752|found Intel(R) Advanced Vector Extensions; consider using `/arch:AVX`|
|Compiler warning C4753|Cannot find bounds for pointer; MPX intrinsic function ignored|
|[Compiler warning (level 4) C4754](compiler-warning-level-4-c4754.md)|Conversion rules for arithmetic operations in the comparison at %s(%d) mean that one branch cannot be executed. Cast '%s' to '%s' (or similar type of %d bytes).|
|Compiler warning C4755|Conversion rules for arithmetic operations in the comparison at %s(%d) mean that one branch cannot be executed in an inlined function. Cast '%s' to '%s' (or similar type of %d bytes).|
|[Compiler warning (level 2) C4756](compiler-warning-level-2-c4756.md)|overflow in constant arithmetic|
|Compiler warning (level 4) C4757|subscript is a large unsigned value, did you intend a negative constant?|
|Compiler warning C4761|integral size mismatch in argument; conversion supplied|
|[Compiler warning (level 4) C4764](compiler-warning-level-4-c4764.md)|Can not align catch objects to greater than 16 bytes|
|Compiler warning (level 4, off) C4767|section name '%s' is longer than 8 characters and will be truncated by the linker|
|[Compiler warning (level 3, off) C4768](c4768.md)|`__declspec` attributes before linkage specification are ignored|
| [Compiler warning (level 4) C4770](./c4770.md) | partially validated enum '*name*' used as index |
|Compiler warning C4771|Bounds must be created using a simple pointer; MPX intrinsic function ignored|
|[Compiler warning (level 1, error) C4772](compiler-warning-level-1-c4772.md)|`#import` referenced a type from a missing type library; '*missing_type*' used as a placeholder|
|Compiler warning (level 4, off) C4774|'*string*' : format string expected in argument *number* is not a string literal|
|Compiler warning (level 3) C4775|nonstandard extension used in format string '*string*' of function '*function*'|
|Compiler warning (level 1) C4776|'`%`*character*' is not allowed in the format string of function '*function*'|
|Compiler warning (level 4, off) C4777|'*function*' : format string '*string*' requires an argument of type '*type1*', but variadic argument *number* has type '*type2*'|
|Compiler warning (level 3) C4778|'*function*' : unterminated format string '*string*'|
|[Compiler warning (Level 1) C4788](compiler-warning-level-1-c4788.md)|'identifier': identifier was truncated to 'number' characters|
|[Compiler warning (Level 1) C4789](compiler-warning-level-1-c4789.md)|buffer 'identifier' of size N bytes will be overrun; M bytes will be written starting at offset L|
|Compiler warning (level 2) C4792|function '%s' declared using `sysimport` and referenced from native code; import library required to link|
|[Compiler warning (level 1 and level 3) C4793](compiler-warning-level-1-and-3-c4793.md)|'*function*': function compiled as native:<br> *reason*|
|[Compiler warning (level 1) C4794](compiler-warning-level-1-c4794.md)|segment of thread local storage variable '%s' changed from '%s' to '%s'|
|Compiler warning C4798|native code generated for p-code function 'name' with exception handler or unwind semantics|
|[Compiler warning (level 1) C4799](compiler-warning-level-1-c4799.md)|function '*function*' has no EMMS instruction|

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md)\
[Compiler warnings C4000 - C5999](compiler-warnings-c4000-c5999.md)