---
title: "Object Map Macros | Microsoft Docs"
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
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Object Map Macros
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Object Map Macros](https://docs.microsoft.com/cpp/atl/reference/object-map-macros).  
  
  
These macros define object maps and entries.  
  
|||  
|-|-|  
|[DECLARE_OBJECT_DESCRIPTION](#declare_object_description)|Allows you to specify a class object's text description, which will be entered into the object map.|  
|[OBJECT_ENTRY_AUTO](#object_entry_auto)|Enters an ATL object into the object map, updates the registry, and creates an instance of the object.|  
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](#object_entry_non_createable_ex_auto)|Allows you to specify that the object should be registered and initialized, but it should not be externally creatable via `CoCreateInstance`.|  
  
##  <a name="declare_object_description"></a>  DECLARE_OBJECT_DESCRIPTION  
 Allows you to specify a text description for your class object.  
  
```
DECLARE_OBJECT_DESCRIPTION(Â
    x Â)
```  
  
### Parameters  
 *x*  
 [in] The class object's description.  
  
### Remarks  
 ATL enters this description into the object map through the [OBJECT_ENTRY](http://msdn.microsoft.com/en-us/abd10ee2-54f0-4f94-9ec2-ddf8f4c8c8cd) macro.  
  
 `DECLARE_OBJECT_DESCRIPTION` implements a `GetObjectDescription` function, which you can use to override the [CComCoClass::GetObjectDescription](http://msdn.microsoft.com/library/37de0261-53cd-485a-b308-8c605bd20844) method.  
  
 The `GetObjectDescription` function is called by **IComponentRegistrar::GetComponents**. **IComponentRegistrar** is an Automation interface that allows you to register and unregister individual components in a DLL. When you create a Component Registrar object with the ATL Project Wizard, the wizard will automatically implement the **IComponentRegistrar** interface. **IComponentRegistrar** is typically used by Microsoft Transaction Server.  
  
 For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../../atl/reference/creating-an-atl-project.md).  
  
### Example  
 [!code-cpp[NVC_ATL_Windowing#123](../../snippets/cpp/VS_Snippets_Cpp/NVC_ATL_Windowing/Cpp/ThisExample.h#123)]  
  
##  <a name="object_entry_auto"></a>  OBJECT_ENTRY_AUTO  
 Enters an ATL object into the object map, updates the registry, and creates an instance of the object.  
  
```
OBJECT_ENTRY_AUTO(Â
    clsid, Â
    class Â)
```  
  
### Parameters  
 `clsid`  
 [in] The CLSID of a COM class implemented by the C++ class named `class`.  
  
 `class`  
 [in] The name of the C++ class implementing the COM class represented by `clsid`.  
  
### Remarks  
 Object entry macros are placed at global scope in the project to provide support for the registration, initialization, and creation of a class.  
  
 `OBJECT_ENTRY_AUTO` enters the function pointers of the creator class and class-factory creator class `CreateInstance` functions for this object into the auto-generated ATL object map. When [CAtlComModule::RegisterServer](http://msdn.microsoft.com/library/dd64994c-c820-4992-9b17-b8bd2dedd496) is called, it updates the system registry for each object in the object map.  
  
 The table below describes how the information added to the object map is obtained from the class given as the second parameter to this macro.  
  
|Information for|Obtained from|  
|---------------------|-------------------|  
|COM registration|[Registry Macros](../../atl/reference/registry-macros.md)|  
|Class factory creation|[Class Factory Macros](../../atl/reference/aggregation-and-class-factory-macros.md)|  
|Instance creation|[Aggregation Macros](../../atl/reference/aggregation-and-class-factory-macros.md)|  
|Component category registration|[Category Macros](../../atl/reference/category-macros.md)|  
|Class-level initialization and cleanup|[ObjectMain](http://msdn.microsoft.com/library/c388d5d6-a67c-4296-ac19-1af7ca9d3ebd)|  
  
##  <a name="object_entry_non_createable_ex_auto"></a>  OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO  
 Allows you to specify that the object should be registered and initialized, but it should not be externally creatable via `CoCreateInstance`.  
  
```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Â
    clsid, Â
    class Â)
```  
  
### Parameters  
 `clsid`  
 [in] The CLSID of a COM class implemented by the C++ class named `class`.  
  
 `class`  
 [in] The name of the C++ class implementing the COM class represented by `clsid`.  
  
### Remarks  
 Object entry macros are placed at global scope in the project to provide support for the registration, initialization, and creation of a class.  
  
 `OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO` allows you to specify that an object should be registered and initialized (see [OBJECT_ENTRY_AUTO](#object_entry_auto) for more information), but it should not be creatable via `CoCreateInstance`.  
  
## See Also  
 [Macros](../../atl/reference/atl-macros.md)




