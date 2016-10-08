---
title: "Header Control and List Control"
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
ms.assetid: b20194b1-1a6b-4e2f-b890-1b3cca6650bc
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
# Header Control and List Control
In most cases, you will use the header control that is embedded in a [CListCtrl](../VS_visualcpp/CListCtrl-Class.md) or [CListView](../VS_visualcpp/CListView-Class.md) object. However, there are cases where a separate header control object is desirable, such as manipulating data, arranged in columns or rows, in a [CView](../VS_visualcpp/CView-Class.md)-derived object. In these cases, you need greater control over the appearance and default behavior of an embedded header control.  
  
 In the common case that you want a header control to provide standard, default behavior, you may want to use [CListCtrl](../VS_visualcpp/CListCtrl-Class.md) or [CListView](../VS_visualcpp/CListView-Class.md) instead. Use `CListCtrl` when you want the functionality of a default header control, embedded in a list view common control. Use [CListView](../VS_visualcpp/CListView-Class.md) when you want the functionality of a default header control, embedded in a view object.  
  
> [!NOTE]
>  These controls only include a built-in header control if the list view control is created using the `LVS_REPORT` style.  
  
 In most cases, the appearance of the embedded header control can be modified by changing the styles of the containing list view control. In addition, information about the header control can be obtained through member functions of the parent list view control. However, for complete control, and access, to the attributes and styles of the embedded header control, it is recommended that a pointer to the header control object be obtained.  
  
 The embedded header control object can be accessed from either **CListCtrl** or `CListView` with a call to the respective class's `GetHeaderCtrl` member function. The following code demonstrates this:  
  
 [!CODE [NVC_MFCControlLadenDialog#14](../CodeSnippet/VS_Snippets_Cpp/NVC_MFCControlLadenDialog#14)]  
  
## What do you want to know more about?  
  
-   [Using image lists with header controls](../VS_visualcpp/Using-Image-Lists-with-Header-Controls.md)  
  
## See Also  
 [Using CHeaderCtrl](../VS_visualcpp/Using-CHeaderCtrl.md)   
 [Controls](../VS_visualcpp/Controls--MFC-.md)