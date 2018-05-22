---
title: "CLS Compliance Warning CLS03302 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS03302"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS03302"
ms.assetid: 3b99e64b-d5cb-4eb8-81b5-fd96992f2c10
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS03302
Events shall adhere to a specific naming pattern  
  
 Events shall adhere to a specific naming pattern; the name of the event's accessor functions will be the same as the event name, prepended with **raise_**, **remove_**, or **add_**.  
  
 The **specialname** attribute shall be ignored in appropriate name comparisons and shall adhere to identifier rules.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following function declaration (using MSIL assembly language) shows what could cause CLS03302:  
  
```  
.method public specialname instance void   
    add_MyEventaaa(class MyAssemblyDelegate __unnamed000) cil managed  
{  
} // end of method One::add_MyEvent  
  
.method public specialname instance void   
    remove_MyEventaaa(class MyAssemblyDelegate __unnamed000) cil managed  
{  
} // end of method One::remove_MyEvent  
  
.method public specialname instance void   
    raise_MyEventaaa(object __unnamed000,  
             class [mscorlib]System.EventArgs __unnamed001) cil managed  
{  
} // end of method One::raise_MyEvent  
  
.event specialname MyAssemblyDelegate MyEvent  
{  
  .addon instance void One::add_MyEventaaa(class MyAssemblyDelegate)  
  .removeon instance void remove_MyEventaaa(class MyAssemblyDelegate)  
  .fire instance void raise_MyEventaaa(object,  
                                                                                       class [mscorlib]System.EventArgs)  
    } // end of event One::MyEvent  
  } // end of class One  
```  
  
 Notice that the names of the accessor methods differ from the name of the event.  By ensuring that all event accessor names adhere to the naming pattern, you can resolve CLS03302.