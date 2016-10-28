---
title: "Databinding with ActiveX Controls in Visual C++"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
 A data control is responsible for encapsulating a database query and the retrieved rowset. The Microsoft data controls provide a user interface consisting of a series of buttons to iterate through the data. Visual C++ offers two data access technologies for data controls: [ADO and RDO](../data/data-access--ado-and-rdo.md).  
  
> [!IMPORTANT]
>  ADO and RDO data controls are an older technology that was released in a earlier version of Visual Studio, and might not be available in the current version. To use the information in this section, you might have to obtain a earlier release to acquire the appropriate control.  
  
 **Data-bound controls**  
 A data-bound control is responsible for presenting the data. Data-bound controls connect to data controls to receive data and present the data through a variety of user interfaces. A Visual C++ application can also bind variables to data values set in the data-bound controls; see [CWnd::BindProperty](../Topic/CWnd::BindProperty.md).  
  
 For more information about databinding, see:  
  
-   [MFC ActiveX Controls: Using Data Binding in an ActiveX Control](../mfc/mfc-activex-controls--using-data-binding-in-an-activex-control.md)  
  
-   [Data Access: ADO and RDO](../data/data-access--ado-and-rdo.md)  
  
-   [ADO Databinding](../data/ado-databinding.md)  
  
-   [RDO Databinding](../data/rdo-databinding.md)  
  
-   [Wrapper Classes](../data/wrapper-classes.md)  
  
-   [Setting Event Handlers on ActiveX Controls](../data/setting-event-handlers-on-activex-controls.md)  
  
-   [Error Trapping](../data/error-trapping.md)  
  
-   [Limitations of Databinding](../data/limitations-of-databinding.md)  
  
## See Also  
 [Data-Bound Controls (ADO and RDO)](../data/data-bound-controls--ado-and-rdo-.md)