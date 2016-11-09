---
title: "What&#39;s New for Visual C++ in Visual Studio 2015 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 1cc09fad-85a2-43c2-b022-bb99f5fe0ad7
caps.latest.revision: 101
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# What&#39;s New for Visual C++ in Visual Studio 2015
In Visual Studio 2015, the C++ compiler and standard library have been updated with enhanced support for C++11 and initial support for certain C++14 features. They also include preliminary support for certain features expected to be in the C++17 standard.  
  
 We have also added project templates for cross-platform multi-device development on [Android and iOS](/visual-studio/cross-platform/visual-cpp-for-cross-platform-mobile-development), made various [diagnostic](#BK_Diagnostics) and [productivity](#BK_IDE) improvements, and significantly improved [build times](#BK_FasterBuildTimes).  
  
> [!WARNING]
>  In Visual Studio 2015, Visual C++ is not installed by default. When installing, be sure to choose **Custom** installation and then choose the C++ components you require. Or, if Visual Studio is already installed, choose **File &#124; New &#124; Project &#124; C++** and you will be prompted to install the necessary components.  
  
 For information about other additions in Visual Studio 2015, see [What's New in Visual Studio 2015](/visual-studio/ide/what-s-new-in-visual-studio-2015).  
  
 In this topic:  
  
1.  [Compiler](#BK_Compiler)  
  
2.  [C++ Standard Library](#BK_CppStdLib)  
  
3.  [C Runtime Library](#BK_CRT)  
  
4.  [Faster Build Times](#BK_FasterBuildTimes)  
  
5.  [Performance and code quality](#BK_PerfCodeQuality)  
  
6.  [Productivity, Debugging, and Diagnostics](#BK_IDE)  
  
    1.  [Single-file IntelliSense](#BK_SingleFileIntelliSense)  
  
    2.  [Refactoring](#BK_Refactoring)  
  
    3.  [Program database enhancements](#BK_PDB)  
  
    4.  [Diagnostics](#BK_Diagnostics)  
  
7.  [Targeting Windows 10](#BK_Win10)  
  
8.  [Graphics diagnostics](#BK_GraphicsDiagnostics)  
  
9. [New GPU Usage tool](#BK_GPUUsage)  
  
10. [New MFC Features](#BK_MFC)  
  
## ISO C/C++ Standards Support  
  
###  <a name="BK_Compiler"></a> Compiler  
  
-   **Resumable Functions (resume/await)** The resume and await keywords provide language-level support for asynchronous programming and enables resumable functions. Currently, this feature is still experimental and is only available for x64 targets. **(Proposed for C++17 [N3858])**  
  
-   **Generic (Polymorphic) Lambda Expressions** Lambda function parameter types can now be specified using auto; the compiler interprets auto in this context to mean that the closure's function call operator is a member function template and that each use of auto in the lambda expression corresponds to a distinct template type parameter. **(C++14 )**  
  
-   **Generalized Lambda Capture Expressions** Also known as init-capture. The result of an arbitrary expression can now be assigned to a variable in the capture clause of a lambda. This enables move-only types to be captured by value and enables a lambda expression to define arbitrary data members in its closure object. **(C++14)**  
  
-   **Binary Literals** Binary literals are now supported. Such literals are prefixed with 0B or 0b and consist of only the digits 0 and 1. **(C++14)**  
  
-   **Return Type Deduction** The return type of normal functions can now be deduced, including functions with multiple return statements and recursive functions. Such function definitions are preceded by the auto keyword as in function definitions with a trailing return type, but the trailing return type is omitted. **(C++14)**  
  
-   **decltype(auto)** Type deduction using the auto keyword for initializing expressions strips ref-qualifiers and top-level cv-qualifiers from the expression. decltype(auto) preserves ref- and cv-qualifiers and can now be used anywhere that auto can be used, except to introduce a function with an inferred or trailing return type. **(C++14)**  
  
-   **Implicit Generation of Move Special Member Functions** Move constructors and move assignment operators are now implicitly generated when conditions allow, thus bringing the compiler into full conformance with C++11 rvalue references. **(C++11)**  
  
-   **Inheriting Constructors** A derived class can now specify that it will inherit the constructors of its base class, Base, by including the statement using Base::Base; in its definition. A deriving class can only inherit all the constructors of its base class, there is no way to inherit only specific base constructors. A deriving class cannot inherit from multiple base classes if they have constructors that have an identical signature, nor can the deriving class define a constructor that has an identical signature to any of its inherited constructors. **(C++11)**  
  
-   **Alignment Query and Control** The alignment of a variable can be queried by using the alignof() operator and controlled by using the alignas() specifier. alignof() returns the byte boundary on which instances of the type must be allocated; for references it returns the alignment of the referenced type, and for arrays it returns the alignment of the element type. alignas() controls the alignment of a variable; it takes a constant or a type, where a type is shorthand for alignas(alignof(type)). **(C++11)**  
  
-   **sized deallocation** the globals  `void operator delete(void *, std::size_t) noexcept` and `void operator delete[](void *, std::size_t) noexcept` can now be overloaded  
  
-   **Extended sizeof** The size of a class or struct member variable can now be determined without an instance of the class or struct by using sizeof().**(C++11)**  
  
-   **Attributes** provide a way to extend syntax on functions, variables, types and other program elements without defining new keywords.**(C++11)**  
  
-   **constexpr** Create compile-time constant variables, functions and user-defined types. **(C++11)**  
  
-   **User-Defined Literals (UDLs)** Meaningful suffixes can now be appended to numeric and string literals to give them specific semantics. The compiler interprets suffixed literals as calls to the appropriate UDL-operator. **(C++11)**  
  
-   **Thread-Safe "Magic" Statics** Static local variables are now initialized in a thread-safe way, eliminating the need for manual synchronization. Only initialization is thread-safe, use of static local variables by multiple threads must still be manually synchronized. The thread-safe statics feature can be disabled by using the /Zc:threadSafeInit- flag to avoid taking a dependency on the CRT. **(C++11)**  
  
-   **Thread-Local Storage** Use the thread_local keyword to declare that an independent object should be created for each thread. **(C++11)**  
  
-   **noexcept** The noexcept operator can now be used to check whether an expression might throw an exception. The noexcept specifier can now be used to specify that a function does not throw exceptions. **(C++11)**  
  
-   **Inline Namespaces** A namespace can now be specified as inline to hoist its contents into the enclosing namespace. Inline namespaces can be used to create versioned libraries that expose their most-recent version by default, while still making previous API versions available explicitly. **(C++11)**  
  
-   **Unrestricted Unions** A Union type can now contain types with non-trivial constructors. Constructors for such unions must be defined. **(C++11)**  
  
-   **New Character Types and Unicode Literals** Character and string literals in UTF-8, UTF-16, and UTF-32 are now supported and new character types char16_t and char32_t have been introduced. Character literals can be prefixed with u8 (UTF-8), u (UTF-16), or U (UTF-32) as in U'a', while string literals can additionally be prefixed with raw-string equivalents u8R (UTF-8 raw-string), uR (UTF-16 raw-string), or UR (UTF-32 raw-string). Universal character names can be freely used in unicode literals as in u'\u00EF', u8"\u00EF is i", and u"\U000000ef is I". **(C++11)**  
  
-   **digit separators** single quotes can be inserted at regular intervals to make long numerical literals easier to read:  `int x = 1'000'000;`**C++14**  
  
-   **__func\_\_** The predefined identifier __func\_\_ is implicitly defined as a string that contains the unqualified and unadorned name of the enclosing function.  
  
-   **__restrict \_\_**restrict can now be applied to references.  
  
###  <a name="BK_CppStdLib"></a> C++ Standard Library  
  
-   **User-Defined Literals (UDLs) for Standard Library Types** The \<chrono>, \<string>, and \<complex> headers now provide UDL-operators for your convenience. For example, 123ms means std::chrono::milliseconds(123), "hello"s means std::string("hello"), and 3.14i means std::complex(0.0, 3.14).  
  
-   **Null Forward Iterators** The standard library now allows the creation of forward iterators that do not refer to a container instance. Such iterators are value-initialized and compare equal for a particular container type. Comparing a value-initialized iterator to one that is not value-initialized is undefined. **(C++14)**  
  
-   **quoted()** The standard library now supports the quoted() function to make working with quoted string values and I/O easier. With quoted(), an entire quoted string is treated as a single entity (as strings of non-whitespace characters are in I/O streams); in addition, escape sequences are preserved through I/O operations. **(C++14)**  
  
-   **Heterogeneous Associative Lookup** The standard library now supports heterogeneous lookup functions for associative containers. Such functions enable lookup by types other than the key_type as long as the type is comparable to key_type. **(C++14)**  
  
-   **Compile-Time Integer Sequences** The standard library now supports the integer_sequence type that represents a sequence of integer values that can be evaluated at compile time to make working with parameter packs easier and to simplify certain template programming patterns. **(C++14)**  
  
-   **exchange()** The standard library now supports the std::exchange() utility function to assign a new value to an object and returns its old value. For complex types, exchange() avoids copying the old value when a move constructor is available, avoids copying the new value if it’s a temporary or is moved, and accepts any type as the new value taking advantage of any converting assignment operator. **(C++14)**  
  
-   **Dual-Range equal(), is_permutation(), mismatch()** The standard library now supports overloads for std::equal(), std::is_permutation(), and std::mismatch() that accept two ranges. These overloads check that the two sequences are the same length, which removes this responsibility from the calling code; for sequences that don't support the requirements of a random iterator, these overloads check the length while comparing elements, which is more efficient. **(C++14)**  
  
-   **get\<T>()** The standard library now supports the get\<T>() template function to allow tuple elements to be addressed by their type. If a tuple contains two or more elements of the same type get\<T>() the tuple can't be addressed by that type, but other uniquely-typed elements can still be addressed. **(C++14)**  
  
-   **tuple_element_t** The standard library now supports the tuple_element_t\<I, T> type alias which is an alias for typename tuple_element\<I, T>::type. This provides some convenience for template programmers, similar to the other metafunction type aliases in <type_traits>. **(C++14)**  
  
-   **File System "V3" Technical Specification** The included implementation of the File System Technical Specification has been updated to version 3 of the specification. [N3940]  
  
-   **Minimal Allocators** The standard library now supports the minimal allocator interface throughout; notable fixes include std::function, shared_ptr, allocate_shared(), and basic_string. **(C++11)**  
  
-   **\<chrono>** The chrono types high_resolution_clock and steady_clock have been fixed. **(C++11)**  
  
-   **N2761 Atomics in signal handlers (C++11)**  
  
-   **N3922 New rules for auto with braced-init-lists. (C++17)**  
  
-   **N4051 typename in template template-parameters, (C++17)**  
  
-   **N4259 std::uncaught_exceptions()**  
  
-   **N4266 Attributes for namespaces and enumerators**  
  
-   **N4267 u8 character literals**  
  
###  <a name="BK_CRT"></a> C Runtime Library  
 **CRT Library Refactoring**The CRT has been refactored into two parts. The **Universal CRT** contains the code that implements the standard C runtime library. The vcruntime140.dll (or .lib) contains version-specific code for process start-up and exception handling. The Universal CRT has a stable API, so it can be used without changing the version number in each release of Visual Studio. It's now a Windows operating system component that is serviced by Windows Update. It's already installed in Windows 10. By using the Visual C++ Redistributable Package (vcredist), you can distribute it together with your applications for earlier versions of Windows.  
  
 **C99 Conformance** [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] fully implements the C99 Standard Library, with the exception of any library features that depend on compiler features not yet supported by the Visual C++ compiler (for example, \<tgmath.h> is not implemented).  
  
 **Performance** Much of the library has been refactored to streamline and simplify header file macro usage. This speeds up compilation and IntelliSense, and improves readability. In addition, many stdio functions have been rewritten for both standards compliance and improved performance.  
  
### Breaking Changes  
 This improved support for ISO C/C++ standards may require changes to existing code so that it conforms to C++11 and C99, and compiles correctly in Visual Studio 2015.  For more information, see [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
 The concurrency::task class and related types in ppltasks.h are no longer based on the ConcRT runtime. They now use the Windows Threadpool as their scheduler. This only imacts code that uses ConcRT synchronization primitives inside concurrency::task operations. Such code should use the Windows synchronization primitives instead.  
  
 The synchronization primitives in the STL are also no longer based on ConcRT. To avoid deadlocks, do not use STL synchronization primitives inside functions such **concurrency::parallel_for** or with the PPL asynchronous agent types.  
  
##  <a name="BK_FasterBuildTimes"></a> Faster Build Times  
  
-   **Incremental Link-Time Code Generation (LTCG)** Incremental linking can now be used together with LTCG to decrease link times of applications using LTCG. Activate this feature by using the /LTCG:incremental and /LTCG:incremental_rebuild linker switches. \  
  
-   **Incremental Linking for Static Libraries** Changes to static libraries that are referenced by other code modules now link incrementally.  
  
-   **/Debug:FastLink** substantially decreases link times by using new PDB creation techniques.  
  
-   Algorithmic improvements have been made to the linker to decrease link times.  
  
-   Improvements have been made that will allow building template heavy code faster.  
  
-   **Fast Profile Guided Optimization (PGO) Instrumentation** A new, lightweight instrumentation mode for games and real-time systems has been introduced in PGO. Together with other new features made available through the /GENPROFILE and /FASTGETPROFILE linker switches you can now balance code quality and build speed when using PGO.  
  
-   **Object file size reduction** Compiler and C++ standard library enhancements result in significantly smaller object files and static libraries. These enhancements do not affect the size of dynamically-linked libraries (DLLs) or executables (EXEs) because the redundant code has historically been removed by the linker.  
  
##  <a name="BK_PerfCodeQuality"></a> Performance and code quality  
  
-   **Improvements to automatic vectorization** Now includes vectorization of control flow (if-then-else), vectorization when compiling under /O1 (Minimize size), and improvements to overall vector code quality, including support for the Parallel STL, vectorizing more range-based for loops, and support for #pragma loop(ivdep).  
  
-   **Improvements to scalar optimization** Better code generation of bit-test operations, control flow merging and optimizations (loop-if switching), and other scalar optimizations (for example, better code generation for std::min and std::max).  
  
-   **Profile Guided Optimization (PGO)** A number of enhancements have been made to PGO, including improved reference sets, better data layout capabilities, and the ability to reuse previously made inlining, speed vs. size, and layout decisions.  
  
##  <a name="BK_IDE"></a> Productivity, Debugging, and Diagnostics  
  
###  <a name="BK_SingleFileIntelliSense"></a> Single-file IntelliSense  
 You now get IntelliSense when you open a single source code file in the editor, without having to open any project file.  
  
###  <a name="BK_Refactoring"></a> Refactoring  
 We have added refactoring support for C++ with the following features:  
  
-   **Rename Symbol** Changes all occurrences of a symbol to a new name.  
  
-   **Function Extraction** Move selected code into its own function. This refactoring is available as an extension to Visual Studio on the Visual Studio Gallery.  
  
-   **Implement Pure Virtuals** Generates function definitions for pure virtual functions inherited by a class or structure. Multiple and recursive inheritance are supported. Activate this refactoring from the inheriting class definition to implement all inherited pure virtual functions, or from a base class specifier to implement pure virtual functions from that base class only.  
  
-   **Create Declaration or Definition** Generates a declaration from an existing definition or a default definition from an existing declaration. Access this refactoring from the existing declaration or definition, or from the LightBulb indicator.  
  
-   **Move Function Definition** Moves the body of a function between the source code and header files. Activate this refactoring from the function's signature.  
  
-   **Convert to Raw String Literal** Converts a string containing escape sequences into a raw-string literal. Supported escape sequences are  \\\ (backslash), \n (new line), \t (tab), \\' (single quote), \\" (double quote), and \\? (question mark). Activate this feature by right-clicking anywhere inside a string.  
  
 Find in Files has been improved by enabling subsequent results to be appended to previous results; accumulated results can be deleted.  
  
 **IntelliSense Readability Improvements** Complex template instantiations and typedefs are simplified in parameter help and quickinfo to make them easier to read.  
  
###  <a name="BK_PDB"></a> Program database enhancements  
  
-   Solution Scanning speed has been improved, especially for large solutions.  
  
-   Operations like Go To Definition are no longer blocked during solution scan except during the initial solution scan when a new solution is opened for the first time.  
  
##  <a name="BK_Diagnostics"></a> Diagnostics  
  
1.  **Debugger Visualizations** Add Natvis debugger visualizations to your Visual Studio project for easy management and source control integration. Natvis files can be edited and saved during a debugging session and the debugger will automatically pick up the changes. For more information, see this [blog post](http://blogs.msdn.com/b/vcblog/archive/2014/06/12/project-support-for-natvis.aspx).  
  
2.  **Native Memory Diagnostics**  
  
    1.  **Memory diagnostic sessions** (Ctrl+Alt+F2) enables you to monitor the live memory use of your native application during a debugging session.  
  
    2.  **Memory snapshots** capture a momentary image of your application's heap contents. Differences in heap state can be examined by comparing two memory snapshots. View object types, instance values, and allocation call stacks for each instance after stopping the application. View the call tree by stack frame for each snapshot.  
  
3.  **Improved deadlock detection and recovery** when calling C++ functions from the Watch and Immediate windows.  
  
4.  **Improved compiler diagnostics** The compiler provides enhanced warnings about suspicious code. New warnings have been added (for example, shadowed variables and mismatched printf format-strings). Existing warning messages have been made clearer.  
  
5.  **The /Wv flag** Warnings introduced after a specific compiler version XX.YY.ZZZZ can be disabled by using the /Wv:XX.YY.ZZZZ flag. Other warnings can be specifically disabled in addition to those specified through the /Wv flag.  
  
6.  **Improved Support for Debugging Optimized Code** Debug code with the /Zi, /Zo, or /Z7 flags enabled.  
  
##  <a name="BK_Win10"></a> Targeting Windows 10  
 Visual Studio now supports targeting Windows 10 in C++. New project templates  for Universal Windows App development support targeting Windows 10 devices such as desktop computers, mobile phones, tablets, HoloLens, and other devices. For more information, see [Create a "hello world" app in Windows 10](https://msdn.microsoft.com/en-us/library/windows/apps/dn996906.aspx).  
  
##  <a name="BK_GraphicsDiagnostics"></a> Graphics diagnostics  
 Graphics Diagnostics has been improved with the following features:  
  
-   **Graphics Diagnostics support for DirectX12.** The Visual Studio Graphics Diagnostics tool now supports debugging rendering problems in DirectX12 applications.  
  
-   **Consecutive Capture** Capture up to 30 consecutive frames with one capture.  
  
-   **Programmatic Capture** Initiate frame capture programmatically. Programmatic capture is especially useful for debugging compute shaders in programs that never call Present, or when a rendering problem is difficult to capture manually but can be predicted programmatically from the state of the app at runtime.  
  
-   **Enhanced Graphics Event List** A new Draw Calls view is added which displays captured events and their state in a hierarchy organized by Draw Calls. You can expand draw calls to display the device state that was current at the time of the draw call and you can further expand each kind of state to display the events that set their values.  
  
-   **Support for Windows Phone 8.1** Graphics Diagnostics now fully supports debugging Windows Phone 8.1 apps in Phone emulator or on tethered Phone.  
  
-   **Graphics Frame Analysis** This tool collects performance measurements on captured frames; in addition it also performs a set of pre-defined experiments which provides insights into how performance would be affected when various texture techniques are applied. Frame Analysis also collects performance counters from hardware.  
  
-   **Dedicated UI for Graphics Analysis** The new Visual Studio Graphics Analyzer window is a dedicated workspace for analyzing graphics frames.  
  
-   **Shader Edit and Apply** View the impact of shader code changes in a captured log without re-running the app.  
  
-   Configure capture options in Tools->Options->Graphics Diagnostics.  
  
-   Command line tool for capturing and playing back frames.  
  
 For more information, see [Graphics Diagnostics (Debugging DirectX Graphics)](/visual-studio/debugger/visual-studio-graphics-diagnostics).  
  
##  <a name="BK_GPUUsage"></a> New GPU Usage tool  
 The GPU Usage tool in Visual Studio 2015 can be used to understand GPU usage of DirectX applications. Frame Time, Frame Rate, and GPU Utilization graphs are available while the applications are running live. In addition, by collecting and analyzing detailed GPU usage data, this tool can provide insights into the CPU and GPU execution time of individual DirectX events, and therefore can be useful to determine whether the CPU or GPU is the performance bottleneck. See [GPU Usage](/visual-studio/debugger/gpu-usage).  
  
##  <a name="BK_MFC"></a> New MFC Features  
 You can now specify how controls automatically resize and move when a user changes the size of a dialog box. For more information, see [Dynamic Layout](../mfc/dynamic-layout.md).  
  
## See Also  
 [What's New in Visual Studio 2015](/visual-studio/ide/what-s-new-in-visual-studio-2015)   
 [Visual C++ Team Blog](http://blogs.msdn.com/b/vcblog/)