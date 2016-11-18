---
title: "Creating a Rebar Control | Microsoft Docs"
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
  - "rebar controls, creating"
  - "CReBarCtrl class, creating"
ms.assetid: 0a012e08-772b-4f6a-af86-7cb651d11d3e
caps.latest.revision: 10
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
# Creating a Rebar Control
[CReBarCtrl](../mfc/reference/crebarctrl-class.md) objects should be created before the parent object is visible. This minimizes the possibilities of painting problems.  
  
 For instance, rebar controls (used in frame window objects) are commonly used as parent windows for toolbar controls. Therefore, the parent of the rebar control is the frame window object. Because the frame window object is the parent, the `OnCreate` member function (of the parent) is an excellent place to create the rebar control.  
  
 To use a `CReBarCtrl` object, you will typically follow these steps:  
  
### To use a CReBarCtrl object  
  
1.  Construct the [CReBarCtrl](../mfc/reference/crebarctrl-class.md) object.  
  
2.  Call [Create](../mfc/reference/crebarctrl-class.md#crebarctrl__create) to create the Windows rebar common control and attach it to the `CReBarCtrl` object, specifying any desired styles.  
  
3.  Load a bitmap, with a call to [CBitmap::LoadBitmap](../mfc/reference/cbitmap-class.md#cbitmap__loadbitmap), to be used as the background of the rebar control object.  
  
4.  Create and initialize any child window objects (toolbars, dialog controls, and so on) that will be contained by the rebar control object.  
  
5.  Initialize a **REBARBANDINFO** structure with the necessary information for the band about to be inserted.  
  
6.  Call [InsertBand](../mfc/reference/crebarctrl-class.md#crebarctrl__insertband) to insert existing child windows (such as `m_wndReToolBar`) into the new rebar control. For more information on inserting bands into an existing rebar control, see [Rebar Controls and Bands](../mfc/rebar-controls-and-bands.md).  
  
## See Also  
 [Using CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

