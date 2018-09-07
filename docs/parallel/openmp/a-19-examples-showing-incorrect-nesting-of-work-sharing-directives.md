---
title: "A.19   Examples Showing Incorrect Nesting of Work-sharing Directives | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-parallel"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 906e900d-9259-44d6-a095-c1ba9135d269
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# A.19   Examples Showing Incorrect Nesting of Work-sharing Directives
The examples in this section illustrate the directive nesting rules. For more information on directive nesting, see [Section 2.9](../../parallel/openmp/2-9-directive-nesting.md) on page 33.  
  
 The following example is noncompliant because the inner and outer `for` directives are nested and bind to the same `parallel` directive:  
  
```  
void wrong1(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
      int i, j;  
      #pragma omp for  
      for (i=0; i<n; i++) {  
          #pragma omp for  
              for (j=0; j<n; j++)  
                 work(i, j);  
     }  
   }  
}  
```  
  
 The following dynamically nested version of the preceding example is also noncompliant:  
  
```  
void wrong2(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
    int i;  
    #pragma omp for  
      for (i=0; i<n; i++)  
        work1(i, n);  
  }  
}  
  
void work1(int i, int n)  
{  
  int j;  
  #pragma omp for  
    for (j=0; j<n; j++)  
      work2(i, j);  
}  
```  
  
 The following example is noncompliant because the `for` and `single` directives are nested, and they bind to the same parallel region:  
  
```  
void wrong3(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
    int i;  
    #pragma omp for  
      for (i=0; i<n; i++) {  
        #pragma omp single  
          work(i);  
      }  
  }  
}  
```  
  
 The following example is noncompliant because a `barrier` directive inside a `for` can result in deadlock:  
  
```  
void wrong4(int n)  
{  
  #pragma omp parallel default(shared)  
  {  
    int i;  
    #pragma omp for  
      for (i=0; i<n; i++) {  
        work1(i);  
        #pragma omp barrier  
        work2(i);  
      }  
  }  
}  
```  
  
 The following example is noncompliant because the `barrier` results in deadlock due to the fact that only one thread at a time can enter the critical section:  
  
```  
void wrong5()  
{  
  #pragma omp parallel  
  {  
    #pragma omp critical  
    {  
       work1();  
       #pragma omp barrier  
       work2();  
    }  
  }  
}  
```  
  
 The following example is noncompliant because the `barrier` results in deadlock due to the fact that only one thread executes the `single` section:  
  
```  
void wrong6()  
{  
  #pragma omp parallel  
  {  
    setup();  
    #pragma omp single  
    {  
      work1();  
      #pragma omp barrier  
      work2();  
    }  
    finish();  
  }  
}  
```