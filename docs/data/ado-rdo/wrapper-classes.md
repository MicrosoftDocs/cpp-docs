---
title: "Wrapper Classes | Microsoft Docs"
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
  - "wrapper classes [C++], ActiveX controls"
  - "data binding [C++], ActiveX controls"
  - "ActiveX controls [C++], wrapper classes"
ms.assetid: ebbc17b9-cc1b-4c29-afa9-da7f9511876e
caps.latest.revision: 7
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
# Wrapper Classes
When you [insert a control](../../data/ado-rdo/inserting-the-control-into-a-visual-cpp-application.md) into a Visual C++ project, wrapper classes for the control are not included by default. However, if you want to [modify the control's behavior](../../data/ado-rdo/modifying-a-control-s-run-time-behavior.md), you can write a wrapper class for the control. Depending on how you intend to manipulate the control programmatically, you need to write one or more of the control's wrapper classes.  
  
 A wrapper class is available for each of the coclasses in the control's type library (.tlb) file. The control's wrapper class should be the control name prefixed by the letter C.  
  
 For more information about the functionality of the wrapper classes, see the object model for the control's base technology.  
  
 Using [CWnd::GetDlgItem](../mfc/reference/cwnd-class.md#cwnd__getdlgitem) also requires wrapper classes because the return value must be cast to the control class. For example:  
  
```  
CDBList* pDBList = 0;  
pDBList = static_cast<CDBList*>(GetDlgItem(IDC_DBLIST));  
```  
  
 By reading the generated .idl file, you can determine what properties, methods, and events are exposed by a control, as well as see method and accessor function declarations directly. Additional information can be obtained from the control using the [OLE/COM Object Viewer](../../data/ado-rdo/using-the-ole-com-object-viewer.md).  
  
## See Also  
 [Using ActiveX Controls](../../data/ado-rdo/using-activex-controls.md)   
 [Modifying a Control's Run-Time Behavior](../../data/ado-rdo/modifying-a-control-s-run-time-behavior.md)