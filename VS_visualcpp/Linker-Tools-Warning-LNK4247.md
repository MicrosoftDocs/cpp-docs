---
title: "Linker Tools Warning LNK4247"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: error-reference
ms.assetid: 085d7fdf-9eaf-4641-8473-6eaadd073c7b
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Linker Tools Warning LNK4247
entry point 'decorated_function_name' already has a thread attribute; 'attribute' ignored  
  
 An entry point, specified with [/ENTRY (Entry-Point Symbol)](../VS_visualcpp/-ENTRY--Entry-Point-Symbol-.md), had a threading attribute, but [/CLRTHREADATTRIBUTE (Set CLR Thread Attribute)](../VS_visualcpp/-CLRTHREADATTRIBUTE--Set-CLR-Thread-Attribute-.md) was also specified, with a different threading model.  
  
 The linker ignored the value specified with /CLRTHREADATTRIBUTE.  
  
 To resolve this warning:  
  
-   Remove /CLRTHREADATTRIBUTE from your build.  
  
-   Remove attribute from your source code file.  
  
-   Remove both the attribute from source and /CLRTHREADATTRIBUTE from your build, and accept the default CLR threading model.  
  
-   Change the value passed to /CLRTHREADATTRIBUTE, such that, it agrees with the attribute in source.  
  
-   Change the attribute in source, such that, it agrees with the value passed to /CLRTHREADATTRIBUTE.  
  
 The following sample generates LNK4247  
  
```  
// LNK4247.cpp  
// compile with: /clr /c  
// post-build command: link /CLRTHREADATTRIBUTE:STA LNK4247.obj /entry:functionTitle /SUBSYSTEM:Console  
 [System::MTAThreadAttribute]  
void functionTitle (){}  
```