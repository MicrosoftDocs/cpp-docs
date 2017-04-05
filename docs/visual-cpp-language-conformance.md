---
title: "Visual C++ Language Conformance | Microsoft Docs"
ms.custom: ""
ms.date: "3/1/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 475da6e9-0d78-4b4e-bd23-f41c406c4efe
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
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
# Visual C++ Language Conformance 
This topic summarizes the ISO C++03, C++11, C++14, and Draft C++17 language standards conformance of compiler features and Standard Library (STL) features for Visual C++ in Visual Studio 2017 and earlier versions. Each compiler and STL feature name links to the ISO C++ Standard proposal paper that describes the feature, if one is available at publication time. The Supported column lists the Visual Studio version in which support for the feature first appeared.  
  
For details on conformance improvements and other changes in Visual Studio 2017, see [C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md) and [What's New for Visual C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md). For conformance changes in earlier versions, see [Visual C++ change history](porting/visual-cpp-change-history-2003-2015.md) and [Visual C++ What's New 2003 through 2015](porting/visual-cpp-what-s-new-2003-through-2015.md). For current news from the C++ team, visit the [Visual C++ team blog](http://blogs.msdn.microsoft.com/vcblog/).  

 > [!NOTE]
 > There are no binary breaking changes between Visual Studio 2015 and Visual Studio 2017.
  
## Compiler Features  
  
|Feature Area| |  
|----|---|  
|__C++03/11 Core Language Features__|__Supported__|
|&nbsp;&nbsp;Everything else|VS 2015 <sup>[1](#note_1)</sup>|
|&nbsp;&nbsp;Two-phase name lookup|No|
|&nbsp;&nbsp;[N2634 Expression SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2634.html)|Partial <sup>[2](#note_2)</sup>|
|&nbsp;&nbsp;[N1653 C99 preprocessor](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1653.htm)|Partial <sup>[3](#note_3)</sup>|
|&nbsp;&nbsp;[N1988 Extended integer types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1988.pdf)|N/A <sup>[4](#note_4)</sup>|
|__C++14 Core Language Features__|__Supported__|
|&nbsp;&nbsp;[N3664 Avoiding/fusing allocations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3664.html)|N/A <sup><sup>[5](#note_5)</sup></sup>|
|&nbsp;&nbsp;[N3323 Tweaked wording for contextual conversions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3323.pdf)|VS 2013|
|&nbsp;&nbsp;[N3472 Binary literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3472.pdf)|VS 2015|
|&nbsp;&nbsp;[N3638 auto and decltype(auto) return types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3638.html)|VS 2015|
|&nbsp;&nbsp;[N3648 init-captures](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3648.html)|VS 2015|
|&nbsp;&nbsp;[N3649 Generic lambdas](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3649.html)|VS 2015|
|&nbsp;&nbsp;[N3651 Variable templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3651.pdf)|VS 2015.2|
|&nbsp;&nbsp;[N3652 Extended constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html)|VS 2017|
|&nbsp;&nbsp;[N3653 NSDMIs for aggregates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3653.html)|VS 2017|
|&nbsp;&nbsp;[N3760 [[deprecated]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3760.html)|VS 2015|
|&nbsp;&nbsp;[N3778 Sized deallocation](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|VS 2015|
|&nbsp;&nbsp;[N3781 Digit separators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3781.pdf)|VS 2015|
|__C++17 Core Language Features__|__Supported__|
|&nbsp;&nbsp;[N3922 New rules for auto with braced-init-lists](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)|VS 2015|
|&nbsp;&nbsp;[N3928 Terse static_assert](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf)|VS 2017 [*](#note_star)|
|&nbsp;&nbsp;[N4051 typename in template template-parameters](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)|VS 2015|
|&nbsp;&nbsp;[N4086 Removing trigraphs](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)|VS 2010|
|&nbsp;&nbsp;[N4230 Nested namespace definitions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4230.html)|VS 2015.3 [*](#note_star)|
|&nbsp;&nbsp;[N4261 Fixing qualification conversions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4261.html)|No|
|&nbsp;&nbsp;[N4266 Attributes for namespaces and enumerators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)|VS 2015|
|&nbsp;&nbsp;[N4267 u8 character literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)|VS 2015|
|&nbsp;&nbsp;[N4268 Allowing more non-type template args](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4268.html)|No|
|&nbsp;&nbsp;[N4295 Fold expressions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4295.html)|No|
|&nbsp;&nbsp;[P0036R0 Removing some empty unary folds](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0036r0.pdf)|No|
|&nbsp;&nbsp;[P0001R1 Removing the register keyword](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0002R1 Removing operator++ for bool](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html)|No|
|&nbsp;&nbsp;[P0012R1 Adding noexcept to the type system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0012r1.html)|No|
|&nbsp;&nbsp;[P0017R1 Extended aggregate initialization](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0017r1.html)|No|
|&nbsp;&nbsp;[P0018R3 Capturing *this by value](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0061R1 __has_include](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0061r1.html)|No|
|&nbsp;&nbsp;[P0136R1 Rewording inheriting constructors](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0136r1.html)|No|
|&nbsp;&nbsp;[P0138R2 Direct-list-init of fixed enums from integers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0170R1 constexpr lambdas](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0170r1.pdf)|No|
|&nbsp;&nbsp;[P0184R0 Generalized range-based for-loops](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html)|VS 2017|
|&nbsp;&nbsp;[P0188R1 [[fallthrough]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r1.pdf)|VS 2017 [*](#note_star)|
|&nbsp;&nbsp;[P0189R1 [[nodiscard]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0189r1.pdf)|No|
|&nbsp;&nbsp;[P0212R1 [[maybe_unused]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0212r1.pdf)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0245R1 Hexfloat literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0245r1.html)|No|
|&nbsp;&nbsp;[P0028R4 Using attribute namespaces without repetition](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0028r4.html)|No|
|&nbsp;&nbsp;[P0035R4 Over-aligned dynamic memory allocation](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0035r4.html)|No|
|&nbsp;&nbsp;[P0091R3 Template argument deduction for class templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html)|No|
|&nbsp;&nbsp;[P0127R2 Declaring non-type template parameters with auto](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0127r2.html)|No|
|&nbsp;&nbsp;[P0135R1 Guaranteed copy elision](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0135r1.html)|No|
|&nbsp;&nbsp;[P0145R3 Refining expression evaluation order](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0145r3.pdf)|No|
|&nbsp;&nbsp;[P0217R3 Structured bindings](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0217r3.html)|No|
|&nbsp;&nbsp;[P0283R2 Ignoring unrecognized attributes](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0283r2.html)|No|
|&nbsp;&nbsp;[P0292R2 constexpr if-statements](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0292r2.html)|No|
|&nbsp;&nbsp;[P0305R1 Selection statements with initializers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0305r1.html)|No|
|&nbsp;&nbsp;[P0386R2 Inline variables](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0386r2.pdf)|No|
|&nbsp;&nbsp;[P0522R0 Matching template template-parameters to compatible arguments](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0522r0.html)|No|
|&nbsp;&nbsp;[P0003R5 Removing dynamic-exception-specifications](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|No|
|&nbsp;&nbsp;[P0195R2 Pack expansions in using-declarations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0195r2.html)|No|

## Standard Library / STL Features

|Feature Area| |
|---|---|
|__C++17 Standard Library Features__|__Supported__|
|&nbsp;&nbsp;P0433R2 Deduction Guides for the STL|No|
|&nbsp;&nbsp;P0607R0 Inline Variables for the STL (Options A and B2)|No|
|&nbsp;&nbsp;[P0258R2 has_unique_object_representations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0258r2.html)|No|
|&nbsp;&nbsp;[P0426R1 constexpr For char_traits](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0426r1.html)|No|
|&nbsp;&nbsp;P0604R0 Changing is\_callable/result\_of To is\_invocable/invoke\_result (Options A and B)|No|
|&nbsp;&nbsp;P0156R2 Renaming Variadic lock\_guard to scoped\_lock|No|
|&nbsp;&nbsp;P0558R1 Resolving atomic<T> Named Base Class Inconsistencies|No|
|&nbsp;&nbsp;P0298R3 std::byte|No|
|&nbsp;&nbsp;[P0063R3 C11 Standard Library](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0063r3.html)|No|
|&nbsp;&nbsp;[P0030R1 hypot(x, y, z)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0030r1.pdf)|No|
|&nbsp;&nbsp;[P0435R1 Overhauling common_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0435r1.pdf)<br />&nbsp;&nbsp;P0548R1 Tweaking common\_type and duration|No|
|&nbsp;&nbsp;[P0513R0 Poisoning hash](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0513r0.pdf)<br />&nbsp;&nbsp;P0599R1 noexcept hash|No|
|&nbsp;&nbsp;[P0033R1 Rewording enable_shared_from_this](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0033r1.html)|No|
|&nbsp;&nbsp;[P0220R1 Library Fundamentals V1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html)|Partial <sup>[6](#note_6)</sup>|
|&nbsp;&nbsp;[P0414R2 shared_ptr\<T[]>, shared_ptr\<T[N]>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0414r2.html)<br />&nbsp;&nbsp;[P0497R0 Fixing shared_ptr For Arrays](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0497r0.html)|No|
|&nbsp;&nbsp;[P0084R2 Emplace Return Type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0084r2.pdf)|No|
|&nbsp;&nbsp;[P0083R3 Splicing Maps And Sets](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)<br />&nbsp;&nbsp;[P0508R0 Clarifying insert_return_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0508r0.html)|No|
|&nbsp;&nbsp;[P0031R0 constexpr For \<array> (Again) And \<iterator>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0031r0.html)|No|
|&nbsp;&nbsp;[P0505R0 constexpr For \<chrono> (Again)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0505r0.html)|No|
|&nbsp;&nbsp;[P0005R4 not_fn()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0005r4.html)<br />&nbsp;&nbsp;[P0358R1 Fixes For not_fn()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0358r1.html)|No|
|&nbsp;&nbsp;[P0295R0 gcd(), lcm()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0295r0.pdf)|No|
|&nbsp;&nbsp;[P0154R1 hardware_destructive_interference_size, etc.](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0154r1.html)|No|
|&nbsp;&nbsp;[P0067R5 Elementary String Conversions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0067r5.html)|No|
|&nbsp;&nbsp;[N4562 Library Fundamentals: Boyer-Moore search()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#func.searchers.boyer_moore)<br/>&nbsp;&nbsp;[P0253R1 Fixing Searcher Return Types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0253r1.pdf)|No|
|&nbsp;&nbsp;P0618R0 Deprecating \<codecvt>|No|
|&nbsp;&nbsp;[P0521R0 Deprecating shared_ptr::unique()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0521r0.html)|No|
|&nbsp;&nbsp;[P0174R2 Deprecating Vestigial Library Parts](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html)|No|
|&nbsp;&nbsp;[P0003R5 Removing Dynamic Exception Specifications](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|No|
|&nbsp;&nbsp;[P0302R1 Removing Allocator Support In std::function](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0302r1.html)|No|
|&nbsp;&nbsp;[P0040R3 Extending Memory Management Tools](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0040r3.html)|No|
|&nbsp;&nbsp;[N4562 Library Fundamentals: \<memory_resource>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#memory.resource.synop)<br />&nbsp;&nbsp;[P0337R0 Deleting polymorphic_allocator Assignment](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0337r0.html)|No|
|&nbsp;&nbsp;[P0024R2 Parallel Algorithms](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0024r2.html)<br />&nbsp;&nbsp;[P0336R1 Renaming Parallel Execution Policies](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0336r1.pdf)<br />&nbsp;&nbsp;[P0394R4 Parallel Algorithms Should terminate() For Exceptions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0394r4.html)<br />&nbsp;&nbsp;P0452R1 Unifying \<numeric> Parallel Algorithms|No|
|&nbsp;&nbsp;[P0226R1 Mathematical Special Functions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0226r1.pdf)|No|
|&nbsp;&nbsp;[P0218R1 \<filesystem>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0218r1.html)<br />&nbsp;&nbsp;[P0219R1 Relative Paths For Filesystem](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0219r1.html)<br />&nbsp;&nbsp;[P0392R0 Supporting string_view In Filesystem Paths](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0392r0.pdf)<br />&nbsp;&nbsp;P0430R2 Supporting Non-POSIX Filesystems<br />&nbsp;&nbsp;P0492R2 Resolving NB Comments for Filesystem|No <sup>[7](#note_7)</sup>|
|&nbsp;&nbsp;[P0152R1 atomic::is_always_lock_free](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0152r1.html)|VS 2017.x|
|&nbsp;&nbsp;[P0403R1 UDLs For \<string_view> ("meow"sv, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0403r1.html)|VS 2017.x|
|&nbsp;&nbsp;[P0418R2 atomic compare_exchange memory_order Requirements](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0418r2.html)|VS 2017.x|
|&nbsp;&nbsp;[P0516R0 Marking shared_future Copying As noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0516r0.html)|VS 2017.x|
|&nbsp;&nbsp;[P0517R0 Constructing future_error From future_errc](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0517r0.html)|VS 2017.x|
|&nbsp;&nbsp;[N4562 Library Fundamentals: \<algorithm> sample()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#alg.random.sample)|VS 2017|
|&nbsp;&nbsp;[N4562 Library Fundamentals: \<any>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#any)|VS 2017|
|&nbsp;&nbsp;[N4562 Library Fundamentals: \<optional>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#optional)|VS 2017|
|&nbsp;&nbsp;[N4562 Library Fundamentals: \<string_view>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#string.view)|VS 2017|
|&nbsp;&nbsp;[N4562 Library Fundamentals: \<tuple> apply()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#tuple)|VS 2017|
|&nbsp;&nbsp;[P0032R3 Homogeneous Interface For variant/any/optional](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0032r3.pdf)|VS 2017|
|&nbsp;&nbsp;[P0077R2 is_callable, is_nothrow_callable](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0077r2.html)|VS 2017|
|&nbsp;&nbsp;[P0088R3 \<variant>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0088r3.html)|VS 2017|
|&nbsp;&nbsp;[P0163R0 shared_ptr::weak_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0163r0.html)|VS 2017|
|&nbsp;&nbsp;[P0209R2 make_from_tuple()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0209r2.pdf)|VS 2017|
|&nbsp;&nbsp;[P0254R2 Integrating string_view And std::string](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0254r2.pdf)|VS 2017|
|&nbsp;&nbsp;[P0307R2 Making Optional Greater Equal Again](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0307r2.pdf)|VS 2017|
|&nbsp;&nbsp;[P0393R3 Making Variant Greater Equal](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0393r3.html)|VS 2017|
|&nbsp;&nbsp;[P0504R0 Revisiting in_place_t/in_place_type_t\<T>/in_place_index_t\<I>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0504r0.html)|VS 2017|
|&nbsp;&nbsp;[P0510R0 Rejecting variants Of Nothing, Arrays, References, And Incomplete Types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0510r0.html)|VS 2017|
|&nbsp;&nbsp;[P0025R1 clamp()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0025r1.html)|VS 2015.3|
|&nbsp;&nbsp;[P0185R1 is_swappable, is_nothrow_swappable](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0185r1.html)|VS 2015.3|
|&nbsp;&nbsp;[P0272R1 Non-const basic_string::data()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0272r1.html)|VS 2015.3|
|&nbsp;&nbsp;[N4387 Improving pair And tuple](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4387.html)|VS 2015.2|
|&nbsp;&nbsp;[N4508 shared_mutex (Untimed)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4508.html)|VS 2015.2|
|&nbsp;&nbsp;[P0004R1 Removing Deprecated Iostreams Aliases](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0004r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0006R0 Variable Templates For Type Traits (is_same_v, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0006r0.html)|VS 2015.2|
|&nbsp;&nbsp;[P0007R1 as_const()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0007r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0013R1 Logical Operator Type Traits (conjunction, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0013r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0074R0 owner_less\<>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0074r0.html)|VS 2015.2|
|&nbsp;&nbsp;[P0092R1 \<chrono> floor(), ceil(), round(), abs()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0092r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0156R0 Variadic lock_guard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0156r0.html)|VS 2015.2|
|&nbsp;&nbsp;[N3911 void_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3911.pdf)|VS 2015|
|&nbsp;&nbsp;[N4089 Safe Conversions In unique_ptr\<T[]>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4089.pdf)|VS 2015|
|&nbsp;&nbsp;[N4169 invoke()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4169.html)|VS 2015|
|&nbsp;&nbsp;[N4190 Removing auto_ptr, random_shuffle(), And Old \<functional> Stuff](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4190.htm)|VS 2015|
|&nbsp;&nbsp;[N4258 noexcept Cleanups](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4258.pdf)|VS 2015|
|&nbsp;&nbsp;[N4259 uncaught_exceptions()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4259.pdf)|VS 2015|
|&nbsp;&nbsp;[N4277 Trivially Copyable reference_wrapper](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4277.html)|VS 2015|
|&nbsp;&nbsp;[N4279 insert_or_assign()/try_emplace() For map/unordered_map](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4279.html)|VS 2015|
|&nbsp;&nbsp;[N4280 size(), empty(), data()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4280.pdf)|VS 2015|
|&nbsp;&nbsp;[N4366 Precisely Constraining unique_ptr Assignment](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4366.html)|VS 2015|
|&nbsp;&nbsp;[N4389 bool_constant](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4389.html)|VS 2015|
|&nbsp;&nbsp;[N4510 Supporting Incomplete Types In vector/list/forward_list](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4510.html)|VS 2013|
|&nbsp;&nbsp;[N4284 Contiguous Iterators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4284.html)|N/A|
|&nbsp;&nbsp;[P0175R1 Synopses For The C Library](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0175r1.html)|N/A|
|&nbsp;&nbsp;[P0180R2 Reserving Namespaces For Future Standardization](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0180r2.html)|N/A|
|&nbsp;&nbsp;[P0346R1 A \<random> Nomenclature Tweak](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0346r1.pdf)|N/A|
|&nbsp;&nbsp;[P0371R1 Discouraging memory_order_consume](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0371r1.html)|N/A|
|&nbsp;&nbsp;P0467R2 Requiring Forward Iterators for Parallel Algorithms|N/A|
|&nbsp;&nbsp;[P0502R0 Parallel Algorithms Should terminate() For Exceptions, Usually](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0502r0.html)|N/A|
|&nbsp;&nbsp;[P0503R0 Correcting Library Usage Of "literal type"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0503r0.html)|N/A|
|&nbsp;&nbsp;[P0509R1 Updating "Restrictions on exception handling"](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0509r1.pdf)|N/A|
|&nbsp;&nbsp;P0518R1 Copying Trivially Copy Constructible Elements In Parallel Algorithms|N/A|
|&nbsp;&nbsp;P0523R1 Relaxing Complexity Requirements Of Parallel Algorithms (General)|N/A|
|&nbsp;&nbsp;P0574R1 Relaxing Complexity Requirements Of Parallel Algorithms (Specific)|N/A|
|&nbsp;&nbsp;P0623R0 Final C++17 Parallel Algorithms Fixes|N/A|
|__C++14 Standard Library Features__|__Supported__|
|&nbsp;&nbsp;[N3462 SFINAE-Friendly result_of](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3462.html)|VS 2015.2|
|&nbsp;&nbsp;[N3302 constexpr For \<complex>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3302.html)|VS 2015|
|&nbsp;&nbsp;[N3469 constexpr For \<chrono>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3469.html)|VS 2015|
|&nbsp;&nbsp;[N3470 constexpr For \<array>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3470.html)|VS 2015|
|&nbsp;&nbsp;[N3471 constexpr For \<initializer_list>, \<tuple>, \<utility>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3471.html)|VS 2015|
|&nbsp;&nbsp;[N3545 integral_constant::operator()()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3545.pdf)|VS 2015|
|&nbsp;&nbsp;[N3642 UDLs For \<chrono>, \<string> (1729ms, "meow"s, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3642.pdf)|VS 2015|
|&nbsp;&nbsp;[N3644 Null Forward Iterators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3644.pdf)|VS 2015|
|&nbsp;&nbsp;[N3654 quoted()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3654.html)|VS 2015|
|&nbsp;&nbsp;[N3657 Heterogeneous Associative Lookup](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3657.htm)|VS 2015|
|&nbsp;&nbsp;[N3658 integer_sequence](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3658.html)|VS 2015|
|&nbsp;&nbsp;[N3659 shared_mutex (Timed)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3659.html)|VS 2015|
|&nbsp;&nbsp;[N3668 exchange()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3668.html)|VS 2015|
|&nbsp;&nbsp;[N3669 Fixing constexpr Member Functions Without const](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3669.pdf)|VS 2015|
|&nbsp;&nbsp;[N3670 get\<T>()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3670.html)|VS 2015|
|&nbsp;&nbsp;[N3671 Dual-Range equal(), is_permutation(), mismatch()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3671.html)|VS 2015|
|&nbsp;&nbsp;[N3778 Sized Deallocation](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|VS 2015|
|&nbsp;&nbsp;[N3779 UDLs For \<complex> (3.14i, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3779.pdf)|VS 2015|
|&nbsp;&nbsp;[N3789 constexpr For \<functional>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3789.htm)|VS 2015|
|&nbsp;&nbsp;[N3887 tuple_element_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3887.pdf)|VS 2015|
|&nbsp;&nbsp;[N3891 Renaming shared_mutex (Timed) To shared_timed_mutex](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3891.htm)|VS 2015|
|&nbsp;&nbsp;[N3346 Minimal Container Element Requirements](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3346.pdf)|VS 2013|
|&nbsp;&nbsp;[N3421 Transparent Operator Functors (less\<>, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3421.htm)|VS 2013|
|&nbsp;&nbsp;[N3655 Alias Templates For \<type_traits> (decay_t, etc.)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3655.pdf)|VS 2013|
|&nbsp;&nbsp;[N3656 make_unique()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3656.htm)|VS 2013|
|&nbsp;&nbsp;[N3924 Discouraging rand()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3924.pdf)|N/A|  
  
A group of papers listed together indicates that a feature was voted into the Standard, and then one or more papers to improve or expand that feature were also voted in. These features are implemented together.  
  
### Supported values  
__No__ means not yet implemented.  
__Partial__ means the implementation in Visual Studio 2017 is incomplete. For more details, see the Notes section.  
__N/A__ means the proposal papers do not describe features. These papers altered the language of the standard, but didn’t create any work for implementers. They’re listed here for completeness.  
__VS 2010__ indicates features that are supported in Visual Studio 2010.  
__VS 2013__ indicates features that are supported in Visual Studio 2013.  
__VS 2015__ indicates features that are supported in Visual Studio 2015 RTM.  
__VS 2015.2__ and __VS 2015.3__ indicate features that are supported in Visual Studio 2015 Update 2 and Visual Studio 2015 Update 3, respectively.  
__VS 2017__ indicates features that are supported in Visual Studio 2017 RTM.  
__VS 2017.x__ indicates features planned for a future update of Visual Studio 2017.  
  
### Notes  
<a name="note_1"></a>__1__ This ignores C++03’s dynamic exception specifications, which were deprecated in C++11. There is no plan to implement them, in expectation they’ll be removed from a future C++ Standard.  
<a name="note_2"></a>__2__ The compiler’s support for Expression SFINAE has been sufficient for the Standard Library since Visual Studio 2015 Update 2, but support remains incomplete.  
<a name="note_3"></a>__3__ The compiler’s support for C99 Preprocessor rules is incomplete in Visual Studio 2017. Variadic macros are supported, but there are many bugs in the preprocessor’s behavior.  
<a name="note_4"></a>__4__ This is marked as Not Applicable because compilers are permitted, but not required, to support extended integer types.  Like GCC and Clang, we’ve chosen not to support them.  
<a name="note_5"></a>__5__ Similarly, this is marked as Not Applicable because compilers are permitted, but not required, to implement this optimization.  
<a name="note_6"></a>__6__ Features that were not completed in Visual Studio 2015 are broken out elsewhere in this table.  
<a name="note_7"></a>__7__ The Filesystem TS is implemented in both \<experimental/filesystem> 
and \<filesystem> for historical reasons, but its implementation must be corrected before its namespace is moved. Until this is completed, the feature is marked as not yet implemented.  
<a name="note_star"></a>__*__ These features are guarded by the [/std:c++latest](./build/reference/std-specify-language-standard-version.md) compiler option.  
  
## See Also  
[C++ Language Reference](cpp/cpp-language-reference.md)  
[C++ Standard Library](standard-library/cpp-standard-library-reference.md)   
[C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md)  
[What's New for Visual C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md)  
[Visual C++ change history 2003 through 2015](porting/visual-cpp-change-history-2003-2015.md)  
[Visual C++ What's New 2003 through 2015](porting/visual-cpp-what-s-new-2003-through-2015.md)  
[Visual C++ team blog](http://blogs.msdn.microsoft.com/vcblog/)  
