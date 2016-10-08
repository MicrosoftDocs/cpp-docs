---
title: "&lt;hash_map&gt; operators"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 24b9bb9e-e983-4060-bce5-2c7c8161ee61
caps.latest.revision: 9
---
# &lt;hash_map&gt; operators
||||  
|-|-|-|  
|[operator!=](#operator_neq)|[operator!= (hash_map)](#operator_neq__hash_map_)|[operator==](#operator_eq_eq)|  
|[operator== (hash_map)](#operator_eq_eq__hash_map_)|  
  
##  <a name="operator_neq__hash_map_"></a>  operator!= (hash_map)  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_map Class](../VS_visualcpp/unordered_map-Class.md).  
  
 Tests if the hash_map object on the left side of the operator is not equal to the hash_map object on the right side.  
  
```  
bool operator!=(    const hash_map <Key, Type, Traits, Allocator>&  _Left ,    const hash_map <Key, Type, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `hash_map`.  
  
 `_Right`  
 An object of type `hash_map`.  
  
### Return Value  
 **true** if the hash_maps are not equal; **false** if hash_maps are equal.  
  
### Remarks  
 The comparison between hash_map objects is based on a pairwise comparison of their elements. Two hash_maps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
### Example  
  
```  
// hash_map_op_ne.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_map <int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair <int, int> Int_Pair;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      hm1.insert ( Int_Pair ( i, i ) );  
      hm2.insert ( Int_Pair ( i, i * i ) );  
      hm3.insert ( Int_Pair ( i, i ) );  
   }  
  
   if ( hm1 != hm2 )  
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm2 are equal." << endl;  
  
   if ( hm1 != hm3 )  
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm3 are equal." << endl;  
}  
```  
  
  **The hash_maps hm1 and hm2 are not equal.**  
**The hash_maps hm1 and hm3 are equal.**    
##  <a name="operator_eq_eq__hash_map_"></a>  operator== (hash_map)  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_map Class](../VS_visualcpp/unordered_map-Class.md).  
  
 Tests if the hash_map object on the left side of the operator is equal to the hash_map object on the right side.  
  
```  
bool operator==(    const hash_map <Key, Type, Traits, Allocator>&  _Left ,    const hash_map <Key, Type, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `hash_map`.  
  
 `_Right`  
 An object of type `hash_map`.  
  
### Return Value  
 **true** if the hash_map on the left side of the operator is equal to the hash_map on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between hash_map objects is based on a pairwise comparison of their elements. Two hash_maps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
### Example  
  
```  
// hash_map_op_eq.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_map <int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair <int, int> Int_Pair;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      hm1.insert ( Int_Pair ( i, i ) );  
      hm2.insert ( Int_Pair ( i, i * i ) );  
      hm3.insert ( Int_Pair ( i, i ) );  
   }  
  
   if ( hm1 == hm2 )  
      cout << "The hash_maps hm1 and hm2 are equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm2 are not equal." << endl;  
  
   if ( hm1 == hm3 )  
      cout << "The hash_maps hm1 and hm3 are equal." << endl;  
   else  
      cout << "The hash_maps hm1 and hm3 are not equal." << endl;  
}  
```  
  
  **The hash_maps hm1 and hm2 are not equal.**  
**The hash_maps hm1 and hm3 are equal.**    
##  <a name="operator_neq"></a>  operator!=  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_multimap Class](../VS_visualcpp/unordered_multimap-Class.md).  
  
 Tests if the hash_multimap object on the left side of the operator is not equal to the hash_multimap object on the right side.  
  
```  
bool operator!=(    const hash_multimap <Key, Type, Traits, Allocator>&  _Left ,    const hash_multimap <Key, Type, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `hash_multimap`.  
  
 `_Right`  
 An object of type `hash_multimap`.  
  
### Return Value  
 **true** if the hash_multimaps are not equal; **false** if hash_multimaps are equal.  
  
### Remarks  
 The comparison between hash_multimap objects is based on a pairwise comparison of their elements. Two hash_multimaps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
### Example  
  
```  
// hash_multimap_op_ne.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_multimap <int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair <int, int> Int_Pair;  
  
   for ( i = 0 ; i < 3 ; i++ )  
   {  
      hm1.insert ( Int_Pair ( i, i ) );  
      hm2.insert ( Int_Pair ( i, i * i ) );  
      hm3.insert ( Int_Pair ( i, i ) );  
   }  
  
   if ( hm1 != hm2 )  
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;  
  
   if ( hm1 != hm3 )  
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;  
}  
```  
  
  **The hash_multimaps hm1 and hm2 are not equal.**  
**The hash_multimaps hm1 and hm3 are equal.**    
##  <a name="operator_eq_eq"></a>  operator==  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_multimap Class](../VS_visualcpp/unordered_multimap-Class.md).  
  
 Tests if the hash_multimap object on the left side of the operator is equal to the hash_multimap object on the right side.  
  
```  
bool operator==(    const hash_multimap <Key, Type, Traits, Allocator>&  _Left ,    const hash_multimap <Key, Type, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Left`  
 An object of type `hash_multimap`.  
  
 `_Right`  
 An object of type `hash_multimap`.  
  
### Return Value  
 **true** if the hash_multimap on the left side of the operator is equal to the hash_multimap on the right side of the operator; otherwise **false**.  
  
### Remarks  
 The comparison between hash_multimap objects is based on a pairwise comparison of their elements. Two hash_multimaps are equal if they have the same number of elements and their respective elements have the same values. Otherwise, they are unequal.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
### Example  
  
```  
// hash_multimap_op_eq.cpp  
// compile with: /EHsc  
#include <hash_map>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   using namespace stdext;  
   hash_multimap<int, int> hm1, hm2, hm3;  
   int i;  
   typedef pair<int, int> Int_Pair;  
  
   for (i = 0; i < 3; i++)  
   {  
      hm1.insert(Int_Pair(i, i));  
      hm2.insert(Int_Pair(i, i*i));  
      hm3.insert(Int_Pair(i, i));  
   }  
  
   if ( hm1 == hm2 )  
      cout << "The hash_multimaps hm1 and hm2 are equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm2 are not equal." << endl;  
  
   if ( hm1 == hm3 )  
      cout << "The hash_multimaps hm1 and hm3 are equal." << endl;  
   else  
      cout << "The hash_multimaps hm1 and hm3 are not equal." << endl;  
}  
```  
  
  **The hash_multimaps hm1 and hm2 are not equal.**  
**The hash_multimaps hm1 and hm3 are equal.**    
## See Also  
 [<hash_map>](../VS_visualcpp/-hash_map-.md)