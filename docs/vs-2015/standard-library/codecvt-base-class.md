---
title: "codecvt_base Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "codecvt_base"
  - "xlocale/std::codecvt_base"
  - "std.codecvt_base"
  - "std::codecvt_base"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codecvt_base class"
ms.assetid: 7e95c083-91b4-4b3f-8918-0d4ea244a040
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# codecvt_base Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [codecvt_base Class](https://docs.microsoft.com/cpp/standard-library/codecvt-base-class).  
  
A base class for the codecvt class that is used to define an enumeration type referred to as **result**, used as the return type for the facet member functions to indicate the result of a conversion.  
  
## Syntax  
  
```
class codecvt_base : public locale::facet {
public:
    enum result {ok, partial, error, noconv};
    codecvt_base( size_t _Refs = 0);
    bool always_noconv() const;
    int max_length() const;
    int encoding() const;
    ~codecvt_base()

protected:
    virtual bool do_always_noconv() const;
    virtual int do_max_length() const;
    virtual int do_encoding() const;
};
```  
  
## Remarks  
 The class describes an enumeration common to all specializations of template class [codecvt](../standard-library/codecvt-class.md). The enumeration result describes the possible return values from [do_in](../standard-library/codecvt-class.md#codecvt__do_in) or [do_out](../standard-library/codecvt-class.md#codecvt__do_out):  
  
- **ok** if the conversion between internal and external character encodings succeeds.  
  
- **partial** if the destination is not large enough for the conversion to succeed.  
  
- **error** if the source sequence is ill formed.  
  
- **noconv** if the function performs no conversion.  
  
## Requirements  
 **Header:** \<locale>  
  
 **Namespace:** std  
  
## See Also  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)







