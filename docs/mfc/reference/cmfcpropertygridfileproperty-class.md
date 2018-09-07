---
title: "CMFCPropertyGridFileProperty Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CMFCPropertyGridFileProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty", "AFXPROPERTYGRIDCTRL/CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty"]
dev_langs: ["C++"]
helpviewer_keywords: ["CMFCPropertyGridFileProperty [MFC], CMFCPropertyGridFileProperty"]
ms.assetid: 2bb8b8b4-47fc-4798-bd5e-dc8ea0b4cd9d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CMFCPropertyGridFileProperty Class
The `CMFCPropertyGridFileProperty` class supports a property list control item that opens a file selection dialog box.  
  
## Syntax  
  
```  
class CMFCPropertyGridFileProperty : public CMFCPropertyGridProperty  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty](#cmfcpropertygridfileproperty)|Constructs a `CMFCPropertyGridFileProperty` object.|  
|`CMFCPropertyGridFileProperty::~CMFCPropertyGridFileProperty`|Destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCPropertyGridFileProperty::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|`CMFCPropertyGridFileProperty::OnClickButton`|(Overrides [CMFCPropertyGridProperty::OnClickButton](../../mfc/reference/cmfcpropertygridproperty-class.md#onclickbutton).)|  
  
### Remarks  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCPropertyGridProperty](../../mfc/reference/cmfcpropertygridproperty-class.md)  
  
 [CMFCPropertyGridFileProperty](../../mfc/reference/cmfcpropertygridfileproperty-class.md)  
  
## Requirements  
 **Header:** afxpropertygridctrl.h  
  
##  <a name="cmfcpropertygridfileproperty"></a>  CMFCPropertyGridFileProperty::CMFCPropertyGridFileProperty  
 Constructs a `CMFCPropertyGridFileProperty` object.  
  
```  
CMFCPropertyGridFileProperty(
    const CString& strName,  
    BOOL bOpenFileDialog,  
    const CString& strFileName,  
    LPCTSTR lpszDefExt=NULL,  
    DWORD dwFlags=OFN_HIDEREADONLY|OFN_OVERWRITEPROMPT,  
    LPCTSTR lpszFilter=NULL,  
    LPCTSTR lpszDescr=NULL,  
    DWORD_PTR dwData=0);
```  
  
### Parameters  
 [in] *strName*  
 The property name.  
  
 [in] *bOpenFileDialog*  
 TRUE to open an **Open File** dialog box; FALSE to open a **Save File** dialog box.  
  
 [in] *strFileName*  
 The initial file name.  
  
 [in] *lpszDefExt*  
 A string of one or more file name extensions. The default value is NULL.  
  
 [in] *dwFlags*  
 Dialog box flags. The default value is a bitwise combination (OR) of OFN_HIDEREADONLY and OFN_OVERWRITEPROMPT.  
  
 [in] *lpszFilter*  
 A string of one or more file filters. The default value is NULL.  
  
 [in] *lpszDescr*  
 The property item description. The default value is NULL.  
  
 [in] *dwData*  
 Application-specific data that is associated with the property item. For example, a 32-bit integer or a pointer to other data. The default value is 0.  
  
### Return Value  
  
### Remarks  
 For a full list of available flags, see [OPENFILENAME structure](/windows/desktop/api/commdlg/ns-commdlg-tagofna).  
  
### Example  
 The following example demonstrates how to create an object using the constructor of the `CMFCPropertyGridFileProperty` class. This example is part of the [Visual Studio Demo sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_VisualStudioDemo#22](../../mfc/codesnippet/cpp/cmfcpropertygridfileproperty-class_1.cpp)]  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md)   
 [CMFCPropertyGridProperty Class](../../mfc/reference/cmfcpropertygridproperty-class.md)
