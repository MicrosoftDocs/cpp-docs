---
title: "_ITERATOR_DEBUG_LEVEL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ITERATOR_DEBUG_LEVEL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ITERATOR_DEBUG_LEVEL"
ms.assetid: 718549cd-a9a9-4ab3-867b-aac00b321e67
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
# _ITERATOR_DEBUG_LEVEL
The `_ITERATOR_DEBUG_LEVEL` (IDL) macro supersedes and combines the functionality of the [_SECURE_SCL](../standard-library/secure-scl.md) (SCL) and [_HAS_ITERATOR_DEBUGGING](../standard-library/has-iterator-debugging.md) (HID) macros.  
  
## Macro Values  
 The following tables summarize the values for the `_SECURE_SCL` and `_HAS_ITERATOR_DEBUGGING` macros, and finally how those values are superseded by the `_ITERATOR_DEBUG_LEVEL` macro.  
  
 The following section describes the possible values of the SCL and HID macros.  
  
 SCL=0  
 Disables checked iterators.  
  
 SCL=1  
 Enables checked iterators.  
  
 HID=0  
 Disables iterator debugging in debug builds.  
  
 HID=1  
 Enables iterator debugging in debug builds. HID cannot be enabled in release builds.  
  
 The following table describes how the IDL macro values supersede the SCL and HID macro values.  
  
|Compilation mode|New macro|Old macros|Description|  
|----------------------|---------------|----------------|-----------------|  
|**Debug**||||  
||IDL=0|SCL=0, HID=0|Disables checked iterators and disables iterator debugging.|  
||IDL=1|SCL=1, HID=0|Enables checked iterators and disables iterator debugging.|  
||IDL=2 (Default)|SCL=(does not apply), HID=1|By default, enables iterator debugging; checked iterators are not relevant.|  
|**Release**||||  
||IDL=0 (Default)|SCL=0|By default, disables checked iterators.|  
||IDL=1|SCL=1|Enables checked iterators; iterator debugging is not relevant.|  
  
## Remarks  
 In release mode, an error is emitted if you specify IDL=2.  
  
 Because the `_SECURE_SCL` and `_HAS_ITERATOR_DEBUGGING` macros support similar functionality, users are often uncertain which macro and macro value to use in a particular situation. To resolve this issue, we recommend that you use only the `_ITERATOR_DEBUG_LEVEL` macro.  
  
## See Also  
 [Safe Libraries: C++ Standard Library](../standard-library/safe-libraries-cpp-standard-library.md)

