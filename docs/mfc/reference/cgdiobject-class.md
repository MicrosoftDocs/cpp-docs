---
title: "CGdiObject Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CGdiObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "brushes, base class for"
  - "fonts, base class for"
  - "regions, base class for"
  - "pens, base class for"
  - "palettes, base class for"
  - "CGdiObject class"
  - "GDI objects, base class for"
ms.assetid: 1cba3ba5-3d49-4e43-8293-209299f2f6f4
caps.latest.revision: 21
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
# CGdiObject Class
Provides a base class for various kinds of Windows graphics device interface (GDI) objects such as bitmaps, regions, brushes, pens, palettes, and fonts.  
  
## Syntax  
  
```  
class CGdiObject : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CGdiObject::CGdiObject](#cgdiobject__cgdiobject)|Constructs a `CGdiObject` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CGdiObject::Attach](#cgdiobject__attach)|Attaches a Windows GDI object to a `CGdiObject` object.|  
|[CGdiObject::CreateStockObject](#cgdiobject__createstockobject)|Retrieves a handle to one of the Windows predefined stock pens, brushes, or fonts.|  
|[CGdiObject::DeleteObject](#cgdiobject__deleteobject)|Deletes the Windows GDI object attached to the `CGdiObject` object from memory by freeing all system storage associated with the object.|  
|[CGdiObject::DeleteTempMap](#cgdiobject__deletetempmap)|Deletes any temporary `CGdiObject` objects created by `FromHandle`.|  
|[CGdiObject::Detach](#cgdiobject__detach)|Detaches a Windows GDI object from a `CGdiObject` object and returns a handle to the Windows GDI object.|  
|[CGdiObject::FromHandle](#cgdiobject__fromhandle)|Returns a pointer to a `CGdiObject` object given a handle to a Windows GDI object.|  
|[CGdiObject::GetObject](#cgdiobject__getobject)|Fills a buffer with data that describes the Windows GDI object attached to the `CGdiObject` object.|  
|[CGdiObject::GetObjectType](#cgdiobject__getobjecttype)|Retrieves the type of the GDI object.|  
|[CGdiObject::GetSafeHandle](#cgdiobject__getsafehandle)|Returns `m_hObject` unless `this` is `NULL`, in which case `NULL` is returned.|  
|[CGdiObject::UnrealizeObject](#cgdiobject__unrealizeobject)|Resets the origin of a brush or resets a logical palette.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CGdiObject::operator !=](#cgdiobject__operator__neq)|Determines if two GDI objects are logically not equal.|  
|[CGdiObject::operator ==](#cgdiobject__operator__eq_eq)|Determines if two GDI objects are logically equal.|  
|[CGdiObject::operator HGDIOBJ](#cgdiobject__operator_hgdiobj)|Retrieves a `HANDLE` to the attached Windows GDI object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CGdiObject::m_hObject](#cgdiobject__m_hobject)|A `HANDLE` containing the `HBITMAP`, `HPALETTE`, `HRGN`, `HBRUSH`, `HPEN`, or `HFONT` attached to this object.|  
  
## Remarks  
 You never create a `CGdiObject` directly. Rather, you create an object from one of its derived classes, such as `CPen` or `CBrush`.  
  
 For more information on `CGdiObject`, see [Graphic Objects](../../mfc/graphic-objects.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CGdiObject`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cgdiobject__attach"></a>  CGdiObject::Attach  
 Attaches a Windows GDI object to a `CGdiObject` object.  
  
```  
BOOL Attach(HGDIOBJ hObject);
```  
  
### Parameters  
 `hObject`  
 A `HANDLE` to a Windows GDI object (for example, `HPEN` or `HBRUSH`).  
  
### Return Value  
 Nonzero if attachment is successful; otherwise 0.  
  
##  <a name="cgdiobject__cgdiobject"></a>  CGdiObject::CGdiObject  
 Constructs a `CGdiObject` object.  
  
```  
CGdiObject();
```  
  
### Remarks  
 You never create a `CGdiObject` directly. Rather, you create an object from one of its derived classes, such as `CPen` or **Cbrush**.  
  
##  <a name="cgdiobject__createstockobject"></a>  CGdiObject::CreateStockObject  
 Retrieves a handle to one of the predefined stock Windows GDI pens, brushes, or fonts, and attaches the GDI object to the `CGdiObject` object.  
  
```  
BOOL CreateStockObject(int nIndex);
```  
  
### Parameters  
 `nIndex`  
 A constant specifying the type of stock object desired. See the parameter *fnObject* for [GetStockObject](http://msdn.microsoft.com/library/windows/desktop/dd144925) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for a description of appropriate values.  
  
### Return Value  
 Nonzero if the function is successful; otherwise 0.  
  
### Remarks  
 Call this function with one of the derived classes that corresponds to the Windows GDI object type, such as `CPen` for a stock pen.  
  
##  <a name="cgdiobject__deleteobject"></a>  CGdiObject::DeleteObject  
 Deletes the attached Windows GDI object from memory by freeing all system storage associated with the Windows GDI object.  
  
```  
BOOL DeleteObject();
```  
  
### Return Value  
 Nonzero if the GDI object was successfully deleted; otherwise 0.  
  
### Remarks  
 The storage associated with the `CGdiObject` object is not affected by this call. An application should not call `DeleteObject` on a `CGdiObject` object that is currently selected into a device context.  
  
 When a pattern brush is deleted, the bitmap associated with the brush is not deleted. The bitmap must be deleted independently.  
  
##  <a name="cgdiobject__deletetempmap"></a>  CGdiObject::DeleteTempMap  
 Called automatically by the `CWinApp` idle-time handler, `DeleteTempMap` deletes any temporary `CGdiObject` objects created by `FromHandle`.  
  
```  
static void PASCAL DeleteTempMap();
```  
  
### Remarks  
 `DeleteTempMap` detaches the Windows GDI object attached to a temporary `CGdiObject` object before deleting the `CGdiObject` object.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#175](../../mfc/codesnippet/cpp/cgdiobject-class_1.cpp)]  
  
##  <a name="cgdiobject__detach"></a>  CGdiObject::Detach  
 Detaches a Windows GDI object from a `CGdiObject` object and returns a handle to the Windows GDI object.  
  
```  
HGDIOBJ Detach();
```  
  
### Return Value  
 A `HANDLE` to the Windows GDI object detached; otherwise **NULL** if no GDI object is attached.  
  
##  <a name="cgdiobject__fromhandle"></a>  CGdiObject::FromHandle  
 Returns a pointer to a `CGdiObject` object given a handle to a Windows GDI object.  
  
```  
static CGdiObject* PASCAL FromHandle(HGDIOBJ hObject);
```  
  
### Parameters  
 `hObject`  
 A `HANDLE` to a Windows GDI object.  
  
### Return Value  
 A pointer to a `CGdiObject` that may be temporary or permanent.  
  
### Remarks  
 If a `CGdiObject` object is not already attached to the Windows GDI object, a temporary `CGdiObject` object is created and attached.  
  
 This temporary `CGdiObject` object is only valid until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. Another way of saying this is that the temporary object is only valid during the processing of one window message.  
  
##  <a name="cgdiobject__getobject"></a>  CGdiObject::GetObject  
 Fills a buffer with data that defines a specified object.  
  
```  
int GetObject(
    int nCount,  
    LPVOID lpObject) const;

 
```  
  
### Parameters  
 `nCount`  
 Specifies the number of bytes to copy into the `lpObject` buffer.  
  
 `lpObject`  
 Points to a user-supplied buffer that is to receive the information.  
  
### Return Value  
 The number of bytes retrieved; otherwise 0 if an error occurs.  
  
### Remarks  
 The function retrieves a data structure whose type depends on the type of graphic object, as shown by the following list:  
  
|Object|Buffer type|  
|------------|-----------------|  
|`CPen`|[LOGPEN](../../mfc/reference/logpen-structure.md)|  
|`CBrush`|[LOGBRUSH](../../mfc/reference/logbrush-structure.md)|  
|`CFont`|[LOGFONT](http://msdn.microsoft.com/library/windows/desktop/dd145037)|  
|`CBitmap`|[BITMAP](../../mfc/reference/bitmap-structure.md)|  
|`CPalette`|**WORD**|  
|`CRgn`|Not supported|  
  
 If the object is a `CBitmap` object, `GetObject` returns only the width, height, and color format information of the bitmap. The actual bits can be retrieved by using [CBitmap::GetBitmapBits](../../mfc/reference/cbitmap-class.md#cbitmap__getbitmapbits).  
  
 If the object is a `CPalette` object, `GetObject` retrieves a **WORD** that specifies the number of entries in the palette. The function does not retrieve the [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) structure that defines the palette. An application can get information on palette entries by calling [CPalette::GetPaletteEntries](../../mfc/reference/cpalette-class.md#cpalette__getpaletteentries).  
  
##  <a name="cgdiobject__getobjecttype"></a>  CGdiObject::GetObjectType  
 Retrieves the type of the GDI object.  
  
```  
UINT GetObjectType() const;

 
```  
  
### Return Value  
 The type of the object, if successful; otherwise 0. The value can be one of the following:  
  
- **OBJ_BITMAP** Bitmap  
  
- **OBJ_BRUSH** Brush  
  
- **OBJ_FONT** Font  
  
- **OBJ_PAL** Palette  
  
- **OBJ_PEN** Pen  
  
- **OBJ_EXTPEN** Extended pen  
  
- **OBJ_REGION** Region  
  
- **OBJ_DC** Device context  
  
- **OBJ_MEMDC** Memory device context  
  
- **OBJ_METAFILE** Metafile  
  
- **OBJ_METADC** Metafile device context  
  
- **OBJ_ENHMETAFILE** Enhanced metafile  
  
- **OBJ_ENHMETADC** Enhanced-metafile device context  
  
##  <a name="cgdiobject__getsafehandle"></a>  CGdiObject::GetSafeHandle  
 Returns `m_hObject` unless **this** is **NULL**, in which case **NULL** is returned.  
  
```  
HGDIOBJ GetSafeHandle() const;

 
```  
  
### Return Value  
 A `HANDLE` to the attached Windows GDI object; otherwise **NULL** if no object is attached.  
  
### Remarks  
 This is part of the general handle interface paradigm and is useful when **NULL** is a valid or special value for a handle.  
  
### Example  
  See the example for [CWnd::IsWindowEnabled](../../mfc/reference/cwnd-class.md#cwnd__iswindowenabled).  
  
##  <a name="cgdiobject__m_hobject"></a>  CGdiObject::m_hObject  
 A `HANDLE` containing the `HBITMAP`, **HRGN**, `HBRUSH`, `HPEN`, `HPALETTE`, or **HFONT** attached to this object.  
  
```  
HGDIOBJ m_hObject;  
```  
  
##  <a name="cgdiobject__operator__neq"></a>  CGdiObject::operator !=  
 Determines if two GDI objects are logically not equal.  
  
```  
BOOL operator!=(const CGdiObject& obj) const;

 
```  
  
### Parameters  
 `obj`  
 A pointer to an existing `CGdiObject`.  
  
### Remarks  
 Determines if a GDI object on the left side is not equal to a GDI object on the right side.  
  
##  <a name="cgdiobject__operator__eq_eq"></a>  CGdiObject::operator ==  
 Determines if two GDI objects are logically equal.  
  
```  
BOOL operator==(const CGdiObject& obj) const;

 
```  
  
### Parameters  
 `obj`  
 A reference to an existing `CGdiObject`.  
  
### Remarks  
 Determines if a GDI object on the left side is equal to a GDI object on the right side.  
  
##  <a name="cgdiobject__operator_hgdiobj"></a>  CGdiObject::operator HGDIOBJ  
 Retrieves a `HANDLE` to the attached Windows GDI object; otherwise **NULL** if no object is attached.  
  
```  
operator HGDIOBJ() const;

 
```  
  
##  <a name="cgdiobject__unrealizeobject"></a>  CGdiObject::UnrealizeObject  
 Resets the origin of a brush or resets a logical palette.  
  
```  
BOOL UnrealizeObject();
```  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 While `UnrealizeObject` is a member function of the `CGdiObject` class, it should be invoked only on `CBrush` or `CPalette` objects.  
  
 For `CBrush` objects, `UnrealizeObject` directs the system to reset the origin of the given brush the next time it is selected into a device context. If the object is a `CPalette` object, `UnrealizeObject` directs the system to realize the palette as though it had not previously been realized. The next time the application calls the [CDC::RealizePalette](../../mfc/reference/cdc-class.md#cdc__realizepalette) function for the specified palette, the system completely remaps the logical palette to the system palette.  
  
 The `UnrealizeObject` function should not be used with stock objects. The `UnrealizeObject` function must be called whenever a new brush origin is set (by means of the [CDC::SetBrushOrg](../../mfc/reference/cdc-class.md#cdc__setbrushorg) function). The `UnrealizeObject` function must not be called for the currently selected brush or currently selected palette of any display context.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CBitmap Class](../../mfc/reference/cbitmap-class.md)   
 [CBrush Class](../../mfc/reference/cbrush-class.md)   
 [CFont Class](../../mfc/reference/cfont-class.md)   
 [CPalette Class](../../mfc/reference/cpalette-class.md)   
 [CPen Class](../../mfc/reference/cpen-class.md)   
 [CRgn Class](../../mfc/reference/crgn-class.md)
