//
// Created by Silver on 2019-02-21.
//

#include "LRUCache.h"

#ifndef QUESTIONC_SERVER_H
#define QUESTIONC_SERVER_H

class Server {
private:
    list<LRUCache*> cachesList;

public:
    void AddCache(LRUCache* cache);
    void DeleteCache(LRUCache* cache);
};


#endif //QUESTIONC_SERVER_H
