---
title: "Compiler Options Listed by Category | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compiler options, C++"
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
caps.latest.revision: 64
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Options Listed by Category
This article contains a categorical list of compiler options. For an alphabetical list, see [Compiler Options Listed Alphabetically](../../build/reference/compiler-options-listed-alphabetically.md).  
  
### Optimization  
  
|Option|Purpose|  
|------------|-------------|  
|[/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md)|Creates small code.|  
|[/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)|Creates fast code.|  
|[/Ob](../../build/reference/ob-inline-function-expansion.md)|Controls inline expansion.|  
|[/Od](../../build/reference/od-disable-debug.md)|Disables optimization.|  
|[/Og](../../build/reference/og-global-optimizations.md)|Deprecated. Uses global optimizations.|  
|[/Oi](../../build/reference/oi-generate-intrinsic-functions.md)|Generates intrinsic functions.|  
|[/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)|Favors small code.|  
|[/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)|Favors fast code.|  
|[/Ox](../../build/reference/ox-full-optimization.md)|Uses maximum optimization (/Ob2gity /Gs).|  
|[/Oy](../../build/reference/oy-frame-pointer-omission.md)|Omits frame pointer. (x86 only)|  
|[/favor](../../build/reference/favor-optimize-for-architecture-specifics.md)|Produces code that is optimized for a specified architecture, or for a range of architectures.|  
  
### Code Generation  
  
|Option|Purpose|  
|------------|-------------|  
|[/arch](../../build/reference/arch-x86.md)|Use SSE or SSE2 instructions in code generation. (x86 only)|  
|[/clr](../../build/reference/clr-common-language-runtime-compilation.md)|Produces an output file to run on the common language runtime.|  
|[/EH](../../build/reference/eh-exception-handling-model.md)|Specifies the model of exception handling.|  
|[/fp](../../build/reference/fp-specify-floating-point-behavior.md)|Specifies floating-point behavior.|  
|[/GA](../../build/reference/ga-optimize-for-windows-application.md)|Optimizes for Windows applications.|  
|[/Gd](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__cdecl` calling convention. (x86 only)|  
|[/Ge](../../build/reference/ge-enable-stack-probes.md)|Deprecated. Activates stack probes.|  
|[/GF](../../build/reference/gf-eliminate-duplicate-strings.md)|Enables string pooling.|  
|[/Gh](../../build/reference/gh-enable-penter-hook-function.md)|Calls hook function `_penter`.|  
|[/GH](../../build/reference/gh-enable-pexit-hook-function.md)|Calls hook function `_pexit`.|  
|[/GL](../../build/reference/gl-whole-program-optimization.md)|Enables whole program optimization.|  
|[/Gm](../../build/reference/gm-enable-minimal-rebuild.md)|Enables minimal rebuild.|  
|[/GR](../../build/reference/gr-enable-run-time-type-information.md)|Enables run-time type information (RTTI).|  
|[/Gr](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__fastcall` calling convention. (x86 only)|  
|[/GS](../../build/reference/gs-buffer-security-check.md)|Checks buffer security.|  
|[/Gs](../../build/reference/gs-control-stack-checking-calls.md)|Controls stack probes.|  
|[/GT](../../build/reference/gt-support-fiber-safe-thread-local-storage.md)|Supports fiber safety for data allocated by using static thread-local storage.|  
|[/guard:cf](../../build/reference/guard-enable-control-flow-guard.md)|Adds control flow guard security checks.|  
|[/Gv](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__vectorcall` calling convention. (x86 and x64 only)|  
|[/Gw](../../build/reference/gw-optimize-global-data.md)|Enables whole-program global data optimization.|  
|[/GX](../../build/reference/gx-enable-exception-handling.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../../build/reference/eh-exception-handling-model.md) instead.|  
|[/Gy](../../build/reference/gy-enable-function-level-linking.md)|Enables function-level linking.|  
|[/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md)|Deprecated. Enables fast checks. (Same as [/RTC1](../../build/reference/rtc-run-time-error-checks.md))|  
|[/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__stdcall` calling convention. (x86 only)|  
|[/homeparams](../../build/reference/homeparams-copy-register-parameters-to-stack.md)|Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compilers (native and cross compile).|  
|[/hotpatch](../../build/reference/hotpatch-create-hotpatchable-image.md)|Creates a hotpatchable image.|  
|[/Qfast_transcendentals](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md)|Generates fast transcendentals.|  
|[QIfist](../../build/reference/qifist-suppress-ftol.md)|Deprecated. Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required. (x86 only)|  
|[/Qimprecise_fwaits](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md)|Removes `fwait` commands inside `try` blocks.|  
|[/Qpar](../../build/reference/qpar-auto-parallelizer.md)|Enables automatic parallelization of loops.|  
|[/Qpar-report](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md)|Enables reporting levels for automatic parallelization.|  
|[/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md)|Uses integer move instructions for floating-point values and disables certain floating point load optimizations.|  
|[/Qvec-report (Auto-Vectorizer Reporting Level)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md)|Enables reporting levels for automatic vectorization.|  
|[/RTC](../../build/reference/rtc-run-time-error-checks.md)|Enables run-time error checking.|  
|[/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md)|Selects how the volatile keyword is interpreted.|  
  
### Output Files  
  
|Option|Purpose|  
|------------|-------------|  
|[/doc](../../build/reference/doc-process-documentation-comments-c-cpp.md)|Processes documentation comments to an XML file.|  
|[/FA](../../build/reference/fa-fa-listing-file.md)|Configures an assembly listing file.|  
|[/Fa](../../build/reference/fa-fa-listing-file.md)|Creates an assembly listing file.|  
|[/Fd](../../build/reference/fd-program-database-file-name.md)|Renames program database file.|  
|[/Fe](../../build/reference/fe-name-exe-file.md)|Renames the executable file.|  
|[/Fi](../../build/reference/fi-preprocess-output-file-name.md)|Specifies the preprocessed output file name.|  
|[/Fm](../../build/reference/fm-name-mapfile.md)|Creates a mapfile.|  
|[/Fo](../../build/reference/fo-object-file-name.md)|Creates an object file.|  
|[/Fp](../../build/reference/fp-name-dot-pch-file.md)|Specifies a precompiled header file name.|  
|[/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md)|Generates browser files.|  
  
### Preprocessor  
  
|Option|Purpose|  
|------------|-------------|  
|[/AI](../../build/reference/ai-specify-metadata-directories.md)|Specifies a directory to search to resolve file references passed to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.|  
|[/C](../../build/reference/c-preserve-comments-during-preprocessing.md)|Preserves comments during preprocessing.|  
|[/D](../../build/reference/d-preprocessor-definitions.md)|Defines constants and macros.|  
|[/E](../../build/reference/e-preprocess-to-stdout.md)|Copies preprocessor output to standard output.|  
|[/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)|Copies preprocessor output to standard output.|  
|[/FI](../../build/reference/fi-name-forced-include-file.md)|Preprocesses the specified include file.|  
|[/FU](../../build/reference/fu-name-forced-hash-using-file.md)|Forces the use of a file name, as if it had been passed to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.|  
|[/Fx](../../build/reference/fx-merge-injected-code.md)|Merges injected code with the source file.|  
|[/I](../../build/reference/i-additional-include-directories.md)|Searches a directory for include files.|  
|[/P](../../build/reference/p-preprocess-to-a-file.md)|Writes preprocessor output to a file.|  
|[/U](../../build/reference/u-u-undefine-symbols.md)|Removes a predefined macro.|  
|[/u](../../build/reference/u-u-undefine-symbols.md)|Removes all predefined macros.|  
|[/X](../../build/reference/x-ignore-standard-include-paths.md)|Ignores the standard include directory.|  
  
### Language  
  
|Option|Purpose|  
|------------|-------------|  
|[/openmp](../../build/reference/openmp-enable-openmp-2-0-support.md)|Enables [#pragma omp](../../preprocessor/omp.md) in source code.|  
|[/vd](../../build/reference/vd-disable-construction-displacements.md)|Suppresses or enables hidden `vtordisp` class members.|  
|[/vmb](../../build/reference/vmb-vmg-representation-method.md)|Uses best base for pointers to members.|  
|[/vmg](../../build/reference/vmb-vmg-representation-method.md)|Uses full generality for pointers to members.|  
|[/vmm](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Declares multiple inheritance.|  
|[/vms](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Declares single inheritance.|  
|[/vmv](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Declares virtual inheritance.|  
|[/Z7](../../build/reference/z7-zi-zi-debug-information-format.md)|Generates C 7.0–compatible debugging information.|  
|[/Za](../../build/reference/za-ze-disable-language-extensions.md)|Disables language extensions.|  
|[/Zc](../../build/reference/zc-conformance.md)|Specifies standard behavior under [/Ze](../../build/reference/za-ze-disable-language-extensions.md).|  
|[/Ze](../../build/reference/za-ze-disable-language-extensions.md)|Deprecated. Enables language extensions.|  
|[/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)|Includes debug information in a program database compatible with Edit and Continue. (x86 only)|  
|[/Zi](../../build/reference/z7-zi-zi-debug-information-format.md)|Generates complete debugging information.|  
|[/Zl](../../build/reference/zl-omit-default-library-name.md)|Removes the default library name from the .obj file.|  
|[/Zp](../../build/reference/zp-struct-member-alignment.md) *n*|Packs structure members.|  
|[/Zs](../../build/reference/zs-syntax-check-only.md)|Checks syntax only.|  
|[/ZW](../../build/reference/zw-windows-runtime-compilation.md)|Produces an output file to run on the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].|  
  
### Linking  
  
|Option|Purpose|  
|------------|-------------|  
|[/F](../../build/reference/f-set-stack-size.md)|Sets stack size.|  
|[/LD](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a dynamic-link library.|  
|[/LDd](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a debug dynamic-link library.|  
|[/link](../../build/reference/link-pass-options-to-linker.md)|Passes the specified option to LINK.|  
|[/LN](../../build/reference/ln-create-msil-module.md)|Creates an MSIL module.|  
|[/MD](../../build/reference/md-mt-ld-use-run-time-library.md)|Compiles to create a multithreaded DLL, by using MSVCRT.lib.|  
|[/MDd](../../build/reference/md-mt-ld-use-run-time-library.md)|Compiles to create a debug multithreaded DLL, by using MSVCRTD.lib.|  
|[/MT](../../build/reference/md-mt-ld-use-run-time-library.md)|Compiles to create a multithreaded executable file, by using LIBCMT.lib.|  
|[/MTd](../../build/reference/md-mt-ld-use-run-time-library.md)|Compiles to create a debug multithreaded executable file, by using LIBCMTD.lib.|  
  
### Precompiled Header  
  
|Option|Purpose|  
|------------|-------------|  
|[/Y-](../../build/reference/y-ignore-precompiled-header-options.md)|Ignores all other precompiled-header compiler options in the current build.|  
|[/Yc](../../build/reference/yc-create-precompiled-header-file.md)|Creates a precompiled header file.|  
|[/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Places complete debugging information in all object files.|  
|[/Yu](../../build/reference/yu-use-precompiled-header-file.md)|Uses a precompiled header file during build.|  
  
### Miscellaneous  
  
|Option|Purpose|  
|------------|-------------|  
|[/?](../../build/reference/help-compiler-command-line-help.md)|Lists the compiler options.|  
|[@](../../build/reference/at-specify-a-compiler-response-file.md)|Specifies a response file.|  
|[/analyze](../../build/reference/analyze-code-analysis.md)|Enables code analysis.|  
|[/bigobj](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md)|Increases the number of addressable sections in an .obj file.|  
|[/c](../../build/reference/c-compile-without-linking.md)|Compiles without linking.|  
|[/cgthreads](../../build/reference/cgthreads-code-generation-threads.md)|Specifies number of cl.exe threads to use for optimization and code generation.|  
|[/errorReport](../../build/reference/errorreport-report-internal-compiler-errors.md)|Enables you to provide internal compiler error (ICE) information directly to the Visual C++ team.|  
|[/FC](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md)|Displays the full path of source code files passed to cl.exe in diagnostic text.|  
|[/FS](../../build/reference/fs-force-synchronous-pdb-writes.md)|Forces writes to the program database (PDB) file to be serialized through MSPDBSRV.EXE.|  
|[/H](../../build/reference/h-restrict-length-of-external-names.md)|Deprecated. Restricts the length of external (public) names.|  
|[/HELP](../../build/reference/help-compiler-command-line-help.md)|Lists the compiler options.|  
|[/J](../../build/reference/j-default-char-type-is-unsigned.md)|Changes the default `char` type.|  
|[/kernel](../../build/reference/kernel-create-kernel-mode-binary.md)|The compiler and linker will create a binary that can be executed in the Windows kernel.|  
|[/MP](../../build/reference/mp-build-with-multiple-processes.md)|Builds multiple source files concurrently.|  
|[/nologo](../../build/reference/nologo-suppress-startup-banner-c-cpp.md)|Suppresses display of sign-on banner.|  
|[/sdl](../../build/reference/sdl-enable-additional-security-checks.md)|Enables additional security features and warnings.|  
|[/showIncludes](../../build/reference/showincludes-list-include-files.md)|Displays a list of all include files during compilation.|  
|[/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) [/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)|Specifies a C source file.|  
|[/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) [/TP](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)|Specifies a C++ source file.|  
|[/V](../../build/reference/v-version-number.md)|Deprecated. Sets the version string.|  
|[/w](../../build/reference/compiler-option-warning-level.md)|Disables all warnings.|  
|[/W0, /W1, /W2, /W3, /W4](../../build/reference/compiler-option-warning-level.md)|Sets output warning level.|  
|[/w1, /w2, /w3, /w4](../../build/reference/compiler-option-warning-level.md)|Sets warning level for the specified warning.|  
|[/Wall](../../build/reference/compiler-option-warning-level.md)|Enables all warnings, including warnings that are disabled by default.|  
|[/wd](../../build/reference/compiler-option-warning-level.md)|Disables the specified warning.|  
|[/we](../../build/reference/compiler-option-warning-level.md)|Treats the specified warning as an error.|  
|[/WL](../../build/reference/wl-enable-one-line-diagnostics.md)|Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line.|  
|[/wo](../../build/reference/compiler-option-warning-level.md)|Displays the specified warning only once.|  
|[/Wp64](../../build/reference/wp64-detect-64-bit-portability-issues.md)|Obsolete. Detects 64-bit portability problems.|  
|[/Wv](../../build/reference/compiler-option-warning-level.md)|Disables warnings introduced by later versions of the compiler.|  
|[/WX](../../build/reference/compiler-option-warning-level.md)|Treats warnings as errors.|  
|[/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) instead.|  
|[/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md)|Injects a PCH reference when creating a debug library.|  
|[/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md)|Specifies the precompiled header memory allocation limit.|  
  
### Deprecated and Removed Compiler Options  
  
|Option|Purpose|  
|------------|-------------|  
|[/clr:noAssembly](../../build/reference/clr-common-language-runtime-compilation.md)|Deprecated. Use [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md) instead.|  
|[/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md)|Deprecated. Creates a browse information file without local variables.|  
|[/Ge](../../build/reference/ge-enable-stack-probes.md)|Deprecated. Activates stack probes. On by default.|  
|[/GX](../../build/reference/gx-enable-exception-handling.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../../build/reference/eh-exception-handling-model.md) instead.|  
|[/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md)|Deprecated. Enables fast checks. Use [/RTC1](../../build/reference/rtc-run-time-error-checks.md) instead.|  
|[/H](../../build/reference/h-restrict-length-of-external-names.md)|Deprecated. Restricts the length of external (public) names.|  
|[/Og](../../build/reference/og-global-optimizations.md)|Deprecated. Uses global optimizations.|  
|[QIfist](../../build/reference/qifist-suppress-ftol.md)|Deprecated. Once used to specify how to convert from a floating-point type to an integral type.|  
|[/V](../../build/reference/v-version-number.md)|Deprecated. Sets the .obj file version string.|  
|[/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) instead.|  
|[/Zc:forScope-](../../build/reference/zc-forscope-force-conformance-in-for-loop-scope.md)|Deprecated. Disables conformance in for loop scope.|  
|[/Ze](../../build/reference/za-ze-disable-language-extensions.md)|Deprecated. Enables language extensions.|  
|[/Zg](../../build/reference/zg-generate-function-prototypes.md)|Removed in Visual C++ 2015. Generates function prototypes.|  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)