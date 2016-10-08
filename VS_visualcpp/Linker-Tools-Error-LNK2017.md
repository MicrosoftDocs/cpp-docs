---
title: "Linker Tools Error LNK2017"
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
ms.assetid: f7c21733-b0fb-4888-a295-9b453ba6ee77
caps.latest.revision: 7
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
# Linker Tools Error LNK2017
'symbol' relocation to 'segment' invalid without /LARGEADDRESSAWARE:NO  
  
 You are trying to build a 64-bit image with 32-bit addresses. To do this, you must:  
  
-   Use a fixed load address.  
  
-   Restrict the image to 3 GB.  
  
-   Specify [/largeaddressaware:no](../VS_visualcpp/-LARGEADDRESSAWARE--Handle-Large-Addresses-.md).