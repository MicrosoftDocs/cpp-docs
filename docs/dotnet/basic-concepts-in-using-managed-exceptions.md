---
title: "Basic Concepts in Using Managed Exceptions | Microsoft Docs"
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
  - "try-catch exception handling, managed applications"
  - "__finally keyword, managed exceptions"
  - "exceptions, managed"
  - "try-catch exception handling"
  - "catch blocks"
  - "throwing exceptions, managed exceptions"
  - "Visual C++, handling managed exceptions"
ms.assetid: 40ce8931-1ecc-491a-815f-733b23fcba35
caps.latest.revision: 21
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
# Basic Concepts in Using Managed Exceptions
This topic discusses exception handling in managed applications. That is, an application that is compiled with the **/clr** compiler option.  
  
## In this topic  
  
-   [Throwing Exceptions Under /clr](#vcconbasicconceptsinusingmanagedexceptionsanchor1)  
  
-   [Try/Catch Blocks for CLR Extensions](#vcconbasicconceptsinusingmanagedexceptionsanchor2)  
  
## Remarks  
 If you compile with the **/clr** option, you can handle CLR exceptions as well as standard [C++ exception handling](../cpp/cpp-exception-handling.md) and [structured exception handling](../cpp/structured-exception-handling-c-cpp.md) (SEH). A CLR exception is any exception thrown by a managed type. The [System::Exception](https://msdn.microsoft.com/en-us/library/system.exception.aspx) class provides many useful methods for processing CLR exceptions and is recommended as a base class for user-defined exception classes.  
  
 Catching exception types derived from an interface is not supported under **/clr**. Also, the common language runtime does not permit you to catch stack overflow exceptions; a stack overflow exception will terminate the process.  
  
 For more information about differences in exception handling in managed and unmanaged applications, see [Differences in Exception Handling Behavior Under Managed Extensions for C++](../dotnet/differences-in-exception-handling-behavior-under-clr.md).  
  
##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor1"></a> Throwing Exceptions Under /clr  
 The C++ throw expression is extended to throw a handle to a CLR type. The following example creates a custom exception type and then throws an instance of that type:  
  
```  
// clr_exception_handling.cpp  
// compile with: /clr /c  
ref struct MyStruct: public System::Exception {  
public:  
   int i;  
};  
  
void GlobalFunction() {  
   MyStruct^ pMyStruct = gcnew MyStruct;  
   throw pMyStruct;  
}  
```  
  
 A value type must be boxed before being thrown:  
  
```  
// clr_exception_handling_2.cpp  
// compile with: /clr /c  
value struct MyValueStruct {  
   int i;  
};  
  
void GlobalFunction() {  
   MyValueStruct v = {11};  
   throw (MyValueStruct ^)v;  
}  
```  
  
##  <a name="vcconbasicconceptsinusingmanagedexceptionsanchor2"></a> Try/Catch Blocks for CLR Extensions  
 The same **try**/**catch** block structure can be used for catching both CLR and native exceptions:  
  
```  
// clr_exception_handling_3.cpp  
// compile with: /clr  
using namespace System;  
ref struct MyStruct : public Exception {  
public:  
   int i;  
};  
  
struct CMyClass {  
public:  
   double d;  
};  
  
void GlobalFunction() {  
   MyStruct^ pMyStruct = gcnew MyStruct;  
   pMyStruct->i = 11;  
   throw pMyStruct;  
}  
  
void GlobalFunction2() {  
   CMyClass c = {2.0};  
   throw c;  
}  
  
int main() {  
   for ( int i = 1; i >= 0; --i ) {  
      try {  
         if ( i == 1 )  
            GlobalFunction2();  
         if ( i == 0 )  
            GlobalFunction();  
      }  
      catch ( CMyClass& catchC ) {  
         Console::WriteLine( "In 'catch(CMyClass& catchC)'" );  
         Console::WriteLine( catchC.d );  
      }  
      catch ( MyStruct^ catchException ) {  
         Console::WriteLine( "In 'catch(MyStruct^ catchException)'" );  
         Console::WriteLine( catchException->i );  
      }  
   }  
}  
```  
  
### Output  
  
```  
In 'catch(CMyClass& catchC)'  
2  
In 'catch(MyStruct^ catchException)'  
11  
```  
  
### Order of Unwinding for C++ Objects  
 Unwinding occurs for any C++ objects with destructors that may be on the run-time stack between the throwing function and the handling function. Because CLR types are allocated on the heap, unwinding does not apply to them.  
  
 The order of events for a thrown exception is as follows:  
  
1.  The runtime walks the stack looking for the appropriate catch clause, or in the case of SEH, an except filter for SEH, to catch the exception. Catch clauses are searched first in lexical order, and then dynamically down the call stack.  
  
2.  Once the correct handler is found, the stack is unwound to that point. For each function call on the stack, its local objects are destructed and __finally blocks are executed, from most nested outward.  
  
3.  Once the stack is unwound, the catch clause is executed.  
  
### Catching Unmanaged Types  
 When an unmanaged object type is thrown, it is wrapped with an exception of type [System::Runtime.InteropServices::SEHException](https://msdn.microsoft.com/en-us/library/system.runtime.interopservices.sehexception.aspx). When searching for the appropriate **catch** clause, there are two possibilities.  
  
-   If a native C++ type is encountered, the exception is unwrapped and compared to the type encountered. This comparison allows a native C++ type to be caught in the normal way.  
  
-   However, if a **catch** clause of type **SEHException** or any of its base classes is examined first, the clause will intercept the exception. Therefore, you should place all catch clauses that catch native C++ types first before any catch clauses of CLR types.  
  
 Note that  
  
```  
catch(Object^)  
```  
  
 and  
  
```  
catch(...)  
```  
  
 will both catch any thrown type including SEH exceptions.  
  
 If an unmanaged type is caught by catch(Object^), it will not destroy the thrown object.  
  
 When throwing or catching unmanaged exceptions, we recommend that you use the [/EHsc](../build/reference/eh-exception-handling-model.md) compiler option instead of **/EHs** or **/EHa**.  
  
## See Also  
 [Exception Handling](../windows/exception-handling-cpp-component-extensions.md)   
 [safe_cast](../windows/safe-cast-cpp-component-extensions.md)   
 [Exception Handling](../cpp/exception-handling-in-visual-cpp.md)