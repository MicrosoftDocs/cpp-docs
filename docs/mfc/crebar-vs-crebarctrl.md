---
title: "CReBar vs. CReBarCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CReBar"
  - "CReBarCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CReBar class, vs. CReBarCtrl"
  - "rebar controls, CReBarCtrl class"
  - "GetReBarCtrl class"
ms.assetid: 7f9c1d7e-5d5f-4956-843c-69ed3df688d0
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
# CReBar vs. CReBarCtrl
MFC provides two classes to create rebars: [CReBar](../mfc/reference/crebar-class.md) and [CReBarCtrl](../mfc/reference/crebarctrl-class.md) (which wraps the Windows common control API). **CReBar** provides all of the functionality of the rebar common control, and it handles many of the required common control settings and structures for you.  
  
 `CReBarCtrl` is a wrapper class for the Win32 rebar control, and therefore may be easier to implement if you do not intend to integrate the rebar into the MFC architecture. If you plan to use `CReBarCtrl` and integrate the rebar into the MFC architecture, you must take additional care to communicate rebar control manipulations to MFC. This communication is not difficult; however, it is additional work that is unneeded when you use **CReBar**.  
  
 Visual C++ provides two ways to take advantage of the rebar common control.  
  
-   Create the rebar using **CReBar**, and then call [CReBar::GetReBarCtrl](../mfc/reference/crebar-class.md#crebar__getrebarctrl) to get access to the `CReBarCtrl` member functions.  
  
    > [!NOTE]
    >  `CReBar::GetReBarCtrl` is an inline member function that casts the **this** pointer of the rebar object. This means that, at run time, the function call has no overhead.  
  
-   Create the rebar using [CReBarCtrl](../mfc/reference/crebarctrl-class.md)'s constructor.  
  
 Either method will give you access to the member functions of the rebar control. When you call `CReBar::GetReBarCtrl`, it returns a reference to a `CReBarCtrl` object so you can use either set of member functions. See [CReBar](../mfc/reference/crebar-class.md) for information on constructing and creating a rebar using **CReBar**.  
  
## See Also  
 [Using CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controls](../mfc/controls-mfc.md)

