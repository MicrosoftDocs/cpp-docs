---
title: "Compiler Options Listed Alphabetically | Microsoft Docs"
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
ms.assetid: 98375dad-c9c6-4796-aaa6-fd573269d4ae
caps.latest.revision: 66
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
# Compiler Options Listed Alphabetically
The following is a comprehensive alphabetical list of compiler options. For a categorical list, see the [Compiler Options Listed by Category](../../build/reference/compiler-options-listed-by-category.md).  
  
|Option|Purpose|  
|------------|-------------|  
|[@](../../build/reference/at-specify-a-compiler-response-file.md)|Specifies a response file.|  
|[/?](../../build/reference/help-compiler-command-line-help.md)|Lists the compiler options.|  
|[/AI](../../build/reference/ai-specify-metadata-directories.md)|Specifies a directory to search to resolve file references passed to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.|  
|[/analyze](../../build/reference/analyze-code-analysis.md)|Enable code analysis.|  
|[/arch](../../build/reference/arch-minimum-cpu-architecture.md)|Specifies the architecture for code generation.|  
|[/bigobj](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md)|Increases the number of addressable sections in an .obj file.|  
|[/C](../../build/reference/c-preserve-comments-during-preprocessing.md)|Preserves comments during preprocessing.|  
|[/c](../../build/reference/c-compile-without-linking.md)|Compiles without linking.|  
|[/cgthreads](../../build/reference/cgthreads-code-generation-threads.md)|Specifies number of cl.exe threads to use for optimization and code generation.|  
|[/clr](../../build/reference/clr-common-language-runtime-compilation.md)|Produces an output file to run on the common language runtime.|  
|[/D](../../build/reference/d-preprocessor-definitions.md)|Defines constants and macros.|  
|[/doc](../../build/reference/doc-process-documentation-comments-c-cpp.md)|Process documentation comments to an XML file.|  
|[/E](../../build/reference/e-preprocess-to-stdout.md)|Copies preprocessor output to standard output.|  
|[/EH](../../build/reference/eh-exception-handling-model.md)|Specifies the model of exception handling.|  
|[/EP](../../build/reference/ep-preprocess-to-stdout-without-hash-line-directives.md)|Copies preprocessor output to standard output.|  
|[/errorReport](../../build/reference/errorreport-report-internal-compiler-errors.md)|Allows you to provide internal compiler error (ICE) information directly to the Visual C++ team.|  
|[/F](../../build/reference/f-set-stack-size.md)|Sets stack size.|  
|[/favor](../../build/reference/favor-optimize-for-architecture-specifics.md)|Produces code that is optimized for a specific [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] architecture or for the specifics of micro-architectures in both the AMD64 and Extended Memory 64 Technology (EM64T) architectures.|  
|[/FA](../../build/reference/fa-fa-listing-file.md)|Creates a listing file.|  
|[/Fa](../../build/reference/fa-fa-listing-file.md)|Sets the listing file name.|  
|[/FC](../../build/reference/fc-full-path-of-source-code-file-in-diagnostics.md)|Display full path of source code files passed to cl.exe in diagnostic text.|  
|[/Fd](../../build/reference/fd-program-database-file-name.md)|Renames program database file.|  
|[/Fe](../../build/reference/fe-name-exe-file.md)|Renames the executable file.|  
|[/FI](../../build/reference/fi-name-forced-include-file.md)|Preprocesses the specified include file.|  
|[/Fi](../../build/reference/fi-preprocess-output-file-name.md)|Sets the preprocessed output file name.|  
|[/Fm](../../build/reference/fm-name-mapfile.md)|Creates a mapfile.|  
|[/Fo](../../build/reference/fo-object-file-name.md)|Creates an object file.|  
|[/fp](../../build/reference/fp-specify-floating-point-behavior.md)|Specify floating-point behavior.|  
|[/Fp](../../build/reference/fp-name-dot-pch-file.md)|Specifies a precompiled header file name.|  
|[/FR](../../build/reference/fr-fr-create-dot-sbr-file.md)<br /><br /> [/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md)|Generates browser files. **/Fr** is deprecated.|  
|[/FS](../../build/reference/fs-force-synchronous-pdb-writes.md)|Forces writes to the program database (PDB) file to be serialized through MSPDBSRV.EXE.|  
|[/FU](../../build/reference/fu-name-forced-hash-using-file.md)|Forces the use of a file name as if it had been passed to the [#using](../../preprocessor/hash-using-directive-cpp.md) directive.|  
|[/Fx](../../build/reference/fx-merge-injected-code.md)|Merges injected code with source file.|  
|[/GA](../../build/reference/ga-optimize-for-windows-application.md)|Optimizes code for Windows application.|  
|[/Gd](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__cdecl` calling convention (x86 only).|  
|[/Ge](../../build/reference/ge-enable-stack-probes.md)|Deprecated. Activates stack probes.|  
|[/GF](../../build/reference/gf-eliminate-duplicate-strings.md)|Enables string pooling.|  
|[/GH](../../build/reference/gh-enable-pexit-hook-function.md)|Calls hook function `_pexit`.|  
|[/Gh](../../build/reference/gh-enable-penter-hook-function.md)|Calls hook function `_penter`.|  
|[/GL](../../build/reference/gl-whole-program-optimization.md)|Enables whole program optimization.|  
|[/Gm](../../build/reference/gm-enable-minimal-rebuild.md)|Enables minimal rebuild.|  
|[/GR](../../build/reference/gr-enable-run-time-type-information.md)|Enables run-time type information (RTTI).|  
|[/Gr](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__fastcall` calling convention (x86 only).|  
|[/GS](../../build/reference/gs-buffer-security-check.md)|Buffers security check.|  
|[/Gs](../../build/reference/gs-control-stack-checking-calls.md)|Controls stack probes.|  
|[/GT](../../build/reference/gt-support-fiber-safe-thread-local-storage.md)|Supports fiber safety for data allocated using static thread-local storage.|  
|[/guard:cf](../../build/reference/guard-enable-control-flow-guard.md)|Adds control flow guard security checks.|  
|[/Gv](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__vectorcall` calling convention. (x86 and x64 only)|  
|[/Gw](../../build/reference/gw-optimize-global-data.md)|Enables whole-program global data optimization.|  
|[/GX](../../build/reference/gx-enable-exception-handling.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../../build/reference/eh-exception-handling-model.md) instead.|  
|[/Gy](../../build/reference/gy-enable-function-level-linking.md)|Enables function-level linking.|  
|[/GZ](../../build/reference/gz-enable-stack-frame-run-time-error-checking.md)|Deprecated. Same as [/RTC1](../../build/reference/rtc-run-time-error-checks.md).|  
|[/Gz](../../build/reference/gd-gr-gv-gz-calling-convention.md)|Uses the `__stdcall` calling convention (x86 only).|  
|[/H](../../build/reference/h-restrict-length-of-external-names.md)|Deprecated. Restricts the length of external (public) names.|  
|[/HELP](../../build/reference/help-compiler-command-line-help.md)|Lists the compiler options.|  
|[/homeparams](../../build/reference/homeparams-copy-register-parameters-to-stack.md)|Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] compilers (native and cross compile).|  
|[/hotpatch](../../build/reference/hotpatch-create-hotpatchable-image.md)|Creates a hotpatchable image.|  
|[/I](../../build/reference/i-additional-include-directories.md)|Searches a directory for include files.|  
|[/J](../../build/reference/j-default-char-type-is-unsigned.md)|Changes the default `char` type.|  
|[/kernel](../../build/reference/kernel-create-kernel-mode-binary.md)|The compiler and linker will create a binary that can be executed in the Windows kernel.|  
|[/LD](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a dynamic-link library.|  
|[/LDd](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a debug dynamic-link library.|  
|[/link](../../build/reference/link-pass-options-to-linker.md)|Passes the specified option to LINK.|  
|[/LN](../../build/reference/ln-create-msil-module.md)|Creates an MSIL module.|  
|[/MD](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a multithreaded DLL using MSVCRT.lib.|  
|[/MDd](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a debug multithreaded DLL using MSVCRTD.lib.|  
|[/MP](../../build/reference/mp-build-with-multiple-processes.md)|Compiles multiple source files by using multiple processes.|  
|[/MT](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a multithreaded executable file using LIBCMT.lib.|  
|[/MTd](../../build/reference/md-mt-ld-use-run-time-library.md)|Creates a debug multithreaded executable file using LIBCMTD.lib.|  
|[/nologo](../../build/reference/nologo-suppress-startup-banner-c-cpp.md)|Suppresses display of sign-on banner.|  
|[/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md)|Creates small code.|  
|[/O2](../../build/reference/o1-o2-minimize-size-maximize-speed.md)|Creates fast code.|  
|[/Ob](../../build/reference/ob-inline-function-expansion.md)|Controls inline expansion.|  
|[/Od](../../build/reference/od-disable-debug.md)|Disables optimization.|  
|[/Og](../../build/reference/og-global-optimizations.md)|Deprecated. Uses global optimizations.|  
|[/Oi](../../build/reference/oi-generate-intrinsic-functions.md)|Generates intrinsic functions.|  
|[/openmp](../../build/reference/openmp-enable-openmp-2-0-support.md)|Enables [#pragma omp](../../preprocessor/omp.md) in source code.|  
|[/Os](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)|Favors small code.|  
|[/Ot](../../build/reference/os-ot-favor-small-code-favor-fast-code.md)|Favors fast code.|  
|[/Ox](../../build/reference/ox-full-optimization.md)|Uses maximum optimization (/Ob2gity /Gs).|  
|[/Oy](../../build/reference/oy-frame-pointer-omission.md)|Omits frame pointer (x86 only).|  
|[/P](../../build/reference/p-preprocess-to-a-file.md)|Writes preprocessor output to a file.|  
|[/Qfast_transcendentals](../../build/reference/qfast-transcendentals-force-fast-transcendentals.md)|Generates fast transcendentals.|  
|[/QIfist](../../build/reference/qifist-suppress-ftol.md)|Deprecated. Suppresses `_ftol` when a conversion from a floating-point type to an integral type is required (x86 only).|  
|[/Qimprecise_fwaits](../../build/reference/qimprecise-fwaits-remove-fwaits-inside-try-blocks.md)|Removes `fwait` commands inside `try` blocks.|  
|[/Qpar (Auto-Parallelizer)](../../build/reference/qpar-auto-parallelizer.md)|Enables automatic parallelization of loops that are marked with the [#pragma loop()](../../preprocessor/loop.md) directive.|  
|[/Qsafe_fp_loads](../../build/reference/qsafe-fp-loads.md)|Uses integer move instructions for floating-point values and disables certain floating point load optimizations.|  
|[/Qvec-report (Auto-Vectorizer Reporting Level)](../../build/reference/qvec-report-auto-vectorizer-reporting-level.md)|Enables reporting levels for automatic vectorization.|  
|[/RTC](../../build/reference/rtc-run-time-error-checks.md)|Enables run-time error checking.|  
|[/sdl](../../build/reference/sdl-enable-additional-security-checks.md)|Enables additional security features and warnings.|  
|[/showIncludes](../../build/reference/showincludes-list-include-files.md)|Displays a list of include files during compilation.|  
|[/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)<br /><br /> [/TC](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)|Specifies a C source file.|  
|[/Tp](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)<br /><br /> [/TP](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md)|Specifies a C++ source file.|  
|[/U](../../build/reference/u-u-undefine-symbols.md)|Removes a predefined macro.|  
|[/u](../../build/reference/u-u-undefine-symbols.md)|Removes all predefined macros.|  
|[/V](../../build/reference/v-version-number.md)|Deprecated. Sets the .obj file version string.|  
|[/vd](../../build/reference/vd-disable-construction-displacements.md)|Suppresses or enables hidden vtordisp class members.|  
|[/vmb](../../build/reference/vmb-vmg-representation-method.md)|Uses best base for pointers to members.|  
|[/vmg](../../build/reference/vmb-vmg-representation-method.md)|Uses full generality for pointers to members.|  
|[/vmm](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Declares multiple inheritance.|  
|[/vms](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Declares single inheritance.|  
|[/vmv](../../build/reference/vmm-vms-vmv-general-purpose-representation.md)|Declares virtual inheritance.|  
|[/volatile](../../build/reference/volatile-volatile-keyword-interpretation.md)|Selects how the volatile keyword is interpreted.|  
|[/w](../../build/reference/compiler-option-warning-level.md)|Disables all warnings.|  
|[/W0, /W1, /W2, /W3, /W4](../../build/reference/compiler-option-warning-level.md)|Sets which warning level to output.|  
|[/w1, /w2, /w3, /w4](../../build/reference/compiler-option-warning-level.md)|Sets the warning level for the specified warning.|  
|[/Wall](../../build/reference/compiler-option-warning-level.md)|Enables all warnings, including warnings that are disabled by default.|  
|[/wd](../../build/reference/compiler-option-warning-level.md)|Disables the specified warning.|  
|[/we](../../build/reference/compiler-option-warning-level.md)|Treats the specified warning as an error.|  
|[/WL](../../build/reference/wl-enable-one-line-diagnostics.md)|Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line.|  
|[/wo](../../build/reference/compiler-option-warning-level.md)|Displays the specified warning only once.|  
|[/Wp64](../../build/reference/wp64-detect-64-bit-portability-issues.md)|Obsolete. Detects 64-bit portability problems.|  
|[/Wv](../../build/reference/compiler-option-warning-level.md)|Displays no warnings introduced after the specified version of the compiler.|  
|[/WX](../../build/reference/compiler-option-warning-level.md)|Treats all warnings as errors.|  
|[/X](../../build/reference/x-ignore-standard-include-paths.md)|Ignores the standard include directory.|  
|[/Y-](../../build/reference/y-ignore-precompiled-header-options.md)|Ignores all other precompiled-header compiler options in the current build.|  
|[/Yc](../../build/reference/yc-create-precompiled-header-file.md)|Creates a precompiled header file.|  
|[/Yd](../../build/reference/yd-place-debug-information-in-object-file.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../../build/reference/z7-zi-zi-debug-information-format.md) instead.|  
|[/Yl](../../build/reference/yl-inject-pch-reference-for-debug-library.md)|Injects a PCH reference when creating a debug library|  
|[/Yu](../../build/reference/yu-use-precompiled-header-file.md)|Uses a precompiled header file during build.|  
|[/Z7](../../build/reference/z7-zi-zi-debug-information-format.md)|Generates C 7.0–compatible debugging information.|  
|[/Za](../../build/reference/za-ze-disable-language-extensions.md)|Disables language extensions.|  
|[/Zc](../../build/reference/zc-conformance.md)|Specifies standard behavior under [/Ze](../../build/reference/za-ze-disable-language-extensions.md).[/Za, /Ze (Disable Language Extensions)](../../build/reference/za-ze-disable-language-extensions.md)|  
|[/Ze](../../build/reference/za-ze-disable-language-extensions.md)|Deprecated. Enables language extensions.|  
|[/Zg](../../build/reference/zg-generate-function-prototypes.md)|Removed in Visual C++ 2015. Generates function prototypes.|  
|[/ZI](../../build/reference/z7-zi-zi-debug-information-format.md)|Includes debug information in a program database compatible with Edit and Continue.|  
|[/Zi](../../build/reference/z7-zi-zi-debug-information-format.md)|Generates complete debugging information.|  
|[/Zl](../../build/reference/zl-omit-default-library-name.md)|Removes default library name from .obj file (x86 only).|  
|[/Zm](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md)|Specifies the precompiled header memory allocation limit.|  
|[/Zp](../../build/reference/zp-struct-member-alignment.md)|Packs structure members.|  
|[/Zs](../../build/reference/zs-syntax-check-only.md)|Checks syntax only.|  
|[/ZW](../../build/reference/zw-windows-runtime-compilation.md)|Produces an output file to run on the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].|  
  
## See Also  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)