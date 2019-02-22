//
// Created by Silver on 2019-02-21.
//

#include "Server.h"

void Server::AddCache(LRUCache* cache) {
    for (auto it = cachesList.begin(); it != cachesList.end(); it++) {
        (*it) -> Subscribe(cache);
    }
    cachesList.push_back(cache);
}

void Server::DeleteCache(LRUCache* cache) {
    for (auto it = cachesList.begin(); it != cachesList.end(); it++) {
        (*it) -> Unsubscribe(cache);
    }
    cachesList.remove(cache);
}