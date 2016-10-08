---
title: "Printing"
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
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
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
# Printing
Microsoft Windows implements device-independent display. In MFC, this means that the same drawing calls, in the `OnDraw` member function of your view class, are responsible for drawing on the display and on other devices, such as printers. For print preview, the target device is a simulated printer output to the display.  
  
##  <a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a> Your Role in Printing vs. the Framework's Role  
 Your view class has the following responsibilities:  
  
-   Inform the framework how many pages are in the document.  
  
-   When asked to print a specified page, draw that portion of the document.  
  
-   Allocate and deallocate any fonts or other graphics device interface (GDI) resources needed for printing.  
  
-   If necessary, send any escape codes needed to change the printer mode before printing a given page, for example, to change the printing orientation on a per-page basis.  
  
 The framework's responsibilities are as follows:  
  
-   Display the **Print** dialog box.  
  
-   Create a [CDC](../VS_visualcpp/CDC-Class.md) object for the printer.  
  
-   Call the [StartDoc](../Topic/CDC::StartDoc.md) and [EndDoc](../Topic/CDC::EndDoc.md) member functions of the `CDC` object.  
  
-   Repeatedly call the [StartPage](../Topic/CDC::StartPage.md) member function of the `CDC` object, inform the view class which page should be printed, and call the [EndPage](../Topic/CDC::EndPage.md) member function of the `CDC` object.  
  
-   Call overridable functions in the view at the appropriate times.  
  
 The following articles discuss how the framework supports printing and print preview:  
  
### What do you want to know more about?  
  
-   [How default printing is done](../VS_visualcpp/How-Default-Printing-Is-Done.md)  
  
-   [Multipage documents](../VS_visualcpp/Multipage-Documents.md)  
  
-   [Headers and footers](../VS_visualcpp/Headers-and-Footers.md)  
  
-   [Allocating GDI resources for printing](../VS_visualcpp/Allocating-GDI-Resources.md)  
  
-   [Print preview](../VS_visualcpp/Print-Preview-Architecture.md)  
  
## See Also  
 [Printing and Print Preview](../VS_visualcpp/Printing-and-Print-Preview.md)