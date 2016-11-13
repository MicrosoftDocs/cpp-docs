---
title: "finally | Microsoft Docs"
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
  - "finally keyword [C++]"
ms.assetid: b55f3c8e-1af0-43e8-bcfb-99c3685d2578
caps.latest.revision: 9
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
# finally
In addition to `try` and `catch` clauses, CLR exception handling supports a `finally` clause. The semantics are identical to the `__finally` block in structured exception handling (SEH). A `__finally` block can follow a `try` or `catch` block.  
  
## Remarks  
 The purpose of the `finally` block is to clean up any resources left after the exception occurred. Note that the `finally` block is always executed, even if no exception was thrown. The `catch` block is only executed if a managed exception is thrown within the associated `try` block.  
  
 `finally` is a context-sensitive keyword; see [Context-Sensitive Keywords](../windows/context-sensitive-keywords-cpp-component-extensions.md) for more information.  
  
## Example  
 The following example demonstrates a simple `finally` block:  
  
```  
// keyword__finally.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyException: public System::Exception{};  
  
void ThrowMyException() {  
   throw gcnew MyException;  
}  
  
int main() {  
   try {  
      ThrowMyException();  
   }  
   catch ( MyException^ e ) {  
      Console::WriteLine(  "in catch" );  
      Console::WriteLine( e->GetType() );  
   }  
   finally {  
      Console::WriteLine(  "in finally" );  
   }  
}  
```  
  
```Output  
in catch  
MyException  
in finally  
```  
  
## See Also  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)