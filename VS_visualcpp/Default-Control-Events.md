---
title: "Default Control Events"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 75556b23-18f5-4390-97a4-2ecad3309741
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
# Default Control Events
The following control names have the accompanying default events:  
  
|Control name|Default event|  
|------------------|-------------------|  
|Animate|**ACN_START**|  
|Check box|**BN_CLICKED**|  
|Combo box|**CBN_SELCHANGE**|  
|Custom|**TTN_GETDISPINFO**|  
|Date time picker|**DTN_DATETIMECHANGE**|  
|Edit box|**EN_CHANGE**|  
|Group Box|(Not applicable)|  
|Hot key|**NM_OUTOFMEMORY**|  
|IP address|**IPN_FIELDCHANGED**|  
|List|**LVN_ITEMCHANGE**|  
|List box|**LBN_SELCHANGE**|  
|Month calendar|**MCN_SELCHANGE**|  
|Picture Control|(Not applicable)|  
|Progress|**NM_CUSTOMDRAW**|  
|Push button|**BN_CLICKED**|  
|Radio button|**BN_CLICKED**|  
|Rich edit|**EN_CHANGE**|  
|Scroll bar|**NM_THEMECHANGED**|  
|Slider|**NM_CUSTOMDRAW**|  
|Spin|**UDN_DELTAPOS**|  
|Static Text|(Not applicable)|  
|Tab|**TCN_SELCHANGE**|  
|Tree|**TVN_SELCHANGE**|  
  
 For information on adding resources to managed projects, please see [Resources in Applications](../Topic/Resources%20in%20Desktop%20Apps.md) in the *.NET Framework Developer's Guide.* For information on manually adding resource files to managed projects, accessing resources, displaying static resources, and assigning resources strings to properties, see [Walkthrough: Localizing Windows Forms](assetId:///9a96220d-a19b-4de0-9f48-01e5d82679e5) and [Walkthrough: Using Resources for Localization with ASP.NET](../Topic/Walkthrough:%20Using%20Resources%20for%20Localization%20with%20ASP.NET.md).  
  
## Requirements  
 Win32  
  
## See Also  
 [Defining Member Variables for Dialog Controls](../VS_visualcpp/Defining-Member-Variables-for-Dialog-Controls.md)   
 [Message Types Associated with User-Interface Objects](../VS_visualcpp/Message-Types-Associated-with-User-Interface-Objects.md)   
 [Editing a Message Handler](../VS_visualcpp/Editing-a-Message-Handler.md)   
 [Defining a Message Handler for a Reflected Message](../VS_visualcpp/Defining-a-Message-Handler-for-a-Reflected-Message.md)   
 [Declaring a Variable Based on Your New Control Class](../VS_visualcpp/Declaring-a-Variable-Based-on-Your-New-Control-Class.md)   
 [Overriding a Virtual Function](../VS_visualcpp/Overriding-a-Virtual-Function--Visual-C---.md)