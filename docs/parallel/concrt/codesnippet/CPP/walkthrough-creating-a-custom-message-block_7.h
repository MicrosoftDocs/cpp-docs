        // Constructs a priority_buffer message block.
        priority_buffer() 
        {
            initialize_source_and_target();
        }

        // Constructs a priority_buffer message block with the given filter function.
        priority_buffer(filter_method const& filter)
        {
            initialize_source_and_target();
            register_filter(filter);
        }

        // Constructs a priority_buffer message block that uses the provided 
        // Scheduler object to propagate messages.
        priority_buffer(concurrency::Scheduler& scheduler)
        {
            initialize_source_and_target(&scheduler);
        }

        // Constructs a priority_buffer message block with the given filter function 
        // and uses the provided Scheduler object to propagate messages.
        priority_buffer(concurrency::Scheduler& scheduler, filter_method const& filter) 
        {
            initialize_source_and_target(&scheduler);
            register_filter(filter);
        }

        // Constructs a priority_buffer message block that uses the provided 
        // SchedulerGroup object to propagate messages.
        priority_buffer(concurrency::ScheduleGroup& schedule_group)
        {
            initialize_source_and_target(NULL, &schedule_group);
        }

        // Constructs a priority_buffer message block with the given filter function 
        // and uses the provided SchedulerGroup object to propagate messages.
        priority_buffer(concurrency::ScheduleGroup& schedule_group, filter_method const& filter)
        {
            initialize_source_and_target(NULL, &schedule_group);
            register_filter(filter);
        }

        // Destroys the message block.
        ~priority_buffer()
        {
            // Remove all links.
            remove_network_links();
        }