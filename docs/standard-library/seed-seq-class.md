---
title: "seed_seq Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::seed_seq"
  - "std::tr1::seed_seq"
  - "tr1.seed_seq"
  - "seed_seq"
  - "std.tr1.seed_seq"
  - "random/std::tr1::seed_seq"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "seed_seq class"
ms.assetid: cba114f7-9ac6-4f2f-b773-9c84805401d6
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# seed_seq Class
Stores a vector of unsigned integer values that can supply a randomized seed for a random-number engine.  
  
## Syntax  
```  
class seed_seq  
   {  
   public:  // types  
   typedef unsigned int result_type;  
   // constructors  
   seed_seq();
   template <class T>  
   seed_seq(initializer_list<T>  
   initlist);
   template <class InputIterator>  
   seed_seq(InputIterator begin, InputIterator end);
   // generating functions  
   template <class RandomAccessIterator>  
   void generate(RandomAccessIterator begin, RandomAccessIterator end);
   // property functions  
   size_t size() const;
   template <class OutputIterator>  
   void param(OutputIterator dest) const;
   // no copy functions  
   seed_seq(const seed_seq&) = delete;  
   void operator=(const seed_seq&) = delete;  
   };  
```  
## Types  
 `typedef unsigned int result_type;`   
The type of the elements of the seed sequence. A 32-bit unsigned integer type.  
  
## Constructors  
 `seed_seq();`   
Default constructor, initializes to have an empty internal sequence.  
  
 `template<class T>`   
 `seed_seq(initializer_list<T> initlist);`   
Uses `initlist` to set the internal sequence.                   
`T` must be an integer type.  
  
 `template<class InputIterator>`   
 `seed_seq(InputIterator begin, InputIterator end);`   
Initializes the internal sequence using all elements in the input iterator range provided.                  
`iterator_traits<InputIterator>::value_type` must be an integer type.  
  
## Members  
  
### Generating Functions  
 `template<class RandomAccessIterator> void generate(RandomAccessIterator begin,          RandomAccessIterator end);`   
Populates the elements of the provided sequence using an internal algorithm. This algorithm is affected by the internal sequence with which `seed_seq` was initialized.                          
Does nothing if `begin == end`.  
  
### Property Functions  
 `size_t size() const;`   
Returns the number of elements in the `seed_seq`.  
  
 `template<class OutputIterator> void param(OutputIterator dest) const;`   
Copies the internal sequence into the output iterator `dest`.  
  
## Example  
 The following code example exercises the three constructors and generates output from the resulting `seed_seq` instances when assigned to an array. For an example that uses `seed_seq` with a random number generator, see [\<random>](../standard-library/random.md).  
  
```cpp  
#include <iostream>  
#include <random>  
#include <string>  
#include <array>  
  
using namespace std;  
  
void test(const seed_seq& sseq) {  
    cout << endl << "seed_seq::size(): " << sseq.size() << endl;  
  
    cout << "seed_seq::param(): ";  
    ostream_iterator<unsigned int> out(cout, " ");  
    sseq.param(out);  
    cout << endl;  
  
    cout << "Generating a sequence of 5 elements into an array: " << endl;  
    array<unsigned int, 5> seq;  
    sseq.generate(seq.begin(), seq.end());  
    for (unsigned x : seq) { cout << x << endl; }  
}  
  
int main()  
{  
    seed_seq seed1;  
    test(seed1);  
  
    seed_seq seed2 = { 1701, 1729, 1791 };  
    test(seed2);  
  
    string sstr = "A B C D"; // seed string  
    seed_seq seed3(sstr.begin(), sstr.end());  
    test(seed3);  
}  
```  
  
## Output  
  
```Output  
  
seed_seq::size(): 0  
seed_seq::param():  
Generating a sequence of 5 elements into an array:  
505382999  
163489202  
3932644188  
763126080  
73937346  
  
seed_seq::size(): 3  
seed_seq::param(): 1701 1729 1791  
Generating a sequence of 5 elements into an array:  
1730669648  
1954224479  
2809786021  
1172893117  
2393473414  
  
seed_seq::size(): 7  
seed_seq::param(): 65 32 66 32 67 32 68  
Generating a sequence of 5 elements into an array:  
3139879222  
3775111734  
1084804564  
2485037668  
1985355432  
```  
  
## Remarks  
 Member functions of this class do not throw exceptions.  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## See Also  
 [\<random>](../standard-library/random.md)


