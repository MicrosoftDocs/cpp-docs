---
title: "Databinding with ActiveX Controls in Visual C++ | Microsoft Docs"
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
  - "ActiveX controls [C++], data binding"
  - "data binding [C++], ActiveX controls"
  - "bound controls [C++], ActiveX"
  - "data-bound controls [C++], ActiveX"
  - "controls [C++], data binding"
ms.assetid: afe11d2b-eefe-43ce-958d-82d3d4dee158
caps.latest.revision: 11
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
# Databinding with ActiveX Controls in Visual C++
Databinding is implemented through two types of ActiveX controls: data controls and data-bound controls.  
  
 **Data controls**  
 A data control is responsible for encapsulating a database query and the retrieved rowset. The Microsoft data controls provide a user interface consisting of a series of buttons to iterate through the data. Visual C++ offers two data access technologies for data controls: [ADO and RDO](../../data/ado-rdo/data-access-ado-and-rdo.md).  
  
> [!IMPORTANT]
>  ADO and RDO data controls are an older technology that was released in a earlier version of Visual Studio, and might not be available in the current version. To use the information in this section, you might have to obtain a earlier release to acquire the appropriate control.  
  
 **Data-bound controls**  
 A data-bound control is responsible for presenting the data. Data-bound controls connect to data controls to receive data and present the data through a variety of user interfaces. A Visual C++ application can also bind variables to data values set in the data-bound controls; see [CWnd::BindProperty](../mfc/reference/cwnd-class.md#cwnd__bindproperty).  
  
 For more information about databinding, see:  
  
-   [MFC ActiveX Controls: Using Data Binding in an ActiveX Control](../../mfc/mfc-activex-controls-using-data-binding-in-an-activex-control.md)  
  
-   [Data Access: ADO and RDO](../../data/ado-rdo/data-access-ado-and-rdo.md)  
  
-   [ADO Databinding](../../data/ado-rdo/ado-databinding.md)  
  
-   [RDO Databinding](../../data/ado-rdo/rdo-databinding.md)  
  
-   [Wrapper Classes](../../data/ado-rdo/wrapper-classes.md)  
  
-   [Setting Event Handlers on ActiveX Controls](../../data/ado-rdo/setting-event-handlers-on-activex-controls.md)  
  
-   [Error Trapping](../../data/ado-rdo/error-trapping.md)  
  
-   [Limitations of Databinding](../../data/ado-rdo/limitations-of-databinding.md)  
  
## See Also  
 [Data-Bound Controls (ADO and RDO)](../../data/ado-rdo/data-bound-controls-ado-and-rdo.md)