---
title: "COleDataSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "COleDataSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "drag and drop [C++], MFC support"
  - "Clipboard [C++], OLE support"
  - "uniform data transfer"
  - "OLE [C++], uniform data transfer"
  - "Clipboard [C++], MFC support"
  - "OLE Clipboard [C++], support"
  - "IDataObject, MFC encapsulation"
  - "data transfer [C++], OLE"
  - "COleDataSource class"
  - "OLE data transfer [C++]"
  - "uniform data transfer, OLE"
ms.assetid: 02c8ee7d-8e10-4463-8613-bb2a0305ca69
caps.latest.revision: 23
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
# COleDataSource Class
Acts as a cache into which an application places the data that it will offer during data transfer operations, such as Clipboard or drag-and-drop operations.  
  
## Syntax  
  
```  
class COleDataSource : public CCmdTarget  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleDataSource::COleDataSource](#coledatasource__coledatasource)|Constructs a `COleDataSource` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleDataSource::CacheData](#coledatasource__cachedata)|Offers data in a specified format using a **STGMEDIUM** structure.|  
|[COleDataSource::CacheGlobalData](#coledatasource__cacheglobaldata)|Offers data in a specified format using an `HGLOBAL`.|  
|[COleDataSource::DelayRenderData](#coledatasource__delayrenderdata)|Offers data in a specified format using delayed rendering.|  
|[COleDataSource::DelayRenderFileData](#coledatasource__delayrenderfiledata)|Offers data in a specified format in a `CFile` pointer.|  
|[COleDataSource::DelaySetData](#coledatasource__delaysetdata)|Called for every format that is supported in `OnSetData`.|  
|[COleDataSource::DoDragDrop](#coledatasource__dodragdrop)|Performs drag-and-drop operations with a data source.|  
|[COleDataSource::Empty](#coledatasource__empty)|Empties the `COleDataSource` object of data.|  
|[COleDataSource::FlushClipboard](#coledatasource__flushclipboard)|Renders all data to the Clipboard.|  
|[COleDataSource::GetClipboardOwner](#coledatasource__getclipboardowner)|Verifies that the data placed on the Clipboard is still there.|  
|[COleDataSource::OnRenderData](#coledatasource__onrenderdata)|Retrieves data as part of delayed rendering.|  
|[COleDataSource::OnRenderFileData](#coledatasource__onrenderfiledata)|Retrieves data into a `CFile` as part of delayed rendering.|  
|[COleDataSource::OnRenderGlobalData](#coledatasource__onrenderglobaldata)|Retrieves data into an `HGLOBAL` as part of delayed rendering.|  
|[COleDataSource::OnSetData](#coledatasource__onsetdata)|Called to replace the data in the `COleDataSource` object.|  
|[COleDataSource::SetClipboard](#coledatasource__setclipboard)|Places a `COleDataSource` object on the Clipboard.|  
  
## Remarks  
 You can create OLE data sources directly. Alternately, the [COleClientItem](../../mfc/reference/coleclientitem-class.md) and [COleServerItem](../../mfc/reference/coleserveritem-class.md) classes create OLE data sources in response to their `CopyToClipboard` and `DoDragDrop` member functions. See [COleServerItem::CopyToClipboard](../../mfc/reference/coleserveritem-class.md#coleserveritem__copytoclipboard) for a brief description. Override the `OnGetClipboardData` member function of your client item or server item class to add additional Clipboard formats to the data in the OLE data source created for the `CopyToClipboard` or `DoDragDrop` member function.  
  
 Whenever you want to prepare data for a transfer, you should create an object of this class and fill it with your data using the most appropriate method for your data. The way it is inserted into a data source is directly affected by whether the data is supplied immediately (immediate rendering) or on demand (delayed rendering). For every Clipboard format in which you are providing data by passing the Clipboard format to be used (and an optional [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure), call [DelayRenderData](#coledatasource__delayrenderdata).  
  
 For more information about data sources and data transfer, see the article [Data Objects and Data Sources (OLE)](../../mfc/data-objects-and-data-sources-ole.md). In addition, the article [Clipboard Topics](../../mfc/clipboard.md) describes the OLE Clipboard mechanism.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `COleDataSource`  
  
## Requirements  
 **Header:** afxole.h  
  
##  <a name="coledatasource__cachedata"></a>  COleDataSource::CacheData  
 Call this function to specify a format in which data is offered during data transfer operations.  
  
```  
void CacheData(
    CLIPFORMAT cfFormat,  
    LPSTGMEDIUM lpStgMedium,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### Parameters  
 `cfFormat`  
 The Clipboard format in which the data is to be offered. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function.  
  
 `lpStgMedium`  
 Points to a [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) structure containing the data in the format specified.  
  
 `lpFormatEtc`  
 Points to a [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure describing the format in which the data is to be offered. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by `cfFormat`. If it is **NULL**, default values are used for the other fields in the **FORMATETC** structure.  
  
### Remarks  
 You must supply the data, because this function provides it by using immediate rendering. The data is cached until needed.  
  
 Supply the data using a [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) structure. You can also use the `CacheGlobalData` member function if the amount of data you are supplying is small enough to be transferred efficiently using an `HGLOBAL`.  
  
 After the call to `CacheData` the **ptd** member of `lpFormatEtc` and the contents of `lpStgMedium` are owned by the data object, not by the caller.  
  
 To use delayed rendering, call the [DelayRenderData](#coledatasource__delayrenderdata) or [DelayRenderFileData](#coledatasource__delayrenderfiledata) member function. For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 For more information, see the [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) and [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structures in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
 For more information, see [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledatasource__cacheglobaldata"></a>  COleDataSource::CacheGlobalData  
 Call this function to specify a format in which data is offered during data transfer operations.  
  
```  
void CacheGlobalData(
    CLIPFORMAT cfFormat,  
    HGLOBAL hGlobal,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### Parameters  
 `cfFormat`  
 The Clipboard format in which the data is to be offered. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function.  
  
 *hGlobal*  
 Handle to the global memory block containing the data in the format specified.  
  
 `lpFormatEtc`  
 Points to a [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure describing the format in which the data is to be offered. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by `cfFormat`. If it is **NULL**, default values are used for the other fields in the **FORMATETC** structure.  
  
### Remarks  
 This function provides the data using immediate rendering, so you must supply the data when calling the function; the data is cached until needed. Use the `CacheData` member function if you are supplying a large amount of data or if you require a structured storage medium.  
  
 To use delayed rendering, call the [DelayRenderData](#coledatasource__delayrenderdata) or [DelayRenderFileData](#coledatasource__delayrenderfiledata) member function. For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 For more information, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
 For more information, see [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledatasource__coledatasource"></a>  COleDataSource::COleDataSource  
 Constructs a `COleDataSource` object.  
  
```  
COleDataSource();
```  
  
##  <a name="coledatasource__delayrenderdata"></a>  COleDataSource::DelayRenderData  
 Call this function to specify a format in which data is offered during data transfer operations.  
  
```  
void DelayRenderData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### Parameters  
 `cfFormat`  
 The Clipboard format in which the data is to be offered. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function.  
  
 `lpFormatEtc`  
 Points to a [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure describing the format in which the data is to be offered. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by `cfFormat`. If it is **NULL**, default values are used for the other fields in the **FORMATETC** structure.  
  
### Remarks  
 This function provides the data using delayed rendering, so the data is not supplied immediately. The [OnRenderData](#coledatasource__onrenderdata) or [OnRenderGlobalData](#coledatasource__onrenderglobaldata) member function is called to request the data.  
  
 Use this function if you are not going to supply your data through a `CFile` object. If you are going to supply the data through a `CFile` object, call the [DelayRenderFileData](#coledatasource__delayrenderfiledata) member function. For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 To use immediate rendering, call the [CacheData](#coledatasource__cachedata) or [CacheGlobalData](#coledatasource__cacheglobaldata) member function.  
  
 For more information, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
 For more information, see [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledatasource__delayrenderfiledata"></a>  COleDataSource::DelayRenderFileData  
 Call this function to specify a format in which data is offered during data transfer operations.  
  
```  
void DelayRenderFileData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### Parameters  
 `cfFormat`  
 The Clipboard format in which the data is to be offered. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function.  
  
 `lpFormatEtc`  
 Points to a [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure describing the format in which the data is to be offered. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by `cfFormat`. If it is **NULL**, default values are used for the other fields in the **FORMATETC** structure.  
  
### Remarks  
 This function provides the data using delayed rendering, so the data is not supplied immediately. The [OnRenderFileData](#coledatasource__onrenderfiledata) member function is called to request the data.  
  
 Use this function if you are going to use a `CFile` object to supply the data. If you are not going to use a `CFile` object, call the [DelayRenderData](#coledatasource__delayrenderdata) member function. For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 To use immediate rendering, call the [CacheData](#coledatasource__cachedata) or [CacheGlobalData](#coledatasource__cacheglobaldata) member function.  
  
 For more information, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
 For more information, see [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledatasource__delaysetdata"></a>  COleDataSource::DelaySetData  
 Call this function to support changing the contents of the data source.  
  
```  
void DelaySetData(
    CLIPFORMAT cfFormat,  
    LPFORMATETC lpFormatEtc = NULL);
```  
  
### Parameters  
 `cfFormat`  
 The Clipboard format in which the data is to be placed. This parameter can be one of the predefined Clipboard formats or the value returned by the native Windows [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) function.  
  
 `lpFormatEtc`  
 Points to a [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure describing the format in which the data is to be replaced. Provide a value for this parameter if you want to specify additional format information beyond the Clipboard format specified by `cfFormat`. If it is **NULL**, default values are used for the other fields in the **FORMATETC** structure.  
  
### Remarks  
 [OnSetData](#coledatasource__onsetdata) will be called by the framework when this happens. This is only used when the framework returns the data source from [COleServerItem::GetDataSource](../../mfc/reference/coleserveritem-class.md#coleserveritem__getdatasource). If `DelaySetData` is not called, your `OnSetData` function will never be called. `DelaySetData` should be called for each Clipboard or **FORMATETC** format you support.  
  
 For more information, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
 For more information, see [RegisterClipboardFormat](http://msdn.microsoft.com/library/windows/desktop/ms649049) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledatasource__dodragdrop"></a>  COleDataSource::DoDragDrop  
 Call the `DoDragDrop` member function to perform a drag-and-drop operation for this data source, typically in an [CWnd::OnLButtonDown](../../mfc/reference/cwnd-class.md#cwnd__onlbuttondown) handler.  
  
```  
DROPEFFECT DoDragDrop(
    DWORD dwEffects = DROPEFFECT_COPY|DROPEFFECT_MOVE|DROPEFFECT_LINK,  
    LPCRECT lpRectStartDrag = NULL,  
    COleDropSource* pDropSource = NULL);
```  
  
### Parameters  
 `dwEffects`  
 Drag-and-drop operations that are allowed on this data source. Can be one or more of the following:  
  
- `DROPEFFECT_COPY` A copy operation could be performed.  
  
- `DROPEFFECT_MOVE` A move operation could be performed.  
  
- `DROPEFFECT_LINK` A link from the dropped data to the original data could be established.  
  
- `DROPEFFECT_SCROLL` Indicates that a drag scroll operation could occur.  
  
 `lpRectStartDrag`  
 Pointer to the rectangle that defines where the drag actually starts. For more information, see the following Remarks section.  
  
 *pDropSource*  
 Points to a drop source. If **NULL** then a default implementation of [COleDropSource](../../mfc/reference/coledropsource-class.md) will be used.  
  
### Return Value  
 Drop effect generated by the drag-and-drop operation; otherwise `DROPEFFECT_NONE` if the operation never begins because the user released the mouse button before leaving the supplied rectangle.  
  
### Remarks  
 The drag-and-drop operation does not start immediately. It waits until the mouse cursor leaves the rectangle specified by `lpRectStartDrag` or until a specified number of milliseconds have passed. If `lpRectStartDrag` is **NULL**, the size of the rectangle is one pixel.  
  
 The delay time is specified by a registry key setting. You can change the delay time by calling [CWinApp::WriteProfileString](../../mfc/reference/cwinapp-class.md#cwinapp__writeprofilestring) or [CWinApp::WriteProfileInt](../../mfc/reference/cwinapp-class.md#cwinapp__writeprofileint). If you do not specify the delay time, a default value of 200 milliseconds is used. Drag delay time is stored as follows:  
  
-   Windows NT   Drag delay time is stored in HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\NT\CurrentVersion\IniFileMapping\win.ini\Windows\DragDelay.  
  
-   Windows 3.x   Drag delay time is stored in the WIN.INI file, under the [Windows} section.  
  
-   Windows 95/98   Drag delay time is stored in a cached version of WIN.INI.  
  
 For more information about how drag delay information is stored in either the registry or the .INI file, see [WriteProfileString](http://msdn.microsoft.com/library/windows/desktop/ms725504) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 For more information, see the article [Drag and Drop: Implementing a Drop Source](../../mfc/drag-and-drop-implementing-a-drop-source.md).  
  
##  <a name="coledatasource__empty"></a>  COleDataSource::Empty  
 Call this function to empty the `COleDataSource` object of data.  
  
```  
void Empty();
```  
  
### Remarks  
 Both cached and delay render formats are emptied so they can be reused.  
  
 For more information, see [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="coledatasource__flushclipboard"></a>  COleDataSource::FlushClipboard  
 Renders data that is on the Clipboard, and then lets you paste data from the Clipboard after your application shuts down.  
  
```  
static void PASCAL FlushClipboard();
```  
  
### Remarks  
 Use [SetClipboard](#coledatasource__setclipboard) to put data on the Clipboard.  
  
##  <a name="coledatasource__getclipboardowner"></a>  COleDataSource::GetClipboardOwner  
 Determines whether the data on the Clipboard has changed since [SetClipboard](#coledatasource__setclipboard) was last called and, if so, identifies the current owner.  
  
```  
static COleDataSource* PASCAL GetClipboardOwner();
```  
  
### Return Value  
 The data source currently on the Clipboard, or **NULL** if there is nothing on the Clipboard or if the Clipboard is not owned by the calling application.  
  
##  <a name="coledatasource__onrenderdata"></a>  COleDataSource::OnRenderData  
 Called by the framework to retrieve data in the specified format.  
  
```  
virtual BOOL OnRenderData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium);
```  
  
### Parameters  
 `lpFormatEtc`  
 Points to the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure specifying the format in which information is requested.  
  
 `lpStgMedium`  
 Points to a [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) structure in which the data is to be returned.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The specified format is one previously placed in the `COleDataSource` object using the [DelayRenderData](#coledatasource__delayrenderdata) or [DelayRenderFileData](#coledatasource__delayrenderfiledata) member function for delayed rendering. The default implementation of this function will call [OnRenderFileData](#coledatasource__onrenderfiledata) or [OnRenderGlobalData](#coledatasource__onrenderglobaldata) if the supplied storage medium is either a file or memory, respectively. If neither of these formats are supplied, then the default implementation will return 0 and do nothing. For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 If `lpStgMedium`-> *tymed* is **TYMED_NULL**, the **STGMEDIUM** should be allocated and filled as specified by *lpFormatEtc->tymed*. If it is not **TYMED_NULL**, the **STGMEDIUM** should be filled in place with the data.  
  
 This is an advanced overridable. Override this function to supply your data in the requested format and medium. Depending on your data, you may want to override one of the other versions of this function instead. If your data is small and fixed in size, override `OnRenderGlobalData`. If your data is in a file, or is of variable size, override `OnRenderFileData`.  
  
 For more information, see the [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) and [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structures, the [TYMED](http://msdn.microsoft.com/library/windows/desktop/ms691227) enumeration type, and [IDataObject::GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
##  <a name="coledatasource__onrenderfiledata"></a>  COleDataSource::OnRenderFileData  
 Called by the framework to retrieve data in the specified format when the specified storage medium is a file.  
  
```  
virtual BOOL OnRenderFileData(
    LPFORMATETC lpFormatEtc,  
    CFile* pFile);
```  
  
### Parameters  
 `lpFormatEtc`  
 Points to the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure specifying the format in which information is requested.  
  
 `pFile`  
 Points to a [CFile](../../mfc/reference/cfile-class.md) object in which the data is to be rendered.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The specified format is one previously placed in the `COleDataSource` object using the [DelayRenderData](#coledatasource__delayrenderdata) member function for delayed rendering. The default implementation of this function simply returns **FALSE**.  
  
 This is an advanced overridable. Override this function to supply your data in the requested format and medium. Depending on your data, you might want to override one of the other versions of this function instead. If you want to handle multiple storage media, override [OnRenderData](#coledatasource__onrenderdata). If your data is in a file, or is of variable size, override `OnRenderFileData`. For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 For more information, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure and [IDataObject::GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
##  <a name="coledatasource__onrenderglobaldata"></a>  COleDataSource::OnRenderGlobalData  
 Called by the framework to retrieve data in the specified format when the specified storage medium is global memory.  
  
```  
virtual BOOL OnRenderGlobalData(
    LPFORMATETC lpFormatEtc,  
    HGLOBAL* phGlobal);
```  
  
### Parameters  
 `lpFormatEtc`  
 Points to the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure specifying the format in which information is requested.  
  
 `phGlobal`  
 Points to a handle to global memory in which the data is to be returned. If one has not yet been allocated, this parameter can be **NULL**.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The specified format is one previously placed in the `COleDataSource` object using the [DelayRenderData](#coledatasource__delayrenderdata) member function for delayed rendering. The default implementation of this function simply returns **FALSE**.  
  
 If `phGlobal` is **NULL**, then a new `HGLOBAL` should be allocated and returned in `phGlobal`. Otherwise, the `HGLOBAL` specified by `phGlobal` should be filled with the data. The amount of data placed in the `HGLOBAL` must not exceed the current size of the memory block. Also, the block cannot be reallocated to a larger size.  
  
 This is an advanced overridable. Override this function to supply your data in the requested format and medium. Depending on your data, you may want to override one of the other versions of this function instead. If you want to handle multiple storage media, override [OnRenderData](#coledatasource__onrenderdata). If your data is in a file, or is of variable size, override [OnRenderFileData](#coledatasource__onrenderfiledata). For more information on delayed rendering as handled by MFC, see the article [Data Objects and Data Sources: Manipulation](../../mfc/data-objects-and-data-sources-manipulation.md).  
  
 For more information, see the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure and [IDataObject::GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
##  <a name="coledatasource__onsetdata"></a>  COleDataSource::OnSetData  
 Called by the framework to set or replace the data in the `COleDataSource` object in the specified format.  
  
```  
virtual BOOL OnSetData(
    LPFORMATETC lpFormatEtc,  
    LPSTGMEDIUM lpStgMedium,  
    BOOL bRelease);
```  
  
### Parameters  
 `lpFormatEtc`  
 Points to the [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structure specifying the format in which data is being replaced.  
  
 `lpStgMedium`  
 Points to the [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) structure containing the data that will replace the current contents of the `COleDataSource` object.  
  
 `bRelease`  
 Indicates who has ownership of the storage medium after completing the function call. The caller decides who is responsible for releasing the resources allocated on behalf of the storage medium. The caller does this by setting `bRelease`. If `bRelease` is nonzero, the data source takes ownership, freeing the medium when it has finished using it. When `bRelease` is 0, the caller retains ownership and the data source can use the storage medium only for the duration of the call.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The data source does not take ownership of the data until it has successfully obtained it. That is, it does not take ownership if `OnSetData` returns 0. If the data source takes ownership, it frees the storage medium by calling the [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) function.  
  
 The default implementation does nothing. Override this function to replace the data in the specified format. This is an advanced overridable.  
  
 For more information, see the [STGMEDIUM](http://msdn.microsoft.com/library/windows/desktop/ms683812) and [FORMATETC](http://msdn.microsoft.com/library/windows/desktop/ms682177) structures and the [ReleaseStgMedium](http://msdn.microsoft.com/library/windows/desktop/ms693491) and [IDataObject::GetData](http://msdn.microsoft.com/library/windows/desktop/ms678431) functions in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]*.*  
  
##  <a name="coledatasource__setclipboard"></a>  COleDataSource::SetClipboard  
 Puts the data contained in the `COleDataSource` object on the Clipboard after calling one of the following functions: [CacheData](#coledatasource__cachedata), [CacheGlobalData](#coledatasource__cacheglobaldata), [DelayRenderData](#coledatasource__delayrenderdata), or [DelayRenderFileData](#coledatasource__delayrenderfiledata).  
  
```  
void SetClipboard();
```  
  
## See Also  
 [MFC Sample HIERSVR](../../visual-cpp-samples.md)   
 [MFC Sample OCLIENT](../../visual-cpp-samples.md)   
 [CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDataObject Class](../../mfc/reference/coledataobject-class.md)
