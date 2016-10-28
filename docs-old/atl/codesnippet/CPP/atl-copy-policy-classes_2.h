   template <class MapType, class DestinationType = MapType::mapped_type>
   class MapCopy
   {
   public :
      typedef DestinationType               destination_type;
      typedef typename MapType::value_type  source_type;
      
      typedef MapType                       map_type;
      typedef typename MapType::mapped_type pseudosource_type;

      static void init(destination_type* p)
      {
         GenericCopy<destination_type, pseudosource_type>::init(p);
      }
      static void destroy(destination_type* p)
      {
         GenericCopy<destination_type, pseudosource_type>::destroy(p);
      }
      static HRESULT copy(destination_type* pTo, const source_type* pFrom)
      {
         return GenericCopy<destination_type, pseudosource_type>::copy(pTo, &(pFrom->second));
      }

   }; // class MapCopy