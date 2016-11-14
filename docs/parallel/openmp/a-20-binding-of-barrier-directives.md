---
title: "A.20   Binding of barrier Directives | Microsoft Docs"
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
ms.assetid: a3fdcc26-6873-429b-998e-de451401483b
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
# A.20   Binding of barrier Directives
The directive binding rules call for a **barrier** directive to bind to the closest enclosing `parallel` directive. For more information on directive binding, see [Section 2.8](../../parallel/openmp/2-8-directive-binding.md) on page 32.  
  
 In the following example, the call from *main* to *sub2* is compliant because the **barrier** (in *sub3*) binds to the parallel region in *sub2*. The call from *main* to *sub1* is compliant because the **barrier** binds to the parallel region in subroutine *sub2*.  The call from *main* to *sub3* is compliant because the **barrier** does not bind to any parallel region and is ignored. Also note that the **barrier** only synchronizes the team of threads in the enclosing parallel region and not all the threads created in *sub1*.  
  
```  
int main()  
{  
    sub1(2);  
    sub2(2);  
    sub3(2);  
}  
  
void sub1(int n)  
{  
    int i;  
    #pragma omp parallel private(i) shared(n)  
    {  
        #pragma omp for  
        for (i=0; i<n; i++)  
            sub2(i);  
    }  
}  
  
void sub2(int k)  
{  
     #pragma omp parallel shared(k)  
     sub3(k);  
}  
  
void sub3(int n)  
{  
    work(n);  
    #pragma omp barrier  
    work(n);  
}  
```