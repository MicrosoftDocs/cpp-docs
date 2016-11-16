---
title: "Version Issues for Value Types Nested in Native Types (C++-CLI) | Microsoft Docs"
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
helpviewer_keywords: 
  - "__nogc type declarations"
  - "__value keyword, issues when nesting"
ms.assetid: 0a3b1a43-39c6-4b52-be2f-1074690188aa
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
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
# Version Issues for Value Types Nested in Native Types (C++/CLI)
Consider a signed (strong name) assembly component used to build a client assembly. The component contains a value type that is used in the client as the type for a member of a native union, a class, or an array. If a future version of the component changes the size or layout of the value type, the client must be recompiled.  
  
 Create a keyfile with [sn.exe](http://msdn.microsoft.com/Library/c1d2b532-1b8e-4c7a-8ac5-53b801135ec6) (`sn -k mykey.snk`).  
  
## Example  
 The following sample is the component.  
  
```  
// nested_value_types.cpp  
// compile with: /clr /LD  
using namespace System::Reflection;  
[assembly:AssemblyVersion("1.0.0.*"),   
assembly:AssemblyKeyFile("mykey.snk")];  
  
public value struct S {  
   int i;  
   void Test() {  
      System::Console::WriteLine("S.i = {0}", i);  
   }  
};  
```  
  
## Example  
 This sample is the client:  
  
```  
// nested_value_types_2.cpp  
// compile with: /clr  
#using <nested_value_types.dll>  
  
struct S2 {  
   S MyS1, MyS2;  
};  
  
int main() {  
   S2 MyS2a, MyS2b;  
   MyS2a.MyS1.i = 5;  
   MyS2a.MyS2.i = 6;  
   MyS2b.MyS1.i = 10;  
   MyS2b.MyS2.i = 11;  
  
   MyS2a.MyS1.Test();  
   MyS2a.MyS2.Test();  
   MyS2b.MyS1.Test();  
   MyS2b.MyS2.Test();  
}  
```  
  
## Output  
  
```  
S.i = 5  
S.i = 6  
S.i = 10  
S.i = 11  
```  
  
### Comments  
 However, if you add another member to `struct S` in nested_value_types.cpp, (for example, `double d;`) and recompile the component without recompiling the client, the result is an unhandled exception (of type <xref:System.IO.FileLoadException?displayProperty=fullName>).  
  
## See Also  
 [Managed Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)