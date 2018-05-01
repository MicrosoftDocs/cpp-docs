---
title: "How to: Specify an out Parameter | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "get-started-article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "function parameters"
  - "out parameters"
ms.assetid: 02862448-603c-4e9d-a5c5-b45fe38446e3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Specify an out Parameter
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Specify an out Parameter](https://docs.microsoft.com/cpp/dotnet/how-to-specify-an-out-parameter).  
  
  
This sample shows how to specify that a function parameter is an out parameter and how to call that function from a C# program.  
  
 An out parameter is specified in Visual C++ with <xref:System.Runtime.InteropServices.OutAttribute> .  
  
## Example  
 The first part of this sample is a Visual C++ DLL with a type that contains a function with an out parameter.  
  
```  
// cpp_out_param.cpp  
// compile with: /LD /clr:safe  
using namespace System;  
public value struct TestStruct {  
   static void Test([Runtime::InteropServices::Out] String^ %s) {  
      s = "a string";  
   }  
};  
```  
  
## Example  
 This is a C# client that consumes the Visual C++ component created in the previous example.  
  
```  
// cpp_out_param_2.cs  
// compile with: /reference:cpp_out_param.dll  
using System;  
class TestClass {  
   public static void Main() {  
      String t;  
      TestStruct.Test(out t);  
      System.Console.WriteLine(t);  
   }  
}  
```  
  
```Output  
a string  
```  
  
## See Also  
 [Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)

