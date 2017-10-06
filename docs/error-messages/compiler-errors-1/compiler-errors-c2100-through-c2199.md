---
title: "Compiler Errors C2100 through C2199 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2119", "C2123", "C2125", "C2126", "C2127", "C2131", "C2136", "C2176", "C2187", "C2189"]
helpviewer_keywords: ["C2119", "C2123", "C2125", "C2126", "C2127", "C2131", "C2136", "C2176", "C2187", "C2189"]
dev_langs: ["C++"]
ms.assetid: 1ccab076-0954-4386-b959-d3112a6793ae
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Errors C2100 through C2199
The articles in this part of the documentation contain information about a subsection of the Visual C++ compiler errors. You can access the information here or, in the **Output** window in Visual Studio, you can select an error number and then choose the F1 key.  
  
> [!NOTE]
>  Not every [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] error is documented in MSDN. In many cases, the diagnostic message provides all of the information that's available. If you think an error message needs additional explanation, you can let us know. You can use the feedback form on this page, or go to the menu bar in Visual Studio and choose **Help**, **Report a Bug**, or you can submit a suggestion or bug report on [Microsoft Connect](http://connect.microsoft.com/VisualStudio).  
  
 You may find additional assistance for errors and warnings on the MSDN public forums. The [Visual C++ Language](http://go.microsoft.com/fwlink/?LinkId=158195) forum is for questions and discussions about the [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] language syntax and compiler. The [Visual C++ General](http://go.microsoft.com/fwlink/?LinkId=158194) forum is for questions about [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] that are not discussed in other forums. You may also find help about errors and warnings on [Stack Overflow](http://stackoverflow.com/).  
  
|Error|Message|  
|-----------|-------------|  
|[Compiler Error C2100](compiler-error-c2100.md)|illegal indirection|  
|[Compiler Error C2101](compiler-error-c2101.md)|'&' on constant|  
|[Compiler Error C2102](compiler-error-c2102.md)|'&' requires l-value|  
|[Compiler Error C2103](compiler-error-c2103.md)|'&' on register variable|  
|[Compiler Error C2104](compiler-error-c2104.md)|'&' on bit field ignored|  
|[Compiler Error C2105](compiler-error-c2105.md)|'*operator*' needs l-value|  
|[Compiler Error C2106](compiler-error-c2106.md)|'*operator*': left operand must be l-value|  
|[Compiler Error C2107](compiler-error-c2107.md)|illegal index, indirection not allowed|  
|[Compiler Error C2108](compiler-error-c2108.md)|subscript is not of integral type|  
|[Compiler Error C2109](compiler-error-c2109.md)|subscript requires array or pointer type|  
|[Compiler Error C2110](compiler-error-c2110.md)|'+': cannot add two pointers|  
|[Compiler Error C2111](compiler-error-c2111.md)|'+': pointer addition requires integral operand|  
|[Compiler Error C2112](compiler-error-c2112.md)|'-': pointer subtraction requires integral or pointer operand|  
|[Compiler Error C2113](compiler-error-c2113.md)|'-': pointer can only be subtracted from another pointer|  
|[Compiler Error C2114](compiler-error-c2114.md)|'*operator*': pointer on left; needs integral value on right|  
|[Compiler Error C2115](compiler-error-c2115.md)|'*operator*': incompatible types|  
|[Compiler Error C2116](compiler-error-c2116.md)|function parameter lists differed|  
|[Compiler Error C2117](compiler-error-c2117.md)|'*identifier*': array bounds overflow|  
|[Compiler Error C2118](compiler-error-c2118.md)|negative subscript|  
|Compiler Error C2119|'*identifier*': the type for '*type*' cannot be deduced from an empty initializer|  
|[Compiler Error C2120](compiler-error-c2120.md)|'void' illegal with all types|  
|[Compiler Error C2121](compiler-error-c2121.md)|'#': invalid character: possibly the result of a macro expansion|  
|[Compiler Error C2122](compiler-error-c2122.md)|'*identifier*': prototype parameter in name list illegal|  
|Compiler Error C2123|'*identifier*': alias templates cannot be explicitly or partially specialized|  
|[Compiler Error C2124](compiler-error-c2124.md)|divide or mod by zero|  
|Compiler Error C2125|'constexpr' is incompatible with '*token*'|  
|Compiler Error C2126|'*identifier*' cannot be declared with 'constexpr' specifier|  
|Compiler Error C2127|'*identifier*': illegal initialization of 'constexpr' entity with a non-constant expression|  
|[Compiler Error C2128](compiler-error-c2128.md)|'*function*': alloc_text/same_seg applicable only to functions with C linkage|  
|[Compiler Error C2129](compiler-error-c2129.md)|static function '*identifier*' declared but not defined|  
|[Compiler Error C2130](compiler-error-c2130.md)|#line expected a string containing the filename, found '*token*'|  
|Compiler Error C2131|expression did not evaluate to a constant|  
|[Compiler Error C2132](compiler-error-c2132.md)|syntax error: unexpected identifier|  
|[Compiler Error C2133](compiler-error-c2133.md)|'*identifier*': unknown size|  
|[Compiler Error C2134](compiler-error-c2134.md)|'*function*': call does not result in a constant expression|  
|[Compiler Error C2135](compiler-error-c2135.md)|'*operator*': illegal bit field operation|  
|Compiler Error C2136|authoring API contract not allowed|  
|[Compiler Error C2137](compiler-error-c2137.md)|empty character constant|  
|[Compiler Error C2138](compiler-error-c2138.md)|illegal to define an enumeration without any members|  
|[Compiler Error C2139](compiler-error-c2139.md)|'*class*': an undefined class is not allowed as an argument to compiler intrinsic type trait '*trait*'|  
|[Compiler Error C2140](compiler-error-c2140.md)|'*type*': a type that is dependent on a generic type parameter is not allowed as an argument to compiler intrinsic type trait '*trait*'|  
|[Compiler Error C2141](compiler-error-c2141.md)|array size overflow|  
|[Compiler Error C2142](compiler-error-c2142.md)|function declarations differ, variable parameters specified only in one of them|  
|[Compiler Error C2143](compiler-error-c2143.md)|syntax error: missing '*token1*' before '*token2*'|  
|[Compiler Error C2144](compiler-error-c2144.md)|syntax error: '*type*' should be preceded by '*token2*'|  
|[Compiler Error C2145](compiler-error-c2145.md)|syntax error: missing '*token*' before identifier|  
|[Compiler Error C2146](compiler-error-c2146.md)|syntax error: missing '*token*' before identifier '*identifier*'|  
|[Compiler Error C2147](compiler-error-c2147.md)|syntax error: '*token*' is a new keyword|  
|[Compiler Error C2148](compiler-error-c2148.md)|total size of array must not exceed 0x*value* bytes|  
|[Compiler Error C2149](compiler-error-c2149.md)|'*identifier*': named bit field cannot have zero width|  
|[Compiler Error C2150](compiler-error-c2150.md)|'*identifier*': bit field must have type 'int', 'signed int', or 'unsigned int'|  
|[Compiler Error C2151](compiler-error-c2151.md)|more than one language attribute|  
|[Compiler Error C2152](compiler-error-c2152.md)|'*identifier*': pointers to functions with different attributes|  
|[Compiler Error C2153](compiler-error-c2153.md)|integer literals must have at least one digit|  
|[Compiler Error C2154](compiler-error-c2154.md)|'*type*': only enumeration type is allowed as an argument to compiler intrinsic type trait '*trait*'|  
|[Compiler Error C2155](compiler-error-c2155.md)|'?': invalid left operand, expected arithmetic or pointer type|  
|[Compiler Error C2156](compiler-error-c2156.md)|pragma must be outside function|  
|[Compiler Error C2157](compiler-error-c2157.md)|'*identifier*': must be declared before use in pragma list|  
|[Compiler Error C2158](compiler-error-c2158.md)|'*type*': #pragma make_public directive is currently supported for native non-template types only|  
|[Compiler Error C2159](compiler-error-c2159.md)|more than one storage class specified|  
|[Compiler Error C2160](compiler-error-c2160.md)|'##' cannot occur at the beginning of a macro definition|  
|[Compiler Error C2161](compiler-error-c2161.md)|'##' cannot occur at the end of a macro definition|  
|[Compiler Error C2162](compiler-error-c2162.md)|expected macro formal parameter|  
|[Compiler Error C2163](compiler-error-c2163.md)|'*function*': not available as an intrinsic function|  
|[Compiler Error C2164](compiler-error-c2164.md)|'*function*': intrinsic function not declared|  
|[Compiler Error C2165](compiler-error-c2165.md)|'*modifier*': cannot modify pointers to data|  
|[Compiler Error C2166](compiler-error-c2166.md)|l-value specifies const object|  
|[Compiler Error C2167](compiler-error-c2167.md)|'*function*': too many actual parameters for intrinsic function|  
|[Compiler Error C2168](compiler-error-c2168.md)|'*function*': too few actual parameters for intrinsic function|  
|[Compiler Error C2169](compiler-error-c2169.md)|'*function*': intrinsic function, cannot be defined|  
|[Compiler Error C2170](compiler-error-c2170.md)|'*identifier*': not declared as a function, cannot be intrinsic|  
|[Compiler Error C2171](compiler-error-c2171.md)|'*operator*': illegal on operands of type '*type*'|  
|[Compiler Error C2172](compiler-error-c2172.md)|'*function*': actual parameter is not a pointer: parameter *number*|  
|[Compiler Error C2173](compiler-error-c2173.md)|'*function*': actual parameter is not a pointer: parameter *number*, parameter list *number*|  
|[Compiler Error C2174](compiler-error-c2174.md)|'*function*': actual parameter has type 'void': parameter *number*, parameter list *number*|  
|[Compiler Error C2175](compiler-error-c2175.md)|'*locale*': invalid locale|  
|Compiler Error C2176|a return statement cannot appear in the handler of a function-try-block associated with a constructor|  
|[Compiler Error C2177](compiler-error-c2177.md)|constant too big|  
|[Compiler Error C2178](compiler-error-c2178.md)|'*identifier*' cannot be declared with '*specifier*' specifier|  
|[Compiler Error C2179](compiler-error-c2179.md)|'*type*': an attribute argument cannot use type parameters|  
|[Compiler Error C2180](compiler-error-c2180.md)|controlling expression has type '*type*'|  
|[Compiler Error C2181](compiler-error-c2181.md)|illegal else without matching if|  
|[Compiler Error C2182](compiler-error-c2182.md)|'*identifier*': illegal use of type 'void'|  
|[Compiler Error C2183](compiler-error-c2183.md)|syntax error: translation unit is empty|  
|[Compiler Error C2184](compiler-error-c2184.md)|'*type*': illegal type for __except expression|  
|[Compiler Error C2185](compiler-error-c2185.md)|'*identifier*': illegal based allocation|  
|[Compiler Error C2186](compiler-error-c2186.md)|'*operator*': illegal operand of type 'void'|  
|Compiler Error C2187|syntax error: '*token*' was unexpected here|  
|[Compiler Error C2188](compiler-error-c2188.md)|'*number*': too big for wide character|  
|Compiler Error C2189|'alignas' attribute cannot be applied to a bit-field, a function parameter, an exception declaration, or a variable declared with 'register' storage class|  
|[Compiler Error C2190](compiler-error-c2190.md)|first parameter list longer than second|  
|[Compiler Error C2191](compiler-error-c2191.md)|second parameter list longer than first|  
|[Compiler Error C2192](compiler-error-c2192.md)|parameter '*number*' declaration different|  
|[Compiler Error C2193](compiler-error-c2193.md)|'*identifier*': already in a segment|  
|[Compiler Error C2194](compiler-error-c2194.md)|'*identifier*': is a text segment|  
|[Compiler Error C2195](compiler-error-c2195.md)|'*identifier*': is a data segment|  
|[Compiler Error C2196](compiler-error-c2196.md)|case value '*value*' already used|  
|[Compiler Error C2197](compiler-error-c2197.md)|'*function*': too many arguments for call|  
|[Compiler Error C2198](compiler-error-c2198.md)|'*function*': too few arguments for call|  
|[Compiler Error C2199](compiler-error-c2199.md)|syntax error: found '*identifier* (' at global scope (was a declaration intended?)|  