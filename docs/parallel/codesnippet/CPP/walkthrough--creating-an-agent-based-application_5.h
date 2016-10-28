   explicit file_reader(const std::string& file_name, 
      concurrency::ITarget<std::string>& target)
      : _file_name(file_name)
      , _target(target)
   {
   }

   explicit file_reader(const std::string& file_name, 
      concurrency::ITarget<std::string>& target,
      concurrency::Scheduler& scheduler)
      : agent(scheduler)
      , _file_name(file_name)
      , _target(target)
   {
   }

   explicit file_reader(const std::string& file_name, 
      concurrency::ITarget<std::string>& target,
      concurrency::ScheduleGroup& group)
      : agent(group) 
      , _file_name(file_name)
      , _target(target)
   {
   }