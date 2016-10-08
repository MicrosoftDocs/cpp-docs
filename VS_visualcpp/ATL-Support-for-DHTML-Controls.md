---
title: "ATL Support for DHTML Controls"
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
ms.assetid: 4ba98098-da5d-4362-96ad-8372f816c307
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# ATL Support for DHTML Controls
Using ATL, you can create a control with Dynamic HTML (DHTML) capability. An ATL DHTML control:  
  
-   Hosts the WebBrowser control.  
  
-   Specifies, using HTML, the user interface (UI) of the DHTML control.  
  
-   Accesses the WebBrowser object and its methods through its interface, [IWebBrowser2](https://msdn.microsoft.com/en-us/library/aa752127.aspx).  
  
-   Manages communication between C++ code and HTML.  
  
 A DHTML control is similar to any other ATL control, except the DHTML control includes an additional dispatch interface. See the figure in [Identifying the Elements of the DHTML Control Project](../VS_visualcpp/Identifying-the-Elements-of-the-DHTML-Control-Project.md) for an illustration of the interfaces provided in the default DHTML project.  
  
 You can view the ATL DHTML control in a Web browser or other container, such as the ActiveX Control Test Container.  
  
## In This Section  
 [Identifying the Elements of the DHTML Control Project](../VS_visualcpp/Identifying-the-Elements-of-the-DHTML-Control-Project.md)  
 Describes the elements of a DHTML control project.  
  
 [Calling C++ Code from DHTML](../VS_visualcpp/Calling-C---Code-from-DHTML.md)  
 Provides an example of calling C++ code from a DHTML control.  
  
 [Creating an ATL DHTML Control](../VS_visualcpp/Creating-an-ATL-DHTML-Control.md)  
 Lists the steps for creating a DHTML control.  
  
 [Testing the ATL DHTML Control](../VS_visualcpp/Testing-the-ATL-DHTML-Control.md)  
 Shows how to build and test the initial DHTML control project.  
  
 [Modifying the ATL DHTML Control](../VS_visualcpp/Modifying-the-ATL-DHTML-Control.md)  
 Shows how to add some functionality to the control.  
  
 [Testing the Altered ATL DHTML Control](../VS_visualcpp/Testing-the-Modified-ATL-DHTML-Control.md)  
 Shows how to build and test the control's added functionality.  
  
## Related Sections  
 [ATL](../VS_visualcpp/Active-Template-Library--ATL--Concepts.md)  
 Provides links to conceptual topics on how to program using the Active Template Library.