// A type that defines the new and delete operators. These operators 
// call the global new and delete operators, respectively.
class new_delete
{
public:
   static void* operator new(size_t size)
   {
      return ::operator new(size);
   }
   
   static void operator delete(void *p)
   {
      return ::operator delete(p);
   }

   int _data;
};

// A type that defines the new and delete operators. These operators 
// call the C Runtime malloc and free functions, respectively.
class malloc_free
{
public:
   static void* operator new(size_t size)
   {
      return malloc(size);
   }
   static void operator delete(void *p)
   {
      return free(p);
   }

   int _data;
};

// A type that defines the new and delete operators. These operators 
// call the Concurrency Runtime Alloc and Free functions, respectively.
class Alloc_Free
{
public:
   static void* operator new(size_t size)
   {
      return Alloc(size);
   }
   static void operator delete(void *p)
   {
      return Free(p);
   }

   int _data;
};