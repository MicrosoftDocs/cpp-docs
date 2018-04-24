---
title: "How to: Implement is and as C# Keywords (C++-CLI) | Microsoft Docs"
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
  - "as C# keyword [C++]"
  - "is C# keyword [C++]"
ms.assetid: bc66c0d1-696b-480d-977c-5d9d1ad1ece6
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Implement is and as C# Keywords (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Implement is and as C# Keywords (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-implement-is-and-as-csharp-keywords-cpp-cli).  
  
  
This topic shows how to implement the functionality of the `is` and `as` C# keywords in Visual C++.  
  
 For more information, see [is](../Topic/is%20\(C%23%20Reference\).md) and [as](../Topic/as%20\(C%23%20Reference\).md).  
  
## Example  
  
```  
// CS_is_as.cpp  
// compile with: /clr  
using namespace System;  
  
interface class I {  
public:  
   void F();  
};  
  
ref struct C : public I {  
   virtual void F( void ) { }  
};  
  
template < class T, class U >   
Boolean isinst(U u) {  
   return dynamic_cast< T >(u) != nullptr;  
}  
  
int main() {  
   C ^ c = gcnew C();  
   I ^ i = safe_cast< I ^ >(c);   // is (maps to castclass in IL)  
   I ^ ii = dynamic_cast< I ^ >(c);   // as (maps to isinst in IL)  
  
   // simulate 'as':  
   Object ^ o = "f";  
   if ( isinst< String ^ >(o) )  
      Console::WriteLine("o is a string");  
}  
```  
  
```Output  
o is a string  
```  
  
## See Also  
 [Interoperability with Other .NET Languages (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)

