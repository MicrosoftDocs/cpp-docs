---
title: "COleControlModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleControlModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE control modules"
  - "MFC ActiveX controls, OLE control modules"
  - "COleControlModule class"
  - "control modules"
ms.assetid: 0721724d-d4af-4eda-ad34-5a2b27810dd4
caps.latest.revision: 23
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
# COleControlModule Class
The base class from which you derive an OLE control module object.  
  
## Syntax  
  
```  
class COleControlModule : public CWinApp  
```  
  
## Remarks  
 This class provides member functions for initializing your control module. Each OLE control module that uses the Microsoft Foundation classes can only contain one object derived from `COleControlModule`. This object is constructed when other C++ global objects are constructed. Declare your derived `COleControlModule` object at the global level.  
  
 For more information on using the `COleControlModule` class, see the [CWinApp](../../mfc/reference/cwinapp-class.md) class and the article [ActiveX Controls](../../mfc/mfc-activex-controls.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 [CWinApp](../../mfc/reference/cwinapp-class.md)  
  
 `COleControlModule`  
  
## Requirements  
 **Header:** afxctl.h  
  
## See Also  
 [MFC Sample TESTHELP](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



