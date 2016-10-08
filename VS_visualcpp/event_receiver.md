---
title: "event_receiver"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: language-reference
ms.assetid: bf8fe770-3ea2-4128-b46b-166222ee4097
caps.latest.revision: 13
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# event_receiver
Creates an event receiver (sink).  
  
## Syntax  
  
```  
  
      [ event_receiver(  
   type   
   [, layout_dependent=false]   
) ]  
```  
  
#### Parameters  
 `type`  
 An enumeration of one of the following values:  
  
-   `native` for unmanaged C/C++ code (default for native classes).  
  
-   `com` for COM code. This value requires that you include the following header files:  
  
    ```  
    #define _ATL_ATTRIBUTES  
    #include <atlbase.h>  
    #include <atlcom.h>  
    ```  
  
 **layout_dependent**  
 Specify *layout_dependent* only if `type`=**com**. *layout_dependent* is a Boolean:  
  
-   **true** means that the signature of the delegates in the event receiver must exactly match those to which they are hooked in the event source. The event receiver handler names must match the names specified in the relevant event source interface. You must use **coclass** when *layout_dependent* is **true**. It is slightly more efficient to specify **true**.  
  
-   **false** (default) means that the calling convention and storage class (virtual, static, and others) do not have to match the event method and the handlers; nor do the handler names need to match the event source interface method names.  
  
## Remarks  
 The **event_receiver** C++ attribute specifies that the class or structure to which it is applied will be an event receiver, using the Visual C++ unified event model.  
  
 **event_receiver** is used with the [event_source](../VS_visualcpp/event_source.md) attribute and the [__hook](../VS_visualcpp/__hook.md) and [__unhook](../VS_visualcpp/__unhook.md) keywords. Use **event_source** to create event sources. Use `__hook` within an event receiver's methods to associate ("hook") event receiver methods to the events of an event source. Use `__unhook` to dissociate them.  
  
 *layout_dependent* is only specified for COM event receivers (`type`=**com**). The default for *layout_dependent* is **false**.  
  
> [!NOTE]
>  A templated class or struct cannot contain events.  
  
## Requirements  
  
### Attribute Context  
  
|||  
|-|-|  
|**Applies to**|**class**, `struct`|  
|**Repeatable**|No|  
|**Required attributes**|**coclass** when *layout_dependent*=**true**|  
|**Invalid attributes**|None|  
  
 For more information, see [Attribute Contexts](../VS_visualcpp/Attribute-Contexts.md).  
  
## See Also  
 [Compiler Attributes](../VS_visualcpp/Compiler-Attributes.md)   
 [event_source](../VS_visualcpp/event_source.md)   
 [__event](../VS_visualcpp/__event.md)   
 [__hook](../VS_visualcpp/__hook.md)   
 [__unhook](../VS_visualcpp/__unhook.md)   
 [Class Attributes](../VS_visualcpp/Class-Attributes.md)   
 [Attributes Samples](assetId:///558ebdb2-082f-44dc-b442-d8d33bf7bdb8)