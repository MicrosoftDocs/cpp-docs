---
title: "How to: Diagnose and Fix Assembly Compatibility Problems (C++-CLI) | Microsoft Docs"
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
  - "versioning, diagnosing conflicts"
  - "versioning"
  - "exceptions, diagnosing odd behavior"
  - "compatibility, between assemblies"
ms.assetid: 297c71e3-04a8-4d24-a5dc-b04a2c5cc6fb
caps.latest.revision: 7
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
# How to: Diagnose and Fix Assembly Compatibility Problems (C++/CLI)
This topic explains what can happen when the version of an assembly referenced at compile time doesn't match the version of the assembly referenced at runtime, and how to avoid the problem.  
  
 When an assembly is compiled, other assemblies may be referenced with the `#using` syntax. During the compilation, these assemblies are accessed by the compiler. Information from these assemblies is used to make optimization decisions.  
  
 However, if the referenced assembly is changed and recompiled, and you do not recompile the referencing assembly that is dependent on it, the assemblies might not still be compatible. Optimization decisions that were valid at first might not be correct with respect to the new assembly version. Various runtime errors might occur due to these incompatibilities. There is no specific exception that will be produced in such cases. The way the failure is reported at runtime depends on the nature of the code change that caused the problem.  
  
 These errors should not be a problem in your final production code as long as the entire application is rebuilt for the released version of your product. Assemblies that are released to the public should be marked with an official version number, which will ensure that these problems are avoided. For more information, see [Assembly Versioning](http://msdn.microsoft.com/Library/775ad4fb-914f-453c-98ef-ce1089b6f903).  
  
### Diagnosing and fixing an incompatibility error  
  
1.  If you encounter runtime exceptions or other error conditions that occur in code that references another assembly, and have no other identified cause, you may be dealing with an out of date assembly.  
  
2.  First, isolate and reproduce the exception or other error condition. A problem that occurs due to an outdated exception should be reproducible.  
  
3.  Check the timestamp of any assemblies referenced in your application.  
  
4.  If the timestamps of any referenced assemblies are later than the timestamp of your application's last compilation, then your application is out of date. If this occurs, recompile your application with the most recent assembly, and make any code changes required.  
  
5.  Rerun the application, perform the steps that reproduce the problem, and verify that the exception does not occur.  
  
## Example  
 The following program illustrates the problem by reducing the accessibility of a method, and trying to access that method in another assembly without recompiling. Try compiling `changeaccess.cpp` first. This is the referenced assembly which will change. Then compile `referencing.cpp`. The compilation succeeds. Now, reduce the accessibility of the called method. Recompile `changeaccess.cpp` with the flag `/DCHANGE_ACCESS`. This makes the method protected, rather than private, so it can longer be called legally. Without recompiling `referencing.exe`, rerun the application. An exception <xref:System.MethodAccessException> will result.  
  
```  
// changeaccess.cpp  
// compile with: /clr:safe /LD  
// After the initial compilation, add /DCHANGE_ACCESS and rerun  
// referencing.exe to introduce an error at runtime. To correct  
// the problem, recompile referencing.exe  
  
public ref class Test {  
#if defined(CHANGE_ACCESS)  
protected:  
#else  
public:  
#endif  
  
  int access_me() {  
    return 0;  
  }  
  
};  
  
```  
  
```  
// referencing.cpp  
// compile with: /clr:safe   
#using <changeaccess.dll>  
  
// Force the function to be inline, to override the compiler's own  
// algorithm.  
__forceinline  
int CallMethod(Test^ t) {  
  // The call is allowed only if access_me is declared public  
  return t->access_me();  
}  
  
int main() {  
  Test^ t = gcnew Test();  
  try  
  {  
    CallMethod(t);  
    System::Console::WriteLine("No exception.");  
  }  
  catch (System::Exception ^ e)  
  {  
    System::Console::WriteLine("Exception!");  
  }  
  return 0;  
}  
  
```  
  
## See Also  
 [#using Directive](../preprocessor/hash-using-directive-cpp.md)   
 [Managed Types (C++/CLI)](../dotnet/managed-types-cpp-cli.md)