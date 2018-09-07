---
title: "CD2DSizeF Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-mfc"]
ms.topic: "reference"
f1_keywords: ["CD2DSizeF", "AFXRENDERTARGET/CD2DSizeF", "AFXRENDERTARGET/CD2DSizeF::CD2DSizeF", "AFXRENDERTARGET/CD2DSizeF::IsNull"]
dev_langs: ["C++"]
helpviewer_keywords: ["CD2DSizeF [MFC], CD2DSizeF", "CD2DSizeF [MFC], IsNull"]
ms.assetid: f486a1e1-997d-4286-8cb9-26369dc82055
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CD2DSizeF Class
A wrapper for D2D1_SIZE_F.  
  
## Syntax  
  
```  
class CD2DSizeF : public D2D1_SIZE_F;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeF::CD2DSizeF](#cd2dsizef)|Overloaded. Constructs a `CD2DSizeF` object from `D2D1_SIZE_F` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeF::IsNull](#isnull)|Returns a **boolean** value that indicates whether an expression contains no valid data (NULL).|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CD2DSizeF::operator CSize](#operator_csize)|Converts `CD2DSizeF` to `CSize` object.|  
  
## Inheritance Hierarchy  
 `D2D1_SIZE_F`  
  
 [CD2DSizeF](../../mfc/reference/cd2dsizef-class.md)  
  
## Requirements  
 **Header:** afxrendertarget.h  
  
##  <a name="cd2dsizef"></a>  CD2DSizeF::CD2DSizeF  
 Constructs a CD2DSizeF object from CSize object.  
  
```  
CD2DSizeF(const CSize& size);  
CD2DSizeF(const D2D1_SIZE_F& size);  
  CD2DSizeF(const D2D1_SIZE_F* size);

 
CD2DSizeF(
    FLOAT cx = 0.,  
    FLOAT cy = 0.);
```  
  
### Parameters  
 *size*  
 source size  
  
 *cx*  
 source width  
  
 *cy*  
 source height  
  
##  <a name="isnull"></a>  CD2DSizeF::IsNull  
 Returns a Boolean value that indicates whether an expression contains no valid data (Null).  
  
```  
BOOL IsNull() const;  
```  
  
### Return Value  
 TRUE if width and height are empty; otherwise FALSE.  
  
##  <a name="operator_csize"></a>  CD2DSizeF::operator CSize  
 Converts CD2DSizeF to CSize object.  
  
```  
operator CSize();
```   
  
### Return Value  
 Current value of D2D size.  
  
## See Also  
 [Classes](../../mfc/reference/mfc-classes.md)
