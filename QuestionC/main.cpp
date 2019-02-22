#include "LRUCache.h"
#include "Server.h"
using namespace std;


// Driver program to test above functions
int main()
{
    Server* server = new Server();
    LRUCache* cache1 = new LRUCache(4);
    LRUCache* cache2 = new LRUCache(4);
    LRUCache* cache3 = new LRUCache(4);
    LRUCache* cache4 = new LRUCache(4);

    server -> AddCache(cache1);
    server -> AddCache(cache2);
    server -> AddCache(cache3);
    server -> AddCache(cache4);
    server -> DeleteCache(cache1);

    cache1 -> Push(1, 4);
    cache1 -> Push(2, 4);
    cache1 -> Push(4, 4);
    cache1 -> Push(5, 4);
    cache1 -> Push(1, 5);
    cache1 -> Push(4, 9);

    cache1 -> Display();


    return 0;
}