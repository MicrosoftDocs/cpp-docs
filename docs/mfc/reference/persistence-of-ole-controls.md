---
title: "Persistence of OLE Controls | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE controls, persistence"
  - "persistence, OLE controls"
ms.assetid: 64f8dc80-f110-41af-b3ea-14948f6bfdf7
caps.latest.revision: 17
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
# Persistence of OLE Controls
One capability of OLE controls is property persistence (or serialization), which allows the OLE control to read or write property values to and from a file or stream. A container application can use serialization to store a control's property values even after the application has destroyed the control. The property values of the OLE control can then be read from the file or stream when a new instance of the control is created at a later time.  
  
### Persistence of OLE Controls  
  
|||  
|-|-|  
|[PX_Blob](#px_blob)|Exchanges a control property that stores binary large object (BLOB) data.|  
|[PX_Bool](#px_bool)|Exchanges a control property of type **BOOL**.|  
|[PX_Color](#px_color)|Exchanges a color property of a control.|  
|[PX_Currency](#px_currency)|Exchanges a control property of type **CY**.|  
|[PX_DataPath](#px_datapath)|Exchanges a control property of type `CDataPathProperty`.|  
|[PX_Double](#px_double)|Exchanges a control property of type **double**.|  
|[PX_Font](#px_font)|Exchanges a font property of a control.|  
|[PX_Float](#px_float)|Exchanges a control property of type **float**.|  
|[PX_IUnknown](#px_iunknown)|Exchanges a control property of undefined type.|  
|[PX_Long](#px_long)|Exchanges a control property of type **long**.|  
|[PX_Picture](#px_picture)|Exchanges a picture property of a control.|  
|[PX_Short](#px_short)|Exchanges a control property of type **short**.|  
|[PX_ULong](#px_ulong)|Exchanges a control property of type **ULONG**.|  
|[PX_UShort](#px_ushort)|Exchanges a control property of type **USHORT**.|  
|[PXstring](#px_string)|Exchanges a character string control property.|  
|[PX_VBXFontConvert](#px_vbxfontconvert)|Exchanges a VBX control's font-related properties into an OLE control font property.|  
  
 In addition, the `AfxOleTypeMatchGuid` global function is provided to test for a match between a `TYPEDESC` and a given GUID.  
  
##  <a name="px_blob"></a>  PX_Blob  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property that stores binary large object (BLOB) data.  
  
```  
 
BOOL  
PX_Blob(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    HGLOBAL& 
hBlob  ,  
    HGLOBAL 
hBlobDefault  
= NULL);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `hBlob`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `hBlobDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value will be read from or written to the variable referenced by `hBlob`, as appropriate. This variable should be initialized to **NULL** before initially calling `PX_Blob` for the first time (typically, this can be done in the control's constructor). If `hBlobDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's initialization or serialization process fails.  
  
 The handles `hBlob` and `hBlobDefault` refer to a block of memory which contains the following:  
  
-   A `DWORD` which contains the length, in bytes, of the binary data that follows, followed immediately by  
  
-   A block of memory containing the actual binary data.  
  
 Note that `PX_Blob` will allocate memory, using the Windows [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) API, when loading BLOB-type properties. You are responsible for freeing this memory. Therefore, the destructor of your control should call [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579) on any BLOB-type property handles to free up any memory allocated to your control.  
  
##  <a name="px_bool"></a>  PX_Bool  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **BOOL**.  
  
```  
 
BOOL  
PX_Bool(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    BOOL& bValue);

BOOL  
PX_Bool(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    BOOL& 
bValue  ,  
    BOOL bDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `bValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `bDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value will be read from or written to the variable referenced by `bValue`, as appropriate. If `bDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_color"></a>  PX_Color  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **OLE_COLOR**.  
  
```  
 
BOOL PX_Color(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    OLE_COLOR& clrValue);

BOOL PX_Color(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    OLE_COLOR& 
clrValue  ,  
    OLE_COLOR 
clrDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `clrValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `clrDefault`  
 Default value for the property, as defined by the control developer.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value will be read from or written to the variable referenced by `clrValue`, as appropriate. If `clrDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_currency"></a>  PX_Currency  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **currency**.  
  
```  
 
BOOL  
PX_Currency(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CY& cyValue);

BOOL  
PX_Currency(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CY& 
cyValue  ,  
    CY cyDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `cyValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `cyDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value will be read from or written to the variable referenced by `cyValue`, as appropriate. If `cyDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_datapath"></a>  PX_DataPath  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a data path property of type [CDataPathProperty](../../mfc/reference/cdatapathproperty-class.md).  
  
```  
 
BOOL  
PX_DataPath(
    CPropExchange* 
pPX,  
    LPCTSTR 
pszPropName,  
    CDataPathProperty& dataPathProperty);

BOOL  
PX_DataPath(
    CPropExchange* 
pPX,  
    CDataPathProperty& dataPathProperty);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `dataPathProperty`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 Data path properties implement asynchronous control properties. The property's value will be read from or written to the variable referenced by `dataPathProperty`, as appropriate.  
  
##  <a name="px_double"></a>  PX_Double  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **double**.  
  
```  
 
BOOL  
PX_Double(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    double& doubleValue);

BOOL  
PX_Double(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    double& 
doubleValue  ,  
    double doubleDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `doubleValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `doubleDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `doubleValue`, as appropriate. If `doubleDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_font"></a>  PX_Font  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type font.  
  
```  
 
BOOL  
PX_Font(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CFontHolder& 
font  ,  
    const 
FONTDESC  
FAR* 
pFontDesc  
= 
NULL,  
    LPFONTDISP 
pFontDispAmbient  
= NULL);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `font`  
 A reference to a `CFontHolder` object that contains the font property.  
  
 `pFontDesc`  
 A pointer to a **FONTDESC** structure containing the values to use in initializing the default state of the font property, in the case where `pFontDispAmbient` is **NULL**.  
  
 `pFontDispAmbient`  
 A pointer to the **IFontDisp** interface of a font to use in initializing the default state of the font property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to `font`, a `CFontHolder` reference, when appropriate. If `pFontDesc` and `pFontDispAmbient` are specified, they are used for initializing the property's default value, when needed. These values are used if, for any reason, the control's serialization process fails. Typically, you pass **NULL** for `pFontDesc` and the ambient value returned by `COleControl::AmbientFont` for `pFontDispAmbient`. Note that the font object returned by `COleControl::AmbientFont` must be released by a call to the **IFontDisp::Release** member function.  
  
##  <a name="px_float"></a>  PX_Float  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **float**.  
  
```  
 
BOOL  
PX_Float(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    float& floatValue);

BOOL  
PX_Float(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    float& 
floatValue  ,  
    float floatDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `floatValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `floatDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `floatValue`, as appropriate. If `floatDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_iunknown"></a>  PX_IUnknown  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property represented by an object having an **IUnknown**-derived interface.  
  
```  
 
BOOL  
PX_IUnknown(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    LPUNKNOWN& 
pUnk  ,  
    REFIID 
iid  ,  
    LPUNKNOWN 
pUnkDefault  
= NULL);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 *pUnk*  
 Reference to a variable containing the interface of the object that represents the value of the property.  
  
 `iid`  
 An interface ID indicating which interface of the property object is used by the control.  
  
 `pUnkDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by *pUnk*, as appropriate. If `pUnkDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_long"></a>  PX_Long  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **long**.  
  
```  
 
BOOL  
PX_Long(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    long& lValue);

BOOL  
PX_Long(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    long& 
lValue  ,  
    long lDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `lValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `lDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `lValue`, as appropriate. If `lDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_picture"></a>  PX_Picture  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a picture property of your control.  
  
```  
 
BOOL  
PX_Picture(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CPictureHolder& pict);

BOOL  
PX_Picture(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CPictureHolder& 
pict  ,  
    CPictureHolder& pictDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `pict`  
 Reference to a [CPictureHolder](../../mfc/reference/cpictureholder-class.md) object where the property is stored (typically a member variable of your class).  
  
 `pictDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `pict`, as appropriate. If `pictDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_short"></a>  PX_Short  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **short**.  
  
```  
 
BOOL  
PX_Short(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    short& sValue);

BOOL  
PX_Short(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    short& 
sValue  ,  
    short sDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `sValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `sDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `sValue`, as appropriate. If `sDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_ulong"></a>  PX_ULong  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type **ULONG**.  
  
```  
 
BOOL  
PX_ULong(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    ULONG& ulValue);

BOOL  
PX_ULong(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    ULONG& 
ulValue  ,  
    long ulDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 Name of the property being exchanged.  
  
 `ulValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `ulDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `ulValue`, as appropriate. If `ulDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_ushort"></a>  PX_UShort  
 Call this function within your control's `DoPropExchange` member function to serialize or initialize a property of type `unsigned` **short**.  
  
```  
 
BOOL  
PX_UShort(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    USHORT& usValue);

BOOL  
PX_UShort(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    USHORT& 
usValue  ,  
    USHORT usDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 Name of the property being exchanged.  
  
 *usValue*  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 *usDefault*  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by *usValue*, as appropriate. If *usDefault* is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_string"></a>  PXstring  
 Call this function within your control's **DoPropExchange** member function to serialize or initialize a character string property.  
  
```  
 
BOOL  
PXstring(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CString& strValue);

BOOL  
PXstring(
    CPropExchange* 
pPX  ,  
    LPCTSTR 
pszPropName  ,  
    CString& 
strValue  ,  
    CString strDefault);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `strValue`  
 Reference to the variable where the property is stored (typically a member variable of your class).  
  
 `strDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to the variable referenced by `strValue`, as appropriate. If `strDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization process fails.  
  
##  <a name="px_vbxfontconvert"></a>  PX_VBXFontConvert  
 Call this function within your control's `DoPropExchange` member function to initialize a font property by converting a VBX control's font-related properties.  
  
```  
 
BOOL  
PX_VBXFontConvert(
    CPropExchange* 
pPX  ,  
    CFontHolder& font);

 
```  
  
### Parameters  
 `pPX`  
 Pointer to the [CPropExchange](../../mfc/reference/cpropexchange-class.md) object (typically passed as a parameter to `DoPropExchange`).  
  
 `font`  
 The font property of the OLE control that will contain the converted VBX font-related properties.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 This function should be used only by an OLE control that is designed as a direct replacement for a VBX control. When the Visual Basic development environment converts a form containing a VBX control to use the corresponding replacement OLE control, it will call the control's **IDataObject::SetData** function, passing in a property set that contains the VBX control's property data. This operation, in turn, causes the control's `DoPropExchange` function to be invoked. `DoPropExchange` can call `PX_VBXFontConvert` to convert the VBX control's font-related properties (for example, "FontName," "FontSize," and so on) into the corresponding components of the OLE control's font property.  
  
 `PX_VBXFontConvert` should only be called when the control is actually being converted from a VBX form application. For example:  
  
 [!code-cpp[NVC_MFCActiveXControl#14](../../mfc/codesnippet/cpp/persistence-of-ole-controls_1.cpp)]  
[!code-cpp[NVC_MFCActiveXControl#15](../../mfc/codesnippet/cpp/persistence-of-ole-controls_2.cpp)]  
  
## See Also  
 [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md)
