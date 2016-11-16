---
title: "Breaking Changes in Visual C++ 2015 Update 1 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 1c0b1c2b-e1cf-4767-885b-b98df9b3730e
caps.latest.revision: 7
ms.author: "mithom"
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
# Breaking Changes in Visual C++ 2015 Update 1
When you upgrade to Visual C++ 2015 Update 1 you might encounter compilation and/or runtime errors in code that previously compiled and ran correctly. Changes in compiler or runtime behavior that cause such problems are known as *breaking changes*, and typically they're required by modifications in the C++ language standard, function signatures, or the layout of objects in memory.  
  
 The rest of this article describes specific breaking changes in Visual C++ 2015 Update 1, and in this article the terms "new behavior" or "now" refer to that version. The terms "old behavior" and "previous" refer to the initial release of Visual Studio 2015 and earlier releases. For information on breaking changes that occurred between Visual Studio 2013 and Visual Studio 2015, see [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
-   [Compiler Breaking Changes](#BK_compiler)  
  
##  <a name="BK_compiler"></a> Visual C++ Compiler  
  
-   **Private virtual base classes and indirect inheritance**  
  
     Previous versions of the compiler allowed a derived class to call member functions of its *indirectly-derived*`private virtual` base classes. This old behavior was incorrect and does not conform to the C++ standard. The compiler no longer accepts code written in this way and issues compiler error C2280 as a result.  
  
 **error C2280: *'void \*S3::__delDtor(unsigned int)'*: attempting to reference a deleted function**     Example (before)  
  
    ```cpp  
    class base  
    {  
    protected:  
        base();  
        ~base();  
    };  
  
    class middle: private virtual base {};class top: public virtual middle {};  
  
    void destroy(top *p)  
    {  
        delete p;  //   
    }  
    ```  
  
     Example (after)  
  
    ```cpp  
    class base;  // as above  
  
    class middle: protected virtual base {};  
    class top: public virtual middle {};  
  
    void destroy(top *p)  
    {  
        delete p;  
    }  
    ```  
  
     -or-  
  
    ```  
    class base;  // as above  
  
    class middle: private virtual base {};  
    class top: public virtual middle, private virtual bottom {};  
  
    void destroy(top *p)  
    {  
        delete p;  
    }  
    ```  
  
-   **Overloaded operator new and operator delete**  
  
     Previous versions of the compiler allowed non-member `operator new` and non-member `operator delete` to be declared static, and to be declared in namespaces other than the global namespace.  This old behavior created a risk that the program would not call the `new` or `delete` operator implementation that the programmer intended, resulting in silent bad runtime behavior. The compiler no longer accepts code written in this way and issues compiler error C2323 instead.  
  
 **error C2323: *'operator new'*: non-member operator new or delete functions may not be declared static or in a namespace other than the global namespace.**     Example (before)  
  
    ```cpp  
  
    static inline void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // error C2323  
    ```  
  
     Example (after)  
  
    ```cpp  
  
    void * __cdecl operator new(size_t cb, const std::nothrow_t&)  // removed 'static inline'  
    ```  
  
     Additionally, although the compiler doesn't give a specific diagnostic, inline operator new is considered ill-formed.  
  
-   **Calling 'operator *type*()' (user-defined conversion) on non-class types**  
  
     Previous versions of the compiler allowed 'operator *type*()' to be called on non-class types while silently ignoring it. This old behavior created a risk of silent bad code generation, resulting in unpredictable runtime behavior. The compiler no longer accepts code written in this way and issues compiler error C2228 instead.  
  
 **error C2228: left of '.operator *type*' must have class/struct/union**     Example (before)  
  
    ```cpp  
    typedef int index_t;  
  
    void bounds_check(index_t index);  
  
    void login(int column)  
    {  
        bounds_check(column.operator index_t());  // error C2228  
    }  
    ```  
  
     Example (after)  
  
    ```cpp  
    typedef int index_t;  
  
    void bounds_check(index_t index);  
  
    void login(int column)  
    {  
        bounds_check(column);  // removed cast to 'index_t', 'index_t' is an alias of 'int'  
    }  
    ```  
  
-   **Redundant typename in elaborated type specifiers**  
  
     Previous versions of the compiler allowed `typename` in an elaborated type specifiers; code written in this way is semantically incorrect. The compiler no longer accepts code written in this way and issues compiler error C3406 instead.  
  
 **error C3406: 'typename' cannot be used in an elaborated type specifier**     Example (before)  
  
    ```cpp  
    template <typename class T>  
    class container;  
    ```  
  
     Example (after)  
  
    ```cpp  
    template <class T>  // alternatively, could be 'template <typename T>'; 'typename' is not elaborating a type specifier in this case  
    class container;  
    ```  
  
-   **Type deduction of arrays from an initializer list**  
  
     Previous versions of the compiler did not support type deduction of arrays from an initializer list. The compiler now supports this form of type deduction and, as a result, calls to function templates using initializer lists might now be ambiguous or a different overload might be chosen than in previous versions of the compiler. To resolve these issues, the program must now explicitly specify the overload that the programmer intended.  
  
     When this new behavior causes overload resolution to consider an additional candidate that is equally as good as the historic candidate, the call becomes ambiguous and the compiler issues compiler error C2668 as a result.  
  
 **error C2668: '*function*' : ambiguous call to overloaded function.**     Example 1: Ambiguous call to overloaded function (before)  
  
    ```cpp  
    // In previous versions of the compiler, code written in this way would unambiguously call f(int, Args...)  
    template <typename... Args>  
    void f(int, Args...);  //   
  
    template <int N, typename... Args>  
    void f(const int (&)[N], Args...);  
  
    int main()  
    {  
        // The compiler now considers this call ambiguous, and issues a compiler error  
        f({3});  error C2668: 'f' ambiguous call to overloaded function  
    }  
    ```  
  
     Example 1: ambiguous call to overloaded function (after)  
  
    ```cpp  
    template <typename... Args>  
    void f(int, Args...);  //   
  
    template <int N, typename... Args>  
    void f(const int (&)[N], Args...);  
  
    int main()  
    {  
        // To call f(int, Args...) when there is just one expression in the initializer list, remove the braces from it.  
        f(3);  
    }  
    ```  
  
     When this new behavior causes overload resolution to consider an additional candidate that is a better match than the historic candidate, the call resolves unambiguously to the new candidate, causing a change in program behavior that is probably different than the programmer intended.  
  
     Example 2: change in overload resolution (before)  
  
    ```cpp  
    // In previous versions of the compiler, code written in this way would unambiguously call f(S, Args...)  
    struct S  
    {  
        int i;  
        int j;  
    };  
  
    template <typename... Args>  
    void f(S, Args...);  
  
    template <int N, typename... Args>  
    void f(const int *&)[N], Args...);  
  
    int main()  
    {  
        // The compiler now resolves this call to f(const int (&)[N], Args...) instead  
        f({1, 2});  
    }  
    ```  
  
     Example 2: change in overload resolution (after)  
  
    ```cpp  
    struct S;  // as before  
  
    template <typename... Args>  
    void f(S, Args...);  
  
    template <int N, typename... Args>  
    void f(const int *&)[N], Args...);  
  
    int main()  
    {  
        // To call f(S, Args...), perform an explicit cast to S on the initializer list.  
        f(S{1, 2});  
    }  
    ```  
  
-   **Restoration of switch statement warnings**  
  
     A Previous version of the compiler removed previously-existing warnings related to `switch` statements; these warnings have now been restored. The compiler now issues the restored warnings, and warnings related to specific cases (including the default case) are now issued on the line containing the offending case, rather than on the last line of the switch statement. As a result of now issuing those warnings on different lines than in the past, warnings previously suppressed by using `#pragma warning(disable:####)` may no longer be suppressed as intended. To suppress these warnings as intended, it might be necessary to move the `#pragma warning(disable:####)` directive to a line above the first potentially-offending case. The following are the restored warnings.  
  
 **warning C4060: switch statement contains no 'case' or 'default' labels warning C4061: enumerator '*bit1*' in switch of enum '*flags*' is not explicitly handled by a case label warning C4062: enumerator '*bit1*' in switch of enum '*flags*' is not handled warning C4063: case '*bit32*' is not a valid value for switch of enum '*flags*' warning C4064: switch of incomplete enum '*flags*' warning C4065: switch statement contains 'default' but no 'case' labels warning C4808: case '*value*' is not a valid value for switch condition of type '*bool*' Warning C4809: switch statement has redundant 'default' label; all possible 'case' labels are given**     Example of C4063 (before)  
  
    ```cpp  
    class settings  
    {  
    public:  
        enum flags  
        {  
            bit0 = 0x1,  
            bit1 = 0x2,  
            ...  
        };  
        ...  
    };  
  
    int main()  
    {  
        auto val = settings::bit1;  
  
        switch (val)  
        {  
        case settings::bit0:  
            break;  
  
        case settings::bit1:  
            break;  
  
        case settings::bit0 | settings::bit1:  // warning C4063  
            break;  
        }  
    };  
    ```  
  
     Example of C4063 (after)  
  
    ```cpp  
    class settings {...};  // as above  
  
    int main()  
    {  
        // since C++11, use std::underlying_type to determine the underlying type of an enum  
        typedef std::underlying_type<settings::flags>::type flags_t;  
  
        auto val = settings::bit1;  
  
        switch (static_cast<flags_t>(val))  
        {  
        case settings::bit0:  
            break;  
  
        case settings::bit1:  
            break;  
  
        case settings::bit0 | settings::bit1:  // ok  
            break;  
        }  
    };  
    ```  
  
     Examples of the other restored warnings are provided in their documentation.  
  
-   **#include: use of parent-directory specifier '..' in pathname** (only affects /Wall /WX)  
  
     Previous versions of the compiler did not detect the use of the parent-directory specifier '..' in the pathname of  `#include` directives. Code written in this way is usually intended to include headers that exist outside of the project by incorrectly using project-relative paths. This old behavior created a risk that the program could be compiled by including a different source file than the programmer intended, or that these relative paths would not be portable to other build environments. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C4464, if enabled.  
  
 **warning C4464: relative include path contains '..'**     Example (before)  
  
    ```cpp  
    #include "..\headers\C4426.h"  // emits warning C4464  
    ```  
  
     Example (after)  
  
    ```cpp  
    #include "C4426.h"  // add absolute path to 'headers\' to your project's include directories  
    ```  
  
     Additionally, although the compiler does not give a specific diagnostic, we also recommend that the parent-directory specifier ".." should note be used to specify your project's include directories.  
  
-   **#pragma optimize() extends past end of header file** (only affects /Wall /WX)  
  
     Previous versions of the compiler did not detect changes to  optimization flag settings that escape a header file included within a translation unit. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C4426 at the location of the offending `#include`, if enabled. This warning is only issued if the changes conflict with the optimization flags set by command-line arguments to the compiler.  
  
 **warning C4426: optimization flags changed after including header, may be due to #pragma optimize()**     Example (before)  
  
    ```cpp  
    // C4426.h  
    #pragma optimize("g", off)  
    ...  
    // C4426.h ends  
  
    // C4426.cpp  
    #include "C4426.h"  // warning C4426  
    ```  
  
     Example (after)  
  
    ```cpp  
    // C4426.h  
    #pragma optimize("g", off)  
    ...  
    #pragma optimize("", on)  // restores optimization flags set via command-line arguments  
    // C4426.h ends  
  
    // C4426.cpp  
    #include "C4426.h"  
    ```  
  
-   **Mismatched #pragma warning(push)** and **#pragma warning(pop)** (only affects /Wall /WX)  
  
     Previous versions of the compiler did not detect `#pragma warning(push)` state changes being paired with `#pragma warning(pop)` state changes in a different source file, which is rarely intended. This old behavior created a risk that the program would be compiled with a different set of warnings enabled than the programmer intended, possibly resulting in silent bad runtime behavior. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C5031 at the location of the matching `#pragma warning(pop)`, if enabled. This warning includes a note referencing the location of the corresponding #pragma warning(push).  
  
 **warning C5031: #pragma warning(pop): likely mismatch, popping warning state pushed in different file**     Example (before)  
  
    ```cpp  
    // C5031_part1.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    // C5031_part1.h ends without #pragma warning(pop)  
  
    // C5031_part2.h  
    ...  
    #pragma warning(pop)  // pops a warning state not pushed in this source file   
    ...  
    // C5031_part1.h ends  
  
    // C5031.cpp  
    #include "C5031_part1.h" // leaves #pragma warning(push) 'dangling'  
    ...  
    #include "C5031_part2.h" // matches 'dangling' #pragma warning(push), resulting in warning C5031  
    ...  
  
    ```  
  
     Example (after)  
  
    ```cpp  
    // C5031_part1.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    #pragma warning(pop)  // pops the warning state pushed in this source file  
    // C5031_part1.h ends without #pragma warning(pop)  
  
    // C5031_part2.h  
    #pragma warning(push)  // pushes the warning state pushed in this source file  
    #pragma warning(disable:####)  
    ...  
    #pragma warning(pop)  
    // C5031_part1.h ends  
  
    // C5031.cpp  
    #include "C5031_part1.h" // #pragma warning state changes are self-contained and independent of other source files or their #include order.  
    ...  
    #include "C5031_part2.h"  
    ...  
  
    ```  
  
     Though uncommon, code written in this way is sometimes intentional. Code written in this way is sensitive to changes in `#include` order; when possible, we recommend that source code files manage warning state in a self-contained way.  
  
-   **Unmatched #pragma warning(push)** (only affects /Wall /WX)  
  
     Previous versions of the compiler did not detect unmatched `#pragma warning(push)` state changes at the end of a translation unit. The compiler now detects and notifies the programmer of code written in this way and issues an optional compiler warning C5032 at the location of the unmatched #pragma warning(push), if enabled. This warning is only issued if there are no compilation errors in the translation unit.  
  
 **warning C5032: detected #pragma warning(push) with no corresponding #pragma warning(pop)**     Example (before)  
  
    ```cpp  
    // C5032.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    // C5032.h ends without #pragma warning(pop)  
  
    // C5032.cpp  
    #include "C5032.h"  
    ...  
    // C5032.cpp ends -- the translation unit is completed without #pragma warning(pop), resulting in warning C5032 on line 1 of C5032.h  
    ```  
  
     Example (after)  
  
    ```cpp  
    // C5032.h  
    #pragma warning(push)  
    #pragma warning(disable:####)  
    ...  
    #pragma warning(pop) // matches #pragma warning (push) on line 1  
    // C5032.h ends  
  
    // C5032.cpp  
    #include "C5032.h"  
    ...  
    // C5032.cpp ends -- the translation unit is completed without unmatched #pragma warning(push)  
    ```  
  
-   **Additional warnings might be issued as a result of improved #pragma warning state tracking**  
  
     Previous versions of the compiler tracked #pragma warning state changes insufficiently well to issue all intended warnings. This behavior created a risk that certain warnings would be effectively suppressed in circumstances different than the programmer intended. The compiler now tracks #pragma warning state more robustly -- especially related to #pragma warning state changes inside of templates -- and optionally issues new warnings C5031 and C5032 which are intended to help the programmer locate unintended uses of `#pragma warning(push)` and `#pragma warning(pop)`.  
  
     As a result of improved #pragma warning state change tracking, warnings formerly incorrectly suppressed or warnings related to issues formerly misdiagnosed might now be issued.  
  
-   **Improved identification of unreachable code**  
  
     C++ Standard Library changes and improved ability to inline function calls over previous versions of the compiler might allow the compiler to prove that certain code is now unreachable. This new behavior can result in new and more-frequently issued instances of warning C4720.  
  
 **warning C4720: unreachable code**     In many cases, this warning might only be issued when compiling with optimizations enabled, since optimizations may inline more function calls, eliminate redundant code, or otherwise make it possible to determine that certain code is unreachable. We have observed that new instances of warning C4720 have frequently occurred in try/catch blocks, especially in relation to use of [std::find](assetId:///std::find?qualifyHint=False&autoUpgrade=True).  
  
     Example (before)  
  
    ```cpp  
    try   
    {   
        auto iter = std::find(v.begin(), v.end(), 5);   
    }   
    catch(…)   
    {   
        do_something();  // ok   
    }  
    ```  
  
     Example (after)  
  
    ```cpp  
    try   
    {   
        auto iter = std::find(v.begin(), v.end(), 5);   
    }   
    catch(…)   
    {   
        do_something();  // warning C4702: unreachable code  
    }  
    ```