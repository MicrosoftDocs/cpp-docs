---
title: "COleUpdateDialog Class"
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
ms.assetid: 699ca980-52b1-4cf8-9ab1-ac6767ad5b0e
caps.latest.revision: 18
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
# COleUpdateDialog Class
Used for a special case of the OLE Edit Links dialog box, which should be used when you need to update only existing linked or embedded objects in a document.  
  
## Syntax  
  
```  
class COleUpdateDialog : public COleLinksDialog  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleUpdateDialog::COleUpdateDialog](#coleupdatedialog__coleupdatedialog)|Constructs a `COleUpdateDialog` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleUpdateDialog::DoModal](#coleupdatedialog__domodal)|Displays the **Edit Links** dialog box in an update mode.|  
  
## Remarks  
 For more information regarding OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../VS_visualcpp/Dialog-Boxes-in-OLE.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 [CCmdTarget](../VS_visualcpp/CCmdTarget-Class.md)  
  
 [CWnd](../VS_visualcpp/CWnd-Class.md)  
  
 [CDialog](../VS_visualcpp/CDialog-Class.md)  
  
 [CCommonDialog](../VS_visualcpp/CCommonDialog-Class.md)  
  
 [COleDialog](../VS_visualcpp/COleDialog-Class.md)  
  
 [COleLinksDialog](../VS_visualcpp/COleLinksDialog-Class.md)  
  
 `COleUpdateDialog`  
  
## Requirements  
 **Header:** afxodlgs.h  
  
##  <a name="coleupdatedialog__coleupdatedialog"></a>  COleUpdateDialog::COleUpdateDialog  
 Constructs a `COleUpdateDialog` object.  
  
```  
explicit COleUpdateDialog(  
    COleDocument* pDoc,  
    BOOL bUpdateLinks = TRUE,  
    BOOL bUpdateEmbeddings = FALSE,  
    CWnd* pParentWnd = NULL  );  
```  
  
### Parameters  
 `pDoc`  
 Points to the document containing the links that may need updating.  
  
 *bUpdateLinks*  
 Flag that determines whether linked objects are to be updated.  
  
 *bUpdateEmbeddings*  
 Flag that determines whether embedded objects are to be updated.  
  
 `pParentWnd`  
 Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is **NULL**, the parent window of the dialog box will be set to the main application window.  
  
### Remarks  
 This function constructs only a `COleUpdateDialog` object. To display the dialog box, call [DoModal](../VS_visualcpp/COleLinksDialog-Class.md#colelinksdialog__domodal). This class should be used instead of `COleLinksDialog` when you want to update only existing linked or embedded items.  
  
##  <a name="coleupdatedialog__domodal"></a>  COleUpdateDialog::DoModal  
 Displays the Edit Links dialog box in update mode.  
  
```  
virtual INT_PTR DoModal();  
```  
  
### Return Value  
 Completion status for the dialog box. One of the following values:  
  
-   **IDOK** if the dialog box returned successfully.  
  
-   **IDCANCEL** if none of the linked or embedded items in the current document need updating.  
  
-   **IDABORT** if an error occurred. If **IDABORT** is returned, call the [COleDialog::GetLastError](../VS_visualcpp/COleDialog-Class.md#coledialog__getlasterror) member function to get more information about the type of error that occurred. For a listing of possible errors, see the                                 [OleUIEditLinks](http://msdn.microsoft.com/library/windows/desktop/ms679703) function in the Windows SDK.  
  
### Remarks  
 All links and/or embeddings are updated unless the user selects the Cancel button.  
  
## See Also  
 [MFC Sample OCLIENT](../VS_visualcpp/Visual-C---Samples.md)   
 [COleLinksDialog Class](../VS_visualcpp/COleLinksDialog-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [COleLinksDialog Class](../VS_visualcpp/COleLinksDialog-Class.md)