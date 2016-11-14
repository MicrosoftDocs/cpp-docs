---
title: "CPropExchange Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPropExchange"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPropExchange class"
  - "OLE controls, persistence"
  - "controls [MFC], OLE"
ms.assetid: ed872180-e770-4942-892a-92139d501fab
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
# CPropExchange Class
Supports the implementation of persistence for your OLE controls.  
  
## Syntax  
  
```  
class AFX_NOVTABLE CPropExchange  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CPropExchange::ExchangeBlobProp](#cpropexchange__exchangeblobprop)|Exchanges a binary large object (BLOB) property.|  
|[CPropExchange::ExchangeFontProp](#cpropexchange__exchangefontprop)|Exchanges a font property.|  
|[CPropExchange::ExchangePersistentProp](#cpropexchange__exchangepersistentprop)|Exchanges a property between a control and a file.|  
|[CPropExchange::ExchangeProp](#cpropexchange__exchangeprop)|Exchanges properties of any built-in type.|  
|[CPropExchange::ExchangeVersion](#cpropexchange__exchangeversion)|Exchanges the version number of an OLE control.|  
|[CPropExchange::GetVersion](#cpropexchange__getversion)|Retrieves the version number of an OLE control.|  
|[CPropExchange::IsAsynchronous](#cpropexchange__isasynchronous)|Determines if property exchanges are done asynchronously.|  
|[CPropExchange::IsLoading](#cpropexchange__isloading)|Indicates whether properties are being loaded into the control or saved from it.|  
  
## Remarks  
 `CPropExchange` does not have a base class.  
  
 Establishes the context and direction of a property exchange.  
  
 Persistence is the exchange of the control's state information, usually represented by its properties, between the control itself and a medium.  
  
 The framework constructs an object derived from `CPropExchange` when it is notified that an OLE control's properties are to be loaded from or stored to persistent storage.  
  
 The framework passes a pointer to this `CPropExchange` object to your control's `DoPropExchange` function. If you used a wizard to create the starter files for your control, your control's `DoPropExchange` function calls `COleControl::DoPropExchange`. The base-class version exchanges the control's stock properties; you modify your derived class's version to exchange properties you have added to your control.  
  
 `CPropExchange` can be used to serialize a control's properties or initialize a control's properties upon the load or creation of a control. The `ExchangeProp` and `ExchangeFontProp` member functions of `CPropExchange` are able to store properties to and load them from different media.  
  
 For more information on using `CPropExchange`, see the article [MFC ActiveX Controls: Property Pages](../../mfc/mfc-activex-controls-property-pages.md).  
  
## Inheritance Hierarchy  
 `CPropExchange`  
  
## Requirements  
 **Header:** afxctl.h  
  
##  <a name="cpropexchange__exchangeblobprop"></a>  CPropExchange::ExchangeBlobProp  
 Serializes a property that stores binary large object (BLOB) data.  
  
```  
virtual BOOL ExchangeBlobProp(
    LPCTSTR pszPropName,  
    HGLOBAL* phBlob,  
    HGLOBAL hBlobDefault = NULL) = 0;  
```  
  
### Parameters  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `phBlob`  
 Pointer to a variable pointing to where the property is stored (variable is typically a member of your class).  
  
 `hBlobDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 The property's value is read from or written to, as appropriate, the variable referenced by `phBlob`. If `hBlobDefault` is specified, it will be used as the property's default value. This value is used if, for any reason, the control's serialization fails.  
  
 The functions **CArchivePropExchange::ExchangeBlobProp**, **CResetPropExchange::ExchangeBlobProp**, and **CPropsetPropExchange::ExchangeBlobProp** override this pure virtual function.  
  
##  <a name="cpropexchange__exchangefontprop"></a>  CPropExchange::ExchangeFontProp  
 Exchanges a font property between a storage medium and the control.  
  
```  
virtual BOOL ExchangeFontProp(
    LPCTSTR pszPropName,  
    CFontHolder& font,  
    const FONTDESC* pFontDesc,  
    LPFONTDISP pFontDispAmbient) = 0;  
```  
  
### Parameters  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `font`  
 A reference to a [CFontHolder](../../mfc/reference/cfontholder-class.md) object that contains the font property.  
  
 `pFontDesc`  
 A pointer to a [FONTDESC](http://msdn.microsoft.com/library/windows/desktop/ms692782) structure containing values for initializing the default state of the font property when `pFontDispAmbient` is **NULL**.  
  
 `pFontDispAmbient`  
 A pointer to the **IFontDisp** interface of a font to be used for initializing the default state of the font property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 If the font property is being loaded from the medium to the control, the font's characteristics are retrieved from the medium and the `CFontHolder` object referenced by `font` is initialized with them. If the font property is being stored, the characteristics in the font object are written to the medium.  
  
 The functions **CArchivePropExchange::ExchangeFontProp**, **CResetPropExchange::ExchangeFontProp**, and **CPropsetPropExchange::ExchangeFontProp** override this pure virtual function.  
  
##  <a name="cpropexchange__exchangepersistentprop"></a>  CPropExchange::ExchangePersistentProp  
 Exchanges a property between the control and a file.  
  
```  
virtual BOOL ExchangePersistentProp(
    LPCTSTR pszPropName,  
    LPUNKNOWN* ppUnk,  
    REFIID iid,  
    LPUNKNOWN pUnkDefault) = 0;  
```  
  
### Parameters  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `ppUnk`  
 A pointer to a variable containing a pointer to the property's **IUnknown** interface (this variable is typically a member of your class).  
  
 `iid`  
 Interface ID of the interface on the property that the control will use.  
  
 `pUnkDefault`  
 Default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 If the property is being loaded from the file to the control, the property is created and initialized from the file. If the property is being stored, its value is written to the file.  
  
 The functions **CArchivePropExchange::ExchangePersistentProp**, **CResetPropExchange::ExchangePersistentProp**, and **CPropsetPropExchange::ExchangePersistentProp** override this pure virtual function.  
  
##  <a name="cpropexchange__exchangeprop"></a>  CPropExchange::ExchangeProp  
 Exchanges a property between a storage medium and the control.  
  
```  
virtual BOOL ExchangeProp(
    LPCTSTR pszPropName,  
    VARTYPE vtProp,  
    void* pvProp,  
    const void* pvDefault = NULL) = 0 ;  
```  
  
### Parameters  
 `pszPropName`  
 The name of the property being exchanged.  
  
 `vtProp`  
 A symbol specifying the type of the property being exchanged. Possible values are:  
  
|Symbol|Property Type|  
|------------|-------------------|  
|`VT_I2`|**short**|  
|`VT_I4`|**long**|  
|`VT_BOOL`|**BOOL**|  
|`VT_BSTR`|`CString`|  
|`VT_CY`|**CY**|  
|`VT_R4`|**float**|  
|`VT_R8`|**double**|  
  
 `pvProp`  
 A pointer to the property's value.  
  
 *pvDefault*  
 Pointer to a default value for the property.  
  
### Return Value  
 Nonzero if the exchange was successful; 0 if unsuccessful.  
  
### Remarks  
 If the property is being loaded from the medium to the control, the property's value is retrieved from the medium and stored in the object pointed to by `pvProp`. If the property is being stored to the medium, the value of the object pointed to by `pvProp` is written to the medium.  
  
 The functions **CArchivePropExchange::ExchangeProp**, **CResetPropExchange::ExchangeProp**, and **CPropsetPropExchange::ExchangeProp** override this pure virtual function.  
  
##  <a name="cpropexchange__exchangeversion"></a>  CPropExchange::ExchangeVersion  
 Called by the framework to handle persistence of a version number.  
  
```  
virtual BOOL ExchangeVersion(
    DWORD& dwVersionLoaded,  
    DWORD dwVersionDefault,  
    BOOL bConvert);
```  
  
### Parameters  
 *dwVersionLoaded*  
 Reference to a variable where the version number of the persistent data being loaded will be stored.  
  
 `dwVersionDefault`  
 The current version number of the control.  
  
 `bConvert`  
 Indicates whether to convert persistent data to the current version or keep it at the same version that was loaded.  
  
### Return Value  
 Nonzero if the function succeeded; 0 otherwise.  
  
##  <a name="cpropexchange__getversion"></a>  CPropExchange::GetVersion  
 Call this function to retrieve the version number of the control.  
  
```  
DWORD GetVersion();
```  
  
### Return Value  
 The version number of the control.  
  
##  <a name="cpropexchange__isasynchronous"></a>  CPropExchange::IsAsynchronous  
 Determines if property exchanges are done asynchronously.  
  
```  
BOOL IsAsynchronous();
```  
  
### Return Value  
 Returns TRUE if properties are exchanged asynchronously, otherwise FALSE.  
  
##  <a name="cpropexchange__isloading"></a>  CPropExchange::IsLoading  
 Call this function to determine whether properties are being loaded to the control or saved from it.  
  
```  
BOOL IsLoading();
```  
  
### Return Value  
 Nonzero if properties are being loaded; otherwise 0.  
  
## See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleControl::DoPropExchange](../../mfc/reference/colecontrol-class.md#colecontrol__dopropexchange)



