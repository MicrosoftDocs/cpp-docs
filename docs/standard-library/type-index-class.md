---
description: "Learn more about: type_index Class"
title: "type_index Class"
ms.date: "11/04/2016"
f1_keywords: ["typeindex/std::type_index"]
helpviewer_keywords: ["type_index class"]
ms.assetid: db366119-74cb-43e8-aacf-9679e561fa2f
---
# type_index Class

The `type_index` class wraps a pointer to [type_info Class](../cpp/type-info-class.md) to assist in indexing by such objects.

class type_index {
   public:
   type_index(const type_info& tinfo);
   const char *name() const;
   size_t hash_code() const;
   bool operator==(const type_info& right) const;
   bool operator!=(const type_info& right) const;
   bool operator<(const type_info& right) const;
   bool operator\<=(const type_info& right) const;
   bool operator>(const type_info& right) const;
   bool operator>=(const type_info& right) const;
   };

The constructor initializes `ptr` to `&tinfo`.

`name` returns `ptr->name()`.

`hash_code` returns `ptr->hash_code().`

`operator==` returns `*ptr == right.ptr`.

`operator!=` returns `!(*this == right)`.

`operator<` returns `*ptr->before(*right.ptr)`.

`operator<=` returns `!(right < *this).`

`operator>` returns `right < *this`.

`operator>=` returns `!(*this < right)`.

## See also

[Run-Time Type Information](../cpp/run-time-type-information.md)\
[\<typeindex>](../standard-library/typeindex.md)
