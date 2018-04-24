---
title: "Accelerator Key Property | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Key property"
ms.assetid: d1570cd9-b414-4cd6-96bd-47c38281eaca
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accelerator Key Property
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Accelerator Key Property](https://docs.microsoft.com/cpp/windows/accelerator-key-property).  
  
  
The following are legal entries for the Key property in the accelerator table:  
  
-   An integer between 0 and 255 in decimal format. The value determines whether the value is treated as ASCII or ANSI as follows:  
  
    -   Single-digit numbers are always interpreted as the corresponding key, rather than as ASCII or ANSI values.  
  
    -   Values from 1 through 26, when preceded with zeros, are interpreted as ^A through ^Z, which represents the ASCII value of the letters of the alphabet when pressed with the CTRL key held down.  
  
    -   Values from 27-32 are always interpreted as three-digit decimal values 027 through 032.  
  
    -   Values from 033 through 255, whether preceded by 0's or not are interpreted as ANSI values.  
  
-   A single keyboard character. Uppercase A – Z or the numbers 0 – 9 can be either ASCII or virtual key values; any other character is ASCII only.  
  
-   A single keyboard character in the range A – Z (uppercase only), preceded by a caret (^) (for example, ^C). This enters the ASCII value of the key when it is pressed with the CTRL key held down.  
  
    > [!NOTE]
    >  When entering an ASCII value, the modifier property options are limited. The only control key available for use is the ALT key.  
  
-   Any valid virtual key identifier. The drop-down Key box in the Accelerator table contains a list of standard virtual key identifiers.  
  
    > [!TIP]
    >  Another way to define an accelerator key is to right-click an entry or multiple entries in the Accelerator table, choose **Next Key Typed** from the shortcut menu, and then press any of the keys or key combinations on the keyboard. The **Next Key Typed** command is also available from the **Edit** menu.  
  
## Requirements  
 Win32  
  
## See Also  
 [Setting Accelerator Properties](../windows/setting-accelerator-properties.md)   
 [Editing in an Accelerator Table](../windows/editing-in-an-accelerator-table.md)   
 [Accelerator Editor](../mfc/accelerator-editor.md)

