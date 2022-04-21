---
title: "C++ Build Insights SDK: event table"
description: "Event reference for the Visual Studio C++ Build Insights SDK"
ms.date: "02/12/2020"
helpviewer_keywords: ["C++ Build Insights", "C++ Build Insights SDK", "Events", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# C++ Build Insights SDK: event table

::: moniker range="<=msvc-140"

The C++ Build Insights SDK is compatible with Visual Studio 2017 and later. To see the documentation for these versions, set the Visual Studio **Version** selector control for this article to Visual Studio 2017 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-150"

## Compiler events

[COMPILER](#compiler)\
[COMMAND_LINE](#command-line)\
[ENVIRONMENT_VARIABLE](#environment-variable)\
[FILE_INPUT](#file-input)\
[OBJ_OUTPUT](#obj-output)\
[FRONT_END_PASS](#front-end-pass)\
[BACK_END_PASS](#back-end-pass)

## Compiler front-end events

[C1_DLL](#c1-dll)\
[FRONT_END_FILE](#front-end-file)\
[TEMPLATE_INSTANTIATION](#template-instantiation)\
[SYMBOL_NAME](#symbol-name)\
[MODULE](#module)\
[HEADER_UNIT](#header-unit)\
[PRECOMPILED_HEADER](#precompiled-header)

## Compiler back-end events

[C2_DLL](#c2-dll)\
[WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis)\
[TOP_DOWN](#top-down)\
[BOTTOM_UP](#bottom-up)\
[CODE_GENERATION](#code-generation)\
[THREAD](#thread)\
[FUNCTION](#function)\
[FORCE_INLINEE](#force-inlinee)

## Linker events

[LINKER](#linker)\
[COMMAND_LINE](#command-line)\
[ENVIRONMENT_VARIABLE](#environment-variable)\
[FILE_INPUT](#file-input)\
[EXECUTABLE_IMAGE_OUTPUT](#executable-image-output)\
[EXP_OUTPUT](#exp-output)\
[IMP_LIB_OUTPUT](#imp-lib-output)\
[LIB_OUTPUT](#lib-output)\
[PASS1](#pass1)\
[PRE_LTCG_OPT_REF](#pre-ltcg-opt-ref)\
[LTCG](#ltcg)\
[OPT_REF](#opt-ref)\
[OPT_ICF](#opt-icf)\
[OPT_LBR](#opt-lbr)\
[PASS2](#pass2)

## Event table

| Event | Property | Description |
|--|--|--|
| <a name="back-end-pass"></a> BACK_END_PASS | Type | Activity |
|  | Parents | [COMPILER](#compiler) |
|  | Children | [C2_DLL](#c2-dll) |
|  | Properties | - Absolute path to input source file<br/>- Absolute path to output object file |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[CompilerPass](cpp-event-data-types/compiler-pass.md)<br/>[BackEndPass](cpp-event-data-types/back-end-pass.md) |
|  | Description | Occurs at the start and stop of the compiler back-end pass. This pass is responsible for optimizing parsed C/C++ source code and converting it into machine code. |
| <a name="bottom-up"></a> BOTTOM_UP | Type | Activity |
|  | Parents | [WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[BottomUp](cpp-event-data-types/bottom-up.md) |
|  | Description | Occurs at the start and stop of the whole program analysis' bottom-up pass. |
| <a name="c1-dll"></a> C1_DLL | Type | Activity |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | [FRONT_END_FILE](#front-end-file)<br/>[SYMBOL_NAME](#symbol-name)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[C1DLL](cpp-event-data-types/c1-dll.md) |
|  | Description | Occurs at the start and stop of a *c1.dll* or *c1xx.dll* invocation. These DLLs are the C and C++ front end of the compiler. They're invoked solely by the compiler driver (*cl.exe*). |
| <a name="c2-dll"></a> C2_DLL | Type | Activity |
|  | Parents | [BACK_END_PASS](#back-end-pass)<br/>[LTCG](#ltcg) |
|  | Children | [CODE_GENERATION](#code-generation)<br/>[WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[C2DLL](cpp-event-data-types/c2-dll.md) |
|  | Description | Occurs at the start and stop of a *c2.dll* invocation. This DLL is the back end of the compiler. It's called by the compiler driver (*cl.exe*). It's also invoked by the linker (*link.exe*) when link-time code generation is used. |
| <a name="code-generation"></a> CODE_GENERATION | Type | Activity |
|  | Parents | [C2_DLL](#c2-dll) |
|  | Children | [FUNCTION](#function)<br/>[THREAD](#thread) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[CodeGeneration](cpp-event-data-types/code-generation.md) |
|  | Description | Occurs at the start and stop of the back end's code generation phase. |
| <a name="command-line"></a> COMMAND_LINE | Type | Simple Event |
|  | Parents | [COMPILER](#compiler)<br/>[LINKER](#linker) |
|  | Children | None |
|  | Properties | - The command line that was used to invoke *cl.exe* or *link.exe* |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[CommandLine](cpp-event-data-types/command-line.md) |
|  | Description | Occurs when the compiler and linker are done evaluating the command line. The evaluated command line includes all *cl.exe* and *link.exe* parameters passed via a response file. It also includes parameters to *cl.exe* and *link.exe* passed via environment variables such as CL, \_CL\_, LINK, and \_LINK\_. |
| <a name="compiler"></a> COMPILER | Type | Activity |
|  | Parents | None |
|  | Children | [BACK_END_PASS](#back-end-pass)<br/>[COMMAND_LINE](#command-line)<br/>[ENVIRONMENT_VARIABLE](#environment-variable)<br/>[FILE_INPUT](#file-input)<br/>[OBJ_OUTPUT](#obj-output)<br/>[FRONT_END_PASS](#front-end-pass) |
|  | Properties | - Compiler version<br/>- Working directory<br/>- Absolute path to the invoked *cl.exe* |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[Invocation](cpp-event-data-types/invocation.md)<br/>[Compiler](cpp-event-data-types/compiler.md) |
|  | Description | Occurs at the start and stop of a *cl.exe* invocation. |
| <a name="environment-variable"></a> ENVIRONMENT_VARIABLE | Type | Simple Event |
|  | Parents | [COMPILER](#compiler)<br/>[LINKER](#linker) |
|  | Children | None |
|  | Properties | - The name of the environment variable<br/>- The value of the environment variable. |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[EnvironmentVariable](cpp-event-data-types/environment-variable.md) |
|  | Description | Occurs once for every existing environment variable at the time *cl.exe* or *link.exe* is invoked. |
| <a name="executable-image-output"></a> EXECUTABLE_IMAGE_OUTPUT | Type | Simple Event |
|  | Parents | [LINKER](#linker) |
|  | Children | None |
|  | Properties | - The absolute path to a DLL or executable output file. |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ExecutableImageOutput](cpp-event-data-types/executable-image-output.md) |
|  | Description | Occurs when one of the linker inputs is a DLL or an executable image file. |
| <a name="exp-output"></a> EXP_OUTPUT | Type | Simple Event |
|  | Parents | [LINKER](#linker) |
|  | Children | None |
|  | Properties | - The absolute path to an *.exp* output file. |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ExpOutput](cpp-event-data-types/exp-output.md) |
|  | Description | Occurs when one of the linker outputs is an *.exp* file. |
| <a name="file-input"></a> FILE_INPUT | Type | Simple Event |
|  | Parents | [COMPILER](#compiler)<br/>[LINKER](#linker) |
|  | Children | None |
|  | Properties | - The absolute path to the input file<br/>- The type of input file |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileInput](cpp-event-data-types/file-input.md) |
|  | Description | Occurs to announce a *cl.exe* or *link.exe* input. |
| <a name="force-inlinee"></a> FORCE_INLINEE | Type | Simple Event |
|  | Parents | [FUNCTION](#function) |
|  | Children | None |
|  | Properties | - The name of the force-inlined function.<br/>- The size of the force-inlined function, represented as an intermediate instruction count. |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[ForceInlinee](cpp-event-data-types/force-inlinee.md) |
|  | Description | Occurs when a function is being force-inlined into another function through the use of the **`__forceinline`** keyword. |
| <a name="front-end-file"></a> FRONT_END_FILE | Type | Activity |
|  | Parents | [C1_DLL](#c1-dll)<br/>[FRONT_END_FILE](#front-end-file) |
|  | Children | [FRONT_END_FILE](#front-end-file)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Properties | - Absolute path to the file. |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[FrontEndFile](cpp-event-data-types/front-end-file.md) |
|  | Description | Occurs when the compiler front end starts and stops processing a file. This event is recursive. Recursion happens when the front end is parsing included files. |
| <a name="front-end-pass"></a> FRONT_END_PASS | Type | Activity |
|  | Parents | [COMPILER](#compiler) |
|  | Children | [C1_DLL](#c1-dll)<br/>[MODULE](#module)<br/>[HEADER_UNIT](#header-unit)<br/>[PRECOMPILED_HEADER](#precompiled-header) |
|  | Properties | - Absolute path to input source file<br/>- Absolute path to output object file |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[CompilerPass](cpp-event-data-types/compiler-pass.md)<br/>[FrontEndPass](cpp-event-data-types/front-end-pass.md) |
|  | Description | Occurs at the start and stop of the compiler front-end pass. This pass is responsible for parsing C/C++ source code and converting it into intermediate language. |
| <a name="function"></a> FUNCTION | Type | Activity |
|  | Parents | [CODE_GENERATION](#code-generation)<br/>[THREAD](#thread)<br/>[TOP_DOWN](#top-down) |
|  | Children | [FORCE_INLINEE](#force-inlinee) |
|  | Properties | - Name of the function |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[Function](cpp-event-data-types/function.md) |
|  | Description | Occurs when starting and ending generating the code for a function. |
| <a name="header-unit"></a> HEADER_UNIT | Type | Activity |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[TranslationUnitType](cpp-event-data-types/translation-unit-type.md)<br/>[HeaderUnit](cpp-event-data-types/header-unit.md) |
|  | Description | Occurs at the start of the front-end pass and represents that a header unit translation unit is being processed. |
| <a name="imp-lib-output"></a> IMP_LIB_OUTPUT | Type | Simple Event |
|  | Parents | [LINKER](#linker) |
|  | Children | None |
|  | Properties | - The absolute path to an import library output file. |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ImpLibOutput](cpp-event-data-types/imp-lib-output.md) |
|  | Description | Occurs when one of the linker's outputs is an import library. |
| <a name="lib-output"></a> LIB_OUTPUT | Type | Simple Event |
|  | Parents | [LINKER](#linker) |
|  | Children | None |
|  | Properties | - The absolute path to a static library output file. |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[LibOutput](cpp-event-data-types/lib-output.md) |
|  | Description | Occurs when one of the linker's outputs is static library. |
| <a name="linker"></a> LINKER | Type | Activity |
|  | Parents | None |
|  | Children | [COMMAND_LINE](#command-line)<br/>[ENVIRONMENT_VARIABLE](#environment-variable)<br/>[EXECUTABLE_IMAGE_OUTPUT](#executable-image-output)<br/>[EXP_OUTPUT](#exp-output)<br/>[FILE_INPUT](#file-input)<br/>[IMP_LIB_OUTPUT](#imp-lib-output)<br/>[LIB_OUTPUT](#lib-output)<br/>[PASS1](#pass1)<br/>[PASS2](#pass2) |
|  | Properties | - Linker version<br/>- Working directory<br/>- Absolute path to the invoked *link.exe* |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[Invocation](cpp-event-data-types/invocation.md)<br/>[Linker](cpp-event-data-types/linker.md) |
|  | Description | Occurs at the start and stop of a *link.exe* invocation. |
| <a name="ltcg"></a> LTCG | Type | Activity |
|  | Parents | [PASS1](#pass1) |
|  | Children | [C2_DLL](#c2-dll) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[LTCG](cpp-event-data-types/ltcg.md) |
|  | Description | Occurs at the start and stop of link-time code generation. |
| <a name="module"></a> MODULE | Type | Activity |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[TranslationUnitType](cpp-event-data-types/translation-unit-type.md)<br/>[Module](cpp-event-data-types/module.md) |
|  | Description | Occurs at the start of the front-end pass and represents that a module translation unit is being processed. |
| <a name="obj-output"></a> OBJ_OUTPUT | Type | Simple Event |
|  | Parents | [COMPILER](#compiler) |
|  | Children | None |
|  | Properties | - The absolute path to the *.obj* output file |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[FileOutput](cpp-event-data-types/file-output.md)<br/>[ObjOutput](cpp-event-data-types/obj-output.md) |
|  | Description | Occurs once for every *.obj* output produced by *cl.exe*. |
| <a name="opt-icf"></a> OPT_ICF | Type | Activity |
|  | Parents | [PASS1](#pass1) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[OptICF](cpp-event-data-types/opt-icf.md) |
|  | Description | Occurs at the start and stop of the identical COMDAT folding (/OPT:ICF) linker optimization. |
| <a name="opt-lbr"></a> OPT_LBR | Type | Activity |
|  | Parents | [PASS1](#pass1) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[OptLBR](cpp-event-data-types/opt-lbr.md) |
|  | Description | Occurs at the start and stop of the long branch (/OPT:LBR) linker optimization. |
| <a name="opt-ref"></a> OPT_REF | Type | Activity |
|  | Parents | [PASS1](#pass1) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[OptRef](cpp-event-data-types/opt-ref.md) |
|  | Description | Occurs at the start and stop of the unreferenced functions and data elimination (/OPT:REF) linker optimization. |
| <a name="pass1"></a> PASS1 | Type | Activity |
|  | Parents | [LINKER](#linker) |
|  | Children | [LTCG](#ltcg)<br/>[OPT_ICF](#opt-icf)<br/>[OPT_LBR](#opt-lbr)<br/>[OPT_REF](#opt-ref) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[Pass1](cpp-event-data-types/pass1.md) |
|  | Description | Occurs at the start and stop of the linker's pass 1. |
| <a name="pass2"></a> PASS2 | Type | Activity |
|  | Parents | [LINKER](#linker) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[Pass2](cpp-event-data-types/pass2.md) |
|  | Description | Occurs at the start and stop of the linker's pass 2. |
| <a name="precompiled-header"></a> PRECOMPILED_HEADER | Type | Activity |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[TranslationUnitType](cpp-event-data-types/translation-unit-type.md)<br/>[PrecompiledHeader](cpp-event-data-types/precompiled-header.md) |
|  | Description | Occurs at the start of the front-end pass and represents that a precompiled header (PCH) translation unit is being processed. |
| <a name="pre-ltcg-opt-ref"></a> PRE_LTCG_OPT_REF | Type | Activity |
|  | Parents | [PASS1](#pass1) |
|  | Children | None |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[PreLTCGOptRef](cpp-event-data-types/pre-ltcg-opt-ref.md) |
|  | Description | Occurs at the start and stop of the linker optimization pass that eliminates unreferenced functions and data (/OPT:REF). It's done before link-time code generation. |
| <a name="symbol-name"></a> SYMBOL_NAME | Type | Simple Event |
|  | Parents | [C1_DLL](#c1-dll) |
|  | Children | None |
|  | Properties | - A type key<br/> - The type's name |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[SymbolName](cpp-event-data-types/symbol-name.md) |
|  | Description | Occurs at the end of the front-end pass: once for every type involved in template instantiations. The key is a numerical identifier for the type, while the name is its text representation. Type keys are unique within the trace being analyzed. However, different keys coming from different compiler front-end passes may point to the same type. Comparing types between different compiler front-end passes requires using their names. SYMBOL_NAME events are emitted at the end of a compiler front-end pass, after all template instantiations have taken place. |
| <a name="template-instantiation"></a> TEMPLATE_INSTANTIATION | Type | Activity |
|  | Parents | [C1_DLL](#c1-dll)<br/>[FRONT_END_FILE](#front-end-file)<br/>[TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Children | [TEMPLATE_INSTANTIATION](#template-instantiation) |
|  | Properties | - The key for the specialized type<br/>- The key for the primary template's type<br/>- The kind of template that was instantiated |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[TemplateInstantiation](cpp-event-data-types/template-instantiation.md) |
|  | Description | Occurs at the beginning and end of a template instantiation. A primary template type (such as `vector`) is instantiated, resulting in a specialized type (such as `std::vector<int>`). A key is given for both types. Use the [SYMBOL_NAME](#symbol-name) event to convert a key into the type's name. Type keys are unique within the trace being analyzed. However, different keys coming from different compiler front-end passes may point to the same type. Comparing types between different compiler front-end passes requires using symbol names. This event is recursive. Recursion happens in some cases when the front end is instantiating nested templates. |
| <a name="thread"></a> THREAD | Type | Activity |
|  | Parents | [CODE_GENERATION](#code-generation)<br/>[TOP_DOWN](#top-down) |
|  | Children | [FUNCTION](#function) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[Thread](cpp-event-data-types/thread.md) |
|  | Description | Occurs at the start and end of a compiler back-end thread execution. A thread being suspended is considered ended. A thread being woken up is considered started. |
| <a name="top-down"></a> TOP_DOWN | Type | Activity |
|  | Parents | [WHOLE_PROGRAM_ANALYSIS](#whole-program-analysis) |
|  | Children | [FUNCTION](#function)<br/>[THREAD](#thread) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[TopDown](cpp-event-data-types/top-down.md) |
|  | Description | Occurs at the start and stop of the whole program analysis' top-down pass. |
| <a name="translation-unit-type"></a> TRANSLATION_UNIT_TYPE | Type | Activity |
|  | Parents | [FRONT_END_PASS](#front-end-pass) |
|  | Children | [MODULE](#module)<br/>[HEADER_UNIT](#header-unit)<br/>[PRECOMPILED_HEADER](#precompiled-header) |
|  | Properties | - The type of translation unit. |
|  | Capture classes | [SimpleEvent](cpp-event-data-types/simple-event.md)<br/>[TranslationUnitType](cpp-event-data-types/translation-unit-type.md) |
|  | Description | Occurs at the start of the front-end pass. The type identifies whether this pass is processing a module, header unit, or precompiled header. |
| <a name="whole-program-analysis"></a> WHOLE_PROGRAM_ANALYSIS | Type | Activity |
|  | Parents | [C2_DLL](#c2-dll) |
|  | Children | [BOTTOM_UP](#bottom-up)<br/>[TOP_DOWN](#top-down) |
|  | Properties | None |
|  | Capture classes | [Activity](cpp-event-data-types/activity.md)<br/>[WholeProgramAnalysis](cpp-event-data-types/whole-program-analysis.md) |
|  | Description | Occurs at the start and stop of the whole-program analysis phase of link-time code generation. |

::: moniker-end
