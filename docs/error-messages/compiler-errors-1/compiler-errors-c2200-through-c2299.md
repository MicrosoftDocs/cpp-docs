---
title: "Compiler Errors C2200 through C2299 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2202", "C2209", "C2210", "C2211", "C2214", "C2215", "C2221", "C2225", "C2230", "C2235", "C2237", "C2239", "C2240", "C2257", "C2260", "C2263", "C2265", "C2269", "C2278", "C2281", "C2282", "C2288", "C2291", "C2294"]
helpviewer_keywords: ["C2202", "C2209", "C2210", "C2211", "C2214", "C2215", "C2221", "C2225", "C2230", "C2235", "C2237", "C2239", "C2240", "C2257", "C2260", "C2263", "C2265", "C2269", "C2278", "C2281", "C2282", "C2288", "C2291", "C2294"]
dev_langs: ["C++"]
ms.assetid: 9b36d11b-9510-4390-96f1-0c9235124d14
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Errors C2200 through C2299
The articles in this part of the documentation contain information about a subsection of the Visual C++ compiler errors. You can access the information here or, in the **Output** window in Visual Studio, you can select an error number and then choose the F1 key.  
  
> [!NOTE]
>  Not every [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] error is documented in MSDN. In many cases, the diagnostic message provides all of the information that's available. If you think an error message needs additional explanation, you can let us know. You can use the feedback form on this page, or go to the menu bar in Visual Studio and choose **Help**, **Report a Bug**, or you can submit a suggestion or bug report on [Microsoft Connect](http://connect.microsoft.com/VisualStudio).  
  
 You may find additional assistance for errors and warnings on the MSDN public forums. The [Visual C++ Language](http://go.microsoft.com/fwlink/?LinkId=158195) forum is for questions and discussions about the [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] language syntax and compiler. The [Visual C++ General](http://go.microsoft.com/fwlink/?LinkId=158194) forum is for questions about [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] that are not discussed in other forums. You may also find help about errors and warnings on [Stack Overflow](http://stackoverflow.com/).  
  
|Error|Message|  
|-----------|-------------|  
|[Compiler Error C2200](compiler-error-c2200.md)|'*function*': function has already been defined|  
|[Compiler Error C2201](compiler-error-c2201.md)|'*identifier*': must have external linkage in order to be exported/imported|  
|Compiler Error C2202|'*function*': not all control paths return a value|  
|[Compiler Error C2203](compiler-error-c2203.md)|delete operator cannot specify bounds for an array|  
|[Compiler Error C2204](compiler-error-c2204.md)|'*type*': type definition found within parentheses|  
|[Compiler Error C2205](compiler-error-c2205.md)|'*identifier*': cannot initialize extern variables with block scope|  
|[Compiler Error C2206](compiler-error-c2206.md)|'*function*': typedef cannot be used for function definition|  
|[Compiler Error C2207](compiler-error-c2207.md)|'*member*': a member of a class template cannot acquire a function type|  
|[Compiler Error C2208](compiler-error-c2208.md)|'*type*': no members defined using this type|  
|Compiler Error C2209|'*identifier*': aliases cannot be used in constructor declarations|  
|Compiler Error C2210|'*identifier*': pack expansions cannot be used as arguments to non-packed parameters in alias templates|  
|Compiler Error C2211|A non-virtual destructor in a ref class derived from a ref class with a public destructor must also be public|  
|[Compiler Error C2212](compiler-error-c2212.md)|'*identifier*': __based not available for pointers to functions|  
|[Compiler Error C2213](compiler-error-c2213.md)|'*identifier*': illegal argument to __based|  
|Compiler Error C2214|pointers based on 'void' require the use of:>|  
|Compiler Error C2215|'*keyword*' cannot be used with '/arch:SSE'|  
|[Compiler Error C2216](compiler-error-c2216.md)|'*keyword1*' cannot be used with '*keyword2*'|  
|[Compiler Error C2217](compiler-error-c2217.md)|'*attribute1*' requires '*attribute2*'|  
|[Compiler Error C2218](compiler-error-c2218.md)|'*calltype*' cannot be used with '/arch:IA32'|  
|[Compiler Error C2219](compiler-error-c2219.md)|syntax error: type qualifier must be after '*'|  
|[Compiler Error C2220](compiler-error-c2220.md)|warning treated as error - no '*filetype*' file generated|  
|Compiler Error C2221|Obsolete.|  
|[Compiler Error C2222](compiler-error-c2222.md)|unexpected type '*type*': a base-class or member was expected|  
|[Compiler Error C2223](compiler-error-c2223.md)|left of '->*identifier*' must point to struct/union|  
|[Compiler Error C2224](compiler-error-c2224.md)|left of '.*identifier*' must have struct/union type|  
|Compiler Error C2225|Obsolete.|  
|[Compiler Error C2226](compiler-error-c2226.md)|syntax error: unexpected type '*type*'|  
|[Compiler Error C2227](compiler-error-c2227.md)|left of '->*identifier*' must point to class/struct/union/generic type|  
|[Compiler Error C2228](compiler-error-c2228.md)|left of '.*identifier*' must have class/struct/union|  
|[Compiler Error C2229](compiler-error-c2229.md)|class/struct/union '*type*' has an illegal zero-sized array|  
|Compiler Error C2230|could not find module '*name*'|  
|[Compiler Error C2231](compiler-error-c2231.md)|'.*identifier*': left operand points to 'class/struct/union', use '->'|  
|[Compiler Error C2232](compiler-error-c2232.md)|'->*identifier*': left operand has 'class/struct/union' type, use '.'|  
|[Compiler Error C2233](compiler-error-c2233.md)|'*identifier*': arrays of objects containing zero-size arrays are illegal|  
|[Compiler Error C2234](compiler-error-c2234.md)|*identifier*': arrays of references are illegal|  
|Compiler Error C2235|Obsolete.|  
|[Compiler Error C2236](compiler-error-c2236.md)|unexpected token '*token*'. Did you forget a ';'?|  
|Compiler Error C2237|multiple module declaration|  
|[Compiler Error C2238](compiler-error-c2238.md)|unexpected token(s) preceding '*token*'|  
|Compiler Error C2239|'*function*': attempting to delete a __declspec(dllexport) function|  
|Compiler Error C2240|Obsolete.|  
|[Compiler Error C2241](compiler-error-c2241.md)|'*identifier*': member access is restricted|  
|[Compiler Error C2242](compiler-error-c2242.md)|typedef name cannot follow class/struct/union|  
|[Compiler Error C2243](compiler-error-c2243.md)|'*conversion_type*': conversion from '*type1*' to '*type2*' exists, but is inaccessible|  
|[Compiler Error C2244](compiler-error-c2244.md)|'*identifier*': unable to match function definition to an existing declaration|  
|[Compiler Error C2245](compiler-error-c2245.md)|non-existent member function '*function*' specified as friend (member function signature does not match any overload)|  
|[Compiler Error C2246](compiler-error-c2246.md)|'*identifier*': illegal static data member in locally defined class|  
|[Compiler Error C2247](compiler-error-c2247.md)|'*identifier*' not accessible because '*class1*' uses '*specifier*' to inherit from '*class2*'|  
|[Compiler Error C2248](compiler-error-c2248.md)|'*identifier*': cannot access *accessibility* *member* declared in class '*class*'|  
|[Compiler Error C2249](compiler-error-c2249.md)|'*identifier*': no accessible path to *accessibility* *member* declared in virtual base '*class*'|  
|[Compiler Error C2250](compiler-error-c2250.md)|'*identifier*': ambiguous inheritance of *class*::*member*'|  
|[Compiler Error C2251](compiler-error-c2251.md)|namespace '*namespace*' does not have a member '*identifier*' - Did you mean '*member*'?|  
|[Compiler Error C2252](compiler-error-c2252.md)|an explicit instantiation of a template can only occur at namespace scope|  
|[Compiler Error C2253](compiler-error-c2253.md)|'*function*': pure specifier or abstract override specifier only allowed on virtual function|  
|[Compiler Error C2254](compiler-error-c2254.md)|'*function*': pure specifier or abstract override specifier not allowed on friend function|  
|[Compiler Error C2255](compiler-error-c2255.md)|'*element*': not allowed outside of a class definition|  
|[Compiler Error C2256](compiler-error-c2256.md)|illegal use of friend specifier on '*function*'|  
|Compiler Error C2257|'*specifier*': specifier not allowed in trailing return type|  
|[Compiler Error C2258](compiler-error-c2258.md)|illegal pure syntax, must be '= 0'|  
|[Compiler Error C2259](compiler-error-c2259.md)|'*class*': cannot instantiate abstract class|  
|Compiler Error C2260|'*specifier*': invalid InternalsVisibleToAttribute friend assembly specifier|  
|[Compiler Error C2261](compiler-error-c2261.md)|'*string*': assembly reference is invalid and cannot be resolved|  
|[Compiler Error C2262](compiler-error-c2262.md)|'*specifier*': InternalsVisibleTo declarations cannot have a version, culture, or processor architecture specified|  
|Compiler Error C2263|Obsolete.|  
|[Compiler Error C2264](compiler-error-c2264.md)|'*function*': error in function definition or declaration; function not called|  
|Compiler Error C2265|Obsolete.|  
|[Compiler Error C2266](compiler-error-c2266.md)|'*identifier*': reference to a non-constant bounded array is illegal|  
|[Compiler Error C2267](compiler-error-c2267.md)|'*function*': static functions with block scope are illegal|  
|[Compiler Error C2268](compiler-error-c2268.md)|'*function*' is a compiler predefined library helper. Library helpers are not supported with /GL; compile object file '*filename*' without /GL.|  
|Compiler Error C2269|cannot create a pointer or reference to a qualified function type (requires pointer-to-member)|  
|[Compiler Error C2270](compiler-error-c2270.md)|'*function*': modifiers not allowed on nonmember functions|  
|[Compiler Error C2271](compiler-error-c2271.md)|'*function*': new/delete cannot have formal list modifiers|  
|[Compiler Error C2272](compiler-error-c2272.md)|'*function*': modifiers not allowed on static member functions|  
|[Compiler Error C2273](compiler-error-c2273.md)|'*type*': illegal as right side of '->' operator|  
|[Compiler Error C2274](compiler-error-c2274.md)|'*type*': illegal as right side of '.' operator|  
|[Compiler Error C2275](compiler-error-c2275.md)|'*type*': illegal use of this type as an expression|  
|[Compiler Error C2276](compiler-error-c2276.md)|'*operator*': illegal operation on bound member function expression|  
|[Compiler Error C2277](compiler-error-c2277.md)|'*function*': cannot take address of this member function|  
|Compiler Error C2278|Obsolete.|  
|[Compiler Error C2279](compiler-error-c2279.md)|exception specification cannot appear in a typedef declaration|  
|[Compiler Error C2280](compiler-error-c2280.md)|'*class*::*function*': attempting to reference a deleted function|  
|Compiler Error C2281|'*class*::*function*': a function can only be deleted on the first declaration|  
|Compiler Error C2282|'*function1*' cannot override '*function2*'|  
|[Compiler Error C2283](compiler-error-c2283.md)|'*identifer*': pure specifier or abstract override specifier not allowed on unnamed class/struct|  
|Compiler Error C2284|'*function*': illegal argument to intrinsic function, parameter *number*|  
|[Compiler Error C2285](compiler-error-c2285.md)|pointers to members representation has already been determined - pragma ignored|  
|[Compiler Error C2286](compiler-error-c2286.md)|pointers to members of '*identifier*' representation is already set to *inheritance* - declaration ignored|  
|[Compiler Error C2287](compiler-error-c2287.md)|'*identifier*': inheritance representation: '*inheritiance*' is less general than the required '*inheritance*'|  
|Compiler Error C2288|Obsolete.|  
|[Compiler Error C2289](compiler-error-c2289.md)|same type qualifier used more than once|  
|[Compiler Error C2290](compiler-error-c2290.md)|C++ 'asm' syntax ignored. Use __asm.|  
|Compiler Error C2291|An anonymous namespace cannot be exported.|  
|[Compiler Error C2292](compiler-error-c2292.md)|'*identifier*': best case inheritance representation: *inheritance1*' declared but '*inheritance2*' required|  
|[Compiler Error C2293](compiler-error-c2293.md)|'*identifier*': illegal to have a member variable as a __based specifier|  
|Compiler Error C2294|cannot export symbol '*identifier*' because it has internal linkage|  
|[Compiler Error C2295](compiler-error-c2295.md)|escaped '*character*': is illegal in macro definition|  
|[Compiler Error C2296](compiler-error-c2296.md)|'*operator*': illegal, left operand has type '*type*'|  
|[Compiler Error C2297](compiler-error-c2297.md)|'*operator*': illegal, right operand has type '*type*'|  
|[Compiler Error C2298](compiler-error-c2298.md)|missing call to bound pointer to member function|  
|[Compiler Error C2299](compiler-error-c2299.md)|'*function*': behavior change: an explicit specialization cannot be a copy constructor or copy assignment operator|  
