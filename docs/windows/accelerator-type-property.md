---
title: "Accelerator Type Property | Microsoft Docs"
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
  - "Type property"
  - "VIRTKEY"
ms.assetid: 8c349bc4-e6ad-43fa-959e-f29168af35b8
caps.latest.revision: 5
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
# Accelerator Type Property
The accelerator **Type** property determines whether the shortcut key combination associated with the accelerator ID is a virtual key combination or an ASCII/ANSI key value:  
  
-   If the **Type** property is **ASCII**, the [Modifier](../windows/accelerator-modifier-property.md) may only be None or Alt, or it can have an accelerator which uses the CTRL key (specified by preceding the key with a ^).  
  
-   If the **Type** property is **VIRTKEY**, any combination of Modifier and Key values is valid.  
  
    > [!NOTE]
    >  If you want to enter a value into the accelerator table and have the value be treated as ASCII/ANSI, simply click the Type for the entry in the table and select ASCII from the drop down list. However, if you use the **Next Key Typed** command (**Edit** menu) to specify the Key, you must change the **Type** property from VIRTKEY to ASCII *before* entering the Key code.  
  
## Requirements  
 Win32  
  
## See Also  
 [Setting Accelerator Properties](../windows/setting-accelerator-properties.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)