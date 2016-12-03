---
title: "CBitmap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CBitmap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "drawing, tools"
  - "CBitmap class"
  - "GDI bitmap"
ms.assetid: 3980616a-c59d-495a-86e6-62bd3889c84c
caps.latest.revision: 22
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
# CBitmap Class
Encapsulates a Windows graphics device interface (GDI) bitmap and provides member functions to manipulate the bitmap.  
  
## Syntax  
  
```  
class CBitmap : public CGdiObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmap::CBitmap](#cbitmap__cbitmap)|Constructs a `CBitmap` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmap::CreateBitmap](#cbitmap__createbitmap)|Initializes the object with a device-dependent memory bitmap that has a specified width, height, and bit pattern.|  
|[CBitmap::CreateBitmapIndirect](#cbitmap__createbitmapindirect)|Initializes the object with a bitmap with the width, height, and bit pattern (if one is specified) given in a **BITMAP** structure.|  
|[CBitmap::CreateCompatibleBitmap](#cbitmap__createcompatiblebitmap)|Initializes the object with a bitmap so that it is compatible with a specified device.|  
|[CBitmap::CreateDiscardableBitmap](#cbitmap__creatediscardablebitmap)|Initializes the object with a discardable bitmap that is compatible with a specified device.|  
|[CBitmap::FromHandle](#cbitmap__fromhandle)|Returns a pointer to a `CBitmap` object when given a handle to a Windows `HBITMAP` bitmap.|  
|[CBitmap::GetBitmap](#cbitmap__getbitmap)|Fills a **BITMAP** structure with information about the bitmap.|  
|[CBitmap::GetBitmapBits](#cbitmap__getbitmapbits)|Copies the bits of the specified bitmap into the specified buffer.|  
|[CBitmap::GetBitmapDimension](#cbitmap__getbitmapdimension)|Returns the width and height of the bitmap. The height and width are assumed to have been set previously by the [SetBitmapDimension](#cbitmap__setbitmapdimension) member function.|  
|[CBitmap::LoadBitmap](#cbitmap__loadbitmap)|Initializes the object by loading a named bitmap resource from the application's executable file and attaching the bitmap to the object.|  
|[CBitmap::LoadMappedBitmap](#cbitmap__loadmappedbitmap)|Loads a bitmap and maps colors to current system colors.|  
|[CBitmap::LoadOEMBitmap](#cbitmap__loadoembitmap)|Initializes the object by loading a predefined Windows bitmap and attaching the bitmap to the object.|  
|[CBitmap::SetBitmapBits](#cbitmap__setbitmapbits)|Sets the bits of a bitmap to the specified bit values.|  
|[CBitmap::SetBitmapDimension](#cbitmap__setbitmapdimension)|Assigns a width and height to a bitmap in 0.1-millimeter units.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CBitmap::operator HBITMAP](#cbitmap__operator_hbitmap)|Returns the Windows handle attached to the `CBitmap` object.|  
  
## Remarks  
 To use a `CBitmap` object, construct the object, attach a bitmap handle to it with one of the initialization member functions, and then call the object's member functions.  
  
 For more information on using graphic objects like `CBitmap`, see [Graphic Objects](../../mfc/graphic-objects.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CBitmap`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cbitmap__cbitmap"></a>  CBitmap::CBitmap  
 Constructs a `CBitmap` object.  
  
```  
CBitmap();
```  
  
### Remarks  
 The resulting object must be initialized with one of the initialization member functions.  
  
##  <a name="cbitmap__createbitmap"></a>  CBitmap::CreateBitmap  
 Initializes a device-dependent memory bitmap that has the specified width, height, and bit pattern.  
  
```  
BOOL CreateBitmap(
    int nWidth,  
    int nHeight,  
    UINT nPlanes,  
    UINT nBitcount,  
    const void* lpBits);
```  
  
### Parameters  
 `nWidth`  
 Specifies the width (in pixels) of the bitmap.  
  
 `nHeight`  
 Specifies the height (in pixels) of the bitmap.  
  
 `nPlanes`  
 Specifies the number of color planes in the bitmap.  
  
 `nBitcount`  
 Specifies the number of color bits per display pixel.  
  
 `lpBits`  
 Points to an array of bytes that contains the initial bitmap bit values. If it is **NULL**, the new bitmap is left uninitialized.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 For a color bitmap, either the `nPlanes` or `nBitcount` parameter should be set to 1. If both of these parameters are set to 1, `CreateBitmap` creates a monochrome bitmap.  
  
 Although a bitmap cannot be directly selected for a display device, it can be selected as the current bitmap for a "memory device context" by using [CDC::SelectObject](../../mfc/reference/cdc-class.md#cdc__selectobject) and copied to any compatible device context by using the [CDC::BitBlt](../../mfc/reference/cdc-class.md#cdc__bitblt) function.  
  
 When you finish with the `CBitmap` object created by the `CreateBitmap` function, first select the bitmap out of the device context, then delete the `CBitmap` object.  
  
 For more information, see the description of the **bmBits** field in the **BITMAP** structure. The [BITMAP](../../mfc/reference/bitmap-structure.md) structure is described under the [CBitmap::CreateBitmapIndirect](#cbitmap__createbitmapindirect) member function.  
  
##  <a name="cbitmap__createbitmapindirect"></a>  CBitmap::CreateBitmapIndirect  
 Initializes a bitmap that has the width, height, and bit pattern (if one is specified) given in the structure pointed to by `lpBitmap`.  
  
```  
BOOL CreateBitmapIndirect(LPBITMAP lpBitmap);
```  
  
### Parameters  
 `lpBitmap`  
 Points to a [BITMAP](../../mfc/reference/bitmap-structure.md) structure that contains information about the bitmap.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Although a bitmap cannot be directly selected for a display device, it can be selected as the current bitmap for a memory device context by using [CDC::SelectObject](../../mfc/reference/cdc-class.md#cdc__selectobject) and copied to any compatible device context by using the [CDC::BitBlt](../../mfc/reference/cdc-class.md#cdc__bitblt) or [CDC::StretchBlt](../../mfc/reference/cdc-class.md#cdc__stretchblt) function. (The [CDC::PatBlt](../../mfc/reference/cdc-class.md#cdc__patblt) function can copy the bitmap for the current brush directly to the display device context.)  
  
 If the **BITMAP** structure pointed to by the `lpBitmap` parameter has been filled in by using the `GetObject` function, the bits of the bitmap are not specified and the bitmap is uninitialized. To initialize the bitmap, an application can use a function such as [CDC::BitBlt](../../mfc/reference/cdc-class.md#cdc__bitblt) or [SetDIBits](http://msdn.microsoft.com/library/windows/desktop/dd162973) to copy the bits from the bitmap identified by the first parameter of `CGdiObject::GetObject` to the bitmap created by `CreateBitmapIndirect`.  
  
 When you finish with the `CBitmap` object created with `CreateBitmapIndirect` function, first select the bitmap out of the device context, then delete the `CBitmap` object.  
  
##  <a name="cbitmap__createcompatiblebitmap"></a>  CBitmap::CreateCompatibleBitmap  
 Initializes a bitmap that is compatible with the device specified by `pDC`.  
  
```  
BOOL CreateCompatibleBitmap(
    CDC* pDC,  
    int nWidth,  
    int nHeight);
```  
  
### Parameters  
 `pDC`  
 Specifies the device context.  
  
 `nWidth`  
 Specifies the width (in pixels) of the bitmap.  
  
 `nHeight`  
 Specifies the height (in pixels) of the bitmap.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The bitmap has the same number of color planes or the same bits-per-pixel format as the specified device context. It can be selected as the current bitmap for any memory device that is compatible with the one specified by `pDC`.  
  
 If `pDC` is a memory device context, the bitmap returned has the same format as the currently selected bitmap in that device context. A "memory device context" is a block of memory that represents a display surface. It can be used to prepare images in memory before copying them to the actual display surface of the compatible device.  
  
 When a memory device context is created, GDI automatically selects a monochrome stock bitmap for it.  
  
 Since a color memory device context can have either color or monochrome bitmaps selected, the format of the bitmap returned by the `CreateCompatibleBitmap` function is not always the same; however, the format of a compatible bitmap for a nonmemory device context is always in the format of the device.  
  
 When you finish with the `CBitmap` object created with the `CreateCompatibleBitmap` function, first select the bitmap out of the device context, then delete the `CBitmap` object.  
  
##  <a name="cbitmap__creatediscardablebitmap"></a>  CBitmap::CreateDiscardableBitmap  
 Initializes a discardable bitmap that is compatible with the device context identified by `pDC`.  
  
```  
BOOL CreateDiscardableBitmap(
    CDC* pDC,  
    int nWidth,  
    int nHeight);
```  
  
### Parameters  
 `pDC`  
 Specifies a device context.  
  
 `nWidth`  
 Specifies the width (in bits) of the bitmap.  
  
 `nHeight`  
 Specifies the height (in bits) of the bitmap.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The bitmap has the same number of color planes or the same bits-per-pixel format as the specified device context. An application can select this bitmap as the current bitmap for a memory device that is compatible with the one specified by `pDC`.  
  
 Windows can discard a bitmap created by this function only if an application has not selected it into a display context. If Windows discards the bitmap when it is not selected and the application later attempts to select it, the [CDC::SelectObject](../../mfc/reference/cdc-class.md#cdc__selectobject) function will return **NULL**.  
  
 When you finish with the `CBitmap` object created with the `CreateDiscardableBitmap` function, first select the bitmap out of the device context, then delete the `CBitmap` object.  
  
##  <a name="cbitmap__fromhandle"></a>  CBitmap::FromHandle  
 Returns a pointer to a `CBitmap` object when given a handle to a Windows GDI bitmap.  
  
```  
static CBitmap* PASCAL FromHandle(HBITMAP hBitmap);
```  
  
### Parameters  
 `hBitmap`  
 Specifies a Windows GDI bitmap.  
  
### Return Value  
 A pointer to a `CBitmap` object if successful; otherwise **NULL**.  
  
### Remarks  
 If a `CBitmap` object is not already attached to the handle, a temporary `CBitmap` object is created and attached. This temporary `CBitmap` object is valid only until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. Another way of saying this is that the temporary object is only valid during the processing of one window message.  
  
##  <a name="cbitmap__getbitmap"></a>  CBitmap::GetBitmap  
 Retrieves image properties for the attached bitmap.  
  
```  
int GetBitmap(BITMAP* pBitMap);
```  
  
### Parameters  
 `pBitMap`  
 Pointer to a [BITMAP Structure](../../mfc/reference/bitmap-structure.md) structure that will receive the image properties. This parameter must not be `NULL`.  
  
### Return Value  
 Nonzero if the method was successful; otherwise 0.  
  
### Remarks  
  
##  <a name="cbitmap__getbitmapbits"></a>  CBitmap::GetBitmapBits  
 Copies the bit pattern of the attached bitmap into the specified buffer.  
  
```  
DWORD GetBitmapBits(
    DWORD dwCount,  
    LPVOID lpBits) const;

 
```  
  
### Parameters  
 `dwCount`  
 The number of bytes to copy to the buffer.  
  
 `lpBits`  
 Pointer to the buffer that will receive the bitmap.  
  
### Return Value  
 The number of bytes copied to the buffer if the method was successful; otherwise 0.  
  
### Remarks  
 Use [CBitmap::GetBitmap](#cbitmap__getbitmap) to determine the required buffer size.  
  
##  <a name="cbitmap__getbitmapdimension"></a>  CBitmap::GetBitmapDimension  
 Returns the width and height of the bitmap.  
  
```  
CSize GetBitmapDimension() const;

 
```  
  
### Return Value  
 The width and height of the bitmap, measured in 0.1-millimeter units. The height is in the **cy** member of the `CSize` object, and the width is in the **cx** member. If the bitmap width and height have not been set by using `SetBitmapDimension`, the return value is 0.  
  
### Remarks  
 The height and width are assumed to have been set previously by using the [SetBitmapDimension](#cbitmap__setbitmapdimension) member function.  
  
##  <a name="cbitmap__loadbitmap"></a>  CBitmap::LoadBitmap  
 Loads the bitmap resource named by `lpszResourceName` or identified by the ID number in `nIDResource` from the application's executable file.  
  
```  
BOOL LoadBitmap(LPCTSTR lpszResourceName);

 
BOOL LoadBitmap(UINT nIDResource);
```  
  
### Parameters  
 `lpszResourceName`  
 Points to a null-terminated string that contains the name of the bitmap resource.  
  
 `nIDResource`  
 Specifies the resource ID number of the bitmap resource.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 The loaded bitmap is attached to the `CBitmap` object.  
  
 If the bitmap identified by `lpszResourceName` does not exist or if there is insufficient memory to load the bitmap, the function returns 0.  
  
 You can use the [CGdiObject::DeleteObject](../../mfc/reference/cgdiobject-class.md#cgdiobject__deleteobject) function to delete bitmap loaded by the `LoadBitmap` function, or the `CBitmap` destructor will delete the object for you.  
  
> [!CAUTION]
>  Before you delete the object, make sure it is not selected into a device context.  
  
 The following bitmaps were added to Windows versions 3.1 and later:  
  
 **OBM_UPARRROWIOBM_DNARROWIOBM_RGARROWIOBM_LFARROWI**  
  
 These bitmaps are not found in device drivers for Windows versions 3.0 and earlier. For a complete list of bitmaps and a display of their appearance, see the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbitmap__loadmappedbitmap"></a>  CBitmap::LoadMappedBitmap  
 Call this member function to load a bitmap and map the colors to the current system colors.  
  
```  
BOOL LoadMappedBitmap(
    UINT nIDBitmap,  
    UINT nFlags = 0,  
    LPCOLORMAP lpColorMap = NULL,  
    int nMapSize = 0);
```  
  
### Parameters  
 `nIDBitmap`  
 The ID of the bitmap resource.  
  
 `nFlags`  
 A flag for a bitmap. Can be zero or **CMB_MASKED**.  
  
 `lpColorMap`  
 A pointer to a **COLORMAP** structure that contains the color information needed to map the bitmaps. If this parameter is **NULL**, the function uses the default color map.  
  
 *nMapSize*  
 The number of color maps pointed to by `lpColorMap`.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 By default, `LoadMappedBitmap` will map colors commonly used in button glyphs.  
  
 For information about creating a mapped bitmap, see the Windows function [CreateMappedBitmap](http://go.microsoft.com/fwlink/linkid=230562) and the [COLORMAP](http://msdn.microsoft.com/library/windows/desktop/bb760448) structure in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbitmap__loadoembitmap"></a>  CBitmap::LoadOEMBitmap  
 Loads a predefined bitmap used by Windows.  
  
```  
BOOL LoadOEMBitmap(UINT nIDBitmap);
```  
  
### Parameters  
 `nIDBitmap`  
 ID number of the predefined Windows bitmap. The possible values are listed below from WINDOWS.H:  
  
|||  
|-|-|  
|**OBM_BTNCORNERS**|**OBM_OLD_RESTORE**|  
|**OBM_BTSIZE**|**OBM_OLD_RGARROW**|  
|**OBM_CHECK**|**OBM_OLD_UPARROW**|  
|**OBM_CHECKBOXES**|**OBM_OLD_ZOOM**|  
|**OBM_CLOSE**|**OBM_REDUCE**|  
|**OBM_COMBO**|**OBM_REDUCED**|  
|**OBM_DNARROW**|**OBM_RESTORE**|  
|**OBM_DNARROWD**|**OBM_RESTORED**|  
|**OBM_DNARROWI**|**OBM_RGARROW**|  
|**OBM_LFARROW**|**OBM_RGARROWD**|  
|**OBM_LFARROWD**|**OBM_RGARROWI**|  
|**OBM_LFARROWI**|**OBM_SIZE**|  
|**OBM_MNARROW**|**OBM_UPARROW**|  
|**OBM_OLD_CLOSE**|**OBM_UPARROWD**|  
|**OBM_OLD_DNARROW**|**OBM_UPARROW**|  
|**OBM_OLD_LFARROW**|**OBM_ZOOM**|  
|**OBM_OLD_REDUCE**|**OBM_ZOOMD**|  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 Bitmap names that begin with **OBM_OLD** represent bitmaps used by Windows versions prior to 3.0.  
  
 Note that the constant **OEMRESOURCE** must be defined before including WINDOWS.H in order to use any of the **OBM_** constants.  
  
##  <a name="cbitmap__operator_hbitmap"></a>  CBitmap::operator HBITMAP  
 Use this operator to get the attached Windows GDI handle of the `CBitmap` object.  
  
```  
operator HBITMAP() const;

 
```  
  
### Return Value  
 If successful, a handle to the Windows GDI object represented by the `CBitmap` object; otherwise **NULL**.  
  
### Remarks  
 This operator is a casting operator, which supports direct use of an `HBITMAP` object.  
  
 For more information about using graphic objects, see [Graphic Objects](http://msdn.microsoft.com/library/windows/desktop/dd144962) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cbitmap__setbitmapbits"></a>  CBitmap::SetBitmapBits  
 Sets the bits of a bitmap to the bit values given by `lpBits`.  
  
```  
DWORD SetBitmapBits(
    DWORD dwCount,  
    const void* lpBits);
```  
  
### Parameters  
 `dwCount`  
 Specifies the number of bytes pointed to by `lpBits`.  
  
 `lpBits`  
 Points to the **BYTE** array that contains the pixel values to be copied to the `CBitmap` object. In order for the bitmap to be able to render its image correctly, the values should be formatted to conform to the height, width and color depth values that were specified when the CBitmap instance was created. For more information, see [CBitmap::CreateBitmap](#cbitmap__createbitmap).  
  
### Return Value  
 The number of bytes used in setting the bitmap bits; 0 if the function fails.  
  
##  <a name="cbitmap__setbitmapdimension"></a>  CBitmap::SetBitmapDimension  
 Assigns a width and height to a bitmap in 0.1-millimeter units.  
  
```  
CSize SetBitmapDimension(
    int nWidth,  
    int nHeight);
```  
  
### Parameters  
 `nWidth`  
 Specifies the width of the bitmap (in 0.1-millimeter units).  
  
 `nHeight`  
 Specifies the height of the bitmap (in 0.1-millimeter units).  
  
### Return Value  
 The previous bitmap dimensions. Height is in the **cy** member variable of the `CSize` object, and width is in the **cx** member variable.  
  
### Remarks  
 The GDI does not use these values except to return them when an application calls the [GetBitmapDimension](#cbitmap__getbitmapdimension) member function.  
  
## See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)

