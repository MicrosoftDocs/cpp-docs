---
title: "Param Array and Ellipsis | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["function overloading, argument matching"]
ms.assetid: 492e3f6c-1c4c-4e0c-a358-72f2d39c30be
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Param Array and Ellipsis
Precedence of the param array for resolving overloaded function calls has changed from Managed Extensions for C++ to Visual C++.  
  
 In both Managed Extensions and the new syntax, there is no explicit support for the param array that C# and Visual Basic support. Instead, one flags an ordinary array with an attribute, as follows:  
  
```  
void Trace1( String* format, [ParamArray]Object* args[] );  
void Trace2( String* format, Object* args[] );  
```  
  
 While these both look the same, the `ParamArray` attribute tags this for C# or other CLR languages as an array taking a variable number of elements with each invocation. The change in behavior in programs between Managed Extensions and the new syntax is in the resolution of an overloaded function set in which one instance declares an ellipsis and a second declares a `ParamArray` attribute, as in the following example provided by Artur Laksberg.  
  
```  
int fx(...); // 1  
int fx( [ParamArray] Int32[] ); // 2  
```  
  
 In Managed Extensions, the ellipsis was given precedence over the attribute which is reasonable since the attribute is not a formal aspect of the language. However, in the new syntax, the param array is now supported directly within the language, and it is given precedence over the ellipsis because it is more strongly typed. Thus, in Managed Extensions, the call  
  
```  
fx( 1, 2 );  
```  
  
 resolves to `fx(...)` while in the new syntax, it resolves to the `ParamArray` instance. On the off chance that your program behavior depends on the invocation of the ellipsis instance over that of the `ParamArray`, you will need to modify either the signature or the call.  
  
## See Also  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)