---
title: "Property Map Macros | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "property maps"
ms.assetid: 128bc742-2b98-4b97-a243-684dbb83db77
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Property Map Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Property Map Macros](https://docs.microsoft.com/cpp/atl/reference/property-map-macros).  
  
  
These macros define property maps and entries.  
  
|||  
|-|-|  
|[BEGIN_PROP_MAP](#begin_prop_map)|Marks the beginning of the ATL property map.|  
|[PROP_DATA_ENTRY](#prop_data_entry)|Indicates the extent, or dimensions, of an ActiveX control.|  
|[PROP_ENTRY_TYPE](#prop_entry_type)|Enters a property description, property DISPID, and property page CLSID into the property map.|  
|[PROP_ENTRY_TYPE_EX](#prop_entry_type_ex)|Enters a property description, property DISPID, property page CLSID, and `IDispatch` IID into the property map.|  
|[PROP_PAGE](#prop_page)|Enters a property page CLSID into the property map.|  
|[END_PROP_MAP](#end_prop_map)|Marks the end of the ATL property map.|  
  
##  <a name="begin_prop_map"></a>  BEGIN_PROP_MAP  
 Marks the beginning of the object's property map.  
  
```
BEGIN_PROP_MAP(theClass)
```  
  
### Parameters  
 `theClass`  
 [in] Specifies the class containing the property map.  
  
### Remarks  
 The property map stores property descriptions, property DISPIDs, property page CLSIDs, and `IDispatch` IIDs. Classes [IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md), [IPersistPropertyBagImpl](../../atl/reference/ipersistpropertybagimpl-class.md), [IPersistStreamInitImpl](../../atl/reference/ipersiststreaminitimpl-class.md), and [ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md) use the property map to retrieve and set this information.  
  
 When you create an object with the ATL Project Wizard, the wizard will create an empty property map by specifying `BEGIN_PROP_MAP` followed by [END_PROP_MAP](#end_prop_map).  
  
 `BEGIN_PROP_MAP` does not save out the extent (that is, the dimensions) of a property map, because an object using a property map may not have a user interface, so it would have no extent. If the object is an ActiveX control with a user interface, it has an extent. In this case, you must specify [PROP_DATA_ENTRY](#prop_data_entry) in your property map to supply the extent.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#103](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyPropCtrl.h#103)]  
  
##  <a name="prop_data_entry"></a>  PROP_DATA_ENTRY  
 Indicates the extent, or dimensions, of an ActiveX control.  
  
```
PROP_DATA_ENTRY(szDesc, member, vt)
```    
  
### Parameters  
 `szDesc`  
 [in] The property description.  
  
 `member`  
 [in] The data member containing the extent; for example, `m_sizeExtent`.  
  
 *vt*  
 [in] Specifies the VARIANT type of the property.  
  
### Remarks  
 This macro causes the specified data member to be persisted.  
  
 When you create an ActiveX control, the wizard inserts this macro after the property map macro [BEGIN_PROP_MAP](#begin_prop_map) and before the property map macro [END_PROP_MAP](#end_prop_map).  
  
### Example  
 In the following example, the extent of the object ( `m_sizeExtent`) is being persisted.  
  
 [!code-cpp[NVC_ATL_Windowing#131](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyWindow.h#131)]  
  
 [!code-cpp[NVC_ATL_Windowing#132](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyCompositeCtrl.h#132)]  
  
##  <a name="prop_entry_type"></a>  PROP_ENTRY_TYPE  
 Use this macro to enter a property description, property DISPID, and property page CLSID into the object's property map.  
  
```
PROP_ENTRY_TYPE(szDesc, dispid, clsid, vt)
```  
  
### Parameters  
 `szDesc`  
 [in] The property description.  
  
 `dispid`  
 [in] The property's DISPID.  
  
 `clsid`  
 [in] The CLSID of the associated property page. Use the special value `CLSID_NULL` for a property that does not have an associated property page.  
  
 `vt`  
 [in] The property's type.  
  
### Remarks  
 The `PROP_ENTRY` macro was insecure and deprecated. It has been replaced with `PROP_ENTRY_TYPE`.  
  
 The [BEGIN_PROP_MAP](#begin_prop_map) macro marks the beginning of the property map; the [END_PROP_MAP](#end_prop_map) macro marks the end.  
  
### Example  
 See the example for [BEGIN_PROP_MAP](#begin_prop_map).  
  
##  <a name="prop_entry_type_ex"></a>  PROP_ENTRY_TYPE_EX  
 Similar to [PROP_ENTRY_TYPE](#prop_entry_type), but allows you specify a particular IID if your object supports multiple dual interfaces.  
  
```
PROP_ENTRY_TYPE_EX( szDesc, dispid, clsid, iidDispatch, vt)
```    
  
### Parameters  
 `szDesc`  
 [in] The property description.  
  
 `dispid`  
 [in] The property's DISPID.  
  
 `clsid`  
 [in] The CLSID of the associated property page. Use the special value `CLSID_NULL` for a property that does not have an associated property page.  
  
 `iidDispatch`  
 [in] The IID of the dual interface defining the property.  
  
 `vt`  
 [in] The property's type.  
  
### Remarks  
 The `PROP_ENTRY_EX` macro was insecure and deprecated. It has been replaced with `PROP_ENTRY_TYPE_EX`.  
  
 The [BEGIN_PROP_MAP](#begin_prop_map) macro marks the beginning of the property map; the [END_PROP_MAP](#end_prop_map) macro marks the end.  
  
### Example  
 The following example groups entries for `IMyDual1` followed by an entry for `IMyDual2`. Grouping by dual interface will improve performance.  
  
 [!code-cpp[NVC_ATL_Windowing#133](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/AtlEdit.h#133)]  
  
##  <a name="prop_page"></a>  PROP_PAGE  
 Use this macro to enter a property page CLSID into the object's property map.  
  
```
PROP_PAGE(clsid)
```  
  
### Parameters  
 `clsid`  
 [in] The CLSID of a property page.  
  
### Remarks  
 `PROP_PAGE` is similar to [PROP_ENTRY_TYPE](#prop_entry_type), but does not require a property description or DISPID.  
  
> [!NOTE]
>  If you have already entered a CLSID with `PROP_ENTRY_TYPE` or [PROP_ENTRY_TYPE_EX](#prop_entry_type_ex), you do not need to make an additional entry with `PROP_PAGE`.  
  
 The [BEGIN_PROP_MAP](#begin_prop_map) macro marks the beginning of the property map; the [END_PROP_MAP](#end_prop_map) macro marks the end.  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#134](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/MyCtrl.h#134)]  
  
##  <a name="end_prop_map"></a>  END_PROP_MAP  
 Marks the end of the object's property map.  
  
```
END_PROP_MAP()
```  
  
### Remarks  
 When you create an object with the ATL Project Wizard, the wizard will create an empty property map by specifying [BEGIN_PROP_MAP](#begin_prop_map) followed by `END_PROP_MAP`.  
  
### Example  
 See the example for [BEGIN_PROP_MAP](#begin_prop_map).  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)






