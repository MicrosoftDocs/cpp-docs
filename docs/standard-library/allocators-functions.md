---
title: "&lt;allocators&gt; macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 9cb5ee07-1ff9-4594-ae32-3c8c6efb511a
caps.latest.revision: 12
manager: "ghogen"
---
# &lt;allocators&gt; macros
||||  
|-|-|-|  
|[ALLOCATOR_DECL](#allocator_decl)|[CACHE_CHUNKLIST](#cache_chunklist)|[CACHE_FREELIST](#cache_freelist)|  
|[CACHE_SUBALLOC](#cache_suballoc)|[SYNC_DEFAULT](#sync_default)|  
  
##  <a name="allocator_decl"></a>  ALLOCATOR_DECL  
 Yields an allocator template class.  
  
```
#define ALLOCATOR_DECL(cache, sync, name) <alloc_template>
```  
  
### Remarks  
 The macro yields a template definition `template <class Type> class name {.....}` and a specialization `template <> class name<void> {.....}` which together define an allocator template class that uses the synchronization filter `sync` and a cache of type `cache`.  
  
 For compilers that can compile rebind, the resulting template definition looks like this:  
```  
struct rebind
   {    /* convert a name<Type> to a name<Other> */
   typedef name<Other> other;
   };  
 ```  
 For compilers that cannot compile rebind the resulting template definition looks like this:  
  
```
template <class Type<class name
    : public stdext::allocators::allocator_base<Type,
    sync<stdext::allocators::rts_alloc<cache>>>
{
public:
    name() {}
    template <class Other>
    name(const name<Other>&) {}
    template <class Other>
    name& operator= (const name<Other>&)
    {
        return *this;
    }
};
```  
  
##  <a name="cache_chunklist"></a>  CACHE_CHUNKLIST  
 Yields `stdext::allocators::cache_chunklist<sizeof(Type)>`.  
  
```
#define CACHE_CHUNKLIST <cache_class>
```  
  
### Remarks  
  
##  <a name="cache_freelist"></a>  CACHE_FREELIST  
 Yields `stdext::allocators::cache_freelist<sizeof(Type), max>`.  
  
```
#define CACHE_FREELIST(max) <cache_class>
```  
  
### Remarks  
  
##  <a name="cache_suballoc"></a>  CACHE_SUBALLOC  
 Yields `stdext::allocators::cache_suballoc<sizeof(Type)>`.  
  
```
#define CACHE_SUBALLOC <cache_class>
```  
  
### Remarks  
  
##  <a name="sync_default"></a>  SYNC_DEFAULT  
 Yields a synchronization filter.  
  
```
#define SYNC_DEFAULT <sync_template>
```  
  
### Remarks  
 If a compiler supports compiling both single-threaded and multi-threaded applications, for single-threaded applications the macro yields `stdext::allocators::sync_none`; in all other cases it yields `stdext::allocators::sync_shared`.  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)




