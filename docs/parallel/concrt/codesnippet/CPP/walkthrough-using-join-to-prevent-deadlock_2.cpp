// A shared array of critical sections. Each critical section 
// guards access to a single chopstick.
critical_section locks[philosopher_count];