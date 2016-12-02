---
title: "CD2DTextLayout Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CD2DTextLayout"
  - "afxrendertarget/CD2DTextLayout"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DTextLayout class"
ms.assetid: 724bd13c-f2ef-4e55-a775-8cb04b7b7908
caps.latest.revision: 16
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
# CD2DTextLayout Class
A wrapper for IDWriteTextLayout.  
  
## Syntax  
  
```  
class CD2DTextLayout : public CD2DResource;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextLayout::CD2DTextLayout](#cd2dtextlayout__cd2dtextlayout)|Constructs a CD2DTextLayout object.|  
|[CD2DTextLayout::~CD2DTextLayout](#cd2dtextlayout__~cd2dtextlayout)|The destructor. Called when a D2D text layout object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextLayout::Create](#cd2dtextlayout__create)|Creates a CD2DTextLayout. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#cd2dresource__create).)|  
|[CD2DTextLayout::Destroy](#cd2dtextlayout__destroy)|Destroys a CD2DTextLayout object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#cd2dresource__destroy).)|  
|[CD2DTextLayout::Get](#cd2dtextlayout__get)|Returns IDWriteTextLayout interface|  
|[CD2DTextLayout::GetFontFamilyName](#cd2dtextlayout__getfontfamilyname)|Copies the font family name of the text at the specified position.|  
|[CD2DTextLayout::GetLocaleName](#cd2dtextlayout__getlocalename)|Gets the locale name of the text at the specified position.|  
|[CD2DTextLayout::IsValid](#cd2dtextlayout__isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#cd2dresource__isvalid).)|  
|[CD2DTextLayout::ReCreate](#cd2dtextlayout__recreate)|Re-creates a CD2DTextLayout. (Overrides [CD2DResource::ReCreate](../../mfc/reference/cd2dresource-class.md#cd2dresource__recreate).)|  
|[CD2DTextLayout::SetFontFamilyName](#cd2dtextlayout__setfontfamilyname)|Sets null-terminated font family name for text within a specified text range|  
|[CD2DTextLayout::SetLocaleName](#cd2dtextlayout__setlocalename)|Sets the locale name for text within a specified text range|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextLayout::operator IDWriteTextLayout*](#cd2dtextlayout__operator_idwritetextlayout_star)|Returns IDWriteTextLayout interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextLayout::m_pTextLayout](#cd2dtextlayout__m_ptextlayout)|A pointer to an IDWriteTextLayout.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextLayout](../../mfc/reference/cd2dtextlayout-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dtextlayout___dtorcd2dtextlayout"></a>  CD2DTextLayout::~CD2DTextLayout  
 The destructor. Called when a D2D text layout object is being destroyed.  
  
```  
virtual ~CD2DTextLayout();
```  
  
##  <a name="cd2dtextlayout__cd2dtextlayout"></a>  CD2DTextLayout::CD2DTextLayout  
 Constructs a CD2DTextLayout object.  
  
```  
CD2DTextLayout(
    CRenderTarget* pParentTarget,  
    const CString& strText,  
    CD2DTextFormat& textFormat,  
    const CD2DSizeF& sizeMax,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `strText`  
 A CString object that contains the string to create a new CD2DTextLayout object from.  
  
 `textFormat`  
 A CString object that contains the format to apply to the string.  
  
 `sizeMax`  
 The size of the layout box.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dtextlayout__create"></a>  CD2DTextLayout::Create  
 Creates a CD2DTextLayout.  
  
```  
virtual HRESULT Create(CRenderTarget* */);
```  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dtextlayout__destroy"></a>  CD2DTextLayout::Destroy  
 Destroys a CD2DTextLayout object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dtextlayout__get"></a>  CD2DTextLayout::Get  
 Returns IDWriteTextLayout interface  
  
```  
IDWriteTextLayout* Get();
```  
  
### Return Value  
 Pointer to an IDWriteTextLayout interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dtextlayout__getfontfamilyname"></a>  CD2DTextLayout::GetFontFamilyName  
 Copies the font family name of the text at the specified position.  
  
```  
CString GetFontFamilyName(
    UINT32 currentPosition,  
    DWRITE_TEXT_RANGE* textRange = NULL) const;

 
```  
  
### Parameters  
 `currentPosition`  
 The position of the text to examine.  
  
 `textRange`  
 The range of text that has the same formatting as the text at the position specified by currentPosition. This means the run has the exact formatting as the position specified, including but not limited to the font family name.  
  
### Return Value  
 CString object that contains the current font family name.  
  
##  <a name="cd2dtextlayout__getlocalename"></a>  CD2DTextLayout::GetLocaleName  
 Gets the locale name of the text at the specified position.  
  
```  
CString GetLocaleName(
    UINT32 currentPosition,  
    DWRITE_TEXT_RANGE* textRange = NULL) const;

 
```  
  
### Parameters  
 `currentPosition`  
 The position of the text to inspect.  
  
 `textRange`  
 The range of text that has the same formatting as the text at the position specified by currentPosition. This means the run has the exact formatting as the position specified, including but not limited to the locale name.  
  
### Return Value  
 CString object that contains the current locale name.  
  
##  <a name="cd2dtextlayout__isvalid"></a>  CD2DTextLayout::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="cd2dtextlayout__m_ptextlayout"></a>  CD2DTextLayout::m_pTextLayout  
 A pointer to an IDWriteTextLayout.  
  
```  
IDWriteTextLayout* m_pTextLayout;  
```  
  
##  <a name="cd2dtextlayout__operator_idwritetextlayout_star"></a>  CD2DTextLayout::operator IDWriteTextLayout*  
 Returns IDWriteTextLayout interface  
  
```  
operator IDWriteTextLayout*();
```   
  
### Return Value  
 Pointer to an IDWriteTextLayout interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dtextlayout__recreate"></a>  CD2DTextLayout::ReCreate  
 Re-creates a CD2DTextLayout.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* */);
```  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dtextlayout__setfontfamilyname"></a>  CD2DTextLayout::SetFontFamilyName  
 Sets null-terminated font family name for text within a specified text range  
  
```  
BOOL SetFontFamilyName(
    LPCWSTR pwzFontFamilyName,  
    DWRITE_TEXT_RANGE textRange);
```  
  
### Parameters  
 `pwzFontFamilyName`  
 The font family name that applies to the entire text string within the range specified by textRange  
  
 `textRange`  
 Text range to which this change applies  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE  
  
##  <a name="cd2dtextlayout__setlocalename"></a>  CD2DTextLayout::SetLocaleName  
 Sets the locale name for text within a specified text range  
  
```  
BOOL SetLocaleName(
    LPCWSTR pwzLocaleName,  
    DWRITE_TEXT_RANGE textRange);
```  
  
### Parameters  
 `pwzLocaleName`  
 A null-terminated locale name string  
  
 `textRange`  
 Text range to which this change applies  
  
### Return Value  
 If the method succeeds, it returns TRUE. Otherwise, it returns FALSE  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
