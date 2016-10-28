void run()
{
   // Counts the number of negative and positive values that
   // the agent receives.
   size_t negative_count = 0;
   size_t positive_count = 0;


   // Write the counts to the message buffers.
   send(_negatives, negative_count);
   send(_positives, positive_count);

   // Set the agent to the completed state.
   done();
}