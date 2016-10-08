---
title: "Variant Parameter Type Constants"
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
ms.assetid: de99c7a9-7aae-4dc4-b723-40c6380543ab
caps.latest.revision: 11
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
# Variant Parameter Type Constants
This topic lists new constants that indicate variant parameter types designed for use with the OLE control classes of the Microsoft Foundation Class Library.  
  
 The following is a list of class constants:  
  
##  <a name="_mfc_variant_data_constants"></a> Variant Data Constants  
  
-   **VTS_COLOR** A 32-bit integer used to represent a RGB color value.  
  
-   **VTS_FONT** A pointer to the                         **IFontDisp** interface of an OLE font object.  
  
-   **VTS_HANDLE** A Windows handle value.  
  
-   **VTS_PICTURE** A pointer to the                         `IPictureDisp` interface of an OLE picture object.  
  
-   **VTS_OPTEXCLUSIVE** A 16-bit value used for a control that is intended to be used in a group of controls, such as radio buttons. This type tells the container that if one control in a group has a                         **TRUE** value, all others must be                         **FALSE**.  
  
-   **VTS_TRISTATE** A 16-bit signed integer used for properties that can have one of three possible values (selected, cleared, unavailable), for example, a check box.  
  
-   **VTS_XPOS_HIMETRIC** A 32-bit unsigned integer used to represent a position along the x-axis in                         **HIMETRIC** units.  
  
-   **VTS_YPOS_HIMETRIC** A 32-bit unsigned integer used to represent a position along the y-axis in                         **HIMETRIC** units.  
  
-   **VTS_XPOS_PIXELS** A 32-bit unsigned integer used to represent a position along the x-axis in pixels.  
  
-   **VTS_YPOS_PIXELS** A 32-bit unsigned integer used to represent a position along the y-axis in pixels.  
  
-   **VTS_XSIZE_PIXELS** A 32-bit unsigned integer used to represent the width of a screen object in pixels.  
  
-   **VTS_YSIZE_PIXELS** A 32-bit unsigned integer used to represent the height of a screen object in pixels.  
  
-   **VTS_XSIZE_HIMETRIC** A 32-bit unsigned integer used to represent the width of a screen object in                         **HIMETRIC** units.  
  
-   **VTS_YSIZE_HIMETRIC** A 32-bit unsigned integer used to represent the height of a screen object in                         **HIMETRIC** units.  
  
    > [!NOTE]
    >  Additional variant constants have been defined for all variant types, with the exception of                             **VTS_FONT** and                             **VTS_PICTURE**, that provide a pointer to the variant data constant. These constants are named using the                             **VTS_P**`constantname` convention. For example,                             **VTS_PCOLOR** is a pointer to a                             **VTS_COLOR** constant.  
  
## Requirements  
 **Header:** afxdisp.h  
  
## See Also  
 [Macros and Globals](../VS_visualcpp/MFC-Macros-and-Globals.md)