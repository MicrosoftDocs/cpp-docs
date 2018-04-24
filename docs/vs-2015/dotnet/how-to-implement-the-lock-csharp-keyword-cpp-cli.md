---
title: "How to: Implement the lock C# Keyword (C++-CLI) | Microsoft Docs"
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
  - "lock statement"
  - "lock C# keyword [C++]"
ms.assetid: 436fe544-ffb7-49b9-9798-90794e9974de
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Implement the lock C# Keyword (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Implement the lock C# Keyword (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/how-to-implement-the-lock-csharp-keyword-cpp-cli).  
  
  
This topic shows how to implement the C# `lock` keyword in Visual C++. For more information, see [lock Statement](http://msdn.microsoft.com/library/656da1a4-707e-4ef6-9c6e-6d13b646af42).  
  
 You can also use the `lock` class in the C++ Support Library. See [Synchronization (lock Class)](../dotnet/synchronization-lock-class.md) for more information.  
  
## Example  
  
```  
// CS_lock_in_CPP.cpp  
// compile with: /clr  
using namespace System::Threading;  
ref class Lock {  
   Object^ m_pObject;  
public:  
   Lock( Object ^ pObject ) : m_pObject( pObject ) {  
      Monitor::Enter( m_pObject );  
   }  
   ~Lock() {  
      Monitor::Exit( m_pObject );  
   }  
};  
  
ref struct LockHelper {  
   void DoSomething();  
};  
  
void LockHelper::DoSomething() {  
   // Note: Reference type with stack allocation semantics to provide   
   // deterministic finalization  
  
   Lock lock( this );     
   // LockHelper instance is locked  
}  
  
int main()  
{  
   LockHelper lockHelper;  
   lockHelper.DoSomething();  
   return 0;  
}  
```  
  
## See Also  
 [Interoperability with Other .NET Languages (C++/CLI)](../dotnet/interoperability-with-other-dotnet-languages-cpp-cli.md)

