---
title: "Compiler Options Listed Alphabetically"
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
ms.assetid: 98375dad-c9c6-4796-aaa6-fd573269d4ae
caps.latest.revision: 66
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
The following is a comprehensive alphabetical list of compiler options. For a categorical list, see the [Compiler Options Listed by Category](../buildref/compiler-options-listed-by-category.md).  
  
|Option|Purpose|  
|------------|-------------|  
|[@](../buildref/@--specify-a-compiler-response-file-.md)|Specifies a response file.|  
|[/?](../buildref/-help--compiler-command-line-help-.md)|Lists the compiler options.|  
|[/AI](../buildref/-ai--specify-metadata-directories-.md)|Specifies a directory to search to resolve file references passed to the [#using](../c/sharpusing-directive--c---.md) directive.|  
|[/analyze](../buildref/-analyze--code-analysis-.md)|Enable code analysis.|  
|[/arch](../buildref/-arch--minimum-cpu-architecture-.md)|Specifies the architecture for code generation.|  
|[/bigobj](../buildref/-bigobj--increase-number-of-sections-in-.obj-file-.md)|Increases the number of addressable sections in an .obj file.|  
|[/C](../buildref/-c--preserve-comments-during-preprocessing-.md)|Preserves comments during preprocessing.|  
|[/c](../buildref/-c--compile-without-linking-.md)|Compiles without linking.|  
|[/cgthreads](../buildref/-cgthreads--code-generation-threads-.md)|Specifies number of cl.exe threads to use for optimization and code generation.|  
|[/clr](../buildref/-clr--common-language-runtime-compilation-.md)|Produces an output file to run on the common language runtime.|  
|[/D](../buildref/-d--preprocessor-definitions-.md)|Defines constants and macros.|  
|[/doc](../buildref/-doc--process-documentation-comments---c-c---.md)|Process documentation comments to an XML file.|  
|[/E](../buildref/-e--preprocess-to-stdout-.md)|Copies preprocessor output to standard output.|  
|[/EH](../buildref/-eh--exception-handling-model-.md)|Specifies the model of exception handling.|  
|[/EP](../buildref/-ep--preprocess-to-stdout-without-sharpline-directives-.md)|Copies preprocessor output to standard output.|  
|[/errorReport](../buildref/-errorreport--report-internal-compiler-errors-.md)|Allows you to provide internal compiler error (ICE) information directly to the Visual C++ team.|  
|[/F](../buildref/-f--set-stack-size-.md)|Sets stack size.|  
|[/favor](../buildref/-favor--optimize-for-architecture-specifics-.md)|Produces code that is optimized for a specific [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)] architecture or for the specifics of micro-architectures in both the AMD64 and Extended Memory 64 Technology (EM64T) architectures.|  
|[/FA](../buildref/-fa---fa--listing-file-.md)|Creates a listing file.|  
|[/Fa](../buildref/-fa---fa--listing-file-.md)|Sets the listing file name.|  
|[/FC](../buildref/-fc--full-path-of-source-code-file-in-diagnostics-.md)|Display full path of source code files passed to cl.exe in diagnostic text.|  
|[/Fd](../buildref/-fd--program-database-file-name-.md)|Renames program database file.|  
|[/Fe](../buildref/-fe--name-exe-file-.md)|Renames the executable file.|  
|[/FI](../buildref/-fi--name-forced-include-file-.md)|Preprocesses the specified include file.|  
|[/Fi](../buildref/-fi--preprocess-output-file-name-.md)|Sets the preprocessed output file name.|  
|[/Fm](../buildref/-fm--name-mapfile-.md)|Creates a mapfile.|  
|[/Fo](../buildref/-fo--object-file-name-.md)|Creates an object file.|  
|[/fp](../buildref/-fp--specify-floating-point-behavior-.md)|Specify floating-point behavior.|  
|[/Fp](../buildref/-fp--name-.pch-file-.md)|Specifies a precompiled header file name.|  
|[/FR](../buildref/-fr---fr--create-.sbr-file-.md)<br /><br /> [/Fr](../buildref/-fr---fr--create-.sbr-file-.md)|Generates browser files. **/Fr** is deprecated.|  
|[/FS](../buildref/-fs--force-synchronous-pdb-writes-.md)|Forces writes to the program database (PDB) file to be serialized through MSPDBSRV.EXE.|  
|[/FU](../buildref/-fu--name-forced-sharpusing-file-.md)|Forces the use of a file name as if it had been passed to the [#using](../c/sharpusing-directive--c---.md) directive.|  
|[/Fx](../buildref/-fx--merge-injected-code-.md)|Merges injected code with source file.|  
|[/GA](../buildref/-ga--optimize-for-windows-application-.md)|Optimizes code for Windows application.|  
|[/Gd](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__cdecl` calling convention (x86 only).|  
|[/Ge](../buildref/-ge--enable-stack-probes-.md)|Deprecated. Activates stack probes.|  
|[/GF](../buildref/-gf--eliminate-duplicate-strings-.md)|Enables string pooling.|  
|[/GH](../buildref/-gh--enable-_pexit-hook-function-.md)|Calls hook function `_pexit`.|  
|[/Gh](../buildref/-gh--enable-_penter-hook-function-.md)|Calls hook function `_penter`.|  
|[/GL](../buildref/-gl--whole-program-optimization-.md)|Enables whole program optimization.|  
|[/Gm](../buildref/-gm--enable-minimal-rebuild-.md)|Enables minimal rebuild.|  
|[/GR](../buildref/-gr--enable-run-time-type-information-.md)|Enables run-time type information (RTTI).|  
|[/Gr](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__fastcall` calling convention (x86 only).|  
|[/GS](../buildref/-gs--buffer-security-check-.md)|Buffers security check.|  
|[/Gs](../buildref/-gs--control-stack-checking-calls-.md)|Controls stack probes.|  
|[/GT](../buildref/-gt--support-fiber-safe-thread-local-storage-.md)|Supports fiber safety for data allocated using static thread-local storage.|  
|[/guard:cf](../buildref/-guard--enable-control-flow-guard-.md)|Adds control flow guard security checks.|  
|[/Gv](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__vectorcall` calling convention. (x86 and x64 only)|  
|[/Gw](../buildref/-gw--optimize-global-data-.md)|Enables whole-program global data optimization.|  
|[/GX](../buildref/-gx--enable-exception-handling-.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../buildref/-eh--exception-handling-model-.md) instead.|  
|[/Gy](../buildref/-gy--enable-function-level-linking-.md)|Enables function-level linking.|  
|[/GZ](../buildref/-gz--enable-stack-frame-run-time-error-checking-.md)|Deprecated. Same as [/RTC1](../buildref/-rtc--run-time-error-checks-.md).|  
|[/Gz](../buildref/-gd---gr---gv---gz--calling-convention-.md)|Uses the `__stdcall` calling convention (x86 only).|  
|[/H](../buildref/-h--restrict-length-of-external-names-.md)|Deprecated. Restricts the length of external (public) names.|  
|[/HELP](../buildref/-help--compiler-command-line-help-.md)|Lists the compiler options.|  
|[/homeparams](../buildref/-homeparams--copy-register-parameters-to-stack-.md)|Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the [!INCLUDE[vcprx64](../build/includes/vcprx64_md.md)] compilers (native and cross compile).|  
|[/hotpatch](../buildref/-hotpatch--create-hotpatchable-image-.md)|Creates a hotpatchable image.|  
|[/I](../buildref/-i--additional-include-directories-.md)|Searches a directory for include files.|  
|[/J](../buildref/-j--default-char-type-is-unsigned-.md)|Changes the default `char` type.|  
|[/kernel](../buildref/-kernel--create-kernel-mode-binary-.md)|The compiler and linker will create a binary that can be executed in the Windows kernel.|  
|[/LD](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a dynamic-link library.|  
|[/LDd](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a debug dynamic-link library.|  
|[/link](../buildref/-link--pass-options-to-linker-.md)|Passes the specified option to LINK.|  
|[/LN](../buildref/-ln--create-msil-module-.md)|Creates an MSIL module.|  
|[/MD](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a multithreaded DLL using MSVCRT.lib.|  
|[/MDd](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a debug multithreaded DLL using MSVCRTD.lib.|  
|[/MP](../buildref/-mp--build-with-multiple-processes-.md)|Compiles multiple source files by using multiple processes.|  
|[/MT](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a multithreaded executable file using LIBCMT.lib.|  
|[/MTd](../buildref/-md---mt---ld--use-run-time-library-.md)|Creates a debug multithreaded executable file using LIBCMTD.lib.|  
|[/nologo](../buildref/-nologo--suppress-startup-banner---c-c---.md)|Suppresses display of sign-on banner.|  
|[/O1](../buildref/-o1---o2--minimize-size--maximize-speed-.md)|Creates small code.|  
|[/O2](../buildref/-o1---o2--minimize-size--maximize-speed-.md)|Creates fast code.|  
|[/Ob](../buildref/-ob--inline-function-expansion-.md)|Controls inline expansion.|  
|[/Od](../buildref/-od--disable--debug--.md)|Disables optimization.|  
|[/Og](../buildref/-og--global-optimizations-.md)|Deprecated. Uses global optimizations.|  
|[/Oi](../buildref/-oi--generate-intrinsic-functions-.md)|Generates intrinsic functions.|  
|[/openmp](../buildref/-openmp--enable-openmp-2.0-support-.md)|Enables [#pragma omp](../c/omp.md) in source code.|  
|[/Os](../buildref/-os---ot--favor-small-code--favor-fast-code-.md)|Favors small code.|  
|[/Ot](../buildref/-os---ot--favor-small-code--favor-fast-code-.md)|Favors fast code.|  
|[/Ox](../buildref/-ox--full-optimization-.md)|Uses maximum optimization (/Ob2gity /Gs).|  
|[/Oy](../buildref/-oy--frame-pointer-omission-.md)|Omits frame pointer (x86 only).|  
|[/P](../buildref/-p--preprocess-to-a-file-.md)|Writes preprocessor output to a file.|  
|[/Qfast_transcendentals](../buildref/-qfast_transcendentals--force-fast-transcendentals-.md)|Generates fast transcendentals.|  
|[/QIfist](../buildref/-qifist--suppress-_ftol-.md)|Deprecated. Suppresses `_ftol` when a conversion from a floating-point type to an integral type is required (x86 only).|  
|[/Qimprecise_fwaits](../buildref/-qimprecise_fwaits--remove-fwaits-inside-try-blocks-.md)|Removes `fwait` commands inside `try` blocks.|  
|[/Qpar (Auto-Parallelizer)](../buildref/-qpar--auto-parallelizer-.md)|Enables automatic parallelization of loops that are marked with the [#pragma loop()](../c/loop.md) directive.|  
|[/Qsafe_fp_loads](../buildref/-qsafe_fp_loads.md)|Uses integer move instructions for floating-point values and disables certain floating point load optimizations.|  
|[/Qvec-report (Auto-Vectorizer Reporting Level)](../buildref/-qvec-report--auto-vectorizer-reporting-level-.md)|Enables reporting levels for automatic vectorization.|  
|[/RTC](../buildref/-rtc--run-time-error-checks-.md)|Enables run-time error checking.|  
|[/sdl](../buildref/-sdl--enable-additional-security-checks-.md)|Enables additional security features and warnings.|  
|[/showIncludes](../buildref/-showincludes--list-include-files-.md)|Displays a list of include files during compilation.|  
|[/Tc](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md)<br /><br /> [/TC](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md)|Specifies a C source file.|  
|[/Tp](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md)<br /><br /> [/TP](../buildref/-tc---tp---tc---tp--specify-source-file-type-.md)|Specifies a C++ source file.|  
|[/U](../buildref/-u---u--undefine-symbols-.md)|Removes a predefined macro.|  
|[/u](../buildref/-u---u--undefine-symbols-.md)|Removes all predefined macros.|  
|[/V](../buildref/-v--version-number-.md)|Deprecated. Sets the .obj file version string.|  
|[/vd](../buildref/-vd--disable-construction-displacements-.md)|Suppresses or enables hidden vtordisp class members.|  
|[/vmb](../buildref/-vmb---vmg--representation-method-.md)|Uses best base for pointers to members.|  
|[/vmg](../buildref/-vmb---vmg--representation-method-.md)|Uses full generality for pointers to members.|  
|[/vmm](../buildref/-vmm---vms---vmv--general-purpose-representation-.md)|Declares multiple inheritance.|  
|[/vms](../buildref/-vmm---vms---vmv--general-purpose-representation-.md)|Declares single inheritance.|  
|[/vmv](../buildref/-vmm---vms---vmv--general-purpose-representation-.md)|Declares virtual inheritance.|  
|[/volatile](../buildref/-volatile--volatile-keyword-interpretation-.md)|Selects how the volatile keyword is interpreted.|  
|[/w](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Disables all warnings.|  
|[/W0, /W1, /W2, /W3, /W4](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Sets which warning level to output.|  
|[/w1, /w2, /w3, /w4](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Sets the warning level for the specified warning.|  
|[/Wall](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Enables all warnings, including warnings that are disabled by default.|  
|[/wd](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Disables the specified warning.|  
|[/we](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Treats the specified warning as an error.|  
|[/WL](../buildref/-wl--enable-one-line-diagnostics-.md)|Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line.|  
|[/wo](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Displays the specified warning only once.|  
|[/Wp64](../buildref/-wp64--detect-64-bit-portability-issues-.md)|Obsolete. Detects 64-bit portability problems.|  
|[/Wv](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Displays no warnings introduced after the specified version of the compiler.|  
|[/WX](../buildref/-w---w0---w1---w2---w3---w4---w1---w2---w3---w4---wall---wd---we---wo---wv---wx--warning-level-.md)|Treats all warnings as errors.|  
|[/X](../buildref/-x--ignore-standard-include-paths-.md)|Ignores the standard include directory.|  
|[/Y-](../buildref/-y---ignore-precompiled-header-options-.md)|Ignores all other precompiled-header compiler options in the current build.|  
|[/Yc](../buildref/-yc--create-precompiled-header-file-.md)|Creates a precompiled header file.|  
|[/Yd](../buildref/-yd--place-debug-information-in-object-file-.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../buildref/-z7---zi---zi--debug-information-format-.md) instead.|  
|[/Yl](../buildref/-yl--inject-pch-reference-for-debug-library-.md)|Injects a PCH reference when creating a debug library|  
|[/Yu](../buildref/-yu--use-precompiled-header-file-.md)|Uses a precompiled header file during build.|  
|[/Z7](../buildref/-z7---zi---zi--debug-information-format-.md)|Generates C 7.0–compatible debugging information.|  
|[/Za](../buildref/-za---ze--disable-language-extensions-.md)|Disables language extensions.|  
|[/Zc](../buildref/-zc--conformance-.md)|Specifies standard behavior under [/Ze](../buildref/-za---ze--disable-language-extensions-.md).[/Za, /Ze (Disable Language Extensions)](../buildref/-za---ze--disable-language-extensions-.md)|  
|[/Ze](../buildref/-za---ze--disable-language-extensions-.md)|Deprecated. Enables language extensions.|  
|[/Zg](../buildref/-zg--generate-function-prototypes-.md)|Removed in Visual C++ 2015. Generates function prototypes.|  
|[/ZI](../buildref/-z7---zi---zi--debug-information-format-.md)|Includes debug information in a program database compatible with Edit and Continue.|  
|[/Zi](../buildref/-z7---zi---zi--debug-information-format-.md)|Generates complete debugging information.|  
|[/Zl](../buildref/-zl--omit-default-library-name-.md)|Removes default library name from .obj file (x86 only).|  
|[/Zm](../buildref/-zm--specify-precompiled-header-memory-allocation-limit-.md)|Specifies the precompiled header memory allocation limit.|  
|[/Zp](../buildref/-zp--struct-member-alignment-.md)|Packs structure members.|  
|[/Zs](../buildref/-zs--syntax-check-only-.md)|Checks syntax only.|  
|[/ZW](../buildref/-zw--windows-runtime-compilation-.md)|Produces an output file to run on the [!INCLUDE[wrt](../atl/includes/wrt_md.md)].|  
  
## See Also  
 [C/C++ Building Reference](../buildref/c-c---building-reference.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)