---
title: "Using a Dialog Bar with a Rebar Control"
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
ms.assetid: e528cea0-6b81-4bdf-9643-7c03b6176590
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
# Using a Dialog Bar with a Rebar Control
As mentioned in [Rebar Controls and Bands](../VS_visualcpp/Rebar-Controls-and-Bands.md), each band can contain only one child window (or control). This might be a limitation if you want to have more than one child window per band. A convenient workaround is to create a dialog bar resource with multiple controls and then add a rebar band (containing the dialog bar) to the rebar control.  
  
 Normally, if you wanted the dialog bar band to appear transparent, you would set the **WS_EX_TRANSPARENT** extended style for the dialog bar object. However, because **WS_EX_TRANSPARENT** has some issues with properly painting the background of a dialog bar, you will need to do a little extra work to achieve the desired effect.  
  
 The following procedure details the steps necessary to achieve transparency without using the **WS_EX_TRANSPARENT** extended style.  
  
### To implement a transparent dialog bar in a rebar band  
  
1.  Using the [Add Class dialog box](../VS_visualcpp/Adding-an-MFC-Class.md), add a new class (for example, `CMyDlgBar`) that implements your dialog bar object.  
  
2.  Add a handler for the `WM_ERASEBKGND` message.  
  
3.  In the new handler, modify the existing code to match the following example:  
  
     [!CODE [NVC_MFCControlLadenDialog#29](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#29)]  
  
4.  Add a handler for the `WM_MOVE` message.  
  
5.  In the new handler, modify the existing code to match the following example:  
  
     [!CODE [NVC_MFCControlLadenDialog#30](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#30)]  
  
 The new handlers simulate the transparency of the dialog bar by forwarding the `WM_ERASEBKGND` message to the parent window and forcing a repaint every time the dialog bar object is moved.  
  
## See Also  
 [Using CReBarCtrl](../VS_visualcpp/Using-CReBarCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)