---
title: "Compiler options listed alphabetically"
description: "Reference listing in alphabetical order of the Microsoft C/C++ compiler command-line options."
ms.date: 2/5/2025
helpviewer_keywords: ["compiler options, C++"]
---
# Compiler options listed alphabetically

This table contains an alphabetical list of compiler options. For a list of compiler options by category, see the [Compiler options listed by category](compiler-options-listed-by-category.md) article.

## Compiler options

| Option | Purpose |
|--|--|
| [`@`](at-specify-a-compiler-response-file.md) | Specifies a response file. |
| [`/?`](help-compiler-command-line-help.md) | Lists the compiler options. |
| [`/AI<dir>`](ai-specify-metadata-directories.md) | Specifies a directory to search to resolve file references passed to the [`#using`](../../preprocessor/hash-using-directive-cpp.md) directive. |
| [`/analyze`](analyze-code-analysis.md) | Enables code analysis. |
| [`/arch`](arch-minimum-cpu-architecture.md) | Minimum CPU architecture requirements. |
| `/arm64EC` | Generate code compatible with the arm64EC ABI. |
| [`/await`](await-enable-coroutine-support.md) | Enable coroutines (resumable functions) extensions. |
| [`/await:strict`](await-enable-coroutine-support.md) | Enable standard C++20 coroutine support with earlier language versions. |
| [`/bigobj`](bigobj-increase-number-of-sections-in-dot-obj-file.md) | Increases the number of addressable sections in an .obj file. |
| [`/C`](c-preserve-comments-during-preprocessing.md) | Preserves comments during preprocessing. |
| [`/c`](c-compile-without-linking.md) | Compiles without linking. |
| [`/cgthreads`](cgthreads-code-generation-threads.md) | Specifies number of *cl.exe* threads to use for optimization and code generation. |
| [`/clr`](clr-common-language-runtime-compilation.md) | Produces an output file to run on the common language runtime. |
| [`/clr:implicitKeepAlive-`](clr-common-language-runtime-compilation.md) | Turn off implicit emission of `System::GC::KeepAlive(this)`. |
| [`/clr:initialAppDomain`](clr-common-language-runtime-compilation.md) | Enable initial AppDomain behavior of Visual C++ 2002. |
| [`/clr:netcore`](clr-common-language-runtime-compilation.md) | Produce assemblies targeting .NET Core runtime. |
| [`/clr:noAssembly`](clr-common-language-runtime-compilation.md) | Don't produce an assembly. |
| [`/clr:nostdimport`](clr-common-language-runtime-compilation.md) | Don't import any required assemblies implicitly. |
| [`/clr:nostdlib`](clr-common-language-runtime-compilation.md) | Ignore the system .NET framework directory when searching for assemblies. |
| [`/clr:pure`](clr-common-language-runtime-compilation.md) | Produce an IL-only output file (no native executable code). |
| [`/clr:safe`](clr-common-language-runtime-compilation.md) | Produce an IL-only verifiable output file. |
| [`/constexpr:backtrace<N>`](constexpr-control-constexpr-evaluation.md) | Show N `constexpr` evaluations in diagnostics (default: 10). |
| [`/constexpr:depth<N>`](constexpr-control-constexpr-evaluation.md) | Recursion depth limit for `constexpr` evaluation (default: 512). |
| [`/constexpr:steps<N>`](constexpr-control-constexpr-evaluation.md) | Terminate `constexpr` evaluation after N steps (default: 100000). |
| [`/D<name>{=|#}<text>`](d-preprocessor-definitions.md) | Defines constants and macros. |
| [`/dynamicdeopt`](dynamic-deopt.md) | Enable [C++ Dynamic Debugging (Preview)](/visualstudio/debugger/cpp-dynamic-debugging) and step in anywhere with on-demand function deoptimization. |
| [`/diagnostics`](diagnostics-compiler-diagnostic-options.md) | Diagnostics format: prints column information. |
| [`/diagnostics:caret[-]`](diagnostics-compiler-diagnostic-options.md) | Diagnostics format: prints column and the indicated line of source. |
| [`/diagnostics:classic`](diagnostics-compiler-diagnostic-options.md) | Use legacy diagnostics format. |
| [`/doc`](doc-process-documentation-comments-c-cpp.md) | Processes documentation comments to an XML file. |
| [`/E`](e-preprocess-to-stdout.md) | Copies preprocessor output to standard output. |
| [`/EHa`](eh-exception-handling-model.md) | Enable C++ exception handling (with SEH exceptions). |
| [`/EHc`](eh-exception-handling-model.md) | `extern "C"` defaults to `nothrow`. |
| [`/EHr`](eh-exception-handling-model.md) | Always generate `noexcept` runtime termination checks. |
| [`/EHs`](eh-exception-handling-model.md) | Enable C++ exception handling (no SEH exceptions). |
| [`/EP`](ep-preprocess-to-stdout-without-hash-line-directives.md) | Copies preprocessor output to standard output. |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecated. [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings control error reporting. |
| [`/execution-charset`](execution-charset-set-execution-character-set.md) | Set execution character set. |
| [`/experimental:log`](experimental-log.md) | Enables experimental structured SARIF output. |
| [`/experimental:module`](experimental-module.md) | Enables experimental module support. |
| [`/exportHeader`](module-exportheader.md) | Create the header units files (*`.ifc`*) specified by the input arguments. |
| [`/external:anglebrackets`](external-external-headers-diagnostics.md) | Treat all headers included via `<>` as external. |
| [`/external:env:<var>`](external-external-headers-diagnostics.md) | Specify an environment variable with locations of external headers. |
| [`/external:I <path>`](external-external-headers-diagnostics.md) | Specify location of external headers. |
| [`/external:templates[-]`](external-external-headers-diagnostics.md) | Evaluate warning level across template instantiation chain. |
| [`/external:W<n>`](external-external-headers-diagnostics.md) | Set warning level for external headers. |
| [`/F`](f-set-stack-size.md) | Sets stack size. |
| [`/FA`](fa-fa-listing-file.md) | Configures an assembly listing file. |
| [`/Fa`](fa-fa-listing-file.md) | Creates an assembly listing file. |
| `/fastfail` | Enable fast-fail mode. |
| [`/favor:<blend|AMD64|INTEL64|ATOM>`](favor-optimize-for-architecture-specifics.md) | Produces code that is optimized for a specified architecture, or for a range of architectures. |
| [`/FC`](fc-full-path-of-source-code-file-in-diagnostics.md) | Displays the full path of source code files passed to *cl.exe* in diagnostic text. |
| [`/Fd`](fd-program-database-file-name.md) | Renames program database file. |
| [`/Fe`](fe-name-exe-file.md) | Renames the executable file. |
| [`/feature`](feature-arm64.md) | Enable architecture features.<sup>17.10</sup> |
| [`/forceInterlockedFunctions`](force-interlocked-functions.md) | Dynamically selects between Armv8.0 load, store exclusive instructions or Armv8.1 LSE atomic instructions based on target CPU.<sup>17.14</sup> |
| [`/FI<file>`](fi-name-forced-include-file.md) | Preprocesses the specified include file. |
| [`/Fi`](fi-preprocess-output-file-name.md) | Specifies the preprocessed output file name. |
| [`/Fm`](fm-name-mapfile.md) | Creates a mapfile. |
| [`/Fo`](fo-object-file-name.md) | Creates an object file. |
| [`/Fp`](fp-name-dot-pch-file.md) | Specifies a precompiled header file name. |
| [`/fp:contract`](fp-specify-floating-point-behavior.md) | Consider floating-point contractions when generating code. |
| [`/fp:except[-]`](fp-specify-floating-point-behavior.md) | Consider floating-point exceptions when generating code. |
| [`/fp:fast`](fp-specify-floating-point-behavior.md) | "fast" floating-point model; results are less predictable. |
| [`/fp:precise`](fp-specify-floating-point-behavior.md) | "precise" floating-point model; results are predictable. |
| [`/fp:strict`](fp-specify-floating-point-behavior.md) | "strict" floating-point model (implies `/fp:except`). |
| [`/fpcvt:BC`](fpcvt.md) | Backward-compatible floating-point to unsigned integer conversions. |
| [`/fpcvt:IA`](fpcvt.md) | Intel native floating-point to unsigned integer conversion behavior. |
| [`/FR`, `/Fr`](fr-fr-create-dot-sbr-file.md) | Name generated *`.sbr`* browser files. **`/Fr`** is deprecated. |
| [`/FS`](fs-force-synchronous-pdb-writes.md) | Forces writes to the PDB file to be serialized through *MSPDBSRV.EXE*. |
| [`/fsanitize`](fsanitize.md) | Enables compilation of sanitizer instrumentation such as AddressSanitizer. |
| [`/fsanitize-coverage`](fsanitize-coverage.md) | Enables compilation of code coverage instrumentation for libraries such as LibFuzzer. |
| `/Ft<dir>` | Location of the header files generated for `#import`. |
| [`/FU<file>`](fu-name-forced-hash-using-file.md) | Forces the use of a file name, as if it were passed to the [`#using`](../../preprocessor/hash-using-directive-cpp.md) directive. |
| [`/Fx`](fx-merge-injected-code.md) | Merges injected code with the source file. |
| [`/GA`](ga-optimize-for-windows-application.md) | Optimizes for Windows applications. |
| [`/Gd`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__cdecl`** calling convention. (x86 only) |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecated. Activates stack probes. |
| [`/GF`](gf-eliminate-duplicate-strings.md) | Enables string pooling. |
| [`/GH`](gh-enable-pexit-hook-function.md) | Calls hook function `_pexit`. |
| [`/Gh`](gh-enable-penter-hook-function.md) | Calls hook function `_penter`. |
| [`/GL[-]`](gl-whole-program-optimization.md) | Enables whole program optimization. |
| [`/Gm[-]`](gm-enable-minimal-rebuild.md) | Deprecated. Enables minimal rebuild. |
| [`/GR[-]`](gr-enable-run-time-type-information.md) | Enables run-time type information (RTTI). |
| [`/Gr`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__fastcall`** calling convention. (x86 only) |
| [`/GS[-]`](gs-buffer-security-check.md) | Checks buffer security. |
| [`/Gs[n]`](gs-control-stack-checking-calls.md) | Controls stack probes. |
| [`/GT`](gt-support-fiber-safe-thread-local-storage.md) | Supports fiber safety for data allocated by using static thread-local storage. |
| `/Gu[-]` | Ensure distinct functions have distinct addresses. |
| [`/guard:cf[-]`](guard-enable-control-flow-guard.md) | Adds control flow guard security checks. |
| [`/guard:ehcont[-]`](guard-enable-eh-continuation-metadata.md) | Enables EH continuation metadata. |
| [`/Gv`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__vectorcall`** calling convention. (x86 and x64 only) |
| [`/Gw[-]`](gw-optimize-global-data.md) | Enables whole-program global data optimization. |
| [`/GX[-]`](gx-enable-exception-handling.md) | Deprecated. Enables synchronous exception handling. Use [`/EH`](eh-exception-handling-model.md) instead. |
| [`/Gy[-]`](gy-enable-function-level-linking.md) | Enables function-level linking. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecated. Enables fast checks. (Same as [`/RTC1`](rtc-run-time-error-checks.md)) |
| [`/Gz`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__stdcall`** calling convention. (x86 only) |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecated. Restricts the length of external (public) names. |
| [`/headerName`](headername.md) | Build a header unit from the specified header. |
| [`/headerUnit`](headerunit.md) | Specify where to find the header unit file (`.ifc`) for the specified header. |
| [`/HELP`](help-compiler-command-line-help.md) | Lists the compiler options. |
| [`/homeparams`](homeparams-copy-register-parameters-to-stack.md) | Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the x64 compilers (native and cross compile). |
| [`/hotpatch`](hotpatch-create-hotpatchable-image.md) | Creates a hotpatchable image. |
| [`/I<dir>`](i-additional-include-directories.md) | Searches a directory for include files. |
| [`/ifcOutput`](ifc-output.md) | Specify output file name or directory for built *`.ifc`* files. |
| [`/interface`](interface.md) | Treat the input file as a module interface unit. |
| [`/internalPartition`](internal-partition.md) | Treat the input file as an internal partition unit. |
| [`/J`](j-default-char-type-is-unsigned.md) | Changes the default **`char`** type. |
| [`/jumptablerdata`](jump-table-rdata.md) | Put switch case statement jump tables in the `.rdata` section. |
| [`/JMC`](jmc.md) | Supports native C++ Just My Code debugging. |
| [`/kernel`](kernel-create-kernel-mode-binary.md) | The compiler and linker create a binary that can be executed in the Windows kernel. |
| [`/LD`](md-mt-ld-use-run-time-library.md) | Creates a dynamic-link library. |
| [`/LDd`](md-mt-ld-use-run-time-library.md) | Creates a debug dynamic-link library. |
| [`/link`](link-pass-options-to-linker.md) | Passes the specified option to LINK. |
| [`/LN`](ln-create-msil-module.md) | Creates an MSIL `.netmodule`. |
| [`/MD`](md-mt-ld-use-run-time-library.md) | Compiles to create a multithreaded DLL, by using *MSVCRT.lib*. |
| [`/MDd`](md-mt-ld-use-run-time-library.md) | Compiles to create a debug multithreaded DLL, by using *MSVCRTD.lib*. |
| [`/MP`](mp-build-with-multiple-processes.md) | Builds multiple source files concurrently. |
| [`/MT`](md-mt-ld-use-run-time-library.md) | Compiles to create a multithreaded executable file, by using *LIBCMT.lib*. |
| [`/MTd`](md-mt-ld-use-run-time-library.md) | Compiles to create a debug multithreaded executable file, by using *LIBCMTD.lib*. |
| [`/nologo`](nologo-suppress-startup-banner-c-cpp.md) | Suppresses display of sign-on banner. |
| [`/O1`](o1-o2-minimize-size-maximize-speed.md) | Creates small code. |
| [`/O2`](o1-o2-minimize-size-maximize-speed.md) | Creates fast code. |
| [`/Ob<n>`](ob-inline-function-expansion.md) | Controls inline expansion. |
| [`/Od`](od-disable-debug.md) | Disables optimization. |
| [`/Og`](og-global-optimizations.md) | Deprecated. Uses global optimizations. |
| [`/Oi[-]`](oi-generate-intrinsic-functions.md) | Generates intrinsic functions. |
| [`/openmp`](openmp-enable-openmp-2-0-support.md) | Enables [`#pragma omp`](../../preprocessor/omp.md) in source code. |
| [`/openmp:experimental`](openmp-enable-openmp-2-0-support.md) | Enable OpenMP 2.0 language extensions plus select OpenMP 3.0+ language extensions. |
| [`/openmp:llvm`](openmp-enable-openmp-2-0-support.md) | OpenMP language extensions using LLVM runtime. |
| [`/options:strict`](options-strict.md) | Unrecognized compiler options are errors. |
| [`/Os`](os-ot-favor-small-code-favor-fast-code.md) | Favors small code. |
| [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) | Favors fast code. |
| [`/Ox`](ox-full-optimization.md) | A subset of /O2 that doesn't include /GF or /Gy. |
| [`/Oy`](oy-frame-pointer-omission.md) | Omits frame pointer. (x86 only) |
| [`/P`](p-preprocess-to-a-file.md) | Writes preprocessor output to a file. |
| `/PD` | Print all macro definitions. |
| [`/permissive[-]`](permissive-standards-conformance.md) | Set standard-conformance mode. |
| `/PH` | Generate `#pragma file_hash` when preprocessing. |
| `/presetPadding` | Zero initialize padding for stack based class types. |
| [`/Qfast_transcendentals`](qfast-transcendentals-force-fast-transcendentals.md) | Generates fast transcendentals. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecated. Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required. (x86 only) |
| [`/Qimprecise_fwaits`](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md) | Removes `fwait` commands inside **`try`** blocks. |
| [`/QIntel-jcc-erratum`](qintel-jcc-erratum.md) | Mitigates the performance impact of the Intel JCC erratum microcode update. |
| [`/Qpar-report:<n>`](qpar-report-auto-parallelizer-reporting-level.md) | Enables reporting levels for automatic parallelization. |
| [`/Qpar`](qpar-auto-parallelizer.md) | Enables automatic parallelization of loops. |
| [`/Qsafe_fp_loads`](qsafe-fp-loads.md) | Uses integer move instructions for floating-point values and disables certain floating point load optimizations. |
| [`/Qspectre[-]`](qspectre.md) | Enable mitigations for CVE 2017-5753, for a class of Spectre attacks. |
| [`/Qspectre-load`](qspectre-load.md) | Generate serializing instructions for every load instruction. |
| [`/Qspectre-load-cf`](qspectre-load-cf.md) | Generate serializing instructions for every control flow instruction that loads memory. |
| [`/Qvec-report:<n>`](qvec-report-auto-vectorizer-reporting-level.md) | Enables reporting levels for automatic vectorization. |
| [`/reference`](module-reference.md) | Use named module IFC. |
| [`/RTC1`](rtc-run-time-error-checks.md) | Enable fast runtime checks (equivalent to `/RTCsu`). |
| [`/RTCc`](rtc-run-time-error-checks.md) | Convert to smaller type checks at run-time. |
| [`/RTCs`](rtc-run-time-error-checks.md) | Enable stack frame runtime checks. |
| [`/RTCu`](rtc-run-time-error-checks.md) | Enables uninitialized local usage checks. |
| [`/scanDependencies`](scandependencies.md) | List module dependencies in C++ Standard JSON form. |
| [`/sdl`](sdl-enable-additional-security-checks.md) | Enable more security features and warnings. |
| [`/showIncludes`](showincludes-list-include-files.md) | Displays a list of all include files during compilation. |
| [`/source-charset`](source-charset-set-source-character-set.md) | Set source character set. |
| [`/sourceDependencies`](sourcedependencies.md) | List all source-level dependencies. |
| [`/sourceDependencies:directives`](sourcedependencies-directives.md) | List module and header unit dependencies. |
| [`/std:c++14`](std-specify-language-standard-version.md) | C++14 standard ISO/IEC 14882:2014 (default). |
| [`/std:c++17`](std-specify-language-standard-version.md) | C++17 standard ISO/IEC 14882:2017. |
| [`/std:c++20`](std-specify-language-standard-version.md) | C++20 standard ISO/IEC 14882:2020. |
| [`/std:c++latest`](std-specify-language-standard-version.md) | The latest draft C++ standard preview features. |
| [`/std:c11`](std-specify-language-standard-version.md) | C11 standard ISO/IEC 9899:2011. |
| [`/std:c17`](std-specify-language-standard-version.md) | C17 standard ISO/IEC 9899:2018. |
| [`/std:clatest`](std-specify-language-standard-version.md) | The latest draft C standard preview features. |
| [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies all source files are C. |
| [`/Tc`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies a C source file. |
| [`/TP`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies all source files are C++. |
| [`/Tp`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies a C++ source file. |
| [`/translateInclude`](translateinclude.md) | Treat `#include` as `import`. |
| [`/U<name>`](u-u-undefine-symbols.md) | Removes a predefined macro. |
| [`/u`](u-u-undefine-symbols.md) | Removes all predefined macros. |
| [`/utf-8`](utf-8-set-source-and-executable-character-sets-to-utf-8.md) | Set source and execution character sets to UTF-8. |
| [`/V`](v-version-number.md) | Deprecated. Sets the version string. |
| [`/validate-charset`](validate-charset-validate-for-compatible-characters.md) | Validate UTF-8 files for only compatible characters. |
| [`/vd{0|1|2}`](vd-disable-construction-displacements.md) | Suppresses or enables hidden `vtordisp` class members. |
| [`/vlen`](vlen.md) | Specifies vector length. |
| [`/vmb`](vmb-vmg-representation-method.md) | Uses best base for pointers to members. |
| [`/vmg`](vmb-vmg-representation-method.md) | Uses full generality for pointers to members. |
| [`/vmm`](vmm-vms-vmv-general-purpose-representation.md) | Declares multiple inheritance. |
| [`/vms`](vmm-vms-vmv-general-purpose-representation.md) | Declares single inheritance. |
| [`/vmv`](vmm-vms-vmv-general-purpose-representation.md) | Declares virtual inheritance. |
| [`/volatile:iso`](volatile-volatile-keyword-interpretation.md) | Acquire/release semantics not guaranteed on volatile accesses. |
| [`/volatile:ms`](volatile-volatile-keyword-interpretation.md) | Acquire/release semantics guaranteed on volatile accesses. |
| [`/volatileMetadata`](volatile.md) | Generate metadata on volatile memory accesses. |
| [`/w`](compiler-option-warning-level.md) | Disable all warnings. |
| [`/W0`, `/W1`, `/W2`, `/W3`, `/W4`](compiler-option-warning-level.md) | Set output warning level. |
| [`/w1<n>`, `/w2<n>`, `/w3<n>`, `/w4<n>`](compiler-option-warning-level.md) | Set warning level for the specified warning. |
| [`/Wall`](compiler-option-warning-level.md) | Enable all warnings, including warnings that are disabled by default. |
| [`/wd<n>`](compiler-option-warning-level.md) | Disable the specified warning. |
| [`/we<n>`](compiler-option-warning-level.md) | Treat the specified warning as an error. |
| [`/WL`](wl-enable-one-line-diagnostics.md) | Enable one-line diagnostics for error and warning messages when compiling C++ source code from the command line. |
| [`/wo<n>`](compiler-option-warning-level.md) | Display the specified warning only once. |
| [`/Wv:xx[.yy[.zzzzz]]`](compiler-option-warning-level.md) | Disable warnings introduced after the specified version of the compiler. |
| [`/WX`](compiler-option-warning-level.md) | Treat warnings as errors. |
| [`/X`](x-ignore-standard-include-paths.md) | Ignores the standard include directory. |
| [`/Y-`](y-ignore-precompiled-header-options.md) | Ignores all other precompiled-header compiler options in the current build. |
| [`/Yc`](yc-create-precompiled-header-file.md) | Create *`.PCH`* file. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecated. Places complete debugging information in all object files. Use [`/Zi`](z7-zi-zi-debug-information-format.md) instead. |
| [`/Yl`](yl-inject-pch-reference-for-debug-library.md) | Injects a PCH reference when creating a debug library. |
| [`/Yu`](yu-use-precompiled-header-file.md) | Uses a precompiled header file during build. |
| [`/Z7`](z7-zi-zi-debug-information-format.md) | Generates C 7.0-compatible debugging information. |
| [`/Za`](za-ze-disable-language-extensions.md) | Disables some C89 language extensions in C code. |
| [`/Zc:__cplusplus[-]`](zc-cplusplus.md) | Enable the `__cplusplus` macro to report the supported standard (off by default). |
| [`/Zc:__STDC__`](zc-stdc.md) | Enable the `__STDC__` macro to report the C standard is supported (off by default). |
| [`/Zc:alignedNew[-]`](zc-alignednew.md) | Enable C++17 over-aligned dynamic allocation (on by default in C++17). |
| [`/Zc:auto[-]`](zc-auto-deduce-variable-type.md) | Enforce the new Standard C++ meaning for **`auto`** (on by default). |
| [`/Zc:char8_t[-]`](zc-char8-t.md) | Enable or disable C++20 native `u8` literal support as `const char8_t` (off by default, except under **`/std:c++20`**). |
| [`/Zc:enumTypes[-]`](zc-enumtypes.md) | Enable Standard C++ rules for `enum` type deduction (off by default). |
| [`/Zc:externC[-]`](zc-externc.md) | Enforce Standard C++ rules for `extern "C"` functions (implied by **`/permissive-`**). |
| [`/Zc:externConstexpr[-]`](zc-externconstexpr.md) | Enable external linkage for **`constexpr`** variables (off by default). |
| [`/Zc:forScope[-]`](zc-forscope-force-conformance-in-for-loop-scope.md) | Enforce Standard C++ **`for`** scoping rules (on by default). |
| [`/Zc:gotoScope`](zc-gotoscope.md) | Enforce Standard C++ **`goto`** rules around local variable initialization (implied by **`/permissive-`**). |
| [`/Zc:hiddenFriend[-]`](zc-hiddenfriend.md) | Enforce Standard C++ hidden friend rules (implied by **`/permissive-`**). |
| [`/Zc:implicitNoexcept[-]`](zc-implicitnoexcept-implicit-exception-specifiers.md) | Enable implicit **`noexcept`** on required functions (on by default). |
| [`/Zc:inline[-]`](zc-inline-remove-unreferenced-comdat.md) | Remove unreferenced functions or data if they're COMDAT or have internal linkage only (off by default). |
| [`/Zc:lambda[-]`](zc-lambda.md) | Enable new lambda processor for conformance-mode syntactic checks in generic lambdas. |
| [`/Zc:noexceptTypes[-]`](zc-noexcepttypes.md) | Enforce C++17 **`noexcept`** rules (on by default in C++17 or later). |
| [`/Zc:nrvo[-]`](zc-nrvo.md) | Enable optional copy and move elisions (on by default under **`/O2`**, **`/permissive-`**, or **`/std:c++20`** or later). |
| [`/Zc:preprocessor[-]`](zc-preprocessor.md) | Use the new conforming preprocessor (off by default, except in C11/C17). |
| [`/Zc:referenceBinding[-]`](zc-referencebinding-enforce-reference-binding-rules.md) | A UDT temporary won't bind to a non-const lvalue reference (off by default). |
| [`/Zc:rvalueCast[-]`](zc-rvaluecast-enforce-type-conversion-rules.md) | Enforce Standard C++ explicit type conversion rules (off by default). |
| [`/Zc:sizedDealloc[-]`](zc-sizeddealloc-enable-global-sized-dealloc-functions.md) | Enable C++14 global sized deallocation functions (on by default). |
| [`/Zc:strictStrings[-]`](zc-strictstrings-disable-string-literal-type-conversion.md) | Disable string-literal to `char*` or `wchar_t*` conversion (off by default). |
| [`/Zc:templateScope[-]`](zc-templatescope.md) | Enforce Standard C++ template parameter shadowing rules (off by default). |
| [`/Zc:ternary[-]`](zc-ternary.md) | Enforce conditional operator rules on operand types (off by default). |
| [`/Zc:threadSafeInit[-]`](zc-threadsafeinit-thread-safe-local-static-initialization.md) | Enable thread-safe local static initialization (on by default). |
| [`/Zc:throwingNew[-]`](zc-throwingnew-assume-operator-new-throws.md) | Assume **`operator new`** throws on failure (off by default). |
| [`/Zc:tlsGuards[-]`](zc-tlsguards.md) | Generate runtime checks for TLS variable initialization (on by default). |
| [`/Zc:trigraphs`](zc-trigraphs-trigraphs-substitution.md) | Enable trigraphs (obsolete, off by default). |
| [`/Zc:twoPhase[-]`](zc-twophase.md) | Use nonconforming template parsing behavior (conforming by default). |
| [`/Zc:wchar_t[-]`](zc-wchar-t-wchar-t-is-native-type.md) | **`wchar_t`** is a native type, not a typedef (on by default). |
| [`/Zc:zeroSizeArrayNew[-]`](zc-zerosizearraynew.md) | Call member `new`/`delete` for zero-size arrays of objects (on by default). |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecated. Enables C89 language extensions. |
| [`/Zf`](zf.md) | Improves PDB generation time in parallel builds. |
| [`/ZH:[MD5|SHA1|SHA_256]`](zh.md) | Specifies MD5, SHA-1, or SHA-256 for checksums in debug info. |
| [`/ZI`](z7-zi-zi-debug-information-format.md) | Includes debug information in a program database compatible with Edit and Continue. (x86 only) |
| [`/Zi`](z7-zi-zi-debug-information-format.md) | Generates complete debugging information. |
| [`/Zl`](zl-omit-default-library-name.md) | Removes the default library name from the *`.obj`* file. |
| [`/Zm`](zm-specify-precompiled-header-memory-allocation-limit.md) | Specifies the precompiled header memory allocation limit. |
| [`/Zo[-]`](zo-enhance-optimized-debugging.md) | Generate richer debugging information for optimized code. |
| [`/Zp[n]`](zp-struct-member-alignment.md) | Packs structure members. |
| [`/Zs`](zs-syntax-check-only.md) | Checks syntax only. |
| [`/ZW`](zw-windows-runtime-compilation.md) | Produces an output file to run on the Windows Runtime. |

<sup>17.10</sup> This option is available starting in Visual Studio 2022 version 17.10.\
<sup>17.14</sup> This option is available starting in Visual Studio 2022 version 17.14.

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
