---
title: "CComCurrency Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComCurrency"
  - "ATL.CComCurrency"
  - "ATL::CComCurrency"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComCurrency class"
ms.assetid: a1c3d10a-bba6-40cc-8bcf-aed9023c8a9e
caps.latest.revision: 21
author: "mikeblome"
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
# CComCurrency Class
`CComCurrency` has methods and operators for creating and managing a CURRENCY object.  
  
## Syntax  
  
```
class CComCurrency
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComCurrency::CComCurrency](#ccomcurrency__ccomcurrency)|The constructor for a `CComCurrency` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComCurrency::GetCurrencyPtr](#ccomcurrency__getcurrencyptr)|Returns the address of an `m_currency` data member.|  
|[CComCurrency::GetFraction](#ccomcurrency__getfraction)|Call this method to return the fractional component of a `CComCurrency` object.|  
|[CComCurrency::GetInteger](#ccomcurrency__getinteger)|Call this method to return the integer component of a `CComCurrency` object.|  
|[CComCurrency::Round](#ccomcurrency__round)|Call this method to round a `CComCurrency` object to the nearest integer value.|  
|[CComCurrency::SetFraction](#ccomcurrency__setfraction)|Call this method to set the fractional component of a `CComCurrency` object.|  
|[CComCurrency::SetInteger](#ccomcurrency__setinteger)|Call this method to set the integer component of a `CComCurrency` object.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CComCurrency::operator -](#ccomcurrency__operator_-)|This operator is used to perform subtraction on a `CComCurrency` object.|  
|[CComCurrency::operator !=](#ccomcurrency__operator_neq)|Compares two `CComCurrency` objects for inequality.|  
|[CComCurrency::operator *](#ccomcurrency__operator_star)|This operator is used to perform multiplication on a `CComCurrency` object.|  
|[CComCurrency::operator *=](#ccomcurrency__operator_star_eq)|This operator is used to perform multiplication on a `CComCurrency` object and assign it the result.|  
|[CComCurrency::operator /](#ccomcurrency__operator_div)|This operator is used to perform division on a `CComCurrency` object.|  
|[CComCurrency::operator /=](#ccomcurrency__operator_div_eq)|This operator is used to perform division on a `CComCurrency` object and assign it the result.|  
|[CComCurrency::operator +](#ccomcurrency__operator_add)|This operator is used to perform addition on a `CComCurrency` object.|  
|[CComCurrency::operator +=](#ccomcurrency__operator_add_eq)|This operator is used to perform addition on a `CComCurrency` object and assign the result to the current object.|  
|[CComCurrency::operator <](#ccomcurrency__operator_lt)|This operator compares two `CComCurrency` objects to determine the lesser.|  
|[CComCurrency::operator <=](#ccomcurrency__operator_lt_eq)|This operator compares two `CComCurrency` objects to determine equality or the lesser.|  
|[CComCurrency::operator =](#ccomcurrency__operator_eq)|This operator assigns the `CComCurrency` object to a new value.|  
|[CComCurrency::operator -=](#ccomcurrency__operator_-_eq)|This operator is used to perform subtraction on a `CComCurrency` object and assign it the result.|  
|[CComCurrency::operator ==](#ccomcurrency__operator_eq_eq)|This operator compares two `CComCurrency` objects for equality.|  
|[CComCurrency::operator >](#ccomcurrency__operator_gt)|This operator compares two `CComCurrency` objects to determine the larger.|  
|[CComCurrency::operator >=](#ccomcurrency__operator_gt_eq)|This operator compares two `CComCurrency` objects to determine equality or the larger.|  
|[CComCurrency::operator CURRENCY](#ccomcurrency__operator_currency)|Casts a `CURRENCY` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CComCurrency::m_currency](#ccomcurrency__m_currency)|The `CURRENCY` variable created by your class instance.|  
  
## Remarks  
 `CComCurrency` is a wrapper for the **CURRENCY** data type. **CURRENCY** is implemented as an 8-byte two's-complement integer value scaled by 10,000. This gives a fixed-point number with 15 digits to the left of the decimal point and 4 digits to the right. The **CURRENCY** data type is extremely useful for calculations involving money, or for any fixed-point calculations where accuracy is important.  
  
 The **CComCurrency** wrapper implements arithmetic, assignment, and comparison operations for this fixed-point type. The supported applications have been selected to control the rounding errors that can occur during fixed-point calculations.  
  
 The `CComCurrency` object provides access to the numbers on either side of the decimal point in the form of two components: an integer component which stores the value to the left of the decimal point, and a fractional component which stores the value to the right of the decimal point. The fractional component is stored internally as an integer value between -9999 ( **CY_MIN_FRACTION**) and +9999 ( **CY_MAX_FRACTION**). The method [CComCurrency::GetFraction](#ccomcurrency__getfraction) returns a value scaled by a factor of 10000 ( **CY_SCALE**).  
  
 When specifying the integer and fractional components of a **CComCurrency** object, remember that the fractional component is a number in the range 0 to 9999. This is important when dealing with a currency such as the US dollar that expresses amounts using only two significant digits after the decimal point. Even though the last two digits are not displayed, they must be taken into account.  
  
|Value|Possible CComCurrency assignments|  
|-----------|---------------------------------------|  
|$10.50|CComCurrency(10,5000) *or* CComCurrency(10.50)|  
|$10.05|CComCurrency(10,500) *or* CComCurrency(10.05)|  
  
 The values **CY_MIN_FRACTION**, **CY_MAX_FRACTION**, and **CY_SCALE** are defined in atlcur.h.  
  
## Requirements  
 **Header:** atlcur.h  
  
##  <a name="ccomcurrency__ccomcurrency"></a>  CComCurrency::CComCurrency  
 The constructor.  
  
```
CComCurrency() throw();
CComCurrency(
 const CComCurrency& curSrc) throw();
CComCurrency(
 CURRENCY  cySrc) throw();
CComCurrency(
 DECIMAL  dSrc);

    CComCurrency(
 ULONG  ulSrc);

    CComCurrency(
 USHORT  usSrc);

    CComCurrency(
 CHAR  cSrc);

    CComCurrency(
 DOUBLE  dSrc);

    CComCurrency(
 FLOAT  fSrc);

    CComCurrency(
 LONG  lSrc);

    CComCurrency(
 SHORT  sSrc);

    CComCurrency(
 BYTE  bSrc);

    CComCurrency(
 LONGLONG  nInteger,
    SHORT nFraction);

    explicit CComCurrency(
    LPDISPATCH pDispSrc);

    explicit CComCurrency(
    const VARIANT& varSrc);

    explicit CComCurrency(
    LPCWSTR szSrc);

    explicit CComCurrency(
    LPCSTR szSrc);
```  
  
### Parameters  
 `curSrc`  
 An existing `CComCurrency` object.  
  
 `cySrc`  
 A variable of type **CURRENCY**.  
  
 `bSrc`, `dSrc`, `fSrc`, `lSrc`, *sSrc*, *ulSrc, usSrc*  
 The initial value given to the member variable `m_currency`.  
  
 `cSrc`  
 A character containing the initial value given to the member variable `m_currency`.  
  
 `nInteger`, *nFraction*  
 The integer and fractional components of the initial monetary value. See the [CComCurrency](../../atl/reference/ccomcurrency-class.md) overview for more information.  
  
 `pDispSrc`  
 An `IDispatch` pointer.  
  
 *varSrc*  
 A variable of type **VARIANT**. The locale of the current thread is used to perform the conversion.  
  
 `szSrc`  
 A Unicode or ANSI string containing the initial value. The locale of the current thread is used to perform the conversion.  
  
### Remarks  
 The constructor sets the initial value of [CComCurrency::m_currency](#ccomcurrency__m_currency), and accepts a wide range of data types, including integers, strings, floating-point numbers, **CURRENCY** variables, and other `CComCurrency` objects. If no value is provided, `m_currency` is set to 0.  
  
 In the event of an error, such as an overflow, the constructors lacking an empty exception specification ( **throw()**) call `AtlThrow` with an HRESULT describing the error.  
  
 When using floating-point or double values to assign a value, note that **CComCurrency(10.50)** is equivalent to **CComCurrency(10,5000)** and not **CComCurrency(10,50)**.  
  
##  <a name="ccomcurrency__getcurrencyptr"></a>  CComCurrency::GetCurrencyPtr  
 Returns the address of an `m_currency` data member.  
  
```
CURRENCY* GetCurrencyPtr() throw();
```  
  
### Return Value  
 Returns the address of an `m_currency` data member  
  
##  <a name="ccomcurrency__getfraction"></a>  CComCurrency::GetFraction  
 Call this method to return the fractional component of the `CComCurrency` object.  
  
```
SHORT GetFraction() const;
```  
  
### Return Value  
 Returns the fractional component of the `m_currency` data member.  
  
### Remarks  
 The fractional component is a 4-digit integer value between -9999 ( **CY_MIN_FRACTION**) and +9999 ( **CY_MAX_FRACTION**). `GetFraction` returns this value scaled by 10000 ( **CY_SCALE**). The values of **CY_MIN_FRACTION**, **CY_MAX_FRACTION**, and **CY_SCALE** are defined in atlcur.h.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#50](../../atl/codesnippet/cpp/ccomcurrency-class_1.cpp)]  
  
##  <a name="ccomcurrency__getinteger"></a>  CComCurrency::GetInteger  
 Call this method to get the integer component of a `CComCurrency` object.  
  
```
LONGLONG GetInteger() const;
```  
  
### Return Value  
 Returns the integer component of the `m_currency` data member.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#51](../../atl/codesnippet/cpp/ccomcurrency-class_2.cpp)]  
  
##  <a name="ccomcurrency__m_currency"></a>  CComCurrency::m_currency  
 The **CURRENCY** data member.  
  
```
CURRENCY m_currency;
```  
  
### Remarks  
 This member holds the currency accessed and manipulated by the methods of this class.  
  
##  <a name="ccomcurrency__operator_-"></a>  CComCurrency::operator -  
 This operator is used to perform subtraction on a `CComCurrency` object.  
  
```
CComCurrency operator-() const;

    CComCurrency operator-(const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 A `CComCurrency` object.  
  
### Return Value  
 Returns a `CComCurrency` object representing the result of the subtraction. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#55](../../atl/codesnippet/cpp/ccomcurrency-class_3.cpp)]  
  
##  <a name="ccomcurrency__operator_neq"></a>  CComCurrency::operator !=  
 This operator compares two objects for inequality.  
  
```
bool operator!= (const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 The `CComCurrency` object to be compared.  
  
### Return Value  
 Returns **true** if the item being compared is not equal to the `CComCurrency` object; otherwise, **false**.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#56](../../atl/codesnippet/cpp/ccomcurrency-class_4.cpp)]  
  
##  <a name="ccomcurrency__operator_star"></a>  CComCurrency::operator *  
 This operator is used to perform multiplication on a `CComCurrency` object.  
  
```
CComCurrency operator*(long nOperand) const;

    CComCurrency operator*(const CComCurrency& cur) const;
```  
  
### Parameters  
 `nOperand`  
 The multiplier.  
  
 `cur`  
 The `CComCurrency` object used as the multiplier.  
  
### Return Value  
 Returns a `CComCurrency` object representing the result of the multiplication. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#57](../../atl/codesnippet/cpp/ccomcurrency-class_5.cpp)]  
  
##  <a name="ccomcurrency__operator_star_eq"></a>  CComCurrency::operator *=  
 This operator is used to perform multiplication on a `CComCurrency` object and assign it the result.  
  
```
const CComCurrency& operator*= (long nOperand);

const CComCurrency& operator*= (const CComCurrency& cur);
```  
  
### Parameters  
 `nOperand`  
 The multiplier.  
  
 `cur`  
 The `CComCurrency` object used as the multiplier.  
  
### Return Value  
 Returns the updated `CComCurrency` object. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#58](../../atl/codesnippet/cpp/ccomcurrency-class_6.cpp)]  
  
##  <a name="ccomcurrency__operator_div"></a>  CComCurrency::operator /  
 This operator is used to perform division on a `CComCurrency` object.  
  
```
CComCurrency operator/(long nOperand) const;
```  
  
### Parameters  
 `nOperand`  
 The divisor.  
  
### Return Value  
 Returns a `CComCurrency` object representing the result of the division. If the divisor is 0, an assert failure will occur.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#59](../../atl/codesnippet/cpp/ccomcurrency-class_7.cpp)]  
  
##  <a name="ccomcurrency__operator_div_eq"></a>  CComCurrency::operator /=  
 This operator is used to perform division on a `CComCurrency` object and assign it the result.  
  
```
const CComCurrency& operator/= (long nOperand);
```  
  
### Parameters  
 `nOperand`  
 The divisor.  
  
### Return Value  
 Returns the updated `CComCurrency` object. If the divisor is 0, an assert failure will occur.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#60](../../atl/codesnippet/cpp/ccomcurrency-class_8.cpp)]  
  
##  <a name="ccomcurrency__operator_add"></a>  CComCurrency::operator +  
 This operator is used to perform addition on a `CComCurrency` object.  
  
```
CComCurrency operator+(const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 The `CComCurrency` object to be added to the original object.  
  
### Return Value  
 Returns a `CComCurrency` object representing the result of the addition. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#61](../../atl/codesnippet/cpp/ccomcurrency-class_9.cpp)]  
  
##  <a name="ccomcurrency__operator_add_eq"></a>  CComCurrency::operator +=  
 This operator is used to perform addition on a `CComCurrency` object and assign the result to the current object.  
  
```
const CComCurrency& operator+= (const CComCurrency& cur);
```  
  
### Parameters  
 `cur`  
 The `CComCurrency` object.  
  
### Return Value  
 Returns the updated `CComCurrency` object. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#62](../../atl/codesnippet/cpp/ccomcurrency-class_10.cpp)]  
  
##  <a name="ccomcurrency__operator_lt"></a>  CComCurrency::operator &lt;  
 This operator compares two `CComCurrency` objects to determine the lesser.  
  
```
bool operator<(const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 A `CComCurrency` object.  
  
### Return Value  
 Returns **true** if the first object is less than the second, **false** otherwise.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#63](../../atl/codesnippet/cpp/ccomcurrency-class_11.cpp)]  
  
##  <a name="ccomcurrency__operator_lt_eq"></a>  CComCurrency::operator &lt;=  
 This operator compares two `CComCurrency` objects to determine equality or the lesser.  
  
```
bool operator<= (const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 A `CComCurrency` object.  
  
### Return Value  
 Returns **true** if the first object is less than or equal to the second, **false** otherwise.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#64](../../atl/codesnippet/cpp/ccomcurrency-class_12.cpp)]  
  
##  <a name="ccomcurrency__operator_eq"></a>  CComCurrency::operator =  
 This operator assigns the `CComCurrency` object to a new value.  
  
```
const CComCurrency& operator= (const CComCurrency& curSrc) throw();

const CComCurrency& operator= (CURRENCY cySrc) throw();

const CComCurrency& operator= (FLOAT fSrc);

const CComCurrency& operator= (SHORT sSrc);

const CComCurrency& operator= (LONG lSrc);

const CComCurrency& operator= (BYTE bSrc);

const CComCurrency& operator= (USHORT usSrc);

const CComCurrency& operator= (DOUBLE dSrc);

const CComCurrency& operator= (CHAR cSrc);

const CComCurrency& operator= (ULONG ulSrc);

const CComCurrency& operator= (DECIMAL dSrc);
```  
  
### Parameters  
 `curSrc`  
 A **CComCurrency** object.  
  
 `cySrc`  
 A variable of type **CURRENCY**.  
  
 *sSrc*, `fSrc`, `lSrc`, *bSrc*, *usSrc*, `dSrc`, *cSrc*, *ulSrc*, `dSrc`  
 The numeric value to assign to the `CComCurrency` object.  
  
### Return Value  
 Returns the updated `CComCurrency` object. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#65](../../atl/codesnippet/cpp/ccomcurrency-class_13.cpp)]  
  
##  <a name="ccomcurrency__operator_-_eq"></a>  CComCurrency::operator -=  
 This operator is used to perform subtraction on a `CComCurrency` object and assign it the result.  
  
```
const CComCurrency& operator-= (const CComCurrency& cur);
```  
  
### Parameters  
 `cur`  
 A `CComCurrency` object.  
  
### Return Value  
 Returns the updated `CComCurrency` object. In the event of an error, such as an overflow, this operator calls `AtlThrow` with an HRESULT describing the error.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#66](../../atl/codesnippet/cpp/ccomcurrency-class_14.cpp)]  
  
##  <a name="ccomcurrency__operator_eq_eq"></a>  CComCurrency::operator ==  
 This operator compares two `CComCurrency` objects for equality.  
  
```
bool operator== (const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 The `CComCurrency` object to compare.  
  
### Return Value  
 Returns **true** if the objects are equal (that is, the `m_currency` data members, both integer and fractional, in both objects have the same value), **false** otherwise.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#67](../../atl/codesnippet/cpp/ccomcurrency-class_15.cpp)]  
  
##  <a name="ccomcurrency__operator_gt"></a>  CComCurrency::operator &gt;  
 This operator compares two `CComCurrency` objects to determine the larger.  
  
```
bool operator>(const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 A `CComCurrency` object.  
  
### Return Value  
 Returns **true** if the first object is greater than the second, **false** otherwise.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#68](../../atl/codesnippet/cpp/ccomcurrency-class_16.cpp)]  
  
##  <a name="ccomcurrency__operator_gt_eq"></a>  CComCurrency::operator &gt;=  
 This operator compares two `CComCurrency` objects to determine equality or the larger.  
  
```
bool operator>= (const CComCurrency& cur) const;
```  
  
### Parameters  
 `cur`  
 A `CComCurrency` object.  
  
### Return Value  
 Returns **true** if the first object is greater than or equal to the second, **false** otherwise.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#69](../../atl/codesnippet/cpp/ccomcurrency-class_17.cpp)]  
  
##  <a name="ccomcurrency__operator_currency"></a>  CComCurrency::operator CURRENCY  
 These operators are used to cast a `CComCurrency` object to a **CURRENCY** data type.  
  
```operator CURRENCY&() throw();
operator const CURRENCY&() const throw();
```  
  
### Return Value  
 Returns a reference to a **CURRENCY** object.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#70](../../atl/codesnippet/cpp/ccomcurrency-class_18.cpp)]  
  
##  <a name="ccomcurrency__round"></a>  CComCurrency::Round  
 Call this method to round the currency to a specified number of decimal places.  
  
```
HRESULT Round(int nDecimals);
```  
  
### Parameters  
 *nDecimals*  
 The number of digits to which `m_currency` will be rounded, in the range 0 to 4.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#52](../../atl/codesnippet/cpp/ccomcurrency-class_19.cpp)]  
  
##  <a name="ccomcurrency__setfraction"></a>  CComCurrency::SetFraction  
 Call this method to set the fractional component of a `CComCurrency` object.  
  
```
HRESULT SetFraction(SHORT nFraction);
```  
  
### Parameters  
 *nFraction*  
 The value to be assigned to the fractional component of the `m_currency` data member. The sign of the fractional component must the same as the integer component, and the value must be in range -9999 ( **CY_MIN_FRACTION**) to +9999 ( **CY_MAX_FRACTION**).  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#53](../../atl/codesnippet/cpp/ccomcurrency-class_20.cpp)]  
  
##  <a name="ccomcurrency__setinteger"></a>  CComCurrency::SetInteger  
 Call this method to set the integer component of a `CComCurrency` object.  
  
```
HRESULT SetInteger(LONGLONG nInteger);
```  
  
### Parameters  
 `nInteger`  
 The value to be assigned to the integer component of the `m_currency` data member. The sign of the integer component must match the sign of the existing fractional component.  
  
 `nInteger` must be in the range **CY_MIN_INTEGER** to **CY_MAX_INTEGER** inclusive. These values are defined in atlcur.h.  
  
### Return Value  
 Returns `S_OK` on success, or an error `HRESULT` on failure.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#54](../../atl/codesnippet/cpp/ccomcurrency-class_21.cpp)]  
  
## See Also  
 [COleCurrency Class](../../mfc/reference/colecurrency-class.md)   
 [CURRENCY](http://msdn.microsoft.com/en-us/5e81273c-7289-45c7-93c0-32c1553f708e)   
 [Class Overview](../../atl/atl-class-overview.md)
