## Test Outline

------

#### Question 1

Implemented the overlap judging method. Can maintain different directions of vectors.

#### Question 2

Implemented the functionality of the version comparison. Inputs are two strings with a format of "x.x.x.x". The output is a string like "x.x is greater than x.x". All the test cases are listed and tested with google test. The project is built on CLion.

TODO: build a library for the functions.

#### Question 3

- The system implements an LRU cache with a hashed linked list. This method is good for time efficiency but consumes more space resources (compared to Redis).
- The methods in the LRU cache are thread safe
- The cache can expire within a specific time
- An observer pattern is added to each cache for synchronizing data. The local observing list consumes local space but is able to finish the synchronization without the global server.

TODO:

- Resilient to network failures or crashes (save versions of data to the local database)
- The locality of reference (build a location structure to find the closest region cache)
- Flexible Schema
- Appropriate clock (or method) to synchronize the data across the caches
- build a library for the system
- A more efficient way to prevent the racing among the cache methods