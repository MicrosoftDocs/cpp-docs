---
title: "random_device Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "random_device"
  - "random/std::tr1::random_device"
  - "tr1.random_device"
  - "std::tr1::random_device"
  - "std.tr1.random_device"
  - "tr1::random_device"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "random_device class [TR1]"
  - "random_device class"
ms.assetid: 4393d515-0cb6-4e0d-a2ba-c780f05dc1bf
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
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
# random_device Class
Generates a random sequence from an external device.  
  
## Syntax  
  
class random_device {  
   public:  
   typedef unsigned int result_type;  // cosntructor explicit random_device(const std::string& token = "");
   // properties static result_type min();
   static result_type max();
   double entropy() const;
   // generate result_type operator()();
   // no-copy functions random_device(const random_device&) = delete;  
   void operator=(const random_device&) = delete;  
   };  
  
## Members  
  
|||  
|-|-|  
|[random_device::random_device](#random_device__random_device)|[random_device::entropy](#random_device__entropy)|  
|[random_device::operator()](#random_device__operator__)||  
  
## Remarks  
 The class describes a source of random numbers, and is allowed but not required to be non-deterministic or cryptographically secure by the ISO C++ Standard. In the Visual Studio implementation the values produced are non-deterministic and cryptographically secure, but runs more slowly than generators created from engines and engine adaptors (such as [mersenne_twister_engine](../standard-library/mersenne-twister-engine-class.md), the high quality and fast engine of choice for most applications).  
  
 `random_device` results are uniformly distributed in the closed range [ `0, 2`<sup>32</sup>).  
  
 `random_device` is not guaranteed to result in a non-blocking call.  
  
 Generally, `random_device` is used to seed other generators created with engines or engine adaptors. For more information, see [\<random>](../standard-library/random.md).  
  
## Example  
 The following code demonstrates basic functionality of this class and example results. Because of the non-deterministic nature of `random_device`, the random values shown in the **Output** section will not match your results. This is normal and expected.  
  
```cpp  
// random_device_engine.cpp   
// cl.exe /W4 /nologo /EHsc /MTd   
#include <random>   
#include <iostream>   
using namespace std;  
  
int main()   
{   
    random_device gen;   
  
    cout << "entropy == " << gen.entropy() << endl;   
    cout << "min == " << gen.min() << endl;   
    cout << "max == " << gen.max() << endl;   
  
    cout << "a random value == " << gen() << endl;   
    cout << "a random value == " << gen() << endl;   
    cout << "a random value == " << gen() << endl;   
}  
```  
  
 **Output:**  
  
```Output  
entropy == 32min == 0max == 429496729510 random values:418382918114543916081176278697246883009639593472221803123400133959054513048968776040884902293276253  
```  
  
 This example is simplistic and not representative of the general use-case for this generator. For a more representative code example, see [\<random>](../standard-library/random.md).  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
##  <a name="random_device__random_device"></a>  random_device::random_device  
 Constructs the generator.  
  
```  
random_device(const std::string& = "");
```  
  
### Remarks  
 The constructor initializes the generator as needed, ignoring the string parameter. Throws a value of an implementation-defined type derived from [exception](../standard-library/exception-class.md) if the `random_device` could not be initialized.  
  
 For example code, see [random_device](../standard-library/random-device-class.md).  
  
##  <a name="random_device__entropy"></a>  random_device::entropy  
 Estimates the randomness of the source.  
  
```  
double entropy() const noexcept;  
```  
  
### Remarks  
 The member function returns an estimate of the randomness of the source, as measured in bits.  
  
 For example code, see [random_device](../standard-library/random-device-class.md).  
  
##  <a name="random_device__operator__"></a>  random_device::operator()  
 Returns a random value.  
  
```  
result_type operator()();
```  
  
### Remarks  
 Returns values uniformly distributed in the closed interval [ `min, max`] as determined by member functions `min()` and `max()`. Throws a value of an implementation-defined type derived from [exception](../standard-library/exception-class.md) if a random number could not be obtained.  
  
 For example code, see [random_device](../standard-library/random-device-class.md).  
  
## See Also  
 [\<random>](../standard-library/random.md)

