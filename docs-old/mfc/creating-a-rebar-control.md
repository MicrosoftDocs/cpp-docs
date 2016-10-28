---
title: "Creating a Rebar Control"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "rebar controls, creating"
  - "CReBarCtrl class, creating"
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
caps.latest.revision: 8
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
# Creating a Rebar Control
[CReBarCtrl](../mfcref/crebarctrl-class.md) objects should be created before the parent object is visible. This minimizes the possibilities of painting problems.  
  
 For instance, rebar controls (used in frame window objects) are commonly used as parent windows for toolbar controls. Therefore, the parent of the rebar control is the frame window object. Because the frame window object is the parent, the `OnCreate` member function (of the parent) is an excellent place to create the rebar control.  
  
 To use a `CReBarCtrl` object, you will typically follow these steps:  
  
### To use a CReBarCtrl object  
  
1.  Construct the [CReBarCtrl](../mfcref/crebarctrl-class.md) object.  
  
2.  Call [Create](../Topic/CReBarCtrl::Create.md) to create the Windows rebar common control and attach it to the `CReBarCtrl` object, specifying any desired styles.  
  
3.  Load a bitmap, with a call to [CBitmap::LoadBitmap](../Topic/CBitmap::LoadBitmap.md), to be used as the background of the rebar control object.  
  
4.  Create and initialize any child window objects (toolbars, dialog controls, and so on) that will be contained by the rebar control object.  
  
5.  Initialize a **REBARBANDINFO** structure with the necessary information for the band about to be inserted.  
  
6.  Call [InsertBand](../Topic/CReBarCtrl::InsertBand.md) to insert existing child windows (such as `m_wndReToolBar`) into the new rebar control. For more information on inserting bands into an existing rebar control, see [Rebar Controls and Bands](../mfc/rebar-controls-and-bands.md).  
  
## See Also  
 [Using CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controls](../mfc/controls--mfc-.md)