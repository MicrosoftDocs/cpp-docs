---
title: "Linker Tools Warning LNK4086"
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
ms.assetid: ea1eecbb-ba2c-41bb-9a4f-fa0808a4b92d
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
# Linker Tools Warning LNK4086
entrypoint 'function' is not __stdcall with 'number' bytes of arguments; image may not run  
  
 The entry point for a DLL must be `__stdcall`. Either recompile the function with the [/Gz](../VS_visualcpp/-Gd---Gr---Gv---Gz--Calling-Convention-.md) option or specify `__stdcall` or WINAPI when you define the function.