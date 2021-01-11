---
title: "Compiler Options Listed by Category"
description: "Reference listing by category of the Microsoft C/C++ compiler command-line options."
ms.date: 07/29/2020
helpviewer_keywords: ["compiler options, C++"]
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
---
# Compiler options listed by category

This article contains a categorical list of compiler options. For an alphabetical list, see [Compiler options listed alphabetically](compiler-options-listed-alphabetically.md).

## Optimization

| Option | Purpose |
|--|--|
| [`/O1`](o1-o2-minimize-size-maximize-speed.md) | Creates small code. |
| [`/O2`](o1-o2-minimize-size-maximize-speed.md) | Creates fast code. |
| [`/Ob`](ob-inline-function-expansion.md) | Controls inline expansion. |
| [`/Od`](od-disable-debug.md) | Disables optimization. |
| [`/Og`](og-global-optimizations.md) | Deprecated. Uses global optimizations. |
| [`/Oi`](oi-generate-intrinsic-functions.md) | Generates intrinsic functions. |
| [`/Os`](os-ot-favor-small-code-favor-fast-code.md) | Favors small code. |
| [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) | Favors fast code. |
| [`/Ox`](ox-full-optimization.md) | A subset of /O2 that doesn't include /GF or /Gy. |
| [`/Oy`](oy-frame-pointer-omission.md) | Omits frame pointer. (x86 only) |
| [`/favor`](favor-optimize-for-architecture-specifics.md) | Produces code that is optimized for a specified architecture, or for a range of architectures. |

## Code generation

| Option | Purpose |
|--|--|
| [`/arch`](arch-x86.md) | Use SSE or SSE2 instructions in code generation. (x86 only) |
| [`/clr`](clr-common-language-runtime-compilation.md) | Produces an output file to run on the common language runtime. |
| [`/EH`](eh-exception-handling-model.md) | Specifies the model of exception handling. |
| [`/fp`](fp-specify-floating-point-behavior.md) | Specifies floating-point behavior. |
| [`/GA`](ga-optimize-for-windows-application.md) | Optimizes for Windows applications. |
| [`/Gd`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__cdecl`** calling convention. (x86 only) |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecated. Activates stack probes. |
| [`/GF`](gf-eliminate-duplicate-strings.md) | Enables string pooling. |
| [`/Gh`](gh-enable-penter-hook-function.md) | Calls hook function `_penter`. |
| [`/GH`](gh-enable-pexit-hook-function.md) | Calls hook function `_pexit`. |
| [`/GL`](gl-whole-program-optimization.md) | Enables whole program optimization. |
| [`/Gm`](gm-enable-minimal-rebuild.md) | Deprecated. Enables minimal rebuild. |
| [`/GR`](gr-enable-run-time-type-information.md) | Enables run-time type information (RTTI). |
| [`/Gr`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__fastcall`** calling convention. (x86 only) |
| [`/GS`](gs-buffer-security-check.md) | Checks buffer security. |
| [`/Gs`](gs-control-stack-checking-calls.md) | Controls stack probes. |
| [`/GT`](gt-support-fiber-safe-thread-local-storage.md) | Supports fiber safety for data allocated by using static thread-local storage. |
| [`/guard:cf`](guard-enable-control-flow-guard.md) | Adds control flow guard security checks. |
| [`/guard:ehcont`](guard-enable-eh-continuation-metadata.md) | Enables EH continuation metadata. |
| [`/Gv`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__vectorcall`** calling convention. (x86 and x64 only) |
| [`/Gw`](gw-optimize-global-data.md) | Enables whole-program global data optimization. |
| [`/GX`](gx-enable-exception-handling.md) | Deprecated. Enables synchronous exception handling. Use [`/EH`](eh-exception-handling-model.md) instead. |
| [`/Gy`](gy-enable-function-level-linking.md) | Enables function-level linking. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecated. Enables fast checks. (Same as [`/RTC1`](rtc-run-time-error-checks.md)) |
| [`/Gz`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__stdcall`** calling convention. (x86 only) |
| [`/homeparams`](homeparams-copy-register-parameters-to-stack.md) | Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the x64 compilers (native and cross compile). |
| [`/hotpatch`](hotpatch-create-hotpatchable-image.md) | Creates a hotpatchable image. |
| [`/Qfast_transcendentals`](qfast-transcendentals-force-fast-transcendentals.md) | Generates fast transcendentals. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecated. Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required. (x86 only) |
| [`/Qimprecise_fwaits`](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md) | Removes `fwait` commands inside **`try`** blocks. |
| [`/QIntel-jcc-erratum`](qintel-jcc-erratum.md) | Mitigates the performance impact of the Intel JCC erratum microcode update. |
| [`/Qpar`](qpar-auto-parallelizer.md) | Enables automatic parallelization of loops. |
| [`/Qpar-report`](qpar-report-auto-parallelizer-reporting-level.md) | Enables reporting levels for automatic parallelization. |
| [`/Qsafe_fp_loads`](qsafe-fp-loads.md) | Uses integer move instructions for floating-point values and disables certain floating point load optimizations. |
| [`/Qspectre`](qspectre.md) | Enable mitigations for CVE 2017-5753, for a class of Spectre attacks. |
| [`/Qspectre-load`](qspectre-load.md) | Generate serializing instructions for every load instruction. |
| [`/Qspectre-load-cf`](qspectre-load-cf.md) | Generate serializing instructions for every control flow instruction that loads memory. |
| [`/Qvec-report`](qvec-report-auto-vectorizer-reporting-level.md) | Enables reporting levels for automatic vectorization. |
| [`/RTC`](rtc-run-time-error-checks.md) | Enables run-time error checking. |
| [`/volatile`](volatile-volatile-keyword-interpretation.md) | Selects how the volatile keyword is interpreted. |

## Output files

| Option | Purpose |
|--|--|
| [`/doc`](doc-process-documentation-comments-c-cpp.md) | Processes documentation comments to an XML file. |
| [`/FA`](fa-fa-listing-file.md) | Configures an assembly listing file. |
| [`/Fa`](fa-fa-listing-file.md) | Creates an assembly listing file. |
| [`/Fd`](fd-program-database-file-name.md) | Renames program database file. |
| [`/Fe`](fe-name-exe-file.md) | Renames the executable file. |
| [`/Fi`](fi-preprocess-output-file-name.md) | Specifies the preprocessed output file name. |
| [`/Fm`](fm-name-mapfile.md) | Creates a mapfile. |
| [`/Fo`](fo-object-file-name.md) | Creates an object file. |
| [`/Fp`](fp-name-dot-pch-file.md) | Specifies a precompiled header file name. |
| [`/FR`, `/Fr`](fr-fr-create-dot-sbr-file.md) | Name generated *`.sbr`* browser files. |

## Preprocessor

| Option | Purpose |
|--|--|
| [`/AI`](ai-specify-metadata-directories.md) | Specifies a directory to search to resolve file references passed to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive. |
| [`/C`](c-preserve-comments-during-preprocessing.md) | Preserves comments during preprocessing. |
| [`/D`](d-preprocessor-definitions.md) | Defines constants and macros. |
| [`/E`](e-preprocess-to-stdout.md) | Copies preprocessor output to standard output. |
| [`/EP`](ep-preprocess-to-stdout-without-hash-line-directives.md) | Copies preprocessor output to standard output. |
| [`/FI`](fi-name-forced-include-file.md) | Preprocesses the specified include file. |
| [`/FU`](fu-name-forced-hash-using-file.md) | Forces the use of a file name, as if it had been passed to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive. |
| [`/Fx`](fx-merge-injected-code.md) | Merges injected code with the source file. |
| [`/I`](i-additional-include-directories.md) | Searches a directory for include files. |
| [`/P`](p-preprocess-to-a-file.md) | Writes preprocessor output to a file. |
| [`/U`](u-u-undefine-symbols.md) | Removes a predefined macro. |
| [`/u`](u-u-undefine-symbols.md) | Removes all predefined macros. |
| [`/X`](x-ignore-standard-include-paths.md) | Ignores the standard include directory. |

## Language

| Option | Purpose |
|--|--|
| [`/constexpr`](constexpr-control-constexpr-evaluation.md) | Control **`constexpr`** evaluation at compile time. |
| [`/openmp`](openmp-enable-openmp-2-0-support.md) | Enables [`#pragma omp`](../../preprocessor/omp.md) in source code. |
| [`/vd`](vd-disable-construction-displacements.md) | Suppresses or enables hidden `vtordisp` class members. |
| [`/vmb`](vmb-vmg-representation-method.md) | Uses best base for pointers to members. |
| [`/vmg`](vmb-vmg-representation-method.md) | Uses full generality for pointers to members. |
| [`/vmm`](vmm-vms-vmv-general-purpose-representation.md) | Declares multiple inheritance. |
| [`/vms`](vmm-vms-vmv-general-purpose-representation.md) | Declares single inheritance. |
| [`/vmv`](vmm-vms-vmv-general-purpose-representation.md) | Declares virtual inheritance. |
| [`/Z7`](z7-zi-zi-debug-information-format.md) | Generates C 7.0-compatible debugging information. |
| [`/Za`](za-ze-disable-language-extensions.md) | Disables C89 language extensions. |
| [`/Zc`](zc-conformance.md) | Specifies standard behavior under [`/Ze`](za-ze-disable-language-extensions.md). |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecated. Enables C89 language extensions. |
| [`/Zf`](zf.md) | Improves PDB generation time in parallel builds. |
| [`/ZH`](zh.md) | Specifies MD5, SHA-1, or SHA-256 for checksums in debug info. |
| [`/ZI`](z7-zi-zi-debug-information-format.md) | Includes debug information in a program database compatible with Edit and Continue. (x86 only) |
| [`/Zi`](z7-zi-zi-debug-information-format.md) | Generates complete debugging information. |
| [`/Zl`](zl-omit-default-library-name.md) | Removes the default library name from the *`.obj`* file. |
| [`/Zp`](zp-struct-member-alignment.md) *n* | Packs structure members. |
| [`/Zs`](zs-syntax-check-only.md) | Checks syntax only. |
| [`/ZW`](zw-windows-runtime-compilation.md) | Produces an output file to run on the Windows Runtime. |

## Linking

| Option | Purpose |
|--|--|
| [`/F`](f-set-stack-size.md) | Sets stack size. |
| [`/LD`](md-mt-ld-use-run-time-library.md) | Creates a dynamic-link library. |
| [`/LDd`](md-mt-ld-use-run-time-library.md) | Creates a debug dynamic-link library. |
| [`/link`](link-pass-options-to-linker.md) | Passes the specified option to LINK. |
| [`/LN`](ln-create-msil-module.md) | Creates an MSIL module. |
| [`/MD`](md-mt-ld-use-run-time-library.md) | Compiles to create a multithreaded DLL, by using *MSVCRT.lib*. |
| [`/MDd`](md-mt-ld-use-run-time-library.md) | Compiles to create a debug multithreaded DLL, by using *MSVCRTD.lib*. |
| [`/MT`](md-mt-ld-use-run-time-library.md) | Compiles to create a multithreaded executable file, by using *LIBCMT.lib*. |
| [`/MTd`](md-mt-ld-use-run-time-library.md) | Compiles to create a debug multithreaded executable file, by using *LIBCMTD.lib*. |

## Miscellaneous

| Option | Purpose |
|--|--|
| [`/?`](help-compiler-command-line-help.md) | Lists the compiler options. |
| [`@`](at-specify-a-compiler-response-file.md) | Specifies a response file. |
| [`/analyze`](analyze-code-analysis.md) | Enables code analysis. |
| [`/bigobj`](bigobj-increase-number-of-sections-in-dot-obj-file.md) | Increases the number of addressable sections in an .obj file. |
| [`/c`](c-compile-without-linking.md) | Compiles without linking. |
| [`/cgthreads`](cgthreads-code-generation-threads.md) | Specifies number of *cl.exe* threads to use for optimization and code generation. |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecated. Error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings. |
| [`/FC`](fc-full-path-of-source-code-file-in-diagnostics.md) | Displays the full path of source code files passed to *cl.exe* in diagnostic text. |
| [`/FS`](fs-force-synchronous-pdb-writes.md) | Forces writes to the PDB file to be serialized through *MSPDBSRV.EXE*. |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecated. Restricts the length of external (public) names. |
| [`/HELP`](help-compiler-command-line-help.md) | Lists the compiler options. |
| [`/J`](j-default-char-type-is-unsigned.md) | Changes the default **`char`** type. |
| [`/JMC`](jmc.md) | Supports native C++ Just My Code debugging. |
| [`/kernel`](kernel-create-kernel-mode-binary.md) | The compiler and linker will create a binary that can be executed in the Windows kernel. |
| [`/MP`](mp-build-with-multiple-processes.md) | Builds multiple source files concurrently. |
| [`/nologo`](nologo-suppress-startup-banner-c-cpp.md) | Suppresses display of sign-on banner. |
| [`/sdl`](sdl-enable-additional-security-checks.md) | Enables additional security features and warnings. |
| [`/showIncludes`](showincludes-list-include-files.md) | Displays a list of all include files during compilation. |
| [`/sourceDependencies`](sourcedependencies.md) | List headers, modules, and other source dependencies. |
| [`/Tc`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies a C source file. |
| [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies all source files are C. |
| [`/Tp`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies a C++ source file. |
| [`/TP`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies all source files are C++. |
| [`/V`](v-version-number.md) | Deprecated. Sets the version string. |
| [`/w`](compiler-option-warning-level.md) | Disables all warnings. |
| [`/W0`, `/W1`, `/W2`, `/W3`, `/W4`](compiler-option-warning-level.md) | Sets output warning level. |
| [`/w1`, `/w2`, `/w3`, `/w4`](compiler-option-warning-level.md) | Sets warning level for the specified warning. |
| [`/Wall`](compiler-option-warning-level.md) | Enables all warnings, including warnings that are disabled by default. |
| [`/wd`](compiler-option-warning-level.md) | Disables the specified warning. |
| [`/we`](compiler-option-warning-level.md) | Treats the specified warning as an error. |
| [`/WL`](wl-enable-one-line-diagnostics.md) | Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line. |
| [`/wo`](compiler-option-warning-level.md) | Displays the specified warning only once. |
| [`/Wv`](compiler-option-warning-level.md) | Disables warnings introduced by later versions of the compiler. |
| [`/WX`](compiler-option-warning-level.md) | Treats warnings as errors. |
| [`/Yc`](yc-create-precompiled-header-file.md) | Create *`.PCH`* file. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecated. Places complete debugging information in all object files. Use [`/Zi`](z7-zi-zi-debug-information-format.md) instead. |
| [`/Yl`](yl-inject-pch-reference-for-debug-library.md) | Injects a PCH reference when creating a debug library. |
| [`/Yu`](yu-use-precompiled-header-file.md) | Uses a precompiled header file during build. |
| [`/Y-`](y-ignore-precompiled-header-options.md) | Ignores all other precompiled-header compiler options in the current build. |
| [`/Zm`](zm-specify-precompiled-header-memory-allocation-limit.md) | Specifies the precompiled header memory allocation limit. |
| [`/await`](await-enable-coroutine-support.md) | Enable coroutines (resumable functions) extensions. |
| [`/source-charset`](source-charset-set-source-character-set.md) | Set source character set. |
| [`/execution-charset`](execution-charset-set-execution-character-set.md) | Set execution character set. |
| [`/utf-8`](utf-8-set-source-and-executable-character-sets-to-utf-8.md) | Set source and execution character sets to UTF-8. |
| [`/validate-charset`](validate-charset-validate-for-compatible-characters.md) | Validate UTF-8 files for only compatible characters. |
| [`/diagnostics`](diagnostics-compiler-diagnostic-options.md) | Controls the format of diagnostic messages. |
| [`/permissive-`](permissive-standards-conformance.md) | Set standard-conformance mode. |
| [`/std`](std-specify-language-standard-version.md) | C++ standard version compatibility selector. |

## Experimental options

Experimental options may only be supported by certain versions of the compiler. They may also behave differently in different compiler versions. Often the best, or only, documentation for experimental options is in the [Microsoft C++ Team Blog](https://devblogs.microsoft.com/cppblog/).

| Option | Purpose |
|--|--|
| [`/experimental:module`](experimental-module.md) | Enables experimental module support. |
| [`/experimental:preprocessor`](experimental-preprocessor.md) | Deprecated. Enables experimental conforming preprocessor support. Use [`/Zc:preprocessor`](zc-preprocessor.md) |

## Deprecated and removed compiler options

| Option | Purpose |
|--|--|
| [`/clr:noAssembly`](clr-common-language-runtime-compilation.md) | Deprecated. Use [`/LN` (Create MSIL Module)](ln-create-msil-module.md) instead. |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecated. Error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings. |
| [`/Fr`](fr-fr-create-dot-sbr-file.md) | Deprecated. Creates a browse information file without local variables. |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecated. Activates stack probes. On by default. |
| [`/Gm`](gm-enable-minimal-rebuild.md) | Deprecated. Enables minimal rebuild. |
| [`/GX`](gx-enable-exception-handling.md) | Deprecated. Enables synchronous exception handling. Use [`/EH`](eh-exception-handling-model.md) instead. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecated. Enables fast checks. Use [`/RTC1`](rtc-run-time-error-checks.md) instead. |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecated. Restricts the length of external (public) names. |
| [`/Og`](og-global-optimizations.md) | Deprecated. Uses global optimizations. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecated. Once used to specify how to convert from a floating-point type to an integral type. |
| [`/V`](v-version-number.md) | Deprecated. Sets the *`.obj`* file version string. |
| [`/Wp64`](wp64-detect-64-bit-portability-issues.md) | Obsolete. Detects 64-bit portability problems. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecated. Places complete debugging information in all object files. Use [`/Zi`](z7-zi-zi-debug-information-format.md) instead. |
| [`/Zc:forScope-`](zc-forscope-force-conformance-in-for-loop-scope.md) | Deprecated. Disables conformance in for loop scope. |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecated. Enables language extensions. |
| [`/Zg`](zg-generate-function-prototypes.md) | Removed in Visual Studio 2015. Generates function prototypes. |

## See also

[C/C++ building reference](c-cpp-building-reference.md)\
[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
