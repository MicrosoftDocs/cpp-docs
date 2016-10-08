---
title: "Rebar Controls and Bands"
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
ms.assetid: b647e7a5-9ea7-48b1-8e5f-096d104748f0
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
# Rebar Controls and Bands
The main purpose of a rebar control is to act as a container for child windows, common dialog controls, menus, toolbars, and so on. This containment is supported by the concept of a "band." Each rebar band can contain any combination of a gripper bar, a bitmap, a text label, and a child window.  
  
 Class `CReBarCtrl` has many member functions that you can use to retrieve, and manipulate, information for a specific rebar band:  
  
-   [GetBandCount](../Topic/CReBarCtrl::GetBandCount.md) Retrieves the number of current bands in the rebar control.  
  
-   [GetBandInfo](../Topic/CReBarCtrl::GetBandInfo.md) Initializes a **REBARBANDINFO** structure with information from the specified band. There is a corresponding [SetBandInfo](../Topic/CReBarCtrl::SetBandInfo.md) member function.  
  
-   [GetRect](../Topic/CReBarCtrl::GetRect.md) Retrieves the bounding rectangle of a specified band.  
  
-   [GetRowCount](../Topic/CReBarCtrl::GetRowCount.md) Retrieves the number of band rows in a rebar control.  
  
-   [IDToIndex](../Topic/CReBarCtrl::IDToIndex.md) Retrieves the index of a specified band.  
  
-   [GetBandBorders](../Topic/CReBarCtrl::GetBandBorders.md) Retrieves the borders of a band.  
  
 In addition to manipulation, several member functions are provided that allow you to operate on specific rebar bands.  
  
 [InsertBand](../Topic/CReBarCtrl::InsertBand.md) and [DeleteBand](../Topic/CReBarCtrl::DeleteBand.md) add and remove rebar bands. [MinimizeBand](../Topic/CReBarCtrl::MinimizeBand.md) and [MaximizeBand](../Topic/CReBarCtrl::MaximizeBand.md) affect the current size of a specific rebar band. [MoveBand](../Topic/CReBarCtrl::MoveBand.md) changes the index of a specific rebar band. [ShowBand](../Topic/CReBarCtrl::ShowBand.md) shows or hides a rebar band from the user.  
  
 The following example demonstrates adding a toolbar band (`m_wndToolBar`) to an existing rebar control (`m_wndReBar`). The band is described by initializing the `rbi` structure and then calling the `InsertBand` member function:  
  
 [!CODE [NVC_MFCControlLadenDialog#27](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#27)]  
  
## See Also  
 [Using CReBarCtrl](../VS_visualcpp/Using-CReBarCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)