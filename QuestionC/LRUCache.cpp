//
// Created by Silver on 2019-02-21.
//

#include "LRUCache.h"

int LRUCache::Get(int key) {
    // not cached
    if(m_mp.find(key) == m_mp.end()) return -1;
        // cached
    else{
        mutex1.lock();
        auto list_it = m_mp[key];
        double duration = double(clock() - (*list_it).time) / CLOCKS_PER_SEC;
        if (duration > Max_Time) {
            return -1;
        }
        Node_t node = *list_it;
        m_cacheList.erase(list_it);
        m_cacheList.push_front(node);
        m_mp[key] = m_cacheList.begin();
        mutex1.unlock();
        return m_cacheList.begin()->value;
    }
}

void LRUCache::Push(int key, int value) {
    mutex1.lock();
    // cached
    if (m_mp.find(key) != m_mp.end()) {
        auto list_it = m_mp[key];
        Node_t node = {key, value, clock()};
        m_cacheList.erase(list_it);
        m_cacheList.push_front(node);
        m_mp[key] = m_cacheList.begin();

    }
    // not cached
    else {
        // cache is full
        if(m_cacheList.size() == m_capacity){
            m_mp.erase(m_cacheList.back().key);
            m_cacheList.pop_back();
        }
        // cache is not full
        Node_t node = {key,value, clock()};
        m_cacheList.push_front(node);
        m_mp[key] = m_cacheList.begin();

    }
    vs++;
    mutex1.unlock();
}

void LRUCache::Display() {
    mutex1.lock();
    for (auto it = m_cacheList.begin(); it != m_cacheList.end(); it++) {
        cout << (*it).key << " " << (*it).value << endl;
    }
    mutex1.unlock();
}

void LRUCache::Sync() {
    mutex1.lock();
    for (auto it = GetListeners().begin(); it != GetListeners().end(); it++) {
        if ((*it) != this && this -> GetVerstion() > (*it) -> GetVerstion()) {
            (*it) -> Clear();
            (*it) -> m_cacheList = this -> m_cacheList;
            (*it) -> m_mp = this -> m_mp;
        }
    }
    mutex1.lock();
}

void LRUCache::Subscribe(LRUCache* cache) {
    GetListeners().push_back(cache);
}

void LRUCache::Unsubscribe(LRUCache* cache) {
    GetListeners().remove(cache);
}

void LRUCache::Save() {
    /*TODO save the cache data to the local data base*/
}

list<LRUCache *> LRUCache::GetListeners() {
    return cache_listeners;
}

void LRUCache::Clear() {
    m_cacheList.clear();
    m_mp.clear();
}

LRUCache::version LRUCache::GetVerstion() {
    return vs;
}
