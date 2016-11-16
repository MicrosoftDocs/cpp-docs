---
title: "CSnapInPropertyPageImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSnapInPropertyPageImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "snap-ins, property pages"
  - "snap-ins"
  - "property pages, ATL"
  - "CSnapInPropertyPageImpl class"
ms.assetid: 75bdce5a-985e-4166-bd44-493132e023c4
caps.latest.revision: 20
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
# CSnapInPropertyPageImpl Class
This class provides methods for implementing a snap-in property page object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
CSnapInPropertyPageImpl : public CDialogImplBase
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl__csnapinpropertypageimpl)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::CancelToClose](#csnapinpropertypageimpl__canceltoclose)|Changes the status of the **OK** and **Cancel** buttons.|  
|[CSnapInPropertyPageImpl::Create](#csnapinpropertypageimpl__create)|Initializes a newly created `CSnapInPropertyPageImpl` object.|  
|[CSnapInPropertyPageImpl::OnApply](#csnapinpropertypageimpl__onapply)|Called by the framework when the user clicks the **Apply Now** button while using a wizard-type property sheet.|  
|[CSnapInPropertyPageImpl::OnHelp](#csnapinpropertypageimpl__onhelp)|Called by the framework when the user clicks the **Help** button while using a wizard-type property sheet.|  
|[CSnapInPropertyPageImpl::OnKillActive](#csnapinpropertypageimpl__onkillactive)|Called by the framework when the current page is no longer active.|  
|[CSnapInPropertyPageImpl::OnQueryCancel](#csnapinpropertypageimpl__onquerycancel)|Called by the framework when the user clicks the **Cancel** button and before the cancel has taken place.|  
|[CSnapInPropertyPageImpl::OnReset](#csnapinpropertypageimpl__onreset)|Called by the framework when the user clicks the **Reset** button while using a wizard-type property sheet.|  
|[CSnapInPropertyPageImpl::OnSetActive](#csnapinpropertypageimpl__onsetactive)|Called by the framework when the current page becomes active.|  
|[CSnapInPropertyPageImpl::OnWizardBack](#csnapinpropertypageimpl__onwizardback)|Called by the framework when the user clicks the **Back** button while using a wizard-type property sheet.|  
|[CSnapInPropertyPageImpl::OnWizardFinish](#csnapinpropertypageimpl__onwizardfinish)|Called by the framework when the user clicks the **Finish** button while using a wizard-type property sheet.|  
|[CSnapInPropertyPageImpl::OnWizardNext](#csnapinpropertypageimpl__onwizardnext)|Called by the framework when the user clicks the `Next` button while using a wizard-type property sheet.|  
|[CSnapInPropertyPageImpl::QuerySiblings](#csnapinpropertypageimpl__querysiblings)|Forwards the current message to all pages of the property sheet.|  
|[CSnapInPropertyPageImpl::SetModified](#csnapinpropertypageimpl__setmodified)|Call to activate or deactivate the **Apply Now** button.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CSnapInPropertyPageImpl::m_psp](#csnapinpropertypageimpl__m_psp)|The Windows **PROPSHEETPAGE** structure used by the `CSnapInPropertyPageImpl` object.|  
  
## Remarks  
 `CSnapInPropertyPageImpl` provides a basic implementation for a snap-in property page object. The basic features of a snap-in property page are implemented using several different interfaces and map types.  
  
## Inheritance Hierarchy  
 `CDialogImplBase`  
  
 `CSnapInPropertyPageImpl`  
  
## Requirements  
 **Header:** atlsnap.h  
  
##  <a name="csnapinpropertypageimpl__canceltoclose"></a>  CSnapInPropertyPageImpl::CancelToClose  
 Call this function after an unrecoverable change has been made to the data in a page of a modal property sheet.  
  
```
void CancelToClose();
```  
  
### Remarks  
 This function will change the **OK** button to **Close** and disable the **Cancel** button. This change alerts the user that a change is permanent and the modifications cannot be cancelled.  
  
 The `CancelToClose` member function does nothing in a modeless property sheet, because a modeless property sheet does not have a **Cancel** button by default.  
  
##  <a name="csnapinpropertypageimpl__csnapinpropertypageimpl"></a>  CSnapInPropertyPageImpl::CSnapInPropertyPageImpl  
 Constructs a `CSnapInPropertyPageImpl` object.  
  
```
CSnapInPropertyPageImpl(LPCTSTR lpszTitle = NULL);
```  
  
### Parameters  
 `lpszTitle`  
 [in] The title of the property page.  
  
### Remarks  
 To initialize the underlying structure, call [CSnapInPropertyPageImpl::Create](#csnapinpropertypageimpl__create).  
  
##  <a name="csnapinpropertypageimpl__create"></a>  CSnapInPropertyPageImpl::Create  
 Call this function to initialize the underlying structure of the property page.  
  
```
HPROPSHEETPAGE Create();
```  
  
### Return Value  
 A handle to a **PROPSHEETPAGE** structure containing the attributes of the newly created property sheet.  
  
### Remarks  
 You should first call [CSnapInPropertyPageImpl::CSnapInPropertyPageImpl](#csnapinpropertypageimpl__csnapinpropertypageimpl) before calling this function.  
  
##  <a name="csnapinpropertypageimpl__m_psp"></a>  CSnapInPropertyPageImpl::m_psp  
 `m_psp` is a structure whose members store the characteristics of **PROPSHEETPAGE**.  
  
```
PROPSHEETPAGE m_psp;
```  
  
### Remarks  
 Use this structure to initialize the appearance of a property page after it is constructed.  
  
 For more information on this structure, including a listing of its members, see [PROPSHEETPAGE](http://msdn.microsoft.com/library/aa815151) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="csnapinpropertypageimpl__onapply"></a>  CSnapInPropertyPageImpl::OnApply  
 This member function is called when the user clicks the **OK** or the **Apply Now** button.  
  
```
BOOL OnApply();
```  
  
### Return Value  
 Nonzero if the changes are accepted; otherwise 0.  
  
### Remarks  
 Before `OnApply` can be called by the framework, you must have called `SetModified` and set its parameter to **TRUE**. This will activate the **Apply Now** button as soon as the user makes a change on the property page.  
  
 Override this member function to specify what action your program takes when the user clicks the **Apply Now** button. When overriding, the function should return **TRUE** to accept changes and **FALSE** to prevent changes from taking effect.  
  
 The default implementation of `OnApply` returns **TRUE**.  
  
##  <a name="csnapinpropertypageimpl__onhelp"></a>  CSnapInPropertyPageImpl::OnHelp  
 This member function is called when the user clicks the **Help** button for the property page.  
  
```
void OnHelp();
```  
  
### Remarks  
 Override this member function to display help for the property page.  
  
##  <a name="csnapinpropertypageimpl__onkillactive"></a>  CSnapInPropertyPageImpl::OnKillActive  
 This member function is called when the page is no longer the active page.  
  
```
BOOL OnKillActive();
```  
  
### Return Value  
 Nonzero if data was updated successfully; otherwise 0.  
  
### Remarks  
 Override this member function to perform special data validation tasks.  
  
##  <a name="csnapinpropertypageimpl__onquerycancel"></a>  CSnapInPropertyPageImpl::OnQueryCancel  
 This member function is called when the user clicks the **Cancel** button and before the cancel action has taken place.  
  
```
BOOL OnQueryCancel();
```  
  
### Return Value  
 Nonzero to allow the cancel operation; otherwise 0.  
  
### Remarks  
 Override this member function to specify an action the program takes when the user clicks the **Cancel** button.  
  
 The default implementation of `OnQueryCancel` returns **TRUE**.  
  
##  <a name="csnapinpropertypageimpl__onreset"></a>  CSnapInPropertyPageImpl::OnReset  
 This member function is called when the user clicks the **Cancel** button.  
  
```
void OnReset();
```  
  
### Remarks  
 When this function is called, changes to all property pages that were made by the user previously clicking the **Apply Now** button are discarded, and the property sheet retains focus.  
  
 Override this member function to specify what action the program takes when the user clicks the **Cancel** button.  
  
##  <a name="csnapinpropertypageimpl__onsetactive"></a>  CSnapInPropertyPageImpl::OnSetActive  
 This member function is called when the page is chosen by the user and becomes the active page.  
  
```
BOOL OnSetActive();
```  
  
### Return Value  
 Nonzero if the page was successfully set active; otherwise 0.  
  
### Remarks  
 Override this member function to perform tasks when a page is activated. Your override of this member function should call the default version before any other processing is done.  
  
 The default implementation returns **TRUE**.  
  
##  <a name="csnapinpropertypageimpl__onwizardback"></a>  CSnapInPropertyPageImpl::OnWizardBack  
 This member function is called when the user clicks the **Back** button in a wizard.  
  
```
BOOL OnWizardBack();
```  
  
### Return Value  
  
-   0 to automatically advance to the previous page.  
  
-   –1 to prevent the page from changing.  
  
 To jump to a page other than the next one, return the identifier of the dialog box to be displayed.  
  
### Remarks  
 Override this member function to specify some action the user must take when the **Back** button is clicked.  
  
##  <a name="csnapinpropertypageimpl__onwizardfinish"></a>  CSnapInPropertyPageImpl::OnWizardFinish  
 This member function is called when the user clicks the **Finish** button in a wizard.  
  
```
BOOL OnWizardFinish();
```  
  
### Return Value  
 Nonzero if the property sheet is destroyed when the wizard finishes; otherwise zero.  
  
### Remarks  
 Override this member function to specify some action the user must take when the **Finish** button is clicked.  
  
##  <a name="csnapinpropertypageimpl__onwizardnext"></a>  CSnapInPropertyPageImpl::OnWizardNext  
 This member function is called when the user clicks the `Next` button in a wizard.  
  
```
BOOL OnWizardNext();
```  
  
### Return Value  
  
-   0 to automatically advance to the next page.  
  
-   –1 to prevent the page from changing.  
  
 To jump to a page other than the next one, return the identifier of the dialog box to be displayed.  
  
### Remarks  
 Override this member function to specify some action the user must take when the `Next` button is clicked.  
  
##  <a name="csnapinpropertypageimpl__querysiblings"></a>  CSnapInPropertyPageImpl::QuerySiblings  
 Call this member function to forward a message to each page in the property sheet.  
  
```
LRESULT QuerySiblings(WPARAM wParam,  LPARAM lParam);
```  
  
### Parameters  
 `wParam`  
 [in] Specifies additional message-dependent information.  
  
 `lParam`  
 [in] Specifies additional message-dependent information.  
  
### Return Value  
 Nonzero if the message should not be forwarded to the next property page; otherwise zero.  
  
### Remarks  
 If a page returns a nonzero value, the property sheet does not send the message to subsequent pages.  
  
##  <a name="csnapinpropertypageimpl__setmodified"></a>  CSnapInPropertyPageImpl::SetModified  
 Call this member function to enable or disable the **Apply Now** button, based on whether the settings in the property page should be applied to the appropriate external object.  
  
```
void SetModified(BOOL bChanged = TRUE);
```  
  
### Parameters  
 `bChanged`  
 [in] **TRUE** to indicate that the property page settings have been modified since the last time they were applied; **FALSE** to indicate that the property page settings have been applied, or should be ignored.  
  
### Remarks  
 The property sheet keeps track of which pages are "dirty," that is, property pages for which you have called **SetModified( TRUE )**. The **Apply Now** button will always be enabled if you call **SetModified( TRUE )** for one of the pages. The **Apply Now** button will be disabled when you call **SetModified( FALSE )** for one of the pages, but only if none of the other pages is "dirty."  
  
## See Also  
 [Class Overview](../../atl/atl-class-overview.md)
