---
title: "Compiler Options Listed by Category"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "compiler options, C++"
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
caps.latest.revision: 64
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
This article contains a categorical list of compiler options. For an alphabetical list, see [Compiler Options Listed Alphabetically](../buildref/compiler-options-listed-alphabetically.md).  
  
### Optimization  
  
|Option|Purpose|  
|------------|-------------|  
|[/O1](../buildref/-o1---o2--minimize-size--maximize-speed-.md)|Creates small code.|  
|[/O2](../buildref/-o1---o2--minimize-size--maximize-speed-.md)|Creates fast code.|  
|[/Ob](../buildref/-ob--inline-function-expansion-.md)|Controls inline expansion.|  
|[/Od](../buildref/-od--disable--debug--.md)|Disables optimization.|  
|[/Og](../buildref/-og--global-optimizations-.md)|Deprecated. Uses global optimizations.|  
|[/Oi](../buildref/-oi--generate-intrinsic-functions-.md)|Generates intrinsic functions.|  
|[/Os](../buildref/-os---ot--favor-small-code--favor-fast-code-.md)|Favors small code.|  
|[/Ot](../buildref/-os---ot--favor-small-code--favor-fast-code-.md)|Favors fast code.|  
|[/Ox](../buildref/-ox--full-optimization-.md)|Uses maximum optimization (/Ob2gity /Gs).|  
|[/Oy](../buildref/-oy--frame-pointer-omission-.md)|Omits frame pointer. (x86 only)|  
|[/favor](../buildref/-favor--optimize-for-architecture-specifics-.md)|Produces code that is optimized for a specified architecture, or for a range of architectures.|  
  
### Code Generation  
  
|Option|Purpose|  
|------------|-------------|  
|[/arch](../buildref/-arch--x86-.md)|Use SSE or SSE2 instructions in code generation. (x86 only)|  
|[/clr](../buildref/-clr--common-language-runtime-compilation-.md)|Produces an output file to run on the common language runtime.|  
|[/EH](../buildref/-eh--exception-handling-model-.md)|Specifies the model of exception handling.|  
|[/fp](../buildref/-fp--specify-floating-point-behavior-.md)|Specifies floating-point behavior.|  
|[/GA](../buildref/-ga--optimize-for-windows-application-.md)|Optimizes for Windows applications.|  
|[/Gd](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__cdecl` calling convention. (x86 only)|  
|[/Ge](../buildref/-ge--enable-stack-probes-.md)|Deprecated. Activates stack probes.|  
|[/GF](../buildref/-gf--eliminate-duplicate-strings-.md)|Enables string pooling.|  
|[/Gh](../buildref/-gh--enable-_penter-hook-function-.md)|Calls hook function `_penter`.|  
|[/GH](../buildref/-gh--enable-_pexit-hook-function-.md)|Calls hook function `_pexit`.|  
|[/GL](../buildref/-gl--whole-program-optimization-.md)|Enables whole program optimization.|  
|[/Gm](../buildref/-gm--enable-minimal-rebuild-.md)|Enables minimal rebuild.|  
|[/GR](../buildref/-gr--enable-run-time-type-information-.md)|Enables run-time type information (RTTI).|  
|[/Gr](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__fastcall` calling convention. (x86 only)|  
|[/GS](../buildref/-gs--buffer-security-check-.md)|Checks buffer security.|  
|[/Gs](../buildref/-gs--control-stack-checking-calls-.md)|Controls stack probes.|  
|[/GT](../buildref/-gt--support-fiber-safe-thread-local-storage-.md)|Supports fiber safety for data allocated by using static thread-local storage.|  
|[/guard:cf](../buildref/-guard--enable-control-flow-guard-.md)|Adds control flow guard security checks.|  
|[/Gv](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__vectorcall` calling convention. (x86 and x64 only)|  
|[/Gw](../buildref/-gw--optimize-global-data-.md)|Enables whole-program global data optimization.|  
|[/GX](../buildref/-gx--enable-exception-handling-.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../buildref/-eh--exception-handling-model-.md) instead.|  
|[/Gy](../buildref/-gy--enable-function-level-linking-.md)|Enables function-level linking.|  
|[/GZ](../buildref/-gz--enable-stack-frame-run-time-error-checking-.md)|Deprecated. Enables fast checks. (Same as [/RTC1](../buildref/-rtc--run-time-error-checks-.md))|  
|[/Gz](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__stdcall` calling convention. (x86 only)|  
|[/homeparams](../buildref/-homeparams--copy-register-parameters-to-stack-.md)|Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)] compilers (native and cross compile).|  
|[/hotpatch](../buildref/-hotpatch--create-hotpatchable-image-.md)|Creates a hotpatchable image.|  
|[/Qfast_transcendentals](../buildref/-qfast_transcendentals--force-fast-transcendentals-.md)|Generates fast transcendentals.|  
|[QIfist](../buildref/-qifist--suppress-_ftol-.md)|Deprecated. Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required. (x86 only)|  
|[/Qimprecise_fwaits](../buildref/-qimprecise_fwaits--remove-fwaits-inside-try-blocks-.md)|Removes `fwait` commands inside `try` blocks.|  
|[/Qpar](../buildref/-qpar--auto-parallelizer-.md)|Enables automatic parallelization of loops.|  
|[/Qpar-report](../buildref/-qpar-report--auto-parallelizer-reporting-level-.md)|Enables reporting levels for automatic parallelization.|  
|[/Qsafe_fp_loads](../buildref/-qsafe_fp_loads.md)|Uses integer move instructions for floating-point values and disables certain floating point load optimizations.|  
|[/Qvec-report (Auto-Vectorizer Reporting Level)](../buildref/-qvec-report--auto-vectorizer-reporting-level-.md)|Enables reporting levels for automatic vectorization.|  
|[/RTC](../buildref/-rtc--run-time-error-checks-.md)|Enables run-time error checking.|  
|[/volatile](../buildref/-volatile--volatile-keyword-interpretation-.md)|Selects how the volatile keyword is interpreted.|  
  
### Output Files  
  
|Option|Purpose|  
|------------|-------------|  
|[/doc](../buildref/-doc--process-documentation-comments---c-c---.md)|Processes documentation comments to an XML file.|  
|[/FA](../buildref/-fa---fa--listing-file-.md)|Configures an assembly listing file.|  
|[/Fa](../buildref/-fa---fa--listing-file-.md)|Creates an assembly listing file.|  
|[/Fd](../buildref/-fd--program-database-file-name-.md)|Renames program database file.|  
|[/Fe](../buildref/-fe--name-exe-file-.md)|Renames the executable file.|  
|[/Fi](../buildref/-fi--preprocess-output-file-name-.md)|Specifies the preprocessed output file name.|  
|[/Fm](../buildref/-fm--name-mapfile-.md)|Creates a mapfile.|  
|[/Fo](../buildref/-fo--object-file-name-.md)|Creates an object file.|  
|[/Fp](../buildref/-fp--name-.pch-file-.md)|Specifies a precompiled header file name.|  
|[/FR](../buildref/-fr---fr--create-.sbr-file-.md) [/Fr](../buildref/-fr---fr--create-.sbr-file-.md)|Generates browser files.|  
  
### Preprocessor  
  
|Option|Purpose|  
|------------|-------------|  
|[/AI](../buildref/-ai--specify-metadata-directories-.md)|Specifies a directory to search to resolve file references passed to the [#using](../c/sharpusing-directive--c---.md) directive.|  
|[/C](../buildref/-c--preserve-comments-during-preprocessing-.md)|Preserves comments during preprocessing.|  
|[/D](../buildref/-d--preprocessor-definitions-.md)|Defines constants and macros.|  
|[/E](../buildref/-e--preprocess-to-stdout-.md)|Copies preprocessor output to standard output.|  
|[/EP](../buildref/-ep--preprocess-to-stdout-without-sharpline-directives-.md)|Copies preprocessor output to standard output.|  
|[/FI](../buildref/-fi--name-forced-include-file-.md)|Preprocesses the specified include file.|  
|[/FU](../buildref/-fu--name-forced-sharpusing-file-.md)|Forces the use of a file name, as if it had been passed to the [#using](../c/sharpusing-directive--c---.md) directive.|  
|[/Fx](../buildref/-fx--merge-injected-code-.md)|Merges injected code with the source file.|  
|[/I](../buildref/-i--additional-include-directories-.md)|Searches a directory for include files.|  
|[/P](../buildref/-p--preprocess-to-a-file-.md)|Writes preprocessor output to a file.|  
|[/U](../buildref/-u---u--undefine-symbols-.md)|Removes a predefined macro.|  
|[/u](../buildref/-u---u--undefine-symbols-.md)|Removes all predefined macros.|  
|[/X](../buildref/-x--ignore-standard-include-paths-.md)|Ignores the standard include directory.|  
  
### Language  
  
|Option|Purpose|  
|------------|-------------|  
|[/openmp](../buildref/-openmp--enable-openmp-2.0-support-.md)|Enables [#pragma omp](../c/omp.md) in source code.|  
|[/vd](../buildref/-vd--disable-construction-displacements-.md)|Suppresses or enables hidden `vtordisp` class members.|  
|[/vmb](../buildref/-vmb---vmg--representation-method-.md)|Uses best base for pointers to members.|  
|[/vmg](../buildref/-vmb---vmg--representation-method-.md)|Uses full generality for pointers to members.|  
|[/vmm](../buildref/-vmm---vms---vmv--general-purpose-representation-.md)|Declares multiple inheritance.|  
|[/vms](../buildref/-vmm---vms---vmv--general-purpose-representation-.md)|Declares single inheritance.|  
|[/vmv](../buildref/-vmm---vms---vmv--general-purpose-representation-.md)|Declares virtual inheritance.|  
|[/Z7](../buildref/-z7---zi---zi--debug-information-format-.md)|Generates C 7.0–compatible debugging information.|  
|[/Za](../buildref/-za---ze--disable-language-extensions-.md)|Disables language extensions.|  
|[/Zc](../buildref/-zc--conformance-.md)|Specifies standard behavior under [/Ze](../buildref/-za---ze--disable-language-extensions-.md).|  
|[/Ze](../buildref/-za---ze--disable-language-extensions-.md)|Deprecated. Enables language extensions.|  
|[/ZI](../buildref/-z7---zi---zi--debug-information-format-.md)|Includes debug information in a program database compatible with Edit and Continue. (x86 only)|  
|[/Zi](../buildref/-z7---zi---zi--debug-information-format-.md)|Generates complete debugging information.|  
|[/Zl](../buildref/-zl--omit-default-library-name-.md)|Removes the default library name from the .obj file.|  
|[/Zp](../buildref/-zp--struct-member-alignment-.md) *n*|Packs structure members.|  
|[/Zs](../buildref/-zs--syntax-check-only-.md)|Checks syntax only.|  
|[/ZW](../buildref/-zw--windows-runtime-compilation-.md)|Produces an output file to run on the [!INCLUDE[wrt](../atl/includes/wrt_md.md)].|  
  
### Linking  
  
|Option|Purpose|  
|------------|-------------|  
|[/F](../buildref/-f--set-stack-size-.md)|Sets stack size.|  
|[/LD](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a dynamic-link library.|  
|[/LDd](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a debug dynamic-link library.|  
|[/link](../buildref/-link--pass-options-to-linker-.md)|Passes the specified option to LINK.|  
|[/LN](../buildref/-ln--create-msil-module-.md)|Creates an MSIL module.|  
|[/MD](../buildref/-md---mt---ld--use-run-time-library-.md)|Compiles to create a multithreaded DLL, by using MSVCRT.lib.|  
|[/MDd](../buildref/-md---mt---ld--use-run-time-library-.md)|Compiles to create a debug multithreaded DLL, by using MSVCRTD.lib.|  
|[/MT](../buildref/-md---mt---ld--use-run-time-library-.md)|Compiles to create a multithreaded executable file, by using LIBCMT.lib.|  
|[/MTd](../buildref/-md---mt---ld--use-run-time-library-.md)|Compiles to create a debug multithreaded executable file, by using LIBCMTD.lib.|  
  
### Precompiled Header  
  
|Option|Purpose|  
|------------|-------------|  
|[/Y-](../buildref/-y---ignore-precompiled-header-options-.md)|Ignores all other precompiled-header compiler options in the current build.|  
|[/Yc](../buildref/-yc--create-precompiled-header-file-.md)|Creates a precompiled header file.|  
|[/Yd](../buildref/-yd--place-debug-information-in-object-file-.md)|Places complete debugging information in all object files.|  
|[/Yu](../buildref/-yu--use-precompiled-header-file-.md)|Uses a precompiled header file during build.|  
  
### Miscellaneous  
  
|Option|Purpose|  
|------------|-------------|  
|[/?](../buildref/-help--compiler-command-line-help-.md)|Lists the compiler options.|  
|[@](../buildref/@--specify-a-compiler-response-file-.md)|Specifies a response file.|  
|[/analyze](../buildref/-analyze--code-analysis-.md)|Enables code analysis.|  
|[/bigobj](../buildref/-bigobj--increase-number-of-sections-in-.obj-file-.md)|Increases the number of addressable sections in an .obj file.|  
|[/c](../buildref/-c--compile-without-linking-.md)|Compiles without linking.|  
|[/cgthreads](../buildref/-cgthreads--code-generation-threads-.md)|Specifies number of cl.exe threads to use for optimization and code generation.|  
|[/errorReport](../buildref/-errorreport--report-internal-compiler-errors-.md)|Enables you to provide internal compiler error (ICE) information directly to the Visual C++ team.|  
|[/FC](../buildref/-fc--full-path-of-source-code-file-in-diagnostics-.md)|Displays the full path of source code files passed to cl.exe in diagnostic text.|  
|[/FS](../buildref/-fs--force-synchronous-pdb-writes-.md)|Forces writes to the program database (PDB) file to be serialized through MSPDBSRV.EXE.|  
|[/H](../buildref/-h--restrict-length-of-external-names-.md)|Deprecated. Restricts the length of external (public) names.|  
|[/HELP](../buildref/-help--compiler-command-line-help-.md)|Lists the compiler options.|  
|[/J](../buildref/-j--default-char-type-is-unsigned-.md)|Changes the default `char` type.|  
|[/kernel](../buildref/-kernel--create-kernel-mode-binary-.md)|The compiler and linker will create a binary that can be executed in the Windows kernel.|  
|[/MP](../buildref/-mp--build-with-multiple-processes-.md)|Builds multiple source files concurrently.|  
|[/nologo](../buildref/-nologo--suppress-startup-banner---c-c---.md)|Suppresses display of sign-on banner.|  
|[/sdl](../buildref/-sdl--enable-additional-security-checks-.md)|Enables additional security features and warnings.|  
|[/showIncludes](../buildref/-showincludes--list-include-files-.md)|Displays a list of all include files during compilation.|  
|[/Tc](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md) [/TC](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md)|Specifies a C source file.|  
|[/Tp](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md) [/TP](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md)|Specifies a C++ source file.|  
|[/V](../buildref/-v--version-number-.md)|Deprecated. Sets the version string.|  
|[/w](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Disables all warnings.|  
|[/W0, /W1, /W2, /W3, /W4](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Sets output warning level.|  
|[/w1, /w2, /w3, /w4](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Sets warning level for the specified warning.|  
|[/Wall](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Enables all warnings, including warnings that are disabled by default.|  
|[/wd](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Disables the specified warning.|  
|[/we](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Treats the specified warning as an error.|  
|[/WL](../buildref/-wl--enable-one-line-diagnostics-.md)|Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line.|  
|[/wo](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Displays the specified warning only once.|  
|[/Wp64](../buildref/-wp64--detect-64-bit-portability-issues-.md)|Obsolete. Detects 64-bit portability problems.|  
|[/Wv](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Disables warnings introduced by later versions of the compiler.|  
|[/WX](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Treats warnings as errors.|  
|[/Yd](../buildref/-yd--place-debug-information-in-object-file-.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../buildref/-z7---zi---zi--debug-information-format-.md) instead.|  
|[/Yl](../buildref/-yl--inject-pch-reference-for-debug-library-.md)|Injects a PCH reference when creating a debug library.|  
|[/Zm](../buildref/-zm--specify-precompiled-header-memory-allocation-limit-.md)|Specifies the precompiled header memory allocation limit.|  
  
### Deprecated and Removed Compiler Options  
  
|Option|Purpose|  
|------------|-------------|  
|[/clr:noAssembly](../buildref/-clr--common-language-runtime-compilation-.md)|Deprecated. Use [/LN (Create MSIL Module)](../buildref/-ln--create-msil-module-.md) instead.|  
|[/Fr](../buildref/-fr---fr--create-.sbr-file-.md)|Deprecated. Creates a browse information file without local variables.|  
|[/Ge](../buildref/-ge--enable-stack-probes-.md)|Deprecated. Activates stack probes. On by default.|  
|[/GX](../buildref/-gx--enable-exception-handling-.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../buildref/-eh--exception-handling-model-.md) instead.|  
|[/GZ](../buildref/-gz--enable-stack-frame-run-time-error-checking-.md)|Deprecated. Enables fast checks. Use [/RTC1](../buildref/-rtc--run-time-error-checks-.md) instead.|  
|[/H](../buildref/-h--restrict-length-of-external-names-.md)|Deprecated. Restricts the length of external (public) names.|  
|[/Og](../buildref/-og--global-optimizations-.md)|Deprecated. Uses global optimizations.|  
|[QIfist](../buildref/-qifist--suppress-_ftol-.md)|Deprecated. Once used to specify how to convert from a floating-point type to an integral type.|  
|[/V](../buildref/-v--version-number-.md)|Deprecated. Sets the .obj file version string.|  
|[/Yd](../buildref/-yd--place-debug-information-in-object-file-.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../buildref/-z7---zi---zi--debug-information-format-.md) instead.|  
|[/Zc:forScope-](../buildref/-zc-forscope--force-conformance-in-for-loop-scope-.md)|Deprecated. Disables conformance in for loop scope.|  
|[/Ze](../buildref/-za---ze--disable-language-extensions-.md)|Deprecated. Enables language extensions.|  
|[/Zg](../buildref/-zg--generate-function-prototypes-.md)|Removed in Visual C++ 2015. Generates function prototypes.|  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)