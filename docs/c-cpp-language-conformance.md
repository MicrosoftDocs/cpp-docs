---
title: "Visual C/C++ Language Conformance | Microsoft Docs"
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
# Visual C/C++ Language Conformance 
This topic summarizes the ISO C++03/11/14 and draft C++17 language standards conformance of compiler features and Standard Library (STL) features for C++ in Visual Studio 2017. The compiler feature names and STL feature numbers each link to the ISO standards committee working paper that describes the feature.  
  
For current news from the C++ team, 
visit the [Visual C++ team blog](http://blogs.msdn.microsoft.com/vcblog/).  
  
## Compiler Features  
  
|Feature Area|Status|Notes|  
|----|---|----|  
|__C++03/11 Core Language Features__|__Status__|__Notes__|
|&nbsp;&nbsp;Everything else|Yes|A|
|&nbsp;&nbsp;Two-phase name lookup|No|
|&nbsp;&nbsp;[Expression SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2634.html)|Partial|B|
|&nbsp;&nbsp;[C99 preprocessor](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1653.htm)|Partial|C|
|&nbsp;&nbsp;[Extended integer types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1988.pdf)|N/A|D|
|__C++14 Core Language Features__|__Status__|__Notes__|
|&nbsp;&nbsp;[Avoiding/fusing allocations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3664.html)|N/A|E|
|&nbsp;&nbsp;[Tweaked wording for contextual conversions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3323.pdf)|Yes|
|&nbsp;&nbsp;[Binary literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3472.pdf)|Yes|
|&nbsp;&nbsp;[auto and decltype(auto) return types](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3638.html)|Yes|
|&nbsp;&nbsp;[init-captures](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3648.html)|Yes|
|&nbsp;&nbsp;[Generic lambdas](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3649.html)|Yes|
|&nbsp;&nbsp;[Variable templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3651.pdf)|Yes|
|&nbsp;&nbsp;[Extended constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html)|Yes|P5|
|&nbsp;&nbsp;[NSDMIs for aggregates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3653.html)|Yes|P4|
|&nbsp;&nbsp;[[[deprecated]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3760.html)|Yes|
|&nbsp;&nbsp;[Sized deallocation](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|Yes|
|&nbsp;&nbsp;[Digit separators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3781.pdf)|Yes|
|__C++17 Core Language Features__|__Status__|__Notes__|
|&nbsp;&nbsp;[New rules for auto with braced-init-lists](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)|Yes|
|&nbsp;&nbsp;[Terse static_assert](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf)|Yes|P5,*|
|&nbsp;&nbsp;[typename in template template-parameters](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)|Yes|
|&nbsp;&nbsp;[Removing trigraphs](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)|Yes|
|&nbsp;&nbsp;[Nested namespace definitions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4230.html)|Yes|*|
|&nbsp;&nbsp;[Fixing qualification conversions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4261.html)|No|
|&nbsp;&nbsp;[Attributes for namespaces and enumerators](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)|Yes|
|&nbsp;&nbsp;[u8 character literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)|Yes|
|&nbsp;&nbsp;[Allowing more non-type template args](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4268.html)|No|
|&nbsp;&nbsp;[Fold expressions](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4295.html)|No|
|&nbsp;&nbsp;[Removing some empty unary folds](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0036r0.pdf)|No|
|&nbsp;&nbsp;[Removing the register keyword](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html)|No|
|&nbsp;&nbsp;[Removing operator++ for bool](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html)|No|
|&nbsp;&nbsp;[Adding noexcept to the type system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0012r1.html)|No|
|&nbsp;&nbsp;[Extended aggregate initialization](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0017r1.html)|No|
|&nbsp;&nbsp;[Capturing *this by value](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html)|No|
|&nbsp;&nbsp;[__has_include](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0061r1.html)|No|
|&nbsp;&nbsp;[Rewording inheriting constructors](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0136r1.html)|No|
|&nbsp;&nbsp;[Direct-list-init of fixed enums from integers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf)|No|
|&nbsp;&nbsp;[constexpr lambdas](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0170r1.pdf)|No|
|&nbsp;&nbsp;[Generalized range-based for-loops](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html)|Yes|P5|
|&nbsp;&nbsp;[[[fallthrough]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r1.pdf)|Yes|P4,*|
|&nbsp;&nbsp;[[[nodiscard]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0189r1.pdf)|No|
|&nbsp;&nbsp;[[[maybe_unused]] attribute](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0212r1.pdf)|No|
|&nbsp;&nbsp;[Hexfloat literals](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0245r1.html)|No|
|&nbsp;&nbsp;[Using attribute namespaces without repetition](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0028r4.html)|No|
|&nbsp;&nbsp;[Over-aligned dynamic memory allocation](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0035r4.html)|No|
|&nbsp;&nbsp;[Template argument deduction for class templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html)|No|
|&nbsp;&nbsp;[Declaring non-type template parameters with auto](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0127r2.html)|No|
|&nbsp;&nbsp;[Guaranteed copy elision](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0135r1.html)|No|
|&nbsp;&nbsp;[Refining expression evaluation order](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0145r3.pdf)|No|
|&nbsp;&nbsp;[Structured bindings](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0217r3.html)|No|
|&nbsp;&nbsp;[Ignoring unrecognized attributes](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0283r2.html)|No|
|&nbsp;&nbsp;[constexpr if-statements](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0292r2.html)|No|
|&nbsp;&nbsp;[Selection statements with initializers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0305r1.html)|No|
|&nbsp;&nbsp;[Inline variables](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0386r2.pdf)|No|
|&nbsp;&nbsp;[Matching template template-parameters to compatible arguments](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0522r0.html)|No|
|&nbsp;&nbsp;[Removing dynamic-exception-specifications](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|No|
|&nbsp;&nbsp;[Pack expansions in using-declarations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0195r2.html)|No|


* __A__ This is deliberately ignoring C++03’s dynamic exception specifications, which were deprecated in C++11.  We aren’t planning to implement them, and hopefully they’ll be removed from a future C++ Standard.
* __B__ The compiler’s support for Expression SFINAE is continuing to improve (and has been sufficient for the STL since VS 2015 Update 2), but remains Partial.  We’ll publish a detailed blog post about this in the near future.
* __C__ The compiler’s support for C99 Preprocessor rules remains Partial.  Variadic macros are supported, but there are many bugs in the preprocessor’s behavior.  We’ll overhaul the preprocessor before marking this as Yes.
* __D__ This is marked as Not Applicable because compilers are permitted, but not required, to support extended integer types.  Like GCC and Clang, we’ve chosen not to support them.
* __E__ Similarly, this is marked as Not Applicable because compilers are permitted, but not required, to implement this optimization.
* __P4__ Implemented in VS “15” Preview 4.
* __P5__ Implemented in VS “15” Preview 5.
* __*__ These features are guarded by the /std:c++latest compiler option.

## Standard Library / STL Features

|Status|Std|Paper|Title|
|---|---|---|---|
|missing|C++17|[P0258R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0258r2.html)|has_unique_object_representations|
|missing|C++17|[P0426R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0426r1.html)|constexpr For char_traits|
|missing|C++17|[P0063R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0063r3.html)|C11 Standard Library|
|missing|C++17|[P0030R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0030r1.pdf)|hypot(x, y, z)|
|missing|C++17|[P0435R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0435r1.pdf)|Overhauling common_type|
|missing|C++17|[P0513R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0513r0.pdf)|Poisoning hash|
|missing|C++17|[P0033R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0033r1.html)|Rewording enable_shared_from_this|
|…|C++17|[P0220R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html)|Library Fundamentals V1|
|missing|C++17|[P0414R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0414r2.html)|shared_ptr<T[]>, shared_ptr<T[N]>|
|patch|C++17|[P0497R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0497r0.html)|Fixing shared_ptr For Arrays|
|missing|C++17|[P0084R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0084r2.pdf)|Emplace Return Type|
|missing|C++17|[P0083R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)|Splicing Maps And Sets|
|patch|C++17|[P0508R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0508r0.html)|Clarifying insert_return_type|
|missing|C++17|[P0031R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0031r0.html)|constexpr For <array> (Again) And <iterator>|
|missing|C++17|[P0505R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0505r0.html)|constexpr For <chrono> (Again)|
|missing|C++17|[P0005R4](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0005r4.html)|not_fn()|
|patch|C++17|[P0358R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0358r1.html)|Fixes For not_fn()|
|missing|C++17|[P0295R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0295r0.pdf)|gcd(), lcm()|
|missing|C++17|[P0154R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0154r1.html)|hardware_destructive_interference_size, etc.|
|missing|C++17|[P0067R5](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0067r5.html)|Elementary String Conversions|
|missing|C++17|…|Boyer-Moore search()|
|patch|C++17|[P0253R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0253r1.pdf)|Fixing Searcher Return Types|
|missing|C++17|[P0521R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0521r0.html)|Deprecating shared_ptr::unique()|
|missing|C++17|[P0174R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html)|Deprecating Vestigial Library Parts|
|missing|C++17|[P0003R5](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|Removing Dynamic Exception Specifications|
|missing|C++17|[P0302R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0302r1.html)|Removing Allocator Support In std::function|
|missing|C++17|[P0040R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0040r3.html)|Extending Memory Management Tools|
|missing|C++17|…|<memory_resource>|
|patch|C++17|[P0337R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0337r0.html)|Deleting polymorphic_allocator Assignment|
|missing|C++17|[P0024R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0024r2.html)|Parallel Algorithms|
|patch|C++17|[P0336R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0336r1.pdf)|Renaming Parallel Execution Policies|
|patch|C++17|[P0394R4](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0394r4.html)|Parallel Algorithms Should terminate() For Exceptions|
|missing|C++17|[P0226R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0226r1.pdf)|Mathematical Special Functions|
|missing|C++17|[P0218R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0218r1.html)|<filesystem>|
|patch|C++17|[P0219R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0219r1.html)|Relative Paths For Filesystem|
|patch|C++17|[P0392R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0392r0.pdf)|Supporting string_view In Filesystem Paths|
|doomed|C++17|[P0181R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0181r1.html)|Ordered By Default|
|VS 2017.1|C++17|[P0152R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0152r1.html)|atomic::is_always_lock_free|
|VS 2017.1|C++17|[P0403R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0403r1.html)|UDLs For <string_view> ("meow"sv, etc.)|
|VS 2017.1|C++17|[P0418R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0418r2.html)|atomic compare_exchange memory_order Requirements|
|VS 2017.1|C++17|[P0516R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0516r0.html)|Marking shared_future Copying As noexcept|
|VS 2017.1|C++17|[P0517R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0517r0.html)|Constructing future_error From future_errc|
|VS 2017|C++17|…|<algorithm> sample()|
|VS 2017|C++17|…|<any>|
|VS 2017|C++17|…|<optional>|
|VS 2017|C++17|…|<string_view>|
|VS 2017|C++17|…|<tuple> apply()|
|VS 2017|C++17|[P0032R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0032r3.pdf)|Homogeneous Interface For variant/any/optional|
|VS 2017|C++17|[P0077R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0077r2.html)|is_callable, is_nothrow_callable|
|VS 2017|C++17|[P0088R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0088r3.html)|<variant>|
|VS 2017|C++17|[P0163R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0163r0.html)|shared_ptr::weak_type|
|VS 2017|C++17|[P0209R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0209r2.pdf)|make_from_tuple()|
|VS 2017|C++17|[P0254R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0254r2.pdf)|Integrating string_view And std::string|
|VS 2017|C++17|[P0307R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0307r2.pdf)|Making Optional Greater Equal Again|
|VS 2017|C++17|[P0393R3](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0393r3.html)|Making Variant Greater Equal|
|VS 2017|C++17|[P0504R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0504r0.html)|Revisiting in_place_t/in_place_type_t<T>/in_place_index_t<I>|
|VS 2017|C++17|[P0510R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0510r0.html)|Rejecting variants Of Nothing, Arrays, References, And Incomplete Types|
|VS 2015.3|C++17|[P0025R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0025r1.html)|clamp()|
|VS 2015.3|C++17|[P0185R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0185r1.html)|is_swappable, is_nothrow_swappable|
|VS 2015.3|C++17|[P0272R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0272r1.html)|Non-const basic_string::data()|
|VS 2015.2|C++17|[N4387](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4387.html)|Improving pair And tuple|
|VS 2015.2|C++17|[N4508](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4508.html)|shared_mutex (Untimed)|
|VS 2015.2|C++17|[P0004R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0004r1.html)|Removing Deprecated Iostreams Aliases|
|VS 2015.2|C++17|[P0006R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0006r0.html)|Variable Templates For Type Traits (is_same_v, etc.)|
|VS 2015.2|C++17|[P0007R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0007r1.html)|as_const()|
|VS 2015.2|C++17|[P0013R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0013r1.html)|Logical Operator Type Traits (conjunction, etc.)|
|VS 2015.2|C++17|[P0074R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0074r0.html)|owner_less<>|
|VS 2015.2|C++17|[P0092R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0092r1.html)|<chrono> floor(), ceil(), round(), abs()|
|VS 2015.2|C++17|[P0156R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0156r0.html)|Variadic lock_guard|
|VS 2015|C++17|[N3911](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3911.pdf)|void_t|
|VS 2015|C++17|[N4089](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4089.pdf)|Safe Conversions In unique_ptr<T[]>|
|VS 2015|C++17|[N4169](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4169.html)|invoke()|
|VS 2015|C++17|[N4190](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4190.htm)|Removing auto_ptr, random_shuffle(), And Old <functional> Stuff|
|VS 2015|C++17|[N4258](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4258.pdf)|noexcept Cleanups|
|VS 2015|C++17|[N4259](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4259.pdf)|uncaught_exceptions()|
|VS 2015|C++17|[N4277](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4277.html)|Trivially Copyable reference_wrapper|
|VS 2015|C++17|[N4279](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4279.html)|insert_or_assign()/try_emplace() For map/unordered_map|
|VS 2015|C++17|[N4280](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4280.pdf)|size(), empty(), data()|
|VS 2015|C++17|[N4366](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4366.html)|Precisely Constraining unique_ptr Assignment|
|VS 2015|C++17|[N4389](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4389.html)|bool_constant|
|VS 2013|C++17|[N4510](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4510.html)|Supporting Incomplete Types In vector/list/forward_list|
|N/A|C++17|[N4284](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4284.html)|Contiguous Iterators|
|N/A|C++17|[P0175R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0175r1.html)|Synopses For The C Library|
|N/A|C++17|[P0180R2](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0180r2.html)|Reserving Namespaces For Future Standardization|
|N/A|C++17|[P0346R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0346r1.pdf)|A <random> Nomenclature Tweak|
|N/A|C++17|[P0371R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0371r1.html)|Discouraging memory_order_consume|
|N/A|C++17|[P0502R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0502r0.html)|Parallel Algorithms Should terminate() For Exceptions, Usually|
|N/A|C++17|[P0503R0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0503r0.html)|Correcting Library Usage Of "literal type"|
|N/A|C++17|[P0509R1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0509r1.pdf)|Updating "Restrictions on exception handling"|
|VS 2015.2|C++14|[N3462](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3462.html)|SFINAE-Friendly result_of|
|VS 2015|C++14|[N3302](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3302.html)|constexpr For <complex>|
|VS 2015|C++14|[N3469](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3469.html)|constexpr For <chrono>|
|VS 2015|C++14|[N3470](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3470.html)|constexpr For <array>|
|VS 2015|C++14|[N3471](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3471.html)|constexpr For <initializer_list>, <tuple>, <utility>|
|VS 2015|C++14|[N3545](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3545.pdf)|integral_constant::operator()()|
|VS 2015|C++14|[N3642](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3642.pdf)|UDLs For <chrono>, <string> (1729ms, "meow"s, etc.)|
|VS 2015|C++14|[N3644](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3644.pdf)|Null Forward Iterators|
|VS 2015|C++14|[N3654](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3654.html)|quoted()|
|VS 2015|C++14|[N3657](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3657.htm)|Heterogeneous Associative Lookup|
|VS 2015|C++14|[N3658](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3658.html)|integer_sequence|
|VS 2015|C++14|[N3659](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3659.html)|shared_mutex (Timed)|
|VS 2015|C++14|[N3668](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3668.html)|exchange()|
|VS 2015|C++14|[N3669](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3669.pdf)|Fixing constexpr Member Functions Without const|
|VS 2015|C++14|[N3670](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3670.html)|get<T>()|
|VS 2015|C++14|[N3671](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3671.html)|Dual-Range equal(), is_permutation(), mismatch()|
|VS 2015|C++14|[N3778](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|Sized Deallocation|
|VS 2015|C++14|[N3779](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3779.pdf)|UDLs For <complex> (3.14i, etc.)|
|VS 2015|C++14|[N3789](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3789.htm)|constexpr For <functional>|
|VS 2015|C++14|[N3887](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3887.pdf)|tuple_element_t|
|VS 2015|C++14|[N3891](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3891.htm)|Renaming shared_mutex (Timed) To shared_timed_mutex|
|VS 2013|C++14|[N3346](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3346.pdf)|Minimal Container Element Requirements|
|VS 2013|C++14|[N3421](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3421.htm)|Transparent Operator Functors (less<>, etc.)|
|VS 2013|C++14|[N3655](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3655.pdf)|Alias Templates For <type_traits> (decay_t, etc.)|
|VS 2013|C++14|[N3656](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3656.htm)|make_unique()|
|N/A|C++14|[N3924](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3924.pdf)|Discouraging rand()|  
  
This table is somewhat complicated; we use it to track our work, so it has to be detailed enough to tell us what to do.  
  
* __…__ indicates where the Library Fundamentals V1 paper has been decomposed into its individual features.  
* __missing__ means not yet implemented.  We’re working on it!  We were fully caught up in January, but then more features got voted in.  
* __patch__ indicates where a feature was voted in, and then a paper fixing that feature somehow was also voted in.  We’ll implement them together, so they don’t really represent any additional work for us to do.  (Each patch is grouped below its affected feature.)  
* __doomed__ indicates that the Ordered By Default feature has been found to break ABI compatibility (in other compilers), will not be implemented by any vendor, and will be removed from C++17.  
* __N/A__ papers aren’t actually features – they altered Standardese, but didn’t create any work for implementers.  They’re listed for completeness.  
* __VS 2013__ indicates features that were supported long, long ago, in a compiler far, far away.  
* __VS 2015__ indicates features that were supported in VS 2015 RTM.  
* __Update 2__ and __Update 3__ refer to VS 2015.  
* __Preview 4__ and __Preview 5__ refer to VS 2017.  
* __RC__ indicates features that were supported in the Release Candidate build.  
  
Note that while we’ve implemented the Filesystem TS (and for historical reasons we’re providing it as both <experimental/filesystem> 
and <filesystem>), we need to overhaul its implementation before moving around its namespace and marking the Standard feature as implemented.  
  
## See Also  
[C++ conformance improvements in Visual Studio 2017](cpp-conformance-improvements-2017.md)  
