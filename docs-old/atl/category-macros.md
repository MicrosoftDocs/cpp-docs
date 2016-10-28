---
title: "Category Macros"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 223578cb-6180-4787-a8d8-ba3787a5d3ee
caps.latest.revision: 13
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
# Category Macros
These macros define category maps.  
  
|||  
|-|-|  
|[BEGIN_CATEGORY_MAP](../Topic/BEGIN_CATEGORY_MAP.md)|Marks the beginning of the category map.|  
|[END_CATEGORY_MAP](../Topic/END_CATEGORY_MAP.md)|Marks the end of the category map.|  
|[IMPLEMENTED_CATEGORY](../Topic/IMPLEMENTED_CATEGORY.md)|Indicates categories that are implemented by the COM object.|  
|[REQUIRED_CATEGORY](../Topic/REQUIRED_CATEGORY.md)|Indicates categories that are required of the container by the COM object.|  
  
##  <a name="begin_category_map"></a>  BEGIN_CATEGORY_MAP  
 Marks the beginning of the category map.  
  
```
BEGIN_CATEGORY_MAP(theClass)
```  
  
### Parameters  
 `theClass`  
 [in] The name of the class containing the category map.  
  
### Remarks  
 The category map is used to specify which component categories the COM class will implement and which categories it requires from its container.  
  
 Add an [IMPLEMENTED_CATEGORY](../Topic/IMPLEMENTED_CATEGORY.md) entry to the map for each category implemented by the COM class. Add a [REQUIRED_CATEGORY](../Topic/REQUIRED_CATEGORY.md) entry to the map for each category that the class requires its clients to implement. Mark the end of the map with the [END_CATEGORY_MAP](../Topic/END_CATEGORY_MAP.md) macro.  
  
 The component categories listed in the map will be registered automatically when the module is registered if the class has an associated [OBJECT_ENTRY_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) or [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../Topic/OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.md).  
  
> [!NOTE]
>  ATL uses the standard component categories manager to register component categories. If the manager is not present on the system when the module is registered, registration succeeds, but the component categories will not be registered for that class.  
  
 For more information about component categories, see [What are Component Categories and how do they work?](http://msdn.microsoft.com/library/windows/desktop/ms694322) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
### Example  
 [!code[NVC_ATL_Windowing#100](../atl/codesnippet/CPP/category-macros_1.h)]  
  
##  <a name="end_category_map"></a>  END_CATEGORY_MAP  
 Marks the end of the category map.  
  
```
END_CATEGORY_MAP()
```  
  
### Example  
 See the example for [BEGIN_CATEGORY_MAP](../Topic/BEGIN_CATEGORY_MAP.md).  
  
##  <a name="implemented_category"></a>  IMPLEMENTED_CATEGORY  
 Add an `IMPLEMENTED_CATEGORY` macro to your component's [category map](../Topic/BEGIN_CATEGORY_MAP.md) to specify that it should be registered as implementing the category identified by the `catID` parameter.  
  
```
IMPLEMENTED_CATEGORY(catID)
```  
  
### Parameters  
 `catID`  
 [in] A **CATID** constant or variable holding the globally unique identifier (GUID) for the implemented category. The address of `catID` will be taken and added to the map. See the table below for a selection of stock categories.  
  
### Remarks  
 The component categories listed in the map will be registered automatically when the module is registered if the class has an associated [OBJECT_ENTRY_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) or [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../Topic/OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.md) macro.  
  
 Clients can use the category information registered for the class to determine its capabilities and requirements without having to create an instance of it.  
  
 For more information about component categories, see [What are Component Categories and how do they work?](http://msdn.microsoft.com/library/windows/desktop/ms694322) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
### A Selection of Stock Categories  
  
|Description|Symbol|Registry GUID|  
|-----------------|------------|-------------------|  
|Safe For Scripting|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|  
|Safe For Initialization|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|  
|Simple Frame Site Containment|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|  
|Simple Data Binding|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|  
|Advanced Data Binding|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|  
|Windowless Controls|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|  
|Internet-Aware Objects|See [Internet Aware Objects](http://msdn.microsoft.com/library/windows/desktop/ms690561) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)] for a sample list.|Â|  
  
### Example  
 [!code[NVC_ATL_Windowing#100](../atl/codesnippet/CPP/category-macros_1.h)]  
  
##  <a name="required_category"></a>  REQUIRED_CATEGORY  
 Add a `REQUIRED_CATEGORY` macro to your component's [category map](../Topic/BEGIN_CATEGORY_MAP.md) to specify that it should be registered as requiring the category identified by the `catID` parameter.  
  
```
REQUIRED_CATEGORY(Â
    catID  Â)
```  
  
### Parameters  
 `catID`  
 [in] A **CATID** constant or variable holding the globally unique identifier (GUID) for the required category. The address of `catID` will be taken and added to the map. See the table below for a selection of stock categories.  
  
### Remarks  
 The component categories listed in the map will be registered automatically when the module is registered if the class has an associated [OBJECT_ENTRY_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) or [OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../Topic/OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.md) macro.  
  
 Clients can use the category information registered for the class to determine its capabilities and requirements without having to create an instance of it. For example, a control may require that a container support data binding. The container can find out if it has the capabilities necessary to host the control by querying the category manager for the categories required by that control. If the container does not support a required feature, it can refuse to host the COM object.  
  
 For more information about component categories, including a sample list, see [What are Component Categories and how do they work?](http://msdn.microsoft.com/library/windows/desktop/ms694322) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
### A Selection of Stock Categories  
  
|Description|Symbol|Registry GUID|  
|-----------------|------------|-------------------|  
|Safe For Scripting|CATID_SafeForScripting|{7DD95801-9882-11CF-9FA9-00AA006C42C4}|  
|Safe For Initialization|CATID_SafeForInitializing|{7DD95802-9882-11CF-9FA9-00AA006C42C4}|  
|Simple Frame Site Containment|CATID_SimpleFrameControl|{157083E0-2368-11cf-87B9-00AA006C8166}|  
|Simple Data Binding|CATID_PropertyNotifyControl|{157083E1-2368-11cf-87B9-00AA006C8166}|  
|Advanced Data Binding|CATID_VBDataBound|{157083E2-2368-11cf-87B9-00AA006C8166}|  
|Windowless Controls|CATID_WindowlessObject|{1D06B600-3AE3-11cf-87B9-00AA006C8166}|  
|Internet-Aware Objects|See [Internet Aware Objects](http://msdn.microsoft.com/library/windows/desktop/ms690561) in the [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)] for a sample list.|Â|  
  
### Example  
 [!code[NVC_ATL_Windowing#135](../atl/codesnippet/CPP/category-macros_2.h)]  
  
## See Also  
 [Macros](../atl/atl-macros.md)

