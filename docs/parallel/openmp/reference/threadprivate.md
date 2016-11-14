---
title: "threadprivate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "threadprivate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threadprivate OpenMP directive"
ms.assetid: 3515aaed-6f9d-4d59-85eb-342378bea2d3
caps.latest.revision: 11
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
# threadprivate
Specifies that a variable is private to a thread.  
  
## Syntax  
  
```  
#pragma omp threadprivate(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 A comma-separated list of variables that you want to make private to a thread. `var` must be either a global- or namespace-scoped variable or a local static variable.  
  
## Remarks  
 The `threadprivate` directive supports no OpenMP clauses.  
  
 For more information, see [2.7.1 threadprivate Directive](../../../parallel/openmp/2-7-1-threadprivate-directive.md).  
  
 The `threadprivate` directive is based on the [thread](../../../cpp/thread.md)`__declspec` attribute; limits on **__declspec(thread)** apply to `threadprivate`.  
  
 You cannot use `threadprivate` in any DLL that will be loaded via [LoadLibrary](http://msdn.microsoft.com/library/windows/desktop/ms684175).  This includes DLLs that are loaded with [/DELAYLOAD (Delay Load Import)](../../../build/reference/delayload-delay-load-import.md), which also uses **LoadLibrary**.  
  
 You can use `threadprivate` in a DLL that is statically loaded at process startup.  
  
 Because `threadprivate` is based on **__declspec(thread)**, a `threadprivate` variable will exist in any thread started in the process, not just those threads that are part of a thread team spawned by a parallel region.  This is an implementation detail that you may want to be aware of, since you may notice, for example, constructors for a `threadprivate` user-defined type called more often then expected.  
  
 A `threadprivate` variable of a destructable type is not guaranteed to have its destructor called.  For example:  
  
```  
struct MyType   
{  
    ~MyType();  
};  
  
MyType threaded_var;  
#pragma omp threadprivate(threaded_var)  
int main()   
{  
    #pragma omp parallel  
    {}  
}  
```  
  
 Users have no control as to when the threads constituting the parallel region will terminate.  If those threads exist when the process exits, the threads will not be notified about the process exit, and the destructor will not be called for `threaded_var` on any thread except the one that exits (here, the primary thread).  So code should not count on proper destruction of `threadprivate` variables.  
  
## Example  
 For a sample of using `threadprivate`, see [private](../../../parallel/openmp/reference/private-openmp.md).  
  
## See Also  
 [Directives](../../../parallel/openmp/reference/openmp-directives.md)