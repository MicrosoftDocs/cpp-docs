---
title: "CD2DTextFormat Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "afxrendertarget/CD2DTextFormat"
  - "CD2DTextFormat"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CD2DTextFormat class"
ms.assetid: db194cec-9dae-4644-ab84-7c43b7164117
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
# CD2DTextFormat Class
A wrapper for IDWriteTextFormat.  
  
## Syntax  
  
```  
class CD2DTextFormat : public CD2DResource;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextFormat::CD2DTextFormat](#cd2dtextformat__cd2dtextformat)|Constructs a CD2DTextFormat object.|  
|[CD2DTextFormat::~CD2DTextFormat](#cd2dtextformat__~cd2dtextformat)|The destructor. Called when a D2D text format object is being destroyed.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextFormat::Create](#cd2dtextformat__create)|Creates a CD2DTextFormat. (Overrides [CD2DResource::Create](../../mfc/reference/cd2dresource-class.md#cd2dresource__create).)|  
|[CD2DTextFormat::Destroy](#cd2dtextformat__destroy)|Destroys a CD2DTextFormat object. (Overrides [CD2DResource::Destroy](../../mfc/reference/cd2dresource-class.md#cd2dresource__destroy).)|  
|[CD2DTextFormat::Get](#cd2dtextformat__get)|Returns IDWriteTextFormat interface|  
|[CD2DTextFormat::GetFontFamilyName](#cd2dtextformat__getfontfamilyname)|Gets a copy of the font family name.|  
|[CD2DTextFormat::GetLocaleName](#cd2dtextformat__getlocalename)|Gets a copy of the locale name.|  
|[CD2DTextFormat::IsValid](#cd2dtextformat__isvalid)|Checks resource validity (Overrides [CD2DResource::IsValid](../../mfc/reference/cd2dresource-class.md#cd2dresource__isvalid).)|  
|[CD2DTextFormat::ReCreate](#cd2dtextformat__recreate)|Re-creates a CD2DTextFormat. (Overrides [CD2DResource::ReCreate](../../mfc/reference/cd2dresource-class.md#cd2dresource__recreate).)|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextFormat::operator IDWriteTextFormat*](#cd2dtextformat__operator_idwritetextformat_star)|Returns IDWriteTextFormat interface|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DTextFormat::m_pTextFormat](#cd2dtextformat__m_ptextformat)|A pointer to an IDWriteTextFormat.|  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CD2DResource](../../mfc/reference/cd2dresource-class.md)  
  
 [CD2DTextFormat](../../mfc/reference/cd2dtextformat-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dtextformat___dtorcd2dtextformat"></a>  CD2DTextFormat::~CD2DTextFormat  
 The destructor. Called when a D2D text format object is being destroyed.  
  
```  
virtual ~CD2DTextFormat();
```  
  
##  <a name="cd2dtextformat__cd2dtextformat"></a>  CD2DTextFormat::CD2DTextFormat  
 Constructs a CD2DTextFormat object.  
  
```  
CD2DTextFormat(
    CRenderTarget* pParentTarget,  
    const CString& strFontFamilyName,  
    FLOAT fontSize,  
    DWRITE_FONT_WEIGHT fontWeight = DWRITE_FONT_WEIGHT_NORMAL,  
    DWRITE_FONT_STYLE fontStyle = DWRITE_FONT_STYLE_NORMAL,  
    DWRITE_FONT_STRETCH fontStretch = DWRITE_FONT_STRETCH_NORMAL,  
    const CString& strFontLocale = _T(""),  
    IDWriteFontCollection* pFontCollection = NULL,  
    BOOL bAutoDestroy = TRUE);
```  
  
### Parameters  
 `pParentTarget`  
 A pointer to the render target.  
  
 `strFontFamilyName`  
 A CString object that contains the name of the font family.  
  
 `fontSize`  
 The logical size of the font in DIP ("device-independent pixel") units. A DIPequals 1/96 inch.  
  
 `fontWeight`  
 A value that indicates the font weight for the text object.  
  
 `fontStyle`  
 A value that indicates the font style for the text object.  
  
 `fontStretch`  
 A value that indicates the font stretch for the text object.  
  
 `strFontLocale`  
 A CString object that contains the locale name.  
  
 `pFontCollection`  
 A pointer to a font collection object. When this is NULL, indicates the system font collection.  
  
 `bAutoDestroy`  
 Indicates that the object will be destroyed by owner (pParentTarget).  
  
##  <a name="cd2dtextformat__create"></a>  CD2DTextFormat::Create  
 Creates a CD2DTextFormat.  
  
```  
virtual HRESULT Create(CRenderTarget* */);
```  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
##  <a name="cd2dtextformat__destroy"></a>  CD2DTextFormat::Destroy  
 Destroys a CD2DTextFormat object.  
  
```  
virtual void Destroy();
```  
  
##  <a name="cd2dtextformat__get"></a>  CD2DTextFormat::Get  
 Returns IDWriteTextFormat interface  
  
```  
IDWriteTextFormat* Get();
```  
  
### Return Value  
 Pointer to an IDWriteTextFormat interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dtextformat__getfontfamilyname"></a>  CD2DTextFormat::GetFontFamilyName  
 Gets a copy of the font family name.  
  
```  
CString GetFontFamilyName() const;

 
```  
  
### Return Value  
 CString object that contains the current font family name.  
  
##  <a name="cd2dtextformat__getlocalename"></a>  CD2DTextFormat::GetLocaleName  
 Gets a copy of the locale name.  
  
```  
CString GetLocaleName() const;

 
```  
  
### Return Value  
 CString object that contains the current locale name.  
  
##  <a name="cd2dtextformat__isvalid"></a>  CD2DTextFormat::IsValid  
 Checks resource validity  
  
```  
virtual BOOL IsValid() const;

 
```  
  
### Return Value  
 TRUE if resource is valid; otherwise FALSE.  
  
##  <a name="cd2dtextformat__m_ptextformat"></a>  CD2DTextFormat::m_pTextFormat  
 A pointer to an IDWriteTextFormat.  
  
```  
IDWriteTextFormat* m_pTextFormat;  
```  
  
##  <a name="cd2dtextformat__operator_idwritetextformat_star"></a>  CD2DTextFormat::operator IDWriteTextFormat*  
 Returns IDWriteTextFormat interface  
  
```  
operator IDWriteTextFormat*();
```   
  
### Return Value  
 Pointer to an IDWriteTextFormat interface or NULL if object is not initialized yet.  
  
##  <a name="cd2dtextformat__recreate"></a>  CD2DTextFormat::ReCreate  
 Re-creates a CD2DTextFormat.  
  
```  
virtual HRESULT ReCreate(CRenderTarget* */);
```  
  
### Return Value  
 If the method succeeds, it returns S_OK. Otherwise, it returns an HRESULT error code.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
