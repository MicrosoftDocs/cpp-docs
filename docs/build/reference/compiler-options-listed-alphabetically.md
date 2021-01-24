---
title: "Compiler options listed alphabetically"
description: "Reference listing in alphabetical order of the Microsoft C/C++ compiler command-line options."
ms.date: 07/29/2020
helpviewer_keywords: ["compiler options, C++"]
---
# Compiler options listed alphabetically

This table contains an alphabetical list of compiler options. For a list of compiler options by category, see the [Compiler options listed by category](compiler-options-listed-by-category.md) article.

## Compiler options

| Option | Purpose |
|--|--|
| [`@`](at-specify-a-compiler-response-file.md) | Specifies a response file. |
| [`/?`](help-compiler-command-line-help.md) | Lists the compiler options. |
| [`/AI`](ai-specify-metadata-directories.md) | Specifies a directory to search to resolve file references passed to the [`#using`](../../preprocessor/hash-using-directive-cpp.md) directive. |
| [`/analyze`](analyze-code-analysis.md) | Enable code analysis. |
| [`/arch`](arch-minimum-cpu-architecture.md) | Specifies the architecture for code generation. |
| [`/await`](await-enable-coroutine-support.md) | Enable coroutines (resumable functions) extensions. |
| [`/bigobj`](bigobj-increase-number-of-sections-in-dot-obj-file.md) | Increases the number of addressable sections in an .obj file. |
| [`/C`](c-preserve-comments-during-preprocessing.md) | Preserves comments during preprocessing. |
| [`/c`](c-compile-without-linking.md) | Compiles without linking. |
| [`/cgthreads`](cgthreads-code-generation-threads.md) | Specifies number of cl.exe threads to use for optimization and code generation. |
| [`/clr`](clr-common-language-runtime-compilation.md) | Produces an output file to run on the common language runtime. |
| [`/constexpr`](constexpr-control-constexpr-evaluation.md) | Control **`constexpr`** evaluation at compile time. |
| [`/D`](d-preprocessor-definitions.md) | Defines constants and macros. |
| [`/diagnostics`](diagnostics-compiler-diagnostic-options.md) | Controls the format of diagnostic messages. |
| [`/doc`](doc-process-documentation-comments-c-cpp.md) | Process documentation comments to an XML file. |
| [`/E`](e-preprocess-to-stdout.md) | Copies preprocessor output to standard output. |
| [`/EH`](eh-exception-handling-model.md) | Specifies the model of exception handling. |
| [`/EP`](ep-preprocess-to-stdout-without-hash-line-directives.md) | Copies preprocessor output to standard output. |
| [`/errorReport`](errorreport-report-internal-compiler-errors.md) | Deprecated. Error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings. |
| [`/execution-charset`](execution-charset-set-execution-character-set.md) | Set the execution character set. |
| [`/experimental:module`](experimental-module.md) | Enables experimental module support. |
| [`/experimental:preprocessor`](experimental-preprocessor.md) | Deprecated. Enables experimental conforming preprocessor support. Use [`/Zc:preprocessor`](zc-preprocessor.md) |
| [`/F`](f-set-stack-size.md) | Sets stack size. |
| [`/favor`](favor-optimize-for-architecture-specifics.md) | Produces code optimized for a specific x64 architecture. Or, for the specific micro-architectures in both the AMD64 and EM64T architectures. |
| [`/FA`](fa-fa-listing-file.md) | Creates a listing file. |
| [`/Fa`](fa-fa-listing-file.md) | Sets the listing file name. |
| [`/FC`](fc-full-path-of-source-code-file-in-diagnostics.md) | Display full path of source code files passed to cl.exe in diagnostic text. |
| [`/Fd`](fd-program-database-file-name.md) | Renames program database file. |
| [`/Fe`](fe-name-exe-file.md) | Renames the executable file. |
| [`/FI`](fi-name-forced-include-file.md) | Preprocesses the specified include file. |
| [`/Fi`](fi-preprocess-output-file-name.md) | Sets the preprocessed output file name. |
| [`/Fm`](fm-name-mapfile.md) | Creates a map file. |
| [`/Fo`](fo-object-file-name.md) | Creates an object file. |
| [`/fp`](fp-specify-floating-point-behavior.md) | Specify floating-point behavior. |
| [`/Fp`](fp-name-dot-pch-file.md) | Specifies a precompiled header file name. |
| [`/FR`](fr-fr-create-dot-sbr-file.md)<br /><br /> [`/Fr`](fr-fr-create-dot-sbr-file.md) | Generates browser files. **`/Fr`** is deprecated. |
| [`/FS`](fs-force-synchronous-pdb-writes.md) | Forces serialization of all writes to the program database (PDB) file through MSPDBSRV.EXE. |
| [`/FU`](fu-name-forced-hash-using-file.md) | Forces the use of a file name as if it had been passed to the [`#using`](../../preprocessor/hash-using-directive-cpp.md) directive. |
| [`/Fx`](fx-merge-injected-code.md) | Merges injected code with source file. |
| [`/GA`](ga-optimize-for-windows-application.md) | Optimizes code for Windows application. |
| [`/Gd`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__cdecl`** calling convention (x86 only). |
| [`/Ge`](ge-enable-stack-probes.md) | Deprecated. Activates stack probes. |
| [`/GF`](gf-eliminate-duplicate-strings.md) | Enables string pooling. |
| [`/GH`](gh-enable-pexit-hook-function.md) | Calls hook function `_pexit`. |
| [`/Gh`](gh-enable-penter-hook-function.md) | Calls hook function `_penter`. |
| [`/GL`](gl-whole-program-optimization.md) | Enables whole program optimization. |
| [`/Gm`](gm-enable-minimal-rebuild.md) | Deprecated. Enables minimal rebuild. |
| [`/GR`](gr-enable-run-time-type-information.md) | Enables run-time type information (RTTI). |
| [`/Gr`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__fastcall`** calling convention (x86 only). |
| [`/GS`](gs-buffer-security-check.md) | Buffers security check. |
| [`/Gs`](gs-control-stack-checking-calls.md) | Controls stack probes. |
| [`/GT`](gt-support-fiber-safe-thread-local-storage.md) | Supports fiber safety for data allocated using static thread-local storage. |
| [`/guard:cf`](guard-enable-control-flow-guard.md) | Adds control flow guard security checks. |
| [`/guard:ehcont`](guard-enable-eh-continuation-metadata.md) | Enables EH continuation metadata. |
| [`/Gv`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__vectorcall`** calling convention. (x86 and x64 only) |
| [`/Gw`](gw-optimize-global-data.md) | Enables whole-program global data optimization. |
| [`/GX`](gx-enable-exception-handling.md) | Deprecated. Enables synchronous exception handling. Use [`/EH`](eh-exception-handling-model.md) instead. |
| [`/Gy`](gy-enable-function-level-linking.md) | Enables function-level linking. |
| [`/GZ`](gz-enable-stack-frame-run-time-error-checking.md) | Deprecated. Same as [`/RTC1`](rtc-run-time-error-checks.md). |
| [`/Gz`](gd-gr-gv-gz-calling-convention.md) | Uses the **`__stdcall`** calling convention (x86 only). |
| [`/H`](h-restrict-length-of-external-names.md) | Deprecated. Restricts the length of external (public) names. |
| [`/HELP`](help-compiler-command-line-help.md) | Lists the compiler options. |
| [`/homeparams`](homeparams-copy-register-parameters-to-stack.md) | Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the x64 compilers (native and cross compile). |
| [`/hotpatch`](hotpatch-create-hotpatchable-image.md) | Creates a hot-patchable image. |
| [`/I`](i-additional-include-directories.md) | Searches a directory for include files. |
| [`/J`](j-default-char-type-is-unsigned.md) | Changes the default **`char`** type. |
| [`/JMC`](jmc.md) | Supports native C++ Just My Code debugging. |
| [`/kernel`](kernel-create-kernel-mode-binary.md) | The compiler and linker will create a binary that can be executed in the Windows kernel. |
| [`/LD`](md-mt-ld-use-run-time-library.md) | Creates a dynamic-link library. |
| [`/LDd`](md-mt-ld-use-run-time-library.md) | Creates a debug dynamic-link library. |
| [`/link`](link-pass-options-to-linker.md) | Passes the specified option to LINK. |
| [`/LN`](ln-create-msil-module.md) | Creates an MSIL module. |
| [`/MD`](md-mt-ld-use-run-time-library.md) | Creates a multithreaded DLL using MSVCRT.lib. |
| [`/MDd`](md-mt-ld-use-run-time-library.md) | Creates a debug multithreaded DLL using MSVCRTD.lib. |
| [`/MP`](mp-build-with-multiple-processes.md) | Compiles multiple source files by using multiple processes. |
| [`/MT`](md-mt-ld-use-run-time-library.md) | Creates a multithreaded executable file using LIBCMT.lib. |
| [`/MTd`](md-mt-ld-use-run-time-library.md) | Creates a debug multithreaded executable file using LIBCMTD.lib. |
| [`/nologo`](nologo-suppress-startup-banner-c-cpp.md) | Suppresses display of sign-on banner. |
| [`/O1`](o1-o2-minimize-size-maximize-speed.md) | Creates small code. |
| [`/O2`](o1-o2-minimize-size-maximize-speed.md) | Creates fast code. |
| [`/Ob`](ob-inline-function-expansion.md) | Controls inline expansion. |
| [`/Od`](od-disable-debug.md) | Disables optimization. |
| [`/Og`](og-global-optimizations.md) | Deprecated. Uses global optimizations. |
| [`/Oi`](oi-generate-intrinsic-functions.md) | Generates intrinsic functions. |
| [`/openmp`](openmp-enable-openmp-2-0-support.md) | Enables the [`#pragma omp`](../../preprocessor/omp.md) directive in source code. |
| [`/Os`](os-ot-favor-small-code-favor-fast-code.md) | Favors small code. |
| [`/Ot`](os-ot-favor-small-code-favor-fast-code.md) | Favors fast code. |
| [`/Ox`](ox-full-optimization.md) | A subset of /O2 that doesn't include /GF or /Gy. |
| [`/Oy`](oy-frame-pointer-omission.md) | Omits frame pointer (x86 only). |
| [`/P`](p-preprocess-to-a-file.md) | Writes preprocessor output to a file. |
| [`/permissive-`](permissive-standards-conformance.md) | Set standard-conformance mode. |
| [`/Qfast_transcendentals`](qfast-transcendentals-force-fast-transcendentals.md) | Generates fast transcendentals. |
| [`/QIfist`](qifist-suppress-ftol.md) | Deprecated. Suppresses `_ftol` when a conversion from a floating-point type to an integral type is required (x86 only). |
| [`/Qimprecise_fwaits`](qimprecise-fwaits-remove-fwaits-inside-try-blocks.md) | Removes `fwait` commands inside **`try`** blocks. |
| [`/QIntel-jcc-erratum`](qintel-jcc-erratum.md) | Mitigates the performance impact of the Intel JCC erratum microcode update. |
| [/Qpar (Auto-Parallelizer)](qpar-auto-parallelizer.md) | Enables automatic parallelization of loops that are marked with the [#pragma loop()](../../preprocessor/loop.md) directive. |
| [`/Qsafe_fp_loads`](qsafe-fp-loads.md) | Uses integer move instructions for floating-point values and disables certain floating point load optimizations. |
| [`/Qspectre`](qspectre.md) | Specifies compiler generation of instructions to mitigate certain Spectre variant 1 security vulnerabilities. |
| [`/Qspectre-load`](qspectre-load.md) | Specifies compiler generation of serializing instructions to mitigate Spectre security vulnerabilities based on load instructions. |
| [`/Qspectre-load-cf`](qspectre-load-cf.md) | Specifies compiler generation of serializing instructions to mitigate Spectre security vulnerabilities based on control flow instructions that load memory. |
| [`/Qvec-report` (Auto-vectorizer reporting level)](qvec-report-auto-vectorizer-reporting-level.md) | Enables reporting levels for automatic vectorization. |
| [`/RTC`](rtc-run-time-error-checks.md) | Enables run-time error checking. |
| [`/sdl`](sdl-enable-additional-security-checks.md) | Enables additional security features and warnings. |
| [`/showIncludes`](showincludes-list-include-files.md) | Displays a list of include files during compilation. |
| [`/source-charset`](source-charset-set-source-character-set.md) | Set source character set. |
| [`/sourceDependencies`](sourcedependencies.md) | List headers, modules, and other source dependencies. |
| [`/std`](std-specify-language-standard-version.md) | C++ standard version compatibility selector. |
| [`/Tc`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies a C source file. |
| [`/TC`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies all source files are C. |
| [`/Tp`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies a C++ source file. |
| [`/TP`](tc-tp-tc-tp-specify-source-file-type.md) | Specifies all source files are C++. |
| [`/U`](u-u-undefine-symbols.md) | Removes a predefined macro. |
| [`/u`](u-u-undefine-symbols.md) | Removes all predefined macros. |
| [`/utf-8`](utf-8-set-source-and-executable-character-sets-to-utf-8.md) | Set source and execution character sets to UTF-8. |
| [`/V`](v-version-number.md) | Deprecated. Sets the .obj file version string. |
| [`/validate-charset`](validate-charset-validate-for-compatible-characters.md) | Validate UTF-8 files for only compatible characters. |
| [`/vd`](vd-disable-construction-displacements.md) | Suppresses or enables hidden vtordisp class members. |
| [`/vmb`](vmb-vmg-representation-method.md) | Uses best base for pointers to members. |
| [`/vmg`](vmb-vmg-representation-method.md) | Uses full generality for pointers to members. |
| [`/vmm`](vmm-vms-vmv-general-purpose-representation.md) | Declares multiple inheritance. |
| [`/vms`](vmm-vms-vmv-general-purpose-representation.md) | Declares single inheritance. |
| [`/vmv`](vmm-vms-vmv-general-purpose-representation.md) | Declares virtual inheritance. |
| [`/volatile`](volatile-volatile-keyword-interpretation.md) | Selects how the volatile keyword is interpreted. |
| [`/w`](compiler-option-warning-level.md) | Disables all warnings. |
| [`/W0`, `/W1`, `/W2`, `/W3`, `/W4`](compiler-option-warning-level.md) | Sets which warning level to output. |
| [`/w1`, `/w2`, `/w3`, `/w4`](compiler-option-warning-level.md) | Sets the warning level for the specified warning. |
| [`/Wall`](compiler-option-warning-level.md) | Enables all warnings, including warnings that are disabled by default. |
| [`/wd`](compiler-option-warning-level.md) | Disables the specified warning. |
| [`/we`](compiler-option-warning-level.md) | Treats the specified warning as an error. |
| [`/WL`](wl-enable-one-line-diagnostics.md) | Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line. |
| [`/wo`](compiler-option-warning-level.md) | Displays the specified warning only once. |
| [`/Wp64`](wp64-detect-64-bit-portability-issues.md) | Obsolete. Detects 64-bit portability problems. |
| [`/Wv`](compiler-option-warning-level.md) | Displays no warnings introduced after the specified version of the compiler. |
| [`/WX`](compiler-option-warning-level.md) | Treats all warnings as errors. |
| [`/X`](x-ignore-standard-include-paths.md) | Ignores the standard include directory. |
| [`/Y-`](y-ignore-precompiled-header-options.md) | Ignores all other precompiled-header compiler options in the current build. |
| [`/Yc`](yc-create-precompiled-header-file.md) | Creates a precompiled header file. |
| [`/Yd`](yd-place-debug-information-in-object-file.md) | Deprecated. Places complete debugging information in all object files. Use [`/Zi`](z7-zi-zi-debug-information-format.md) instead. |
| [`/Yl`](yl-inject-pch-reference-for-debug-library.md) | Injects a PCH reference when creating a debug library |
| [`/Yu`](yu-use-precompiled-header-file.md) | Uses a precompiled header file during build. |
| [`/Z7`](z7-zi-zi-debug-information-format.md) | Generates C 7.0-compatible debugging information. |
| [`/Za`](za-ze-disable-language-extensions.md) | Disables language extensions. |
| [`/Zc`](zc-conformance.md) | Specifies standard behaviors. |
| [`/Ze`](za-ze-disable-language-extensions.md) | Deprecated. Enables language extensions. |
| [`/Zf`](zf.md) | Improves PDB generation time in parallel builds. |
| [`/Zg`](zg-generate-function-prototypes.md) | Removed in Visual Studio 2015. Generates function prototypes. |
| [`/ZH`](zh.md) | Specifies MD5, SHA-1, or SHA-256 for checksums in debug info. |
| [`/ZI`](z7-zi-zi-debug-information-format.md) | Includes debug information in a program database compatible with Edit and Continue. |
| [`/Zi`](z7-zi-zi-debug-information-format.md) | Generates complete debugging information. |
| [`/Zl`](zl-omit-default-library-name.md) | Removes default library name from .obj file (x86 only). |
| [`/Zm`](zm-specify-precompiled-header-memory-allocation-limit.md) | Specifies the precompiled header memory allocation limit. |
| [`/Zo`](zo-enhance-optimized-debugging.md) | Generates enhanced debugging information for optimized code. |
| [`/Zp`](zp-struct-member-alignment.md) | Packs structure members. |
| [`/Zs`](zs-syntax-check-only.md) | Checks syntax only. |
| [`/ZW`](zw-windows-runtime-compilation.md) | Produces an output file to run on the Windows Runtime. |

## See also

[MSVC compiler options](compiler-options.md)\
[MSVC compiler command-line syntax](compiler-command-line-syntax.md)
