---
title: "CLS Compliance Warning CLS02809"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CLS02809"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS02809"
ms.assetid: a6e7b8e5-1587-437e-9d07-8a32fc5c4842
caps.latest.revision: 7
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# CLS Compliance Warning CLS02809
Properties shall adhere to a specific naming pattern  
  
 Properties shall adhere to a specific naming pattern; the name of the property's accessor functions will be the same as the property name, prepended with **get_** or **set_**.  
  
 The **specialname** attribute shall be ignored in appropriate name comparisons and shall adhere to identifier rules.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](assetId:///3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following function declaration (using MSIL assembly language) shows what could cause CLS02809:  
  
```  
.method public specialname instance void   
        set_MyPropertya(int32 __unnamed000) cil managed  
{  
} // end of method One::set_MyProperty  
  
.method public specialname instance int32   
        get_MyPropertya() cil managed  
{  
} // end of method One::get_MyProperty  
  
.property instance int32 MyProperty()  
{  
  .get instance int32 One::get_MyPropertya()  
  .set instance void One::set_MyPropertya(int32)  
    } // end of property One::MyProperty  
```  
  
 Notice that the names of the accessor methods differ from the name of the property.  By ensuring that all property names adhere to the naming pattern, you can resolve CLS02809.