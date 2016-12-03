---
title: "CPalette Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPalette"
  - "HPALETTE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPalette class"
  - "HPALETTE"
  - "color palettes, MFC"
ms.assetid: 8cd95498-53ed-4852-85e1-70e522541114
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
# CPalette Class
Encapsulates a Windows color palette.  
  
## Syntax  
  
```  
class CPalette : public CGdiObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CPalette::CPalette](#cpalette__cpalette)|Constructs a `CPalette` object with no attached Windows palette. You must initialize the `CPalette` object with one of the initialization member functions before it can be used.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPalette::AnimatePalette](#cpalette__animatepalette)|Replaces entries in the logical palette identified by the `CPalette` object. The application does not have to update its client area, because Windows maps the new entries into the system palette immediately.|  
|[CPalette::CreateHalftonePalette](#cpalette__createhalftonepalette)|Creates a halftone palette for the device context and attaches it to the `CPalette` object.|  
|[CPalette::CreatePalette](#cpalette__createpalette)|Creates a Windows color palette and attaches it to the `CPalette` object.|  
|[CPalette::FromHandle](#cpalette__fromhandle)|Returns a pointer to a `CPalette` object when given a handle to a Windows palette object.|  
|[CPalette::GetEntryCount](#cpalette__getentrycount)|Retrieves the number of palette entries in a logical palette.|  
|[CPalette::GetNearestPaletteIndex](#cpalette__getnearestpaletteindex)|Returns the index of the entry in the logical palette that most closely matches a color value.|  
|[CPalette::GetPaletteEntries](#cpalette__getpaletteentries)|Retrieves a range of palette entries in a logical palette.|  
|[CPalette::ResizePalette](#cpalette__resizepalette)|Changes the size of the logical palette specified by the `CPalette` object to the specified number of entries.|  
|[CPalette::SetPaletteEntries](#cpalette__setpaletteentries)|Sets RGB color values and flags in a range of entries in a logical palette.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CPalette::operator HPALETTE](#cpalette__operator_hpalette)|Returns the `HPALETTE` attached to the `CPalette`.|  
  
## Remarks  
 A palette provides an interface between an application and a color output device (such as a display device). The interface allows the application to take full advantage of the color capabilities of the output device without severely interfering with the colors displayed by other applications. Windows uses the application's logical palette (a list of needed colors) and the system palette (which defines available colors) to determine the colors used.  
  
 A `CPalette` object provides member functions for manipulating the palette referred to by the object. Construct a `CPalette` object and use its member functions to create the actual palette, a graphics device interface (GDI) object, and to manipulate its entries and other properties.  
  
 For more information on using `CPalette`, see [Graphic Objects](../../mfc/graphic-objects.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CGdiObject](../../mfc/reference/cgdiobject-class.md)  
  
 `CPalette`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="cpalette__animatepalette"></a>  CPalette::AnimatePalette  
 Replaces entries in the logical palette attached to the `CPalette` object.  
  
```  
void AnimatePalette(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors);
```  
  
### Parameters  
 `nStartIndex`  
 Specifies the first entry in the palette to be animated.  
  
 `nNumEntries`  
 Specifies the number of entries in the palette to be animated.  
  
 `lpPaletteColors`  
 Points to the first member of an array of [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) structures to replace the palette entries identified by `nStartIndex` and `nNumEntries`.  
  
### Remarks  
 When an application calls `AnimatePalette`, it does not have to update its client area, because Windows maps the new entries into the system palette immediately.  
  
 The `AnimatePalette` function will only change entries with the **PC_RESERVED** flag set in the corresponding **palPaletteEntry** member of the [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) structure that is attached to the `CPalette` object. See **LOGPALETTE** in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about this structure.  
  
##  <a name="cpalette__cpalette"></a>  CPalette::CPalette  
 Constructs a `CPalette` object.  
  
```  
CPalette();
```  
  
### Remarks  
 The object has no attached palette until you call `CreatePalette` to attach one.  
  
##  <a name="cpalette__createhalftonepalette"></a>  CPalette::CreateHalftonePalette  
 Creates a halftone palette for the device context.  
  
```  
BOOL CreateHalftonePalette(CDC* pDC);
```  
  
### Parameters  
 `pDC`  
 Identifies the device context.  
  
### Return Value  
 Nonzero if the function is successful; otherwise 0.  
  
### Remarks  
 An application should create a halftone palette when the stretching mode of a device context is set to **HALFTONE**. The logical halftone palette returned by the [CreateHalftonePalette](http://msdn.microsoft.com/library/windows/desktop/dd183503) member function should then be selected and realized into the device context before the [CDC::StretchBlt](../../mfc/reference/cdc-class.md#cdc__stretchblt) or [StretchDIBits](http://msdn.microsoft.com/library/windows/desktop/dd145121) function is called.  
  
 See the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about `CreateHalftonePalette` and **StretchDIBits**.  
  
##  <a name="cpalette__createpalette"></a>  CPalette::CreatePalette  
 Initializes a `CPalette` object by creating a Windows logical color palette and attaching it to the `CPalette` object.  
  
```  
BOOL CreatePalette(LPLOGPALETTE lpLogPalette);
```  
  
### Parameters  
 `lpLogPalette`  
 Points to a [LOGPALETTE](http://msdn.microsoft.com/library/windows/desktop/dd145040) structure that contains information about the colors in the logical palette.  
  
### Return Value  
 Nonzero if successful; otherwise 0.  
  
### Remarks  
 See the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] for more information about the **LOGPALETTE** structure.  
  
##  <a name="cpalette__fromhandle"></a>  CPalette::FromHandle  
 Returns a pointer to a `CPalette` object when given a handle to a Windows palette object.  
  
```  
static CPalette* PASCAL FromHandle(HPALETTE hPalette);
```  
  
### Parameters  
 `hPalette`  
 A handle to a Windows GDI color palette.  
  
### Return Value  
 A pointer to a `CPalette` object if successful; otherwise **NULL**.  
  
### Remarks  
 If a `CPalette` object is not already attached to the Windows palette, a temporary `CPalette` object is created and attached. This temporary `CPalette` object is valid only until the next time the application has idle time in its event loop, at which time all temporary graphic objects are deleted. In other words, the temporary object is valid only during the processing of one window message.  
  
##  <a name="cpalette__getentrycount"></a>  CPalette::GetEntryCount  
 Call this member function to retrieve the number of entries in a given logical palette.  
  
```  
int GetEntryCount();
```  
  
### Return Value  
 Number of entries in a logical palette.  
  
##  <a name="cpalette__getnearestpaletteindex"></a>  CPalette::GetNearestPaletteIndex  
 Returns the index of the entry in the logical palette that most closely matches the specified color value.  
  
```  
UINT GetNearestPaletteIndex(COLORREF crColor) const;

 
```  
  
### Parameters  
 `crColor`  
 Specifies the color to be matched.  
  
### Return Value  
 The index of an entry in a logical palette. The entry contains the color that most nearly matches the specified color.  
  
##  <a name="cpalette__getpaletteentries"></a>  CPalette::GetPaletteEntries  
 Retrieves a range of palette entries in a logical palette.  
  
```  
UINT GetPaletteEntries(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors) const;

 
```  
  
### Parameters  
 `nStartIndex`  
 Specifies the first entry in the logical palette to be retrieved.  
  
 `nNumEntries`  
 Specifies the number of entries in the logical palette to be retrieved.  
  
 `lpPaletteColors`  
 Points to an array of [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) data structures to receive the palette entries. The array must contain at least as many data structures as specified by `nNumEntries`.  
  
### Return Value  
 The number of entries retrieved from the logical palette; 0 if the function failed.  
  
##  <a name="cpalette__operator_hpalette"></a>  CPalette::operator HPALETTE  
 Use this operator to get the attached Windows GDI handle of the `CPalette` object.  
  
```  
operator HPALETTE() const;

 
```  
  
### Return Value  
 If successful, a handle to the Windows GDI object represented by the `CPalette` object; otherwise **NULL**.  
  
### Remarks  
 This operator is a casting operator, which supports direct use of an `HPALETTE` object.  
  
 For more information about using graphic objects, see the article [Graphic Objects](http://msdn.microsoft.com/library/windows/desktop/dd144962) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cpalette__resizepalette"></a>  CPalette::ResizePalette  
 Changes the size of the logical palette attached to the `CPalette` object to the number of entries specified by `nNumEntries`.  
  
```  
BOOL ResizePalette(UINT nNumEntries);
```  
  
### Parameters  
 `nNumEntries`  
 Specifies the number of entries in the palette after it has been resized.  
  
### Return Value  
 Nonzero if the palette was successfully resized; otherwise 0.  
  
### Remarks  
 If an application calls `ResizePalette` to reduce the size of the palette, the entries remaining in the resized palette are unchanged. If the application calls `ResizePalette` to enlarge the palette, the additional palette entries are set to black (the red, green, and blue values are all 0), and the flags for all additional entries are set to 0.  
  
 For more information on the Windows API `ResizePalette`, see [ResizePalette](http://msdn.microsoft.com/library/windows/desktop/dd162928) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="cpalette__setpaletteentries"></a>  CPalette::SetPaletteEntries  
 Sets RGB color values and flags in a range of entries in a logical palette.  
  
```  
UINT SetPaletteEntries(
    UINT nStartIndex,  
    UINT nNumEntries,  
    LPPALETTEENTRY lpPaletteColors);
```  
  
### Parameters  
 `nStartIndex`  
 Specifies the first entry in the logical palette to be set.  
  
 `nNumEntries`  
 Specifies the number of entries in the logical palette to be set.  
  
 `lpPaletteColors`  
 Points to an array of [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) data structures to receive the palette entries. The array must contain at least as many data structures as specified by `nNumEntries`.  
  
### Return Value  
 The number of entries set in the logical palette; 0 if the function failed.  
  
### Remarks  
 If the logical palette is selected into a device context when the application calls `SetPaletteEntries`, the changes will not take effect until the application calls [CDC::RealizePalette](../../mfc/reference/cdc-class.md#cdc__realizepalette).  
  
 For more information on the Windows structure **PALETTEENTRY**, see [PALETTEENTRY](http://msdn.microsoft.com/library/windows/desktop/dd162769) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## See Also  
 [MFC Sample DIBLOOK](../../visual-cpp-samples.md)   
 [CGdiObject Class](../../mfc/reference/cgdiobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CPalette::GetPaletteEntries](#cpalette__getpaletteentries)   
 [CPalette::SetPaletteEntries](#cpalette__setpaletteentries)



