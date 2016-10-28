---
title: "CRect Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "CRect"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LPCRECT data type"
  - "CRect class"
  - "LPRECT operator"
  - "RECT structure"
ms.assetid: dee4e752-15d6-4db4-b68f-1ad65b2ed6ca
caps.latest.revision: 18
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
# CRect Class
Similar to a Windows RECT structure.  
  
## Syntax  
  
```  
class CRect : public tagRECT  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CRect::CRect](#crect__crect)|Constructs a                                         `CRect` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CRect::BottomRight](#crect__bottomright)|Returns the bottom-right point of                                         `CRect`.|  
|[CRect::CenterPoint](#crect__centerpoint)|Returns the centerpoint of                                         `CRect`.|  
|[CRect::CopyRect](#crect__copyrect)|Copies the dimensions of a source rectangle to                                         `CRect`.|  
|[CRect::DeflateRect](#crect__deflaterect)|Decreases the width and height of                                         `CRect`.|  
|[CRect::EqualRect](#crect__equalrect)|Determines whether                                         `CRect` is equal to the given rectangle.|  
|[CRect::Height](#crect__height)|Calculates the height of                                         `CRect`.|  
|[CRect::InflateRect](#crect__inflaterect)|Increases the width and height of                                         `CRect`.|  
|[CRect::IntersectRect](#crect__intersectrect)|Sets                                         `CRect` equal to the intersection of two rectangles.|  
|[CRect::IsRectEmpty](#crect__isrectempty)|Determines whether                                         `CRect` is empty.                                         `CRect` is empty if the width and/or height are 0.|  
|[CRect::IsRectNull](#crect__isrectnull)|Determines whether the                                         **top**,                                         **bottom**,                                         **left**, and                                         **right** member variables are all equal to 0.|  
|[CRect::MoveToX](#crect__movetox)|Moves                                         `CRect` to the specified x-coordinate.|  
|[CRect::MoveToXY](#crect__movetoxy)|Moves                                         `CRect` to the specified x- and y-coordinates.|  
|[CRect::MoveToY](#crect__movetoy)|Moves                                         `CRect` to the specified y-coordinate.|  
|[CRect::NormalizeRect](#crect__normalizerect)|Standardizes the height and width of                                         `CRect`.|  
|[CRect::OffsetRect](#crect__offsetrect)|Moves                                         `CRect` by the specified offsets.|  
|[CRect::PtInRect](#crect__ptinrect)|Determines whether the specified point lies within                                         `CRect`.|  
|[CRect::SetRect](#crect__setrect)|Sets the dimensions of                                         `CRect`.|  
|[CRect::SetRectEmpty](#crect__setrectempty)|Sets                                         `CRect` to an empty rectangle (all coordinates equal to 0).|  
|[CRect::Size](#crect__size)|Calculates the size of                                         `CRect`.|  
|[CRect::SubtractRect](#crect__subtractrect)|Subtracts one rectangle from another.|  
|[CRect::TopLeft](#crect__topleft)|Returns the top-left point of                                         `CRect`.|  
|[CRect::UnionRect](#crect__unionrect)|Sets                                         `CRect` equal to the union of two rectangles.|  
|[CRect::Width](#crect__width)|Calculates the width of                                         `CRect`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CRect::operator -](#crect__operator_-)|Subtracts the given offsets from                                         `CRect` or deflates                                         `CRect` and returns the resulting                                         `CRect`.|  
|[CRect::operator LPCRECT](#crect__operator_lpcrect)|Converts a                                         `CRect` to an                                         **LPCRECT**.|  
|[CRect::operator LPRECT](#crect__operator_lprect)|Converts a                                         `CRect` to an                                         `LPRECT`.|  
|[CRect::operator !=](#crect__operator__neq)|Determines whether                                         `CRect` is not equal to a rectangle.|  
|[CRect::operator &amp;](#crect__operator__amp_)|Creates the intersection of                                         `CRect` and a rectangle and returns the resulting                                         `CRect`.|  
|[CRect::operator &amp;=](#crect__operator__amp__eq)|Sets                                         `CRect` equal to the intersection of                                         `CRect` and a rectangle.|  
|[CRect::operator |](#crect__operator__or)|Creates the union of                                         `CRect` and a rectangle and returns the resulting                                         `CRect`.|  
|[CRect::operator |=](#crect__operator__or_eq)|Sets                                         `CRect` equal to the union of                                         `CRect` and a rectangle.|  
|[CRect::operator +](#crect__operator__add)|Adds the given offsets to                                         `CRect` or inflates                                         `CRect` and returns the resulting                                         `CRect`.|  
|[CRect::operator +=](#crect__operator__add_eq)|Adds the specified offsets to                                         `CRect` or inflates                                         `CRect`.|  
|[CRect::operator =](#crect__operator__eq)|Copies the dimensions of a rectangle to                                         `CRect`.|  
|[CRect::operator -=](#crect__operator_-_eq)|Subtracts the specified offsets from                                         `CRect` or deflates                                         `CRect`.|  
|[CRect::operator ==](#crect__operator__eq_eq)|Determines whether                                         `CRect` is equal to a rectangle.|  
  
## Remarks  
 `CRect` also includes member functions to manipulate                 `CRect` objects and Windows                 `RECT` structures.  
  
 A                 `CRect` object can be passed as a function parameter wherever a                 `RECT` structure,                 **LPCRECT**, or                 `LPRECT` can be passed.  
  
> [!NOTE]
>  This class is derived from the                     **tagRECT** structure. (The name                     **tagRECT** is a less-commonly-used name for the                     `RECT` structure.) This means that the data members (                    **left**,                     **top**,                     **right**, and                     **bottom**) of the                     `RECT` structure are accessible data members of                     `CRect`.  
  
 A                 `CRect` contains member variables that define the top-left and bottom-right points of a rectangle.  
  
 When specifying a                 `CRect`, you must be careful to construct it so that it is normalized — in other words, such that the value of the left coordinate is less than the right and the top is less than the bottom. For example, a top left of (10,10) and bottom right of (20,20) defines a normalized rectangle but a top left of (20,20) and bottom right of (10,10) defines a non-normalized rectangle. If the rectangle is not normalized, many                 `CRect` member functions may return incorrect results. (See  [CRect::NormalizeRect](#crect__normalizerect) for a list of these functions.) Before you call a function that requires normalized rectangles, you can normalize non-normalized rectangles by calling the                 `NormalizeRect` function.  
  
 Use caution when manipulating a                 `CRect` with the  [CDC::DPtoLP](../Topic/CDC::DPtoLP.md) and  [CDC::LPtoDP](../Topic/CDC::LPtoDP.md) member functions. If the mapping mode of a display context is such that the y-extent is negative, as in                 `MM_LOENGLISH`, then                 `CDC::DPtoLP` will transform the                 `CRect` so that its top is greater than the bottom. Functions such as                 **Height** and                 **Size** will then return negative values for the height of the transformed                 `CRect`, and the rectangle will be non-normalized.  
  
 When using overloaded                 `CRect` operators, the first operand must be a                 `CRect`; the second can be either a RECT structure or a                 `CRect` object.  
  
> [!NOTE]
>  For more information on shared utility classes (like                     `CRect`), see  [Shared Classes](../atl/atl-mfc-shared-classes.md).  
  
## Inheritance Hierarchy  
 `tagRECT`  
  
 `CRect`  
  
## Requirements  
 **Header:** atltypes.h  
  
##  <a name="crect__bottomright"></a>  CRect::BottomRight  
 The coordinates are returned as a reference to a  [CPoint](../atl/cpoint-class.md) object that is contained in                 `CRect`.  
  
```  
  
CPoint& BottomRight() throw();  
const CPoint& BottomRight() const throw();  
  
```  
  
### Return Value  
 The coordinates of the bottom-right corner of the rectangle.  
  
### Remarks  
 You can use this function to either get or set the bottom-right corner of the rectangle. Set the corner by using this function on the left side of the assignment operator.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#35](../atl/codesnippet/CPP/crect-class_1.cpp)]  
  
##  <a name="crect__centerpoint"></a>  CRect::CenterPoint  
 Calculates the centerpoint of                 `CRect` by adding the left and right values and dividing by two, and adding the top and bottom values and dividing by two.  
  
```  
CPoint CenterPoint() const throw();  
```  
  
### Return Value  
 A                         `CPoint` object that is the centerpoint of                         `CRect`.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#36](../atl/codesnippet/CPP/crect-class_2.cpp)]  
  
##  <a name="crect__copyrect"></a>  CRect::CopyRect  
 Copies the                 `lpSrcRect` rectangle into                 `CRect`.  
  
```  
  
void CopyRect(  
LPCRECT   
lpSrcRect   
) throw();  
  
```  
  
### Parameters  
 `lpSrcRect`  
 Points to the RECT structure or                                 `CRect` object that is to be copied.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#37](../atl/codesnippet/CPP/crect-class_3.cpp)]  
  
##  <a name="crect__crect"></a>  CRect::CRect  
 Constructs a                 `CRect` object.  
  
```  
  
 CRect() throw();  
 CRect(  
 int   
 l  
,  
 int   
 t  
,  
 int   
 r  
,  
 int   
 b   
 ) throw();  
 CRect(  
 const RECT&   
 srcRect   
 ) throw();  
 CRect(  
 LPCRECT   
 lpSrcRect   
 ) throw();  
 CRect(  
 POINT   
 point  
,  
 SIZE   
 size   
 ) throw();  
 CRect(  
 POINT   
 topLeft  
,  
 POINT   
 bottomRight   
 ) throw();  
  
```  
  
### Parameters  
 *l*  
 Specifies the left position of                                 `CRect`.  
  
 *t*  
 Specifies the top of                                 `CRect`.  
  
 *r*  
 Specifies the right position of                                 `CRect`.  
  
 *b*  
 Specifies the bottom of                                 `CRect`.  
  
 *srcRect*  
 Refers to the RECT structure with the coordinates for                                 `CRect`.  
  
 `lpSrcRect`  
 Points to the                                 `RECT` structure with the coordinates for                                 `CRect`.  
  
 `point`  
 Specifies the origin point for the rectangle to be constructed. Corresponds to the top-left corner.  
  
 `size`  
 Specifies the displacement from the top-left corner to the bottom-right corner of the rectangle to be constructed.  
  
 *topLeft*  
 Specifies the top-left position of                                 `CRect`.  
  
 *bottomRight*  
 Specifies the bottom-right position of                                 `CRect`.  
  
### Remarks  
 If no arguments are given,                         **left**,                         **top**,                         **right**, and                         **bottom** members are not initialized.  
  
 The                         `CRect`(                        **const RECT&**) and                         `CRect`(                        **LPCRECT**) constructors perform a  [CopyRect](#crect__copyrect). The other constructors initialize the member variables of the object directly.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#38](../atl/codesnippet/CPP/crect-class_4.cpp)]  
  
##  <a name="crect__deflaterect"></a>  CRect::DeflateRect  
 `DeflateRect` deflates                 `CRect` by moving its sides toward its center.  
  
```  
  
 void DeflateRect(  
 int   
 x  
,  
 int   
 y   
 ) throw();  
 void DeflateRect(  
 SIZE   
 size   
 ) throw();  
 void DeflateRect(  
 LPCRECT   
 lpRect   
 ) throw();  
 void DeflateRect(  
 int   
 l  
,  
 int   
 t  
,  
 int   
 r  
,  
 int   
 b   
 ) throw();  
  
```  
  
### Parameters  
 *x*  
 Specifies the number of units to deflate the left and right sides of                                 `CRect`.  
  
 *y*  
 Specifies the number of units to deflate the top and bottom of                                 `CRect`.  
  
 `size`  
 A  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) or  [CSize](../atl/csize-class.md) that specifies the number of units to deflate                                 `CRect`. The                                 `cx` value specifies the number of units to deflate the left and right sides and the                                 `cy` value specifies the number of units to deflate the top and bottom.  
  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` that specifies the number of units to deflate each side.  
  
 *l*  
 Specifies the number of units to deflate the left side of                                 `CRect`.  
  
 *t*  
 Specifies the number of units to deflate the top of                                 `CRect`.  
  
 *r*  
 Specifies the number of units to deflate the right side of                                 `CRect`.  
  
 *b*  
 Specifies the number of units to deflate the bottom of                                 `CRect`.  
  
### Remarks  
 To do this,                         `DeflateRect` adds units to the left and top and subtracts units from the right and bottom. The parameters of                         `DeflateRect` are signed values; positive values deflate                         `CRect` and negative values inflate it.  
  
 The first two overloads deflate both pairs of opposite sides of                         `CRect` so that its total width is decreased by two times                         *x* (or                         `cx`) and its total height is decreased by two times                         *y* (or                         `cy`). The other two overloads deflate each side of                         `CRect` independently of the others.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#39](../atl/codesnippet/CPP/crect-class_5.cpp)]  
  
##  <a name="crect__equalrect"></a>  CRect::EqualRect  
 Determines whether                 `CRect` is equal to the given rectangle.  
  
```  
  
BOOL EqualRect(  
LPCRECT   
lpRect   
) const throw();  
  
```  
  
### Parameters  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` object that contains the upper-left and lower-right corner coordinates of a rectangle.  
  
### Return Value  
 Nonzero if the two rectangles have the same top, left, bottom, and right values; otherwise 0.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#40](../atl/codesnippet/CPP/crect-class_6.cpp)]  
  
##  <a name="crect__height"></a>  CRect::Height  
 Calculates the height of                 `CRect` by subtracting the top value from the bottom value.  
  
```  
int Height() const throw();  
```  
  
### Return Value  
 The height of                         `CRect`.  
  
### Remarks  
 The resulting value can be negative.  
  
> [!NOTE]
>  The rectangle must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangle before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#41](../atl/codesnippet/CPP/crect-class_7.cpp)]  
  
##  <a name="crect__inflaterect"></a>  CRect::InflateRect  
 `InflateRect` inflates                 `CRect` by moving its sides away from its center.  
  
```  
  
 void InflateRect(  
 int   
 x  
,  
 int   
 y   
 ) throw();  
 void InflateRect(  
 SIZE   
 size   
 ) throw();  
 void InflateRect(  
 LPCRECT   
 lpRect   
 ) throw();  
 void InflateRect(  
 int   
 l  
,  
 int   
 t  
,  
 int   
 r  
,  
 int   
 b   
 ) throw();  
  
```  
  
### Parameters  
 *x*  
 Specifies the number of units to inflate the left and right sides of                                 `CRect`.  
  
 *y*  
 Specifies the number of units to inflate the top and bottom of                                 `CRect`.  
  
 `size`  
 A  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) or  [CSize](../atl/csize-class.md) that specifies the number of units to inflate                                 `CRect`. The                                 `cx` value specifies the number of units to inflate the left and right sides and the                                 `cy` value specifies the number of units to inflate the top and bottom.  
  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` that specifies the number of units to inflate each side.  
  
 *l*  
 Specifies the number of units to inflate the left side of                                 `CRect`.  
  
 *t*  
 Specifies the number of units to inflate the top of                                 `CRect`.  
  
 *r*  
 Specifies the number of units to inflate the right side of                                 `CRect`.  
  
 *b*  
 Specifies the number of units to inflate the bottom of                                 `CRect`.  
  
### Remarks  
 To do this,                         `InflateRect` subtracts units from the left and top and adds units to the right and bottom. The parameters of                         `InflateRect` are signed values; positive values inflate                         `CRect` and negative values deflate it.  
  
 The first two overloads inflate both pairs of opposite sides of                         `CRect` so that its total width is increased by two times                         *x* (or                         `cx`) and its total height is increased by two times                         *y* (or                         `cy`). The other two overloads inflate each side of                         `CRect` independently of the others.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#42](../atl/codesnippet/CPP/crect-class_8.cpp)]  
  
##  <a name="crect__intersectrect"></a>  CRect::IntersectRect  
 Makes a                 `CRect` equal to the intersection of two existing rectangles.  
  
```  
  
 BOOL IntersectRect(  
 LPCRECT   
 lpRect1  
,  
 LPCRECT   
 lpRect2   
 ) throw();  
  
```  
  
### Parameters  
 `lpRect1`  
 Points to a RECT structure or                                 `CRect` object that contains a source rectangle.  
  
 `lpRect2`  
 Points to a                                 `RECT` structure or                                 `CRect` object that contains a source rectangle.  
  
### Return Value  
 Nonzero if the intersection is not empty; 0 if the intersection is empty.  
  
### Remarks  
 The intersection is the largest rectangle contained in both existing rectangles.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#43](../atl/codesnippet/CPP/crect-class_9.cpp)]  
  
##  <a name="crect__isrectempty"></a>  CRect::IsRectEmpty  
 Determines whether                 `CRect` is empty.  
  
```  
BOOL IsRectEmpty() const throw();  
```  
  
### Return Value  
 Nonzero if                         `CRect` is empty; 0 if                         `CRect` is not empty.  
  
### Remarks  
 A rectangle is empty if the width and/or height are 0 or negative. Differs from                         `IsRectNull`, which determines whether all coordinates of the rectangle are zero.  
  
> [!NOTE]
>  The rectangle must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangle before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#44](../atl/codesnippet/CPP/crect-class_10.cpp)]  
  
##  <a name="crect__isrectnull"></a>  CRect::IsRectNull  
 Determines whether the top, left, bottom, and right values of                 `CRect` are all equal to 0.  
  
```  
BOOL IsRectNull() const throw();  
```  
  
### Return Value  
 Nonzero if                         `CRect`'s top, left, bottom, and right values are all equal to 0; otherwise 0.  
  
### Remarks  
 Differs from                         `IsRectEmpty`, which determines whether the rectangle is empty.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#45](../atl/codesnippet/CPP/crect-class_11.cpp)]  
  
##  <a name="crect__movetox"></a>  CRect::MoveToX  
 Call this function to move the rectangle to the absolute x-coordinate specified by                 *x*.  
  
```  
  
void MoveToX(  
int   
x   
) throw();  
  
```  
  
### Parameters  
 *x*  
 The absolute x-coordinate for the upper-left corner of the rectangle.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#46](../atl/codesnippet/CPP/crect-class_12.cpp)]  
  
##  <a name="crect__movetoxy"></a>  CRect::MoveToXY  
 Call this function to move the rectangle to the absolute x- and y-coordinates specified.  
  
```  
  
 void MoveToXY(  
 int   
 x  
,  
 int   
 y   
 ) throw();  
 void MoveToXY(  
 POINT   
 point   
 ) throw();  
  
```  
  
### Parameters  
 *x*  
 The absolute x-coordinate for the upper-left corner of the rectangle.  
  
 *y*  
 The absolute y-coordinate for the upper-left corner of the rectangle.  
  
 `point`  
 A                                 **POINT** structure specifying the absolute upper-left corner of the rectangle.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#47](../atl/codesnippet/CPP/crect-class_13.cpp)]  
  
##  <a name="crect__movetoy"></a>  CRect::MoveToY  
 Call this function to move the rectangle to the absolute y-coordinate specified by                 *y*.  
  
```  
  
void MoveToY(  
int   
y   
) throw();  
  
```  
  
### Parameters  
 *y*  
 The absolute y-coordinate for the upper-left corner of the rectangle.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#48](../atl/codesnippet/CPP/crect-class_14.cpp)]  
  
##  <a name="crect__normalizerect"></a>  CRect::NormalizeRect  
 Normalizes                 `CRect` so that both the height and width are positive.  
  
```  
void NormalizeRect() throw();  
```  
  
### Remarks  
 The rectangle is normalized for fourth-quadrant positioning, which Windows typically uses for coordinates.                         `NormalizeRect` compares the top and bottom values, and swaps them if the top is greater than the bottom. Similarly, it swaps the left and right values if the left is greater than the right. This function is useful when dealing with different mapping modes and inverted rectangles.  
  
> [!NOTE]
>  The following                             `CRect` member functions require normalized rectangles in order to work properly:  [Height](#crect__height),  [Width](#crect__width),  [Size](#crect__size),  [IsRectEmpty](#crect__isrectempty),  [PtInRect](#crect__ptinrect),  [EqualRect](#crect__equalrect),  [UnionRect](#crect__unionrect),  [IntersectRect](#crect__intersectrect),  [SubtractRect](#crect__subtractrect),  [operator ==](#crect__operator__eq_eq),  [operator !=](#crect__operator__neq),  [operator &#124;](#crect__operator__or),  [operator &#124;=](#crect__operator__or_eq),  [operator &](#crect__operator__amp_), and  [operator &=](#crect__operator__amp__eq).  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#49](../atl/codesnippet/CPP/crect-class_15.cpp)]  
  
##  <a name="crect__offsetrect"></a>  CRect::OffsetRect  
 Moves                 `CRect` by the specified offsets.  
  
```  
  
 void OffsetRect(  
 int   
 x  
,  
 int   
 y   
 ) throw();  
 void OffsetRect(  
 POINT   
 point   
 ) throw();  
 void OffsetRect(  
 SIZE   
 size   
 ) throw();  
  
```  
  
### Parameters  
 *x*  
 Specifies the amount to move left or right. It must be negative to move left.  
  
 *y*  
 Specifies the amount to move up or down. It must be negative to move up.  
  
 `point`  
 Contains a  [POINT](../mfcref/point-structure1.md) structure or  [CPoint](../atl/cpoint-class.md) object specifying both dimensions by which to move.  
  
 `size`  
 Contains a  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure or  [CSize](../atl/csize-class.md) object specifying both dimensions by which to move.  
  
### Remarks  
 Moves                         `CRect`*x* units along the x-axis and                         *y* units along the y-axis. The                         *x* and                         *y* parameters are signed values, so                         `CRect` can be moved left or right and up or down.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#50](../atl/codesnippet/CPP/crect-class_16.cpp)]  
  
##  <a name="crect__operator_lpcrect"></a>  CRect::operator LPCRECT  
 Converts a                 `CRect` to an  [LPCRECT](../mfcref/data-types--mfc-.md).  
  
```  
operator LPCRECT() const throw();  
```  
  
### Remarks  
 When you use this function, you don't need the address-of (                        **&**) operator. This operator will be automatically used when you pass a                         `CRect` object to a function that expects an                         **LPCRECT**.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#58](../atl/codesnippet/CPP/crect-class_17.cpp)]  
  
##  <a name="crect__operator_lprect"></a>  CRect::operator LPRECT  
 Converts a                 `CRect` to an  [LPRECT](../mfcref/data-types--mfc-.md).  
  
```  
operator LPRECT() throw();  
```  
  
### Remarks  
 When you use this function, you don't need the address-of (                        **&**) operator. This operator will be automatically used when you pass a                         `CRect` object to a function that expects an                         `LPRECT`.  
  
### Example  
 See the example for  [CRect::operator LPCRECT](#crect__operator_lpcrect).  
  
##  <a name="crect__operator__eq"></a>  CRect::operator =  
 Assigns                 *srcRect* to                 `CRect`.  
  
```  
  
void operator =(  
const RECT&   
srcRect   
) throw();  
  
```  
  
### Parameters  
 *srcRect*  
 Refers to a source rectangle. Can be a RECT or                                 `CRect`.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#59](../atl/codesnippet/CPP/crect-class_18.cpp)]  
  
##  <a name="crect__operator__eq_eq"></a>  CRect::operator ==  
 Determines whether                 `rect` is equal to                 `CRect` by comparing the coordinates of their upper-left and lower-right corners.  
  
```  
  
BOOL operator ==(  
const RECT&   
rect   
) const throw();  
  
```  
  
### Parameters  
 `rect`  
 Refers to a source rectangle. Can be a RECT or                                 `CRect`.  
  
### Return Value  
 Nonzero if equal; otherwise 0.  
  
### Remarks  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#60](../atl/codesnippet/CPP/crect-class_19.cpp)]  
  
##  <a name="crect__operator__neq"></a>  CRect::operator !=  
 Determines whether                 `rect` is not equal to                 `CRect` by comparing the coordinates of their upper-left and lower-right corners.  
  
```  
  
BOOL operator!=(  
const RECT&   
rect   
) const throw();  
  
```  
  
### Parameters  
 `rect`  
 Refers to a source rectangle. Can be a RECT or                                 `CRect`.  
  
### Return Value  
 Nonzero if not equal; otherwise 0.  
  
### Remarks  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#61](../atl/codesnippet/CPP/crect-class_20.cpp)]  
  
##  <a name="crect__operator__add_eq"></a>  CRect::operator +=  
 The first two overloads move                 `CRect` by the specified offsets.  
  
```  
  
void operator +=(  
POINT   
point   
) throw();  
void operator +=(  
SIZE   
size   
) throw();  
void operator +=(  
LPCRECT   
lpRect   
) throw();  
  
```  
  
### Parameters  
 `point`  
 A  [POINT](../mfcref/point-structure1.md) structure or  [CPoint](../atl/cpoint-class.md) object that specifies the number of units to move the rectangle.  
  
 `size`  
 A  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure or  [CSize](../atl/csize-class.md) object that specifies the number of units to move the rectangle.  
  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` object that contains the number of units to inflate each side of                                 `CRect`.  
  
### Remarks  
 The parameter's                         *x* and                         *y* (or                         `cx` and                         `cy`) values are added to                         `CRect`.  
  
 The third overload inflates                         `CRect` by the number of units specifed in each member of the parameter.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#62](../atl/codesnippet/CPP/crect-class_21.cpp)]  
  
##  <a name="crect__operator_-_eq"></a>  CRect::operator -=  
 The first two overloads move                 `CRect` by the specified offsets.  
  
```  
  
void operator -=(  
POINT   
point   
) throw();  
void operator -=(  
SIZE   
size   
) throw();  
void operator -=(  
LPCRECT   
lpRect   
) throw();  
  
```  
  
### Parameters  
 `point`  
 A  [POINT](../mfcref/point-structure1.md) structure or  [CPoint](../atl/cpoint-class.md) object that specifies the number of units to move the rectangle.  
  
 `size`  
 A  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure or  [CSize](../atl/csize-class.md) object that specifies the number of units to move the rectangle.  
  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` object that contains the number of units to deflate each side of                                 `CRect`.  
  
### Remarks  
 The parameter's                         *x* and                         *y* (or                         `cx` and                         `cy`) values are subtracted from                         `CRect`.  
  
 The third overload deflates                         `CRect` by the number of units specifed in each member of the parameter. Note that this overload functions like  [DeflateRect](#crect__deflaterect).  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#63](../atl/codesnippet/CPP/crect-class_22.cpp)]  
  
##  <a name="crect__operator__amp__eq"></a>  CRect::operator &amp;=  
 Sets                 `CRect` equal to the intersection of                 `CRect` and                 `rect`.  
  
```  
  
void operator&=(  
const RECT&   
rect   
) throw();  
  
```  
  
### Parameters  
 `rect`  
 Contains a RECT or                                 `CRect`.  
  
### Remarks  
 The intersection is the largest rectangle that is contained in both rectangles.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 See the example for  [CRect::IntersectRect](#crect__intersectrect).  
  
##  <a name="crect__operator__or_eq"></a>  CRect::operator &#124;=  
 Sets                 `CRect` equal to the union of                 `CRect` and                 `rect`.  
  
```  
  
void operator|=(  
const RECT&   
rect   
) throw();  
  
```  
  
### Parameters  
 `rect`  
 Contains a                                 `CRect` or RECT.  
  
### Remarks  
 The union is the smallest rectangle that contains both source rectangles.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#64](../atl/codesnippet/CPP/crect-class_23.cpp)]  
  
##  <a name="crect__operator__add"></a>  CRect::operator +  
 The first two overloads return a                 `CRect` object that is equal to                 `CRect` displaced by the specified offsets.  
  
```  
  
CRect operator +(  
POINT   
point   
) const throw();  
CRect operator +(  
LPCRECT   
lpRect   
) const throw();  
CRect operator +(  
SIZE   
size   
) const throw();  
  
```  
  
### Parameters  
 `point`  
 A  [POINT](../mfcref/point-structure1.md) structure or  [CPoint](../atl/cpoint-class.md) object that specifies the number of units to move the return value.  
  
 `size`  
 A  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure or  [CSize](../atl/csize-class.md) object that specifies the number of units to move the return value.  
  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` object that contains the number of units to inflate each side of the return value.  
  
### Return Value  
 The                         `CRect` resulting from moving or inflating                         `CRect` by the number of units specified in the parameter.  
  
### Remarks  
 The parameter's                         *x* and                         *y* (or                         `cx` and                         `cy`) parameters are added to                         `CRect`'s position.  
  
 The third overload returns a new                         `CRect` that is equal to                         `CRect` inflated by the number of units specifed in each member of the parameter.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#65](../atl/codesnippet/CPP/crect-class_24.cpp)]  
  
##  <a name="crect__operator_-"></a>  CRect::operator -  
 The first two overloads return a                 `CRect` object that is equal to                 `CRect` displaced by the specified offsets.  
  
```  
  
CRect operator -(  
POINT   
point   
) const throw();  
CRect operator -(  
SIZE   
size   
) const throw();  
CRect operator -(  
LPCRECT   
lpRect   
) const throw();  
  
```  
  
### Parameters  
 `point`  
 A  [POINT](../mfcref/point-structure1.md) structure or                                 `CPoint` object that specifies the number of units to move the return value.  
  
 `size`  
 A  [SIZE](http://msdn.microsoft.com/library/windows/desktop/dd145106) structure or                                 `CSize` object that specifies the number of units to move the return value.  
  
 `lpRect`  
 Points to a RECT structure or                                 `CRect` object that contains the number of units to deflate each side of the return value.  
  
### Return Value  
 The                         `CRect` resulting from moving or deflating                         `CRect` by the number of units specified in the parameter.  
  
### Remarks  
 The parameter's                         *x* and                         *y* (or                         `cx` and                         `cy`) parameters are subtracted from                         `CRect`'s position.  
  
 The third overload returns a new                         `CRect` that is equal to                         `CRect` deflated by the number of units specifed in each member of the parameter. Note that this overload functions like  [DeflateRect](#crect__deflaterect), not  [SubtractRect](#crect__subtractrect).  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#66](../atl/codesnippet/CPP/crect-class_25.cpp)]  
  
##  <a name="crect__operator__amp_"></a>  CRect::operator &amp;  
 Returns a                 `CRect` that is the intersection of                 `CRect` and                 *rect2*.  
  
```  
  
CRect operator&(  
const RECT&   
rect2   
) const throw();  
  
```  
  
### Parameters  
 *rect2*  
 Contains a RECT or                                 `CRect`.  
  
### Return Value  
 A                         `CRect` that is the intersection of                         `CRect` and                         *rect2*.  
  
### Remarks  
 The intersection is the largest rectangle that is contained in both rectangles.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#67](../atl/codesnippet/CPP/crect-class_26.cpp)]  
  
##  <a name="crect__operator__or"></a>  CRect::operator &#124;  
 Returns a                 `CRect` that is the union of                 `CRect` and                 *rect2*.  
  
```  
  
CRect operator|(  
const RECT&   
rect2   
) const throw();  
  
```  
  
### Parameters  
 *rect2*  
 Contains a RECT or                                 `CRect`.  
  
### Return Value  
 A                         `CRect` that is the union of                         `CRect` and                         *rect2*.  
  
### Remarks  
 The union is the smallest rectangle that contains both rectangles.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#68](../atl/codesnippet/CPP/crect-class_27.cpp)]  
  
##  <a name="crect__ptinrect"></a>  CRect::PtInRect  
 Determines whether the specified point lies within                 `CRect`.  
  
```  
  
BOOL PtInRect(  
POINT   
point   
) const throw();  
  
```  
  
### Parameters  
 `point`  
 Contains a  [POINT](../mfcref/point-structure1.md) structure or  [CPoint](../atl/cpoint-class.md) object.  
  
### Return Value  
 Nonzero if the point lies within                         `CRect`; otherwise 0.  
  
### Remarks  
 A point is within                         `CRect` if it lies on the left or top side or is within all four sides. A point on the right or bottom side is outside                         `CRect`.  
  
> [!NOTE]
>  The rectangle must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangle before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#51](../atl/codesnippet/CPP/crect-class_28.cpp)]  
  
##  <a name="crect__setrect"></a>  CRect::SetRect  
 Sets the dimensions of                 `CRect` to the specified coordinates.  
  
```  
  
 void SetRect(  
 int   
 x1  
,  
 int   
 y1  
,  
 int   
 x2  
,  
 int   
 y2   
 ) throw();  
  
```  
  
### Parameters  
 `x1`  
 Specifies the x-coordinate of the upper-left corner.  
  
 `y1`  
 Specifies the y-coordinate of the upper-left corner.  
  
 `x2`  
 Specifies the x-coordinate of the lower-right corner.  
  
 `y2`  
 Specifies the y-coordinate of the lower-right corner.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#52](../atl/codesnippet/CPP/crect-class_29.cpp)]  
  
##  <a name="crect__setrectempty"></a>  CRect::SetRectEmpty  
 Makes                 `CRect` a null rectangle by setting all coordinates to zero.  
  
```  
void SetRectEmpty() throw();  
```  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#53](../atl/codesnippet/CPP/crect-class_30.cpp)]  
  
##  <a name="crect__size"></a>  CRect::Size  
 The                 `cx` and                 `cy` members of the return value contain the height and width of                 `CRect`.  
  
```  
CSize Size() const throw();  
```  
  
### Return Value  
 A  [CSize](../atl/csize-class.md) object that contains the size of                         `CRect`.  
  
### Remarks  
 Either the height or width can be negative.  
  
> [!NOTE]
>  The rectangle must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangle before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#54](../atl/codesnippet/CPP/crect-class_31.cpp)]  
  
##  <a name="crect__subtractrect"></a>  CRect::SubtractRect  
 Makes the dimensions of the                 **CRect** equal to the subtraction of                 `lpRectSrc2` from                 `lpRectSrc1`.  
  
```  
  
 BOOL SubtractRect(  
 LPCRECT   
 lpRectSrc1  
,  
 LPCRECT   
 lpRectSrc2   
 ) throw();  
  
```  
  
### Parameters  
 `lpRectSrc1`  
 Points to the RECT structure or                                 `CRect` object from which a rectangle is to be subtracted.  
  
 `lpRectSrc2`  
 Points to the                                 `RECT` structure or                                 `CRect` object that is to be subtracted from the rectangle pointed to by the                                 `lpRectSrc1` parameter.  
  
### Return Value  
 Nonzero if the function is successful; otherwise 0.  
  
### Remarks  
 The subtraction is the smallest rectangle that contains all of the points in                         `lpRectScr1` that are not in the intersection of                         `lpRectScr1` and                         *lpRectScr2*.  
  
 The rectangle specified by                         `lpRectSrc1` will be unchanged if the rectangle specified by                         `lpRectSrc2` doesn't completely overlap the rectangle specified by                         *lpRectSrc1* in at least one of the x- or y-directions.  
  
 For example, if                         `lpRectSrc1` were (10,10, 100,100) and                         `lpRectSrc2` were (50,50, 150,150), the rectangle pointed to by                         `lpRectSrc1` would be unchanged when the function returned. If                         `lpRectSrc1` were (10,10, 100,100) and                         `lpRectSrc2` were (50,10, 150,150), however, the rectangle pointed to by                         `lpRectSrc1` would contain the coordinates (10,10, 50,100) when the function returned.  
  
 `SubtractRect` is not the same as  [operator -](#crect__operator_-) nor  [operator -=](#crect__operator_-_eq). Neither of these operators ever calls                         `SubtractRect`.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#55](../atl/codesnippet/CPP/crect-class_32.cpp)]  
  
##  <a name="crect__topleft"></a>  CRect::TopLeft  
 The coordinates are returned as a reference to a  [CPoint](../atl/cpoint-class.md) object that is contained in                 `CRect`.  
  
```  
  
CPoint& TopLeft() throw();  
const CPoint& TopLeft() const throw();  
  
```  
  
### Return Value  
 The coordinates of the top-left corner of the rectangle.  
  
### Remarks  
 You can use this function to either get or set the top-left corner of the rectangle. Set the corner by using this function on the left side of the assignment operator.  
  
### Example  
 See the example for  [CRect::CenterPoint](#crect__centerpoint).  
  
##  <a name="crect__unionrect"></a>  CRect::UnionRect  
 Makes the dimensions of                 `CRect` equal to the union of the two source rectangles.  
  
```  
  
 BOOL UnionRect(  
 LPCRECT   
 lpRect1  
,  
 LPCRECT   
 lpRect2   
 ) throw();  
  
```  
  
### Parameters  
 `lpRect1`  
 Points to a RECT or                                 `CRect` that contains a source rectangle.  
  
 `lpRect2`  
 Points to a                                 `RECT` or                                 `CRect` that contains a source rectangle.  
  
### Return Value  
 Nonzero if the union is not empty; 0 if the union is empty.  
  
### Remarks  
 The union is the smallest rectangle that contains both source rectangles.  
  
 Windows ignores the dimensions of an empty rectangle; that is, a rectangle that has no height or has no width.  
  
> [!NOTE]
>  Both of the rectangles must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangles before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#56](../atl/codesnippet/CPP/crect-class_33.cpp)]  
  
##  <a name="crect__width"></a>  CRect::Width  
 Calculates the width of                 `CRect` by subtracting the left value from the right value.  
  
```  
int Width() const throw();  
```  
  
### Return Value  
 The width of                         `CRect`.  
  
### Remarks  
 The width can be negative.  
  
> [!NOTE]
>  The rectangle must be normalized or this function may fail. You can call  [NormalizeRect](#crect__normalizerect) to normalize the rectangle before calling this function.  
  
### Example  
 [!code[NVC_ATLMFC_Utilities#57](../atl/codesnippet/CPP/crect-class_34.cpp)]  
  
## See Also  
 [Hierarchy Chart](../mfc/hierarchy-chart.md)   
 [CPoint Class](../atl/cpoint-class.md)   
 [CSize Class](../atl/csize-class.md)