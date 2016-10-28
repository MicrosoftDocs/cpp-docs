---
title: "Object Map Macros"
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
ms.assetid: 680087f4-9894-41dd-a79c-6f337e1f13c1
caps.latest.revision: 12
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
# Object Map Macros
These macros define object maps and entries.  
  
|||  
|-|-|  
|[DECLARE_OBJECT_DESCRIPTION](../Topic/DECLARE_OBJECT_DESCRIPTION.md)|Allows you to specify a class object's text description, which will be entered into the object map.|  
|[OBJECT_ENTRY_AUTO](../Topic/OBJECT_ENTRY_AUTO.md)|Enters an ATL object into the object map, updates the registry, and creates an instance of the object.|  
|[OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO](../Topic/OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO.md)|Allows you to specify that the object should be registered and initialized, but it should not be externally creatable via `CoCreateInstance`.|  
  
##  <a name="declare_object_description"></a>  DECLARE_OBJECT_DESCRIPTION  
 Allows you to specify a text description for your class object.  
  
```
DECLARE_OBJECT_DESCRIPTION(Â
    x  Â)
```  
  
### Parameters  
 *x*  
 [in] The class object's description.  
  
### Remarks  
 ATL enters this description into the object map through the [OBJECT_ENTRY](assetId:///abd10ee2-54f0-4f94-9ec2-ddf8f4c8c8cd) macro.  
  
 `DECLARE_OBJECT_DESCRIPTION` implements a `GetObjectDescription` function, which you can use to override the [CComCoClass::GetObjectDescription](../Topic/CComCoClass::GetObjectDescription.md) method.  
  
 The `GetObjectDescription` function is called by **IComponentRegistrar::GetComponents**. **IComponentRegistrar** is an Automation interface that allows you to register and unregister individual components in a DLL. When you create a Component Registrar object with the ATL Project Wizard, the wizard will automatically implement the **IComponentRegistrar** interface. **IComponentRegistrar** is typically used by Microsoft Transaction Server.  
  
 For more information about the ATL Project Wizard, see the article [Creating an ATL Project](../atl/creating-an-atl-project.md).  
  
### Example  
 [!code[NVC_ATL_Windowing#123](../atl/codesnippet/CPP/object-map-macros_1.h)]  
  
##  <a name="object_entry_auto"></a>  OBJECT_ENTRY_AUTO  
 Enters an ATL object into the object map, updates the registry, and creates an instance of the object.  
  
```
OBJECT_ENTRY_AUTO(Â
    clsid
, Â
    class  Â)
```  
  
### Parameters  
 `clsid`  
 [in] The CLSID of a COM class implemented by the C++ class named `class`.  
  
 `class`  
 [in] The name of the C++ class implementing the COM class represented by `clsid`.  
  
### Remarks  
 Object entry macros are placed at global scope in the project to provide support for the registration, initialization, and creation of a class.  
  
 `OBJECT_ENTRY_AUTO` enters the function pointers of the creator class and class-factory creator class `CreateInstance` functions for this object into the auto-generated ATL object map. When [CAtlComModule::RegisterServer](../Topic/CAtlComModule::RegisterServer.md) is called, it updates the system registry for each object in the object map.  
  
 The table below describes how the information added to the object map is obtained from the class given as the second parameter to this macro.  
  
|Information for|Obtained from|  
|---------------------|-------------------|  
|COM registration|[Registry Macros](../atl/registry-macros.md)|  
|Class factory creation|[Class Factory Macros](../atl/aggregation-and-class-factory-macros.md)|  
|Instance creation|[Aggregation Macros](../atl/aggregation-and-class-factory-macros.md)|  
|Component category registration|[Category Macros](../atl/category-macros.md)|  
|Class-level initialization and cleanup|[ObjectMain](../Topic/CComObjectRootEx::ObjectMain.md)|  
  
##  <a name="object_entry_non_createable_ex_auto"></a>  OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO  
 Allows you to specify that the object should be registered and initialized, but it should not be externally creatable via `CoCreateInstance`.  
  
```
OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO(Â
    clsid
, Â
    class  Â)
```  
  
### Parameters  
 `clsid`  
 [in] The CLSID of a COM class implemented by the C++ class named `class`.  
  
 `class`  
 [in] The name of the C++ class implementing the COM class represented by `clsid`.  
  
### Remarks  
 Object entry macros are placed at global scope in the project to provide support for the registration, initialization, and creation of a class.  
  
 `OBJECT_ENTRY_NON_CREATEABLE_EX_AUTO` allows you to specify that an object should be registered and initialized (see [OBJECT_ENTRY_AUTO](../Topic/OBJECT_ENTRY_AUTO.md) for more information), but it should not be creatable via `CoCreateInstance`.  
  
## See Also  
 [Macros](../atl/atl-macros.md)

