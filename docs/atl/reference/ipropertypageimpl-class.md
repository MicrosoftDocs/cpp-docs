---
title: "IPropertyPageImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["IPropertyPageImpl", "ATLCTL/ATL::IPropertyPageImpl", "ATLCTL/ATL::IPropertyPageImpl::IPropertyPageImpl", "ATLCTL/ATL::IPropertyPageImpl::Activate", "ATLCTL/ATL::IPropertyPageImpl::Apply", "ATLCTL/ATL::IPropertyPageImpl::Deactivate", "ATLCTL/ATL::IPropertyPageImpl::GetPageInfo", "ATLCTL/ATL::IPropertyPageImpl::Help", "ATLCTL/ATL::IPropertyPageImpl::IsPageDirty", "ATLCTL/ATL::IPropertyPageImpl::Move", "ATLCTL/ATL::IPropertyPageImpl::SetDirty", "ATLCTL/ATL::IPropertyPageImpl::SetObjects", "ATLCTL/ATL::IPropertyPageImpl::SetPageSite", "ATLCTL/ATL::IPropertyPageImpl::Show", "ATLCTL/ATL::IPropertyPageImpl::TranslateAccelerator", "ATLCTL/ATL::IPropertyPageImpl::m_bDirty", "ATLCTL/ATL::IPropertyPageImpl::m_dwDocString", "ATLCTL/ATL::IPropertyPageImpl::m_dwHelpContext", "ATLCTL/ATL::IPropertyPageImpl::m_dwHelpFile", "ATLCTL/ATL::IPropertyPageImpl::m_dwTitle", "ATLCTL/ATL::IPropertyPageImpl::m_nObjects", "ATLCTL/ATL::IPropertyPageImpl::m_pPageSite", "ATLCTL/ATL::IPropertyPageImpl::m_ppUnk", "ATLCTL/ATL::IPropertyPageImpl::m_size"]
dev_langs: ["C++"]
helpviewer_keywords: ["property pages", "IPropertyPage ATL implementation", "IPropertyPageImpl class"]
ms.assetid: f9b7c8b1-7a04-4eab-aa63-63efddb740fa
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IPropertyPageImpl Class
This class implements `IUnknown` and provides a default implementation of the [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) interface.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<class T>  
class IPropertyPageImpl
```  
  
#### Parameters  
 *T*  
 Your class, derived from `IPropertyPageImpl`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[IPropertyPageImpl::IPropertyPageImpl](#ipropertypageimpl)|Constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[IPropertyPageImpl::Activate](#activate)|Creates the dialog box window for the property page.|  
|[IPropertyPageImpl::Apply](#apply)|Applies current property page values to the underlying objects specified through `SetObjects`. The ATL implementation returns S_OK.|  
|[IPropertyPageImpl::Deactivate](#deactivate)|Destroys the window created with `Activate`.|  
|[IPropertyPageImpl::GetPageInfo](#getpageinfo)|Retrieves information about the property page.|  
|[IPropertyPageImpl::Help](#help)|Invokes Windows help for the property page.|  
|[IPropertyPageImpl::IsPageDirty](#ispagedirty)|Indicates whether the property page has changed since it was activated.|  
|[IPropertyPageImpl::Move](#move)|Positions and resizes the property page dialog box.|  
|[IPropertyPageImpl::SetDirty](#setdirty)|Flags the property page's state as changed or unchanged.|  
|[IPropertyPageImpl::SetObjects](#setobjects)|Provides an array of `IUnknown` pointers for the objects associated with the property page. These objects receive the current property page values through a call to `Apply`.|  
|[IPropertyPageImpl::SetPageSite](#setpagesite)|Provides the property page with an `IPropertyPageSite` pointer, through which the property page communicates with the property frame.|  
|[IPropertyPageImpl::Show](#show)|Makes the property page dialog box visible or invisible.|  
|[IPropertyPageImpl::TranslateAccelerator](#translateaccelerator)|Processes a specified keystroke.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[IPropertyPageImpl::m_bDirty](#m_bdirty)|Specifies whether the property page's state has changed.|  
|[IPropertyPageImpl::m_dwDocString](#m_dwdocstring)|Stores the resource identifier associated with the text string describing the property page.|  
|[IPropertyPageImpl::m_dwHelpContext](#m_dwhelpcontext)|Stores the context identifier for the help topic associated with the property page.|  
|[IPropertyPageImpl::m_dwHelpFile](#m_dwhelpfile)|Stores the resource identifier associated with the name of the help file describing the property page.|  
|[IPropertyPageImpl::m_dwTitle](#m_dwtitle)|Stores the resource identifier associated with the text string that appears in the tab for the property page.|  
|[IPropertyPageImpl::m_nObjects](#m_nobjects)|Stores the number of objects associated with the property page.|  
|[IPropertyPageImpl::m_pPageSite](#m_ppagesite)|Points to the `IPropertyPageSite` interface through which the property page communicates with the property frame.|  
|[IPropertyPageImpl::m_ppUnk](#m_ppunk)|Points to an array of `IUnknown` pointers to the objects associated with the property page.|  
|[IPropertyPageImpl::m_size](#m_size)|Stores the height and width of the property page's dialog box, in pixels.|  
  
## Remarks  
 The [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) interface allows an object to manage a particular property page within a property sheet. Class `IPropertyPageImpl` provides a default implementation of this interface and implements `IUnknown` by sending information to the dump device in debug builds.  
  
 **Related Articles** [ATL Tutorial](../../atl/active-template-library-atl-tutorial.md), [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)  
  
## Inheritance Hierarchy  
 `IPropertyPage`  
  
 `IPropertyPageImpl`  
  
## Requirements  
 **Header:** atlctl.h  
  
##  <a name="activate"></a>  IPropertyPageImpl::Activate  
 Creates the dialog box window for the property page.  
  
```
HRESULT Activate(  
    HWND hWndParent,
    LPCRECT pRect,
    BOOL bModal);
```  
  
### Remarks  
 By default, the dialog box is always modeless, regardless of the value of the *bModal* parameter.  
  
 See [IPropertyPage::Activate](http://msdn.microsoft.com/library/windows/desktop/ms682250) in the Windows SDK.  
  
##  <a name="apply"></a>  IPropertyPageImpl::Apply  
 Applies current property page values to the underlying objects specified through `SetObjects`.  
  
```
HRESULT Apply();
```  
  
### Return Value  
 Returns S_OK.  
  
### Remarks  
 See [IPropertyPage::Apply](http://msdn.microsoft.com/library/windows/desktop/ms691284) in the Windows SDK.  
  
##  <a name="deactivate"></a>  IPropertyPageImpl::Deactivate  
 Destroys the dialog box window created with [Activate](#activate).  
  
```
HRESULT Deactivate();
```  
  
### Remarks  
 See [IPropertyPage::Deactivate](http://msdn.microsoft.com/library/windows/desktop/ms682504) in the Windows SDK.  
  
##  <a name="getpageinfo"></a>  IPropertyPageImpl::GetPageInfo  
 Fills the *pPageInfo* structure with information contained in the data members.  
  
```
HRESULT GetPageInfo(PROPPAGEINFO* pPageInfo);
```  
  
### Remarks  
 `GetPageInfo` loads the string resources associated with [m_dwDocString](#m_dwdocstring), [m_dwHelpFile](#m_dwhelpfile), and [m_dwTitle](#m_dwtitle).  
  
 See [IPropertyPage::GetPageInfo](http://msdn.microsoft.com/library/windows/desktop/ms680714) in the Windows SDK.  
  
##  <a name="help"></a>  IPropertyPageImpl::Help  
 Invokes Windows help for the property page.  
  
```
HRESULT Help(PROPPAGEINFO* pPageInfo);
```  
  
### Remarks  
 See [IPropertyPage::Help](http://msdn.microsoft.com/library/windows/desktop/ms691504) in the Windows SDK.  
  
##  <a name="ipropertypageimpl"></a>  IPropertyPageImpl::IPropertyPageImpl  
 The constructor.  
  
```
IPropertyPageImpl();
```  
  
### Remarks  
 Initializes all data members.  
  
##  <a name="ispagedirty"></a>  IPropertyPageImpl::IsPageDirty  
 Indicates whether the property page has changed since it was activated.  
  
```
HRESULT IsPageDirty(void);
```  
  
### Remarks  
 `IsPageDirty` returns S_OK if the page has changed since it was activated.  
  
##  <a name="m_bdirty"></a>  IPropertyPageImpl::m_bDirty  
 Specifies whether the property page's state has changed.  
  
```
BOOL m_bDirty;
```  
  
##  <a name="m_nobjects"></a>  IPropertyPageImpl::m_nObjects  
 Stores the number of objects associated with the property page.  
  
```
ULONG m_nObjects;
```  
  
##  <a name="m_dwhelpcontext"></a>  IPropertyPageImpl::m_dwHelpContext  
 Stores the context identifier for the help topic associated with the property page.  
  
```
DWORD m_dwHelpContext;
```  
  
##  <a name="m_dwdocstring"></a>  IPropertyPageImpl::m_dwDocString  
 Stores the resource identifier associated with the text string describing the property page.  
  
```
UINT m_dwDocString;
```  
  
##  <a name="m_dwhelpfile"></a>  IPropertyPageImpl::m_dwHelpFile  
 Stores the resource identifier associated with the name of the help file describing the property page.  
  
```
UINT m_dwHelpFile;
```  
  
##  <a name="m_dwtitle"></a>  IPropertyPageImpl::m_dwTitle  
 Stores the resource identifier associated with the text string that appears in the tab for the property page.  
  
```
UINT m_dwTitle;
```  
  
##  <a name="m_ppagesite"></a>  IPropertyPageImpl::m_pPageSite  
 Points to the [IPropertyPageSite](http://msdn.microsoft.com/library/windows/desktop/ms690583) interface through which the property page communicates with the property frame.  
  
```
IPropertyPageSite* m_pPageSite;
```  
  
##  <a name="m_ppunk"></a>  IPropertyPageImpl::m_ppUnk  
 Points to an array of `IUnknown` pointers to the objects associated with the property page.  
  
```
IUnknown** m_ppUnk;
```  
  
##  <a name="m_size"></a>  IPropertyPageImpl::m_size  
 Stores the height and width of the property page's dialog box, in pixels.  
  
```
SIZE m_size;
```  
  
##  <a name="move"></a>  IPropertyPageImpl::Move  
 Positions and resizes the property page dialog box.  
  
```
HRESULT Move(LPCRECT pRect);
```  
  
### Remarks  
 See [IPropertyPage::Move](http://msdn.microsoft.com/library/windows/desktop/ms680118) in the Windows SDK.  
  
##  <a name="setdirty"></a>  IPropertyPageImpl::SetDirty  
 Flags the property page's state as changed or unchanged, depending on the value of *bDirty*.  
  
```
void SetDirty(BOOL bDirty);
```  
  
### Parameters  
 *bDirty*  
 [in] If TRUE, the property page's state is marked as changed. Otherwise, it is marked as unchanged.  
  
### Remarks  
 If necessary, `SetDirty` informs the frame that the property page has changed.  
  
##  <a name="setobjects"></a>  IPropertyPageImpl::SetObjects  
 Provides an array of `IUnknown` pointers for the objects associated with the property page.  
  
```
HRESULT SetObjects(ULONG nObjects, IUnknown** ppUnk);
```  
  
### Remarks  
 See [IPropertyPage::SetObjects](http://msdn.microsoft.com/library/windows/desktop/ms678529) in the Windows SDK.  
  
##  <a name="setpagesite"></a>  IPropertyPageImpl::SetPageSite  
 Provides the property page with an [IPropertyPageSite](http://msdn.microsoft.com/library/windows/desktop/ms690583) pointer, through which the property page communicates with the property frame.  
  
```
HRESULT SetPageSite(IPropertyPageSite* pPageSite);
```  
  
### Remarks  
 See [IPropertyPage::SetPageSite](http://msdn.microsoft.com/library/windows/desktop/ms690413) in the Windows SDK.  
  
##  <a name="show"></a>  IPropertyPageImpl::Show  
 Makes the property page dialog box visible or invisible.  
  
```
HRESULT Show(UINT nCmdShow);
```  
  
### Remarks  
 See [IPropertyPage::Show](http://msdn.microsoft.com/library/windows/desktop/ms694467) in the Windows SDK.  
  
##  <a name="translateaccelerator"></a>  IPropertyPageImpl::TranslateAccelerator  
 Processes the keystroke specified in `pMsg`.  
  
```
HRESULT TranslateAccelerator(MSG* pMsg);
```  
  
### Remarks  
 See [IPropertyPage::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms686603) in the Windows SDK.  
  
## See Also  
 [IPropertyPage2Impl Class](../../atl/reference/ipropertypage2impl-class.md)   
 [IPerPropertyBrowsingImpl Class](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [ISpecifyPropertyPagesImpl Class](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
