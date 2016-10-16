// priority_buffer.h
#pragma once
#include <agents.h>
#include <queue>

namespace std 
{
    // A specialization of less that tests whether the priority element of a 
    // message is less than the priority element of another message.
    template<class Type, class PriorityType>
    struct less<concurrency::message<tuple<PriorityType,Type>>*> 
    {
        typedef concurrency::message<tuple<PriorityType, Type>> MessageType;

        bool operator()(const MessageType* left, const MessageType* right) const
        {
            // apply operator< to the first element (the priority) 
            // of the tuple payload.
            return (get<0>(left->payload) < get<0>(right->payload));
        }
    };

    // A specialization of less that tests whether the priority element of a 
    // message is greater than the priority element of another message.
    template<class Type, class PriorityType>
    struct greater<concurrency::message<tuple<PriorityType, Type>>*> 
    {
        typedef concurrency::message<std::tuple<PriorityType,Type>> MessageType;

        bool operator()(const MessageType* left, const MessageType* right) const
        {
            // apply operator> to the first element (the priority) 
            // of the tuple payload.
            return (get<0>(left->payload) > get<0>(right->payload));
        }
    };
}

namespace concurrencyex
{
    // A message block type that orders incoming messages first by priority, 
    // and then by the order in which messages are received. 
    template<class Type, 
        typename PriorityType = int,
        typename Pr = std::less<message<std::tuple<PriorityType, Type>>*>>
    class priority_buffer : public concurrency::propagator_block<concurrency::multi_link_registry<concurrency::ITarget<Type>>,
        concurrency::multi_link_registry<concurrency::ISource<std::tuple<PriorityType, Type>>>>
    {  
    public:
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

        // Sends an item to the message block.
        bool enqueue(Type const& item)
        {
            return concurrency::asend<Type>(this, item);
        }

        // Receives an item from the message block.
        Type dequeue()
        {
            return receive<Type>(this);
        }

    protected:
        // Asynchronously passes a message from an ISource block to this block.
        // This method is typically called by propagator_block::propagate.
        virtual concurrency::message_status propagate_message(concurrency::message<_Source_type>* message, 
            concurrency::ISource<_Source_type>* source)
        {
            // Accept the message from the source block.
            message = source->accept(message->msg_id(), this);

            if (message != NULL)
            {
                // Insert the message into the input queue. The type parameter Pr
                // defines how to order messages by priority.
                {
                    concurrency::critical_section::scoped_lock lock(_input_lock);
                    _input_messages.push(message);
                }

                // Asynchronously send the message to the target blocks.
                async_send(NULL);
                return accepted;
            }
            else
            {
                return missed;
            }      
        }

        // Synchronously passes a message from an ISource block to this block.
        // This method is typically called by propagator_block::send.
        virtual concurrency::message_status send_message(concurrency::message<_Source_type>* message,
            concurrency::ISource<_Source_type>* source)
        {
            // Accept the message from the source block.
            message = source->accept(message->msg_id(), this);

            if (message != NULL)
            {
                // Insert the message into the input queue. The type parameter Pr
                // defines how to order messages by priority.
                {
                    concurrency::critical_section::scoped_lock lock(_input_lock);
                    _input_messages.push(message);
                }

                // Synchronously send the message to the target blocks.
                sync_send(NULL);
                return accepted;
            }
            else
            {
                return missed;
            }
        }

        // Accepts a message that was offered by this block by transferring ownership
        // to the caller.
        virtual concurrency::message<_Target_type>* accept_message(concurrency::runtime_object_identity msg_id)
        {
            concurrency::message<_Target_type>* message = NULL;

            // Transfer ownership if the provided message identifier matches
            // the identifier of the front of the output message queue.
            if (!_output_messages.empty() && 
                _output_messages.front()->msg_id() == msg_id)
            {
                message = _output_messages.front();
                _output_messages.pop();
            }

            return message;
        }

        // Reserves a message that was previously offered by this block.
        virtual bool reserve_message(concurrency::runtime_object_identity msg_id)
        {
            // Allow the message to be reserved if the provided message identifier
            // is the message identifier of the front of the message queue.
            return (!_output_messages.empty() && 
                _output_messages.front()->msg_id() == msg_id);
        }

        // Transfers the message that was previously offered by this block 
        // to the caller. The caller of this method is the target block that 
        // reserved the message.
        virtual concurrency::message<Type>* consume_message(concurrency::runtime_object_identity msg_id)
        {
            // Transfer ownership of the message to the caller.
            return accept_message(msg_id);
        }

        // Releases a previous message reservation.
        virtual void release_message(concurrency::runtime_object_identity msg_id)
        {
            // The head message must be the one that is reserved. 
            if (_output_messages.empty() || 
                _output_messages.front()->msg_id() != msg_id)
            {
                throw message_not_found();
            }
        }

        // Resumes propagation after a reservation has been released.
        virtual void resume_propagation()
        {
            // Propagate out any messages in the output queue.
            if (_output_messages.size() > 0)
            {
                async_send(NULL);
            }
        }

        // Notifies this block that a new target has been linked to it.
        virtual void link_target_notification(concurrency::ITarget<_Target_type>*)
        {
            // Do not propagate messages if a target block reserves
            // the message at the front of the queue.
            if (_M_pReservedFor != NULL)
            {
                return;
            }

            // Propagate out any messages that are in the output queue.
            propagate_priority_order();
        }

        // Transfers the message at the front of the input queue to the output queue
        // and propagates out all messages in the output queue.
        virtual void propagate_to_any_targets(concurrency::message<_Target_type>*)
        {
            // Retrieve the message from the front of the input queue.
            concurrency::message<_Source_type>* input_message = NULL;
            {
                concurrency::critical_section::scoped_lock lock(_input_lock);
                if (_input_messages.size() > 0)
                {
                    input_message = _input_messages.top();
                    _input_messages.pop();
                }
            }

            // Move the message to the output queue.
            if (input_message != NULL)
            {
                // The payload of the output message does not contain the 
                // priority of the message.
                concurrency::message<_Target_type>* output_message = 
                    new concurrency::message<_Target_type>(get<1>(input_message->payload));
                _output_messages.push(output_message);

                // Free the memory for the input message.
                delete input_message;

                // Do not propagate messages if the new message is not the head message.
                // In this case, the head message is reserved by another message block.
                if (_output_messages.front()->msg_id() != output_message->msg_id())
                {
                    return;
                }
            }

            // Propagate out the output messages.
            propagate_priority_order();
        }

    private:

        // Propagates messages in priority order.
        void propagate_priority_order()
        {
            // Cancel propagation if another block reserves the head message.
            if (_M_pReservedFor != NULL)
            {
                return;
            }

            // Propagate out all output messages. 
            // Because this block preserves message ordering, stop propagation
            // if any of the messages are not accepted by a target block.
            while (!_output_messages.empty())
            {
                // Get the next message.
                concurrency::message<_Target_type> * message = _output_messages.front();

                concurrency::message_status status = declined;

                // Traverse each target in the order in which they are connected.
                for (target_iterator iter = _M_connectedTargets.begin(); 
                    *iter != NULL; 
                    ++iter)
                {
                    // Propagate the message to the target.
                    concurrency::ITarget<_Target_type>* target = *iter;
                    status = target->propagate(message, this);

                    // If the target accepts the message then ownership of message has 
                    // changed. Do not propagate this message to any other target.
                    if (status == accepted)
                    {
                        break;
                    }

                    // If the target only reserved this message, we must wait until the 
                    // target accepts the message.
                    if (_M_pReservedFor != NULL)
                    {
                        break;
                    }
                }

                // If status is anything other than accepted, then the head message
                // was not propagated out. To preserve the order in which output 
                // messages are propagated, we must stop propagation until the head 
                // message is accepted.
                if (status != accepted)
                {
                    break;
                }
            }
        }

    private:

        // Stores incoming messages.
        // The type parameter Pr specifies how to order messages by priority.
        std::priority_queue<
            concurrency::message<_Source_type>*,
            std::vector<concurrency::message<_Source_type>*>,
            Pr
        > _input_messages;

        // Synchronizes access to the input message queue.
        concurrency::critical_section _input_lock;

        // Stores outgoing messages.
        std::queue<concurrency::message<_Target_type>*> _output_messages;

    private:
        // Hide assignment operator and copy constructor.
        priority_buffer const &operator =(priority_buffer const&);
        priority_buffer(priority_buffer const &);
    };

}