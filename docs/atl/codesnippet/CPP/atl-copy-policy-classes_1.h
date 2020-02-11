   template <class DestinationType, class SourceType = DestinationType>
   class GenericCopy
   {
   public :
      typedef DestinationType destination_type;
      typedef SourceType      source_type;

      static void init(destination_type* p)
      {
         _Copy<destination_type>::init(p);
      }
      static void destroy(destination_type* p)
      {
         _Copy<destination_type>::destroy(p);
      }
      static HRESULT copy(destination_type* pTo, const source_type* pFrom)
      {
         return _Copy<destination_type>::copy(pTo, const_cast<source_type*>(pFrom));
      }

   }; // class GenericCopy