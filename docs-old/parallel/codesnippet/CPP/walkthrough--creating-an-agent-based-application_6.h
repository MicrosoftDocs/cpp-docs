   bool get_error(std::exception& e)
   {
      return try_receive(_error, e);
   }