---
title: "Compiler Error C3728"
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
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
caps.latest.revision: 8
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
# Compiler Error C3728
'event': event does not have a raise method  
  
 Metadata created with a language, such as C#, that does not allow an event to be raised from outside the class in which it was defined, was included with the [#using](../VS_visualcpp/#using-Directive--C---.md) directive, and a Visual C++ program using CLR programming attempted to raise the event.  
  
 To raise an event in a program developed in a language such as C#, the class containing the event needs to also define a public method that raises the event.