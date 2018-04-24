---
title: "How to: Create a Message Map for a Template Class | Microsoft Docs"
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
  - "template classes, creating message maps"
  - "message maps, template classes"
ms.assetid: 4e7e24f8-06df-4b46-82aa-7435c8650de3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# How to: Create a Message Map for a Template Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [How to: Create a Message Map for a Template Class](https://docs.microsoft.com/cpp/mfc/how-to-create-a-message-map-for-a-template-class).  
  
  
Message mapping in MFC provides an efficient way to direct Windows messages to an appropriate C++ object instance. Examples of MFC message map targets include application classes, document and view classes, control classes, and so on.  
  
 Traditional MFC message maps are declared using the [BEGIN_MESSAGE_MAP](../Topic/BEGIN_MESSAGE_MAP.md) macro to declare the start of the message map, a macro entry for each message-handler class method, and finally the [END_MESSAGE_MAP](../Topic/END_MESSAGE_MAP.md) macro to declare the end of the message map.  
  
 One limitation with the [BEGIN_MESSAGE_MAP](../Topic/BEGIN_MESSAGE_MAP.md) macro occurs when it is used in conjunction with a class containing template arguments. When used with a template class, this macro will cause a compile-time error due to the missing template parameters during macro expansion. The [BEGIN_TEMPLATE_MESSAGE_MAP](../Topic/BEGIN_TEMPLATE_MESSAGE_MAP.md) macro was designed to allow classes containing a single template argument to declare their own message maps.  
  
## Example  
 Consider an example where the MFC [CListBox](../mfc/reference/clistbox-class.md) class is extended to provide synchronization with an external data source. The fictitious **CSyncListBox** class is declared as follows:  
  
 [!code-cpp[NVC_MFC_CListBox#42](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.h#42)]  
  
 The **CSyncListBox** class is templated on a single type that describes the data source it will synchronize with. It also declares three methods that will participate in the message map of the class: **OnPaint**, **OnDestroy**, and **OnSynchronize**. The **OnSynchronize** method is implemented as follows:  
  
 [!code-cpp[NVC_MFC_CListBox#43](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.cpp#43)]  
  
 The above implementation allows the **CSyncListBox** class to be specialized on any class type that implements the **GetCount** method, such as **CArray**, **CList**, and **CMap**. The **StringizeElement** function is a template function prototyped by the following:  
  
 [!code-cpp[NVC_MFC_CListBox#44](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.cpp#44)]  
  
 Normally, the message map for this class would be defined as:  
  
 `BEGIN_MESSAGE_MAP(CSyncListBox, CListBox)`  
  
 `ON_WM_PAINT()`  
  
 `ON_WM_DESTROY()`  
  
 `ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)`  
  
 `END_MESSAGE_MAP()`  
  
 where **LBN_SYNCHRONIZE** is a custom user message defined by the application, such as:  
  
 [!code-cpp[NVC_MFC_CListBox#45](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.cpp#45)]  
  
 The above macro map will not compile, due to the fact that the template specification for the **CSyncListBox** class will be missing during macro expansion. The **BEGIN_TEMPLATE_MESSAGE_MAP** macro solves this by incorporating the specified template parameter into the expanded macro map. The message map for this class becomes:  
  
 [!code-cpp[NVC_MFC_CListBox#46](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.cpp#46)]  
  
 The following demonstrates sample usage of the **CSyncListBox** class using a **CStringList** object:  
  
 [!code-cpp[NVC_MFC_CListBox#47](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.cpp#47)]  
  
 To complete the test, the **StringizeElement** function must be specialized to work with the **CStringList** class:  
  
 [!code-cpp[NVC_MFC_CListBox#48](../snippets/cpp/VS_Snippets_Cpp/NVC_MFC_CListBox/Cpp/ListBoxDlg.cpp#48)]  
  
## See Also  
 [BEGIN_TEMPLATE_MESSAGE_MAP](../Topic/BEGIN_TEMPLATE_MESSAGE_MAP.md)   
 [Message Handling and Mapping](../mfc/message-handling-and-mapping.md)





