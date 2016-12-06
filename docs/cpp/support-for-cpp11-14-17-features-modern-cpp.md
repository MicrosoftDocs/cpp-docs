---
title: "Support For C++11-14-17 Features (Modern C++) | Microsoft Docs"
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
ms.assetid: dd2d5cbc-caf5-4a11-a057-8c365decba4e
caps.latest.revision: 59
author: "mikeblome"
ms.author: "mblome"
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
# Support For C++11/14/17 Features (Modern C++)
This article describes C++11/14/17 features in Visual C++.  
  
##  <a name="featurelist"></a> C++11Feature List  
 Visual C++ implements the vast majority of features in the [C++11 core language specification](http://go.microsoft.com/fwlink/p/?LinkID=235092), as well as many C++14 Library features and some features proposed for C++17. The following table lists C++11/14/17 core language features and their implementation status in Visual C++ in Visual Studio 2010, [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], and [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], and Visual Studio 2015.  
  
###  <a name="corelanguagetable"></a> C++11 Core Language Features Table  
  
|[C++11 Core Language Features](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2869.html)|Visual Studio 2010|Visual Studio 2012|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|Visual Studio 2015|  
|----------------------------------------------------------------------------------------------------------|------------------------|------------------------|--------------------------------------------------------------|------------------------|  
|Rvalue references [v0.1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1610.html), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2118.html), [v2.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2844.html), [v2.1](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html), [v3.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3053.html)|v2.0|v2.1*|v2.1*|v3.0|  
|[ref-qualifiers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2439.htm)|No|No|No|Yes|  
|[Non-static data member initializers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2756.htm)|No|No|[Yes](../cpp/uniform-initialization-and-delegating-constructors.md)|Yes|  
|Variadic templates [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2242.pdf), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2555.pdf)|No|No|[Yes](../cpp/ellipses-and-variadic-templates.md)|Yes|  
|[Initializer lists](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2672.htm)|No|No|[Yes](../cpp/uniform-initialization-and-delegating-constructors.md)|Yes|  
|[static_assert](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1720.html)|Yes|Yes|Yes|Yes|  
|auto [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1984.pdf), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2546.htm)|v1.0|v1.0|v1.0|Yes|  
|[Trailing return types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2541.htm)|Yes|Yes|Yes|Yes|  
|Lambdas [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2550.pdf), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2658.pdf), [v1.1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2927.pdf)|v1.0|v1.1|v1.1|Yes|  
|decltype [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2343.pdf), [v1.1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3276.pdf)|v1.0|v1.1**|v1.1|Yes|  
|[Right angle brackets](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1757.html)|Yes|Yes|Yes|Yes|  
|[Default template arguments for function templates](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html)|No|No|Yes|Yes|  
|[Expression SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2634.html)|No|No|No|No|  
|[Alias templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2258.pdf)|No|No|[Yes](../cpp/aliases-and-typedefs-cpp.md)|Yes|  
|[Extern templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1987.htm)|Yes|Yes|Yes|Yes|  
|[nullptr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2431.pdf)|Yes|Yes|Yes|Yes|  
|[Strongly typed enums](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2347.pdf)|Partial|Yes|Yes|Yes|  
|[Forward declared enums](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2764.pdf)|No|Yes|Yes|Yes|  
|[Attributes](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2761.pdf)|No|No|No|Yes|  
|[constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2235.pdf)|No|No|No|Yes|  
|[Alignment](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2341.pdf)|TR1|Partial|Partial|Yes|  
|[Delegating constructors](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1986.pdf)|No|No|[Yes](../cpp/uniform-initialization-and-delegating-constructors.md)|Yes|  
|[Inheriting constructors](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2540.htm)|No|No|No|Yes|  
|[Explicit conversion operators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2437.pdf)|No|No|Yes|Yes|  
|[char16_t/char32_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2249.html)|No|No|No|Yes|  
|[Unicode string literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)|No|No|No|Yes|  
|[Raw string literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)|No|No|[Yes](../cpp/string-and-character-literals-cpp.md)|Yes|  
|[Universal character names in literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2170.html)|No|No|No|Yes|  
|[User-defined literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2765.pdf)|No|No|No|Yes|  
|[Standard-layout and trivial types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2342.htm)|No|Yes|Yes|Yes|  
|[Defaulted and deleted functions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2346.htm)|No|No|[Yes*](../cpp/explicitly-defaulted-and-deleted-functions.md)|Yes|  
|[Extended friend declarations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1791.pdf)|Yes|Yes|Yes|Yes|  
|[Extended sizeof](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2253.html)|No|No|No|Yes|  
|[Inline namespaces](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2535.htm)|No|No|No|Yes|  
|[Unrestricted unions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2544.pdf)|No|No|No|Yes|  
|[Local and unnamed types as template arguments](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2657.htm)|Yes|Yes|Yes|Yes|  
|[Range-based for-loop](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2930.html)|No|Yes|Yes|Yes|  
|override and final [v0.8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2928.htm), [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3206.htm), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3272.htm)|Partial|Yes|Yes|Yes|  
|[Minimal GC support](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2670.htm)|Yes|Yes|Yes|Yes|  
|[noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3050.html)|No|No|No|Yes|  
  
 [[In This Article](#top)]  
  
###  <a name="concurrencytable"></a> C++11 Core Language Features Table: Concurrency  
  
|C++11 Core Language Features: Concurrency|Visual Studio 2010|Visual Studio 2012|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|Visual Studio 2015|  
|-------------------------------------------------|------------------------|------------------------|--------------------------------------------------------------|------------------------|  
|[Reworded sequence points](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2239.html)|N/A|N/A|N/A|Yes|  
|[Atomics](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2427.html)|No|Yes|Yes|Yes|  
|[Strong compare and exchange](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2748.html)|No|Yes|Yes|Yes|  
|[Bidirectional fences](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2752.htm)|No|Yes|Yes|Yes|  
|[Memory model](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2429.htm)|N/A|N/A|N/A|Yes|  
|[Data-dependency ordering](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2664.htm)|No|Yes|Yes|Yes|  
|[Data-dependency ordering: function annotation](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2782.htm)|No|No|No|Yes|  
|[exception_ptr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2179.html)|Yes|Yes|Yes|Yes|  
|[quick_exit](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2440.htm)|No|No|No|Yes|  
|[Atomics in signal handlers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2547.htm)|No|Yes|Yes|Yes|  
|[Thread-local storage](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2659.htm)|Partial|Partial|Partial|Yes|  
|[Magic statics](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2660.htm)|No|No|No|Yes|  
  
 [[In This Article](#top)]  
  
###  <a name="c99table"></a> C++11 Core Language Features: C99  
  
|C++11 Core Language Features: C99|Visual Studio 2010|Visual Studio 2012|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|Visual Studio 2015|  
|-----------------------------------------|------------------------|------------------------|--------------------------------------------------------------|------------------------|  
|[__func\_\_](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2340.htm)|Partial|Partial|Partial|Yes|  
|[C99 preprocessor](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1653.htm)|Partial|Partial|Partial|Partial|  
|[long long](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1811.pdf)|Yes|Yes|Yes|Yes|  
|[Extended integer types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1988.pdf)|N/A|N/A|N/A|N/A|  
  
 [[In This Article](#top)]  
  
###  <a name="cpp14table"></a> C++ 14 Core Language Features  
  
||||  
|-|-|-|  
|Feature|Visual Studio 2013|Visual Studio 2015|  
|Tweaked wording for contextual conversions|Yes|Yes|  
|Binary literals|No|Yes|  
|auto and decltype(auto) return types|No|Yes|  
|init-captures|No|Yes|  
|Generic lambdas|No|Yes|  
|Variable templates|No|No|  
|Extended constexpr|No|No|  
|NSDMIs for aggregates|No|No|  
|Avoiding/fusing allocations|No|No|  
|[[deprecated]] attributes|No|No|  
|Sized allocation|No|Yes|  
|Digit separators|No|Yes|  
  
###  <a name="cpp17table"></a> C++17 Proposed Core Language Features  
  
||||  
|-|-|-|  
|Feature|Visual Studio 2013|Visual Studio 2015|  
|New rules for auto with braced-init-lists|No|No|  
|Terse static assert|No|No|  
|typename in template template-parameters|No|No|  
|Removing trigraphs|Yes|Yes|  
|Nested namespace definitions|No|No|  
|N4259 std::uncaught_exceptions()|No|No|  
|N4261 Fixing qualification conversions|No|No|  
|N4266 Attributes for namespaces and enumerators|No|No|  
|N4267 u8 character literals|No|No|  
|N4268 Allowing more non-type template args|No|No|  
|N4295 Fold expressions|No|No|  
|await/resume|No|Yes|  
  
##  <a name="tableguide"></a> Guide to the Feature Tables  
  
###  <a name="rvref"></a> Rvalue References  
  
> [!NOTE]
>  The version designations (v0.1, v1.0, v2.0, v2.1, v3.0) in the following descriptions are invented just to show the evolution of C++11. The standard itself does not use them.  
  
 [N1610 "Clarification of Initialization of Class Objects by rvalues"](http://go.microsoft.com/fwlink/p/?LinkID=235093) was an early attempt to enable move semantics without rvalue references.  For the sake of this discussion, let’s call it "rvalue references v0.1". It was superseded by "rvalue references [v1.0](http://go.microsoft.com/fwlink/p/?LinkID=235094)." "Rvalue references [v2.0](http://go.microsoft.com/fwlink/p/?LinkID=235095)", which is what the work in Visual C++ in Visual Studio 2010 was based on, prohibits rvalue references from binding to lvalues and thereby fixes a major safety problem.  "Rvalue references [v2.1](http://go.microsoft.com/fwlink/p/?LinkID=235096)" refines this rule.  Consider `vector<string>::push_back()`, which has the overloads `push_back(const string&)` and `push_back(string&&)`, and the call `v.push_back("strval")`.  The expression `"strval"` is a string literal, and is an lvalue.  (Other literals—for example, the integer 1729—are rvalues, but string literals are special because they are arrays.)  The "rvalue references v2.0" rules said that `string&&` cannot bind to `"strval"` because `"strval"` is an lvalue and therefore, `push_back(const string&)` is the only viable overload.  This would create a temporary `std::string`, copy it into the vector, and then destroy the temporary `std::string`, which wasn’t very efficient. The "rvalue references v2.1" rules recognize that binding `string&&` to `"strval"` would create a temporary `std::string`, and that temporary is an rvalue.  Therefore, both `push_back(const string&)` and `push_back(string&&)` are viable, and `push_back(string&&)` is preferred.  A temporary `std::string` is constructed, and then moved into the vector.  This is more efficient.  
  
 "Rvalue references [v3.0](http://go.microsoft.com/fwlink/p/?LinkID=235097)" adds new rules to automatically generate move constructors and move assignment operators under certain conditions. This is implemented in Visual Studio 2015.  
  
 [[In This Article](#top)]  
  
###  <a name="lambdas"></a> Lambdas  
 After [lambda functions](../cpp/lambda-expressions-in-cpp.md) were voted into the Working Paper ([version "0.9"](http://go.microsoft.com/fwlink/p/?LinkID=235098)) and mutable lambdas were added ([version "1.0"](http://go.microsoft.com/fwlink/p/?LinkID=235099)), the Standardization Committee overhauled the wording. This produced lambdas  [version "1.1"](http://go.microsoft.com/fwlink/p/?LinkID=235100), which is now fully supported.  The lambdas v1.1 wording clarifies what should occur in corner cases like referring to static members or nested lambdas.  This fixes problems that are triggered by complex lambdas.  Additionally, stateless lambdas are now convertible to function pointers.  This is not in the N2927 wording, but it is counted as part of lambdas v1.1 anyway.  [C++11](http://go.microsoft.com/fwlink/p/?LinkID=235092)**5.1.2 [expr.prim.lambda]/6** has this description: "The closure type for a `lambda-expression` with no `lambda-capture` has a public non-virtual non-explicit const conversion function to pointer to function having the same parameter and return types as the closure type’s function call operator. The value returned by this conversion function shall be the address of a function that, when invoked, has the same eﬀect as invoking the closure type’s function call operator."  (The [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] implementation is even better than that, because it makes stateless lambdas convertible to function pointers that have arbitrary calling conventions.  This is important when you are using APIs that expect things like `__stdcall` function pointers.)  
  
 [[In This Article](#top)]  
  
###  <a name="decltype"></a> decltype  
 After decltype was voted into the Working Paper ([version 1.0](http://go.microsoft.com/fwlink/p/?LinkID=235101)), it received a small but important fix at the last minute ([version 1.1](http://go.microsoft.com/fwlink/p/?LinkID=235102)).  This is of great interest to programmers who work on the STL and Boost.  
  
 [[In This Article](#top)]  
  
###  <a name="stronglytyped"></a> Strongly Typed/Forward Declared enums  
 [Strongly typed enums](http://go.microsoft.com/fwlink/p/?LinkID=235103) were partially supported in Visual C++ in Visual Studio 2010 (specifically, the part about explicitly specified underlying types). These are now fully implemented in Visual Studio, and the C++11 semantics for [forward declared enums](http://go.microsoft.com/fwlink/p/?LinkID=235104) are also fully implemented.  
  
 [[In This Article](#top)]  
  
###  <a name="alignment"></a> Alignment  
 The Core Language keywords `alignas`/`alignof` from the [alignment proposal](http://go.microsoft.com/fwlink/p/?LinkID=235105) that was voted into the Working Paper are implemented in Visual Studio 2015.  Visual C++ in Visual Studio 2010 had `aligned_storage` from TR1. [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] added `aligned_union` and `std::align()` to the Standard Library and significant issues were fixed in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].  
  
 [[In This Article](#top)]  
  
###  <a name="standardlayout"></a> Standard-Layout and Trivial Types  
 The exposed changes from [N2342 "POD's Revisited; Resolving Core Issue 568 (Revision 5)"](http://go.microsoft.com/fwlink/p/?LinkID=235106) are the additions of `is_trivial` and `is_standard_layout` to the Standard Template Library's `<type_traits>`.  (N2342 reworked a lot of the Core Language wording, but no compiler changes were required.)  These type traits were available in Visual C++ in Visual Studio 2010, but they just duplicated `is_pod`. Therefore, the table earlier in this document said "No" support.  They are now powered by compiler hooks that are designed to give accurate answers.  
  
 The STL's [common_type<>](../standard-library/common-type-class.md) received a much-needed fix in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].  The C++11 specification for `common_type<>` had unexpected and undesired consequences; in particular, it makes `common_type<int, int>::type` return `int&&`. Therefore, [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] implements the [Proposed Resolution for Library Working Group issue 2141](http://go.microsoft.com/fwlink/p/?LinkId=320075), which makes `common_type<int, int>::type` return `int`.  
  
 As a side-effect of this change, the identity case no longer works (`common_type<T>` does not always result in type `T`). This complies with the Proposed Resolution, but it breaks any code that relied on the previous behavior.  
  
 If you require an identity type trait, don't use the non-standard `std::identity` that's defined in `<type_traits>` because it won't work for `<void>`. Instead, implement your own identity type trait to suit your needs. Here's an example:  
  
```cpp  
template <typename T> struct Identity {  
    typedef T type;  
};  
  
```  
  
> [!NOTE]
>  For other breaking changes, see [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md).  
  
 [[In This Article](#top)]  
  
###  <a name="defaultedanddeleted"></a> Defaulted and Deleted Functions  
 These are now supported, but with this exception: For defaulted functions, the use of `=default` to request member-wise move constructors and move assignment operators is not supported. The copies and moves don't interact precisely like the Standard says they should—for example, deletion of moves is specified to also suppress copies, but [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] does not.  
  
 For information about how to use defaulted and deleted functions, see [Functions](../cpp/functions-cpp.md).  
  
 [[In This Article](#top)]  
  
###  <a name="overrideandfinal"></a> override and final  
 This went through a short but complicated evolution. Originally, in [version 0.8](http://go.microsoft.com/fwlink/p/?LinkID=235108), there were [[`override`]], [[`hiding`]], and [[`base_check`]] attributes.  Then in [version 0.9](http://go.microsoft.com/fwlink/p/?LinkID=235109), the attributes were eliminated and replaced with contextual keywords.  Finally, in [version 1.0](http://go.microsoft.com/fwlink/p/?LinkID=235110), they were reduced to "`final`" on classes, and "`override`" and "`final`" on functions.  This makes it an Ascended Extension because Visual C++ in Visual Studio 2010 already supported this "`override`" syntax on functions, and had semantics reasonably close to those in C++11.  "`final`" was also supported, but under the different spelling "sealed".  The Standard spelling and semantics of "`override`" and "`final`" are now completely supported. For more information, see [override Specifier](../cpp/override-specifier.md) and [final Specifier](../cpp/final-specifier.md).  
  
 [[In This Article](#top)]  
  
###  <a name="atomics"></a> Atomics, and More  
 [Atomics](http://go.microsoft.com/fwlink/p/?LinkID=235111), [strong compare and exchange](http://go.microsoft.com/fwlink/p/?LinkID=235112), [bidirectional fences](http://go.microsoft.com/fwlink/p/?LinkID=235113), and [data-dependency ordering](http://go.microsoft.com/fwlink/p/?LinkID=235114) specify Standard Library machinery, which are now implemented.  
  
 **Related STL headers:** [\<atomic>](../standard-library/atomic.md), [\<chrono>](../standard-library/chrono.md), [<condition_variable>](../standard-library/condition-variable.md), [\<future>](../standard-library/future.md), [\<mutex>](../standard-library/mutex.md), [\<ratio>](../standard-library/ratio.md), [<scoped_allocator>](../standard-library/scoped-allocator.md), and [\<thread>](../standard-library/thread.md).  
  
 [[In This Article](#top)]  
  
###  <a name="c99"></a> C99 __func\_\_ and Preprocessor Rules  
 The table [C++11 Core Language Features: C99](#c99table) lists "Partial" implementation for two items. For the pre-defined identifier `__func__`, "Partial" is listed because support is provided for the non-Standard extensions `__FUNCDNAME__`, `__FUNCSIG__`, and `__FUNCTION__`. For more information, see [Predefined Macros](../preprocessor/predefined-macros.md). For C99 preprocessor rules, "Partial" is listed because *variadic macros* are supported. For more information, see [Variadic Macros](../preprocessor/variadic-macros.md).  
  
 [[In This Article](#top)]  
  
###  <a name="stl"></a> Standard Library Features  
 That covers the Core Language. As for the C++11 Standard Library, we don't have a pretty comparison table of features, but [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] implemented it, with two exceptions.  First, when a library feature depended on functionality that was missing in the compiler, it was either simulated—for example, simulated variadic templates for `make_shared<T>()`—or it wasn't implemented. (There were only a few cases—most notably, `<initializer_list>`—which were fully implemented in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].)  With very few exceptions, C99 was implemented in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] and C++ wrapper headers provided. For more information, see [C99 library support in Visual Studio 2013](http://go.microsoft.com/fwlink/p/?LinkId=321308).  
  
 Here's a partial list of the changes in [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] and [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)]:  
  
 **Emplacement:** As required by C++11, `emplace()`/`emplace_front()`/`emplace_back()`/`emplace_hint()`/`emplace_after()` are implemented in all containers for "arbitrary" numbers of arguments (see the "Simulated variadics" section).  For example, `vector<T>` has "`template <typename... Args> void emplace_back(Args&&... args)`", which directly constructs an element of type T at the back of the vector from an arbitrary number of arbitrary arguments, perfectly forwarded.  This can be more efficient than `push_back(T&&)`, which would involve an extra move construction and destruction.  
  
 **Variadics:** [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] had a scheme for simulating variadic templates. In [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], the simulations are gone and **variadics are fully implemented**. If your code relies on the old simulated variadics behavior, you have to fix it. However, the switch to real variadic templates has **improved compile times** and **reduced compiler memory consumption**.  
  
 **Explicit conversion operators:** In the Core Language, explicit conversion operators are a general feature—for example, you can have `explicit operator MyClass()`. However, the Standard Library currently uses only one form: `explicit operator bool()`, which makes classes safely Boolean-testable. (Plain "`operator bool()`" is notoriously dangerous.) Previously, Visual C++ simulated `explicit operator bool()` with `operator pointer-to-member()`, which led to various headaches and slight inefficiencies. Now, this "fake bool" workaround is completely removed.  
  
 **Randomness:** `uniform_int_distribution` is now perfectly unbiased, and `shuffle()` is implemented in `<algorithm>`, which directly accepts Uniform Random Number Generators like `mersenne_twister`.  
  
 **Resistance to overloaded address-of operators:** C++98/03 prohibited an element of an STL container from overloading its address-of operator.  This is what classes like `CComPtr` do, so that helper classes like `CAdapt` were required to shield the STL from such overloads.  During the development of Visual C++ in Visual Studio 2010, STL changes made it reject overloaded address-of operators in even more situations. C++11 changed the requirements to make overloaded address-of operators acceptable. C++11, and Visual C++ in Visual Studio 2010, provide the helper function `std::addressof()`, which can get the true address of an object regardless of operator overloading.  Before Visual C++ in Visual Studio 2010 was released, we attempted to replace occurrences of "`&elem`" with "`std::addressof(elem)`", which is appropriately resistant.  [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] went further, so that classes that overload their address-of operator should be usable throughout the STL.  
  
 **[!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] went beyond C++11 in several ways:**  
  
 **SCARY iterators:** As permitted but not required by the C++11 Standard, SCARY iterators have been implemented, as described by [N2911 "Minimizing Dependencies within Generic Classes for Faster and Smaller Programs"](http://go.microsoft.com/fwlink/p/?LinkID=235115) and [N2980 "SCARY Iterator Assignment and Initialization, Revision 1"](http://go.microsoft.com/fwlink/p/?LinkID=235116).  
  
 **Filesystem:** The `<filesystem>` header from [the TR2 proposal](http://go.microsoft.com/fwlink/p/?LinkID=235117) has been added. It offers `recursive_directory_iterator` and other interesting features.  Before work on TR2 was frozen because C++0x was running very late and was changing to C++11, the 2006 proposal was derived from [Boost.Filesystem V2](http://go.microsoft.com/fwlink/p/?LinkID=235118). It later evolved into Boost.Filesystem V3, which is implemented in Visual Studio 2015.  
  
 And a major optimization!  All of our containers are now optimally small given their current representations.  This refers to the container objects themselves, not to their pointed-to contents.  For example, `std::vector` contains three raw pointers.  In Visual C++ in Visual Studio 2010, x86 release mode, `std::vector` was 16 bytes.  In [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], it is 12 bytes, which is optimally small.  This is a big deal—if you have 100,000 vectors in your program, [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] saves you 400,000 bytes.  Decreased memory usage saves both space and time.  
  
 This was achieved by avoiding the storage of empty allocators and comparators, because `std::allocator` and `std::less` are stateless.  (These optimizations are enabled for custom allocators/comparators too, as long as they are stateless.  Obviously, storage of stateful allocators/comparators cannot be avoided, but those are very rare.)  
  
 **[!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] implemented some key C++14 library features:**  
  
-   "Transparent operator functors" `less<>`, `greater<>`, `plus<>`, `multiplies<>`, and so on.  
  
-   `make_unique<T>(args...)` and `make_unique<T[]>(n)`  
  
-   `cbegin()`/`cend()`, `rbegin()`/`rend()`, and `crbegin()`/`crend()` non-member functions.  
  
 [[In This Article](#top)]  
  
## See Also  
 [Welcome Back to C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [C++ Language Reference](../cpp/cpp-language-reference.md)   
 [Lambda Expressions](../cpp/lambda-expressions-in-cpp.md)   
 [Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md)   
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)   
 [Visual C++ Team Blog](http://blogs.msdn.com/b/vcblog/)   
 [What's New for Visual C++](../what-s-new-for-visual-cpp-in-visual-studio.md)   
 [Visual C++ change history 2003 - 2015](../porting/visual-cpp-change-history-2003-2015.md)