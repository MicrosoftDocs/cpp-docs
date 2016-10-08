---
title: "Compiler Options Listed by Category"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c4750dcf-dba0-4229-99b6-45cdecc11729
caps.latest.revision: 64
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Options Listed by Category
This article contains a categorical list of compiler options. For an alphabetical list, see [Compiler Options Listed Alphabetically](../VS_visualcpp/Compiler-Options-Listed-Alphabetically.md).  
  
### Optimization  
  
|Option|Purpose|  
|------------|-------------|  
|[/O1](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md)|Creates small code.|  
|[/O2](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md)|Creates fast code.|  
|[/Ob](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md)|Controls inline expansion.|  
|[/Od](../VS_visualcpp/-Od--Disable--Debug--.md)|Disables optimization.|  
|[/Og](../VS_visualcpp/-Og--Global-Optimizations-.md)|Deprecated. Uses global optimizations.|  
|[/Oi](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md)|Generates intrinsic functions.|  
|[/Os](../VS_visualcpp/-Os---Ot--Favor-Small-Code--Favor-Fast-Code-.md)|Favors small code.|  
|[/Ot](../VS_visualcpp/-Os---Ot--Favor-Small-Code--Favor-Fast-Code-.md)|Favors fast code.|  
|[/Ox](../VS_visualcpp/-Ox--Full-Optimization-.md)|Uses maximum optimization (/Ob2gity /Gs).|  
|[/Oy](../VS_visualcpp/-Oy--Frame-Pointer-Omission-.md)|Omits frame pointer. (x86 only)|  
|[/favor](../VS_visualcpp/-favor--Optimize-for-Architecture-Specifics-.md)|Produces code that is optimized for a specified architecture, or for a range of architectures.|  
  
### Code Generation  
  
|Option|Purpose|  
|------------|-------------|  
|[/arch](../VS_visualcpp/-arch--x86-.md)|Use SSE or SSE2 instructions in code generation. (x86 only)|  
|[/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md)|Produces an output file to run on the common language runtime.|  
|[/EH](../VS_visualcpp/-EH--Exception-Handling-Model-.md)|Specifies the model of exception handling.|  
|[/fp](../VS_visualcpp/-fp--Specify-Floating-Point-Behavior-.md)|Specifies floating-point behavior.|  
|[/GA](../VS_visualcpp/-GA--Optimize-for-Windows-Application-.md)|Optimizes for Windows applications.|  
|[/Gd](../VS_visualcpp/-Gd---Gr---Gv---Gz--Calling-Convention-.md)|Uses the `__cdecl` calling convention. (x86 only)|  
|[/Ge](../VS_visualcpp/-Ge--Enable-Stack-Probes-.md)|Deprecated. Activates stack probes.|  
|[/GF](../VS_visualcpp/-GF--Eliminate-Duplicate-Strings-.md)|Enables string pooling.|  
|[/Gh](../VS_visualcpp/-Gh--Enable-_penter-Hook-Function-.md)|Calls hook function `_penter`.|  
|[/GH](../VS_visualcpp/-GH--Enable-_pexit-Hook-Function-.md)|Calls hook function `_pexit`.|  
|[/GL](../VS_visualcpp/-GL--Whole-Program-Optimization-.md)|Enables whole program optimization.|  
|[/Gm](../VS_visualcpp/-Gm--Enable-Minimal-Rebuild-.md)|Enables minimal rebuild.|  
|[/GR](../VS_visualcpp/-GR--Enable-Run-Time-Type-Information-.md)|Enables run-time type information (RTTI).|  
|[/Gr](../VS_visualcpp/-Gd---Gr---Gv---Gz--Calling-Convention-.md)|Uses the `__fastcall` calling convention. (x86 only)|  
|[/GS](../VS_visualcpp/-GS--Buffer-Security-Check-.md)|Checks buffer security.|  
|[/Gs](../VS_visualcpp/-Gs--Control-Stack-Checking-Calls-.md)|Controls stack probes.|  
|[/GT](../VS_visualcpp/-GT--Support-Fiber-Safe-Thread-Local-Storage-.md)|Supports fiber safety for data allocated by using static thread-local storage.|  
|[/guard:cf](../VS_visualcpp/-guard--Enable-Control-Flow-Guard-.md)|Adds control flow guard security checks.|  
|[/Gv](../VS_visualcpp/-Gd---Gr---Gv---Gz--Calling-Convention-.md)|Uses the `__vectorcall` calling convention. (x86 and x64 only)|  
|[/Gw](../VS_visualcpp/-Gw--Optimize-Global-Data-.md)|Enables whole-program global data optimization.|  
|[/GX](../VS_visualcpp/-GX--Enable-Exception-Handling-.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../VS_visualcpp/-EH--Exception-Handling-Model-.md) instead.|  
|[/Gy](../VS_visualcpp/-Gy--Enable-Function-Level-Linking-.md)|Enables function-level linking.|  
|[/GZ](../VS_visualcpp/-GZ--Enable-Stack-Frame-Run-Time-Error-Checking-.md)|Deprecated. Enables fast checks. (Same as [/RTC1](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md))|  
|[/Gz](../VS_visualcpp/-Gd---Gr---Gv---Gz--Calling-Convention-.md)|Uses the `__stdcall` calling convention. (x86 only)|  
|[/homeparams](../VS_visualcpp/-homeparams--Copy-Register-Parameters-to-Stack-.md)|Forces parameters passed in registers to be written to their locations on the stack upon function entry. This compiler option is only for the x64 compilers (native and cross compile).|  
|[/hotpatch](../VS_visualcpp/-hotpatch--Create-Hotpatchable-Image-.md)|Creates a hotpatchable image.|  
|[/Qfast_transcendentals](../VS_visualcpp/-Qfast_transcendentals--Force-Fast-Transcendentals-.md)|Generates fast transcendentals.|  
|[QIfist](../VS_visualcpp/-QIfist--Suppress-_ftol-.md)|Deprecated. Suppresses the call of the helper function `_ftol` when a conversion from a floating-point type to an integral type is required. (x86 only)|  
|[/Qimprecise_fwaits](../VS_visualcpp/-Qimprecise_fwaits--Remove-fwaits-Inside-Try-Blocks-.md)|Removes `fwait` commands inside `try` blocks.|  
|[/Qpar](../VS_visualcpp/-Qpar--Auto-Parallelizer-.md)|Enables automatic parallelization of loops.|  
|[/Qpar-report](../VS_visualcpp/-Qpar-report--Auto-Parallelizer-Reporting-Level-.md)|Enables reporting levels for automatic parallelization.|  
|[/Qsafe_fp_loads](../VS_visualcpp/-Qsafe_fp_loads.md)|Uses integer move instructions for floating-point values and disables certain floating point load optimizations.|  
|[/Qvec-report (Auto-Vectorizer Reporting Level)](../VS_visualcpp/-Qvec-report--Auto-Vectorizer-Reporting-Level-.md)|Enables reporting levels for automatic vectorization.|  
|[/RTC](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md)|Enables run-time error checking.|  
|[/volatile](../VS_visualcpp/-volatile--volatile-Keyword-Interpretation-.md)|Selects how the volatile keyword is interpreted.|  
  
### Output Files  
  
|Option|Purpose|  
|------------|-------------|  
|[/doc](../VS_visualcpp/-doc--Process-Documentation-Comments---C-C---.md)|Processes documentation comments to an XML file.|  
|[/FA](../VS_visualcpp/-FA---Fa--Listing-File-.md)|Configures an assembly listing file.|  
|[/Fa](../VS_visualcpp/-FA---Fa--Listing-File-.md)|Creates an assembly listing file.|  
|[/Fd](../VS_visualcpp/-Fd--Program-Database-File-Name-.md)|Renames program database file.|  
|[/Fe](../VS_visualcpp/-Fe--Name-EXE-File-.md)|Renames the executable file.|  
|[/Fi](../VS_visualcpp/-Fi--Preprocess-Output-File-Name-.md)|Specifies the preprocessed output file name.|  
|[/Fm](../VS_visualcpp/-Fm--Name-Mapfile-.md)|Creates a mapfile.|  
|[/Fo](../VS_visualcpp/-Fo--Object-File-Name-.md)|Creates an object file.|  
|[/Fp](../VS_visualcpp/-Fp--Name-.Pch-File-.md)|Specifies a precompiled header file name.|  
|[/FR](../VS_visualcpp/-FR---Fr--Create-.Sbr-File-.md) [/Fr](../VS_visualcpp/-FR---Fr--Create-.Sbr-File-.md)|Generates browser files.|  
  
### Preprocessor  
  
|Option|Purpose|  
|------------|-------------|  
|[/AI](../VS_visualcpp/-AI--Specify-Metadata-Directories-.md)|Specifies a directory to search to resolve file references passed to the [#using](../VS_visualcpp/#using-Directive--C---.md) directive.|  
|[/C](../VS_visualcpp/-C--Preserve-Comments-During-Preprocessing-.md)|Preserves comments during preprocessing.|  
|[/D](../VS_visualcpp/-D--Preprocessor-Definitions-.md)|Defines constants and macros.|  
|[/E](../VS_visualcpp/-E--Preprocess-to-stdout-.md)|Copies preprocessor output to standard output.|  
|[/EP](../VS_visualcpp/-EP--Preprocess-to-stdout-Without-#line-Directives-.md)|Copies preprocessor output to standard output.|  
|[/FI](../VS_visualcpp/-FI--Name-Forced-Include-File-.md)|Preprocesses the specified include file.|  
|[/FU](../VS_visualcpp/-FU--Name-Forced-#using-File-.md)|Forces the use of a file name, as if it had been passed to the [#using](../VS_visualcpp/#using-Directive--C---.md) directive.|  
|[/Fx](../VS_visualcpp/-Fx--Merge-Injected-Code-.md)|Merges injected code with the source file.|  
|[/I](../VS_visualcpp/-I--Additional-Include-Directories-.md)|Searches a directory for include files.|  
|[/P](../VS_visualcpp/-P--Preprocess-to-a-File-.md)|Writes preprocessor output to a file.|  
|[/U](../VS_visualcpp/-U---u--Undefine-Symbols-.md)|Removes a predefined macro.|  
|[/u](../VS_visualcpp/-U---u--Undefine-Symbols-.md)|Removes all predefined macros.|  
|[/X](../VS_visualcpp/-X--Ignore-Standard-Include-Paths-.md)|Ignores the standard include directory.|  
  
### Language  
  
|Option|Purpose|  
|------------|-------------|  
|[/openmp](../VS_visualcpp/-openmp--Enable-OpenMP-2.0-Support-.md)|Enables [#pragma omp](../VS_visualcpp/omp.md) in source code.|  
|[/vd](../VS_visualcpp/-vd--Disable-Construction-Displacements-.md)|Suppresses or enables hidden `vtordisp` class members.|  
|[/vmb](../VS_visualcpp/-vmb---vmg--Representation-Method-.md)|Uses best base for pointers to members.|  
|[/vmg](../VS_visualcpp/-vmb---vmg--Representation-Method-.md)|Uses full generality for pointers to members.|  
|[/vmm](../VS_visualcpp/-vmm---vms---vmv--General-Purpose-Representation-.md)|Declares multiple inheritance.|  
|[/vms](../VS_visualcpp/-vmm---vms---vmv--General-Purpose-Representation-.md)|Declares single inheritance.|  
|[/vmv](../VS_visualcpp/-vmm---vms---vmv--General-Purpose-Representation-.md)|Declares virtual inheritance.|  
|[/Z7](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md)|Generates C 7.0–compatible debugging information.|  
|[/Za](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)|Disables language extensions.|  
|[/Zc](../VS_visualcpp/-Zc--Conformance-.md)|Specifies standard behavior under [/Ze](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md).|  
|[/Ze](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)|Deprecated. Enables language extensions.|  
|[/ZI](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md)|Includes debug information in a program database compatible with Edit and Continue. (x86 only)|  
|[/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md)|Generates complete debugging information.|  
|[/Zl](../VS_visualcpp/-Zl--Omit-Default-Library-Name-.md)|Removes the default library name from the .obj file.|  
|[/Zp](../VS_visualcpp/-Zp--Struct-Member-Alignment-.md) *n*|Packs structure members.|  
|[/Zs](../VS_visualcpp/-Zs--Syntax-Check-Only-.md)|Checks syntax only.|  
|[/ZW](../VS_visualcpp/-ZW--Windows-Runtime-Compilation-.md)|Produces an output file to run on the Windows Runtime.|  
  
### Linking  
  
|Option|Purpose|  
|------------|-------------|  
|[/F](../VS_visualcpp/-F--Set-Stack-Size-.md)|Sets stack size.|  
|[/LD](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)|Creates a dynamic-link library.|  
|[/LDd](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)|Creates a debug dynamic-link library.|  
|[/link](../VS_visualcpp/-link--Pass-Options-to-Linker-.md)|Passes the specified option to LINK.|  
|[/LN](../VS_visualcpp/-LN--Create-MSIL-Module-.md)|Creates an MSIL module.|  
|[/MD](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)|Compiles to create a multithreaded DLL, by using MSVCRT.lib.|  
|[/MDd](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)|Compiles to create a debug multithreaded DLL, by using MSVCRTD.lib.|  
|[/MT](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)|Compiles to create a multithreaded executable file, by using LIBCMT.lib.|  
|[/MTd](../VS_visualcpp/-MD---MT---LD--Use-Run-Time-Library-.md)|Compiles to create a debug multithreaded executable file, by using LIBCMTD.lib.|  
  
### Precompiled Header  
  
|Option|Purpose|  
|------------|-------------|  
|[/Y-](../VS_visualcpp/-Y---Ignore-Precompiled-Header-Options-.md)|Ignores all other precompiled-header compiler options in the current build.|  
|[/Yc](../VS_visualcpp/-Yc--Create-Precompiled-Header-File-.md)|Creates a precompiled header file.|  
|[/Yd](../VS_visualcpp/-Yd--Place-Debug-Information-in-Object-File-.md)|Places complete debugging information in all object files.|  
|[/Yu](../VS_visualcpp/-Yu--Use-Precompiled-Header-File-.md)|Uses a precompiled header file during build.|  
  
### Miscellaneous  
  
|Option|Purpose|  
|------------|-------------|  
|[/?](../VS_visualcpp/-HELP--Compiler-Command-Line-Help-.md)|Lists the compiler options.|  
|[@](../VS_visualcpp/@--Specify-a-Compiler-Response-File-.md)|Specifies a response file.|  
|[/analyze](../VS_visualcpp/-analyze--Code-Analysis-.md)|Enables code analysis.|  
|[/bigobj](../VS_visualcpp/-bigobj--Increase-Number-of-Sections-in-.Obj-file-.md)|Increases the number of addressable sections in an .obj file.|  
|[/c](../VS_visualcpp/-c--Compile-Without-Linking-.md)|Compiles without linking.|  
|[/cgthreads](../VS_visualcpp/-cgthreads--Code-Generation-Threads-.md)|Specifies number of cl.exe threads to use for optimization and code generation.|  
|[/errorReport](../VS_visualcpp/-errorReport--Report-Internal-Compiler-Errors-.md)|Enables you to provide internal compiler error (ICE) information directly to the Visual C++ team.|  
|[/FC](../VS_visualcpp/-FC--Full-Path-of-Source-Code-File-in-Diagnostics-.md)|Displays the full path of source code files passed to cl.exe in diagnostic text.|  
|[/FS](../VS_visualcpp/-FS--Force-Synchronous-PDB-Writes-.md)|Forces writes to the program database (PDB) file to be serialized through MSPDBSRV.EXE.|  
|[/H](../VS_visualcpp/-H--Restrict-Length-of-External-Names-.md)|Deprecated. Restricts the length of external (public) names.|  
|[/HELP](../VS_visualcpp/-HELP--Compiler-Command-Line-Help-.md)|Lists the compiler options.|  
|[/J](../VS_visualcpp/-J--Default-char-Type-Is-unsigned-.md)|Changes the default `char` type.|  
|[/kernel](../VS_visualcpp/-kernel--Create-Kernel-Mode-Binary-.md)|The compiler and linker will create a binary that can be executed in the Windows kernel.|  
|[/MP](../VS_visualcpp/-MP--Build-with-Multiple-Processes-.md)|Builds multiple source files concurrently.|  
|[/nologo](../VS_visualcpp/-nologo--Suppress-Startup-Banner---C-C---.md)|Suppresses display of sign-on banner.|  
|[/sdl](../VS_visualcpp/-sdl--Enable-Additional-Security-Checks-.md)|Enables additional security features and warnings.|  
|[/showIncludes](../VS_visualcpp/-showIncludes--List-Include-Files-.md)|Displays a list of all include files during compilation.|  
|[/Tc](../VS_visualcpp/-Tc---Tp---TC---TP--Specify-Source-File-Type-.md) [/TC](../VS_visualcpp/-Tc---Tp---TC---TP--Specify-Source-File-Type-.md)|Specifies a C source file.|  
|[/Tp](../VS_visualcpp/-Tc---Tp---TC---TP--Specify-Source-File-Type-.md) [/TP](../VS_visualcpp/-Tc---Tp---TC---TP--Specify-Source-File-Type-.md)|Specifies a C++ source file.|  
|[/V](../VS_visualcpp/-V--Version-Number-.md)|Deprecated. Sets the version string.|  
|[/w](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Disables all warnings.|  
|[/W0, /W1, /W2, /W3, /W4](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Sets output warning level.|  
|[/w1, /w2, /w3, /w4](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Sets warning level for the specified warning.|  
|[/Wall](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Enables all warnings, including warnings that are disabled by default.|  
|[/wd](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Disables the specified warning.|  
|[/we](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Treats the specified warning as an error.|  
|[/WL](../VS_visualcpp/-WL--Enable-One-Line-Diagnostics-.md)|Enables one-line diagnostics for error and warning messages when compiling C++ source code from the command line.|  
|[/wo](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Displays the specified warning only once.|  
|[/Wp64](../VS_visualcpp/-Wp64--Detect-64-Bit-Portability-Issues-.md)|Obsolete. Detects 64-bit portability problems.|  
|[/Wv](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Disables warnings introduced by later versions of the compiler.|  
|[/WX](../VS_visualcpp/-w---W0---W1---W2---W3---W4---w1---w2---w3---w4---Wall---wd---we---wo---Wv---WX--Warning-Level-.md)|Treats warnings as errors.|  
|[/Yd](../VS_visualcpp/-Yd--Place-Debug-Information-in-Object-File-.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) instead.|  
|[/Yl](../VS_visualcpp/-Yl--Inject-PCH-Reference-for-Debug-Library-.md)|Injects a PCH reference when creating a debug library.|  
|[/Zm](../VS_visualcpp/-Zm--Specify-Precompiled-Header-Memory-Allocation-Limit-.md)|Specifies the precompiled header memory allocation limit.|  
  
### Deprecated and Removed Compiler Options  
  
|Option|Purpose|  
|------------|-------------|  
|[/clr:noAssembly](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md)|Deprecated. Use [/LN (Create MSIL Module)](../VS_visualcpp/-LN--Create-MSIL-Module-.md) instead.|  
|[/Fr](../VS_visualcpp/-FR---Fr--Create-.Sbr-File-.md)|Deprecated. Creates a browse information file without local variables.|  
|[/Ge](../VS_visualcpp/-Ge--Enable-Stack-Probes-.md)|Deprecated. Activates stack probes. On by default.|  
|[/GX](../VS_visualcpp/-GX--Enable-Exception-Handling-.md)|Deprecated. Enables synchronous exception handling. Use [/EH](../VS_visualcpp/-EH--Exception-Handling-Model-.md) instead.|  
|[/GZ](../VS_visualcpp/-GZ--Enable-Stack-Frame-Run-Time-Error-Checking-.md)|Deprecated. Enables fast checks. Use [/RTC1](../VS_visualcpp/-RTC--Run-Time-Error-Checks-.md) instead.|  
|[/H](../VS_visualcpp/-H--Restrict-Length-of-External-Names-.md)|Deprecated. Restricts the length of external (public) names.|  
|[/Og](../VS_visualcpp/-Og--Global-Optimizations-.md)|Deprecated. Uses global optimizations.|  
|[QIfist](../VS_visualcpp/-QIfist--Suppress-_ftol-.md)|Deprecated. Once used to specify how to convert from a floating-point type to an integral type.|  
|[/V](../VS_visualcpp/-V--Version-Number-.md)|Deprecated. Sets the .obj file version string.|  
|[/Yd](../VS_visualcpp/-Yd--Place-Debug-Information-in-Object-File-.md)|Deprecated. Places complete debugging information in all object files. Use [/Zi](../VS_visualcpp/-Z7---Zi---ZI--Debug-Information-Format-.md) instead.|  
|[/Zc:forScope-](../VS_visualcpp/-Zc-forScope--Force-Conformance-in-for-Loop-Scope-.md)|Deprecated. Disables conformance in for loop scope.|  
|[/Ze](../VS_visualcpp/-Za---Ze--Disable-Language-Extensions-.md)|Deprecated. Enables language extensions.|  
|[/Zg](../VS_visualcpp/-Zg--Generate-Function-Prototypes-.md)|Removed in Visual C++ 2015. Generates function prototypes.|  
  
## See Also  
 [C/C++ Building Reference](../VS_visualcpp/C-C---Building-Reference.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)