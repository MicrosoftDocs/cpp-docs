// A basic agent that uses control-flow to regulate the order of program 
// execution. This agent reads numbers from a message buffer and counts the 
// number of positive and negative values.
class control_flow_agent : public agent
{
public:
   explicit control_flow_agent(ISource<int>& source)
      : _source(source)
   {
   }

   // Retrieves the count of negative numbers that the agent received.
   size_t negatives() 
   {
      return receive(_negatives);
   }

   // Retrieves the count of positive numbers that the agent received.
   size_t positives()
   {
      return receive(_positives);
   }

protected:
   void run()
   {
      // Counts the number of negative and positive values that
      // the agent receives.
      size_t negative_count = 0;
      size_t positive_count = 0;

      // Read from the source buffer until we receive
      // the sentinel value of 0.
      int value = 0;      
      while ((value = receive(_source)) != 0)
      {
         // Send negative values to the first target and
         // non-negative values to the second target.
         if (value < 0)
            ++negative_count;
         else
            ++positive_count;
      }

      // Write the counts to the message buffers.
      send(_negatives, negative_count);
      send(_positives, positive_count);

      // Set the agent to the completed state.
      done();
   }
private:
   // Source message buffer to read from.
   ISource<int>& _source;

   // Holds the number of negative and positive numbers that the agent receives.
   single_assignment<size_t> _negatives;
   single_assignment<size_t> _positives;
};