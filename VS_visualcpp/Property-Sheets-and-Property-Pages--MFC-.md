---
title: "Property Sheets and Property Pages (MFC)"
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
ms.topic: article
ms.assetid: de8fea12-6c35-4cef-8625-b8073a379446
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
# Property Sheets and Property Pages (MFC)
An MFC [dialog box](../VS_visualcpp/Dialog-Boxes.md) can take on a "tab dialog" look by incorporating property sheets and property pages. Called a "property sheet" in MFC, this kind of dialog box, similar to many dialog boxes in Microsoft Word, Excel, and Visual C++, appears to contain a stack of tabbed sheets, much like a stack of file folders seen from front to back, or a group of cascaded windows. Controls on the front tab are visible; only the labeled tab is visible on the rear tabs. Property sheets are particularly useful for managing large numbers of properties or settings that fall fairly neatly into several groups. Typically, one property sheet can simplify a user interface by replacing several separate dialog boxes.  
  
 As of MFC version 4.0, property sheets and property pages are implemented using the common controls that come with Windows 95 and Windows NT version 3.51 and later.  
  
 Property sheets are implemented with classes [CPropertySheet](../VS_visualcpp/CPropertySheet-Class.md) and [CPropertyPage](../VS_visualcpp/CPropertyPage-Class.md) (described in the *MFC Reference*). `CPropertySheet` defines the overall dialog box, which can contain multiple "pages" based on `CPropertyPage`.  
  
 For information on creating and working with property sheets, see the topic [Property Sheets](../VS_visualcpp/Property-Sheets--MFC-.md).  
  
## See Also  
 [Dialog Boxes](../VS_visualcpp/Dialog-Boxes.md)   
 [Life Cycle of a Dialog Box](../VS_visualcpp/Life-Cycle-of-a-Dialog-Box.md)   
 [Property Sheets and Property Pages in MFC](../VS_visualcpp/Property-Sheets-and-Property-Pages-in-MFC.md)   
 [Exchanging Data](../VS_visualcpp/Exchanging-Data.md)   
 [Creating a Modeless Property Sheet](../VS_visualcpp/Creating-a-Modeless-Property-Sheet.md)   
 [Handling the Apply Button](../VS_visualcpp/Handling-the-Apply-Button.md)