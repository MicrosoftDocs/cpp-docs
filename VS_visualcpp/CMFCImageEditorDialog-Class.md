---
title: "CMFCImageEditorDialog Class"
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
ms.topic: reference
ms.assetid: 6a7d08f3-1ec2-4062-9b79-a0c2776b58d1
caps.latest.revision: 20
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
# CMFCImageEditorDialog Class
The `CMFCImageEditorDialog` class supports an image editor dialog box.  
  
## Syntax  
  
```  
class CMFCImageEditorDialog : public CDialogEx  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCImageEditorDialog::CMFCImageEditorDialog](#cmfcimageeditordialog__cmfcimageeditordialog)|Constructs a `CMFCImageEditorDialog` object.|  
  
## Remarks  
 The `CMFCImageEditorDialog` class provides a dialog box that includes:  
  
-   A picture area that you use to modify individual pixels in an image.  
  
-   Drawing tools to modify the pixels in the picture area.  
  
-   A color palette to specify the color that is used by the drawing tools.  
  
-   A preview area that displays the effect of your edit.  
  
 The following illustration shows an image editor dialog box.  
  
 ![CMFCImageEditorDialog dialog box](../VS_visualcpp/media/ImageEdit.png "ImageEdit")  
  
 One way to use a `CMFCImageEditorDialog` object is to pass it a `CBitmap` image to be edited. Do not create a large image because the image editing area has a limited size and the logical pixel size is adjusted to fit the area. Call the `DoModal` method to start a modal dialog box.  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CDialogEx](../VS_visualcpp/CDialogEx-Class.md)  
  
 [CMFCImageEditorDialog](../VS_visualcpp/CMFCImageEditorDialog-Class.md)  
  
## Requirements  
 **Header:** afximageeditordialog.h  
  
##  <a name="cmfcimageeditordialog__cmfcimageeditordialog"></a>  CMFCImageEditorDialog::CMFCImageEditorDialog  
 Constructs a `CMFCImageEditorDialog` object.  
  
```  
CMFCImageEditorDialog(  
    CBitmap* pBitmap,  
    CWnd* pParent=NULL,  
    int nBitsPixel=-1 );  
```  
  
### Parameters  
 `pBitmap`  
 Pointer to an image.  
  
 `pParent`  
 Pointer to the parent window of the current image editor dialog box.  
  
 `nBitsPixel`  
 The number of bits used to represent the color of a single pixel, which is also referred to as color depth.  If the `nBitsPixel` parameter is -1, the color depth is derived from the image specified by the `pBitmap` parameter. The default value is -1.  
  
### Return Value  
 To modify an image, pass an image pointer to the `CMFCImageEditorDialog` constructor. Then call the `DoModal` method to open a modal dialog box. When the `DoModal` method returns, the bitmap contains the new image.  
  
### Remarks  
  
### Example  
 The following example demonstrates how to construct an object of the `CMFCImageEditorDialog` class. This example is part of the [New Controls sample](../VS_visualcpp/Visual-C---Samples.md).  
  
 [!CODE [NVC_MFC_NewControls#8](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_NewControls#8)]  
[!CODE [NVC_MFC_NewControls#40](../CodeSnippet/VS_Snippets_Misc/NVC_MFC_NewControls#40)]  
  
## See Also  
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [Classes](../VS_visualcpp/MFC-Classes.md)   
 [CMFCToolBar Class](../VS_visualcpp/CMFCToolBar-Class.md)