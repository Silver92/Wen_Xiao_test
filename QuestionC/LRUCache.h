//
// Created by Silver on 2019-02-21.
//
#include <iostream>
#include <list>
#include <map>

#ifndef QUESTIONC_LRUCACHE_H
#define QUESTIONC_LRUCACHE_H

using namespace std;


class LRUCache {

private:
    typedef int key_t;
    typedef int value_t;
    struct Node_t{
        key_t key;
        value_t value;
        clock_t time;
    };
    typedef list<Node_t> cacheList_t;
    typedef map<key_t,cacheList_t::iterator> map_t;
    typedef int version;

    int m_capacity;
    cacheList_t m_cacheList;
    map_t m_mp;
    list<LRUCache*> cache_listeners;
    version vs = 0;
    mutex mutex1;

public:
    //==============================================================
    double Max_Time = 300;
    double Sync_Time = 300;
    //==============================================================
    LRUCache(int capacity) : m_capacity(capacity){ }
    //==============================================================
    int Get(int key);
    void Push(int key, int value);
    void Display();
    void Sync();
    void Subscribe(LRUCache* cache);
    void Unsubscribe(LRUCache* cache);
    void Save();
    void Clear();
    list<LRUCache*> GetListeners();
    version GetVerstion();
    //==============================================================
};

#endif
