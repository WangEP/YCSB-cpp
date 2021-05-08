//
//  redis_db.h
//  YCSB-cpp
//
//  Copyright (c) 2021 Qianli Wang <wangep@mail.ustc.edu.cn>.
//

#ifndef YCSB_C_REDIS_DB_H_
#define YCSB_C_REDIS_DB_H_

#include <iostream>
#include <string>
#include <mutex>
#include <vector>


#include "../core/db.h"
#include "../core/properties.h"

namespace ycsbc {
    class RedisDB: public DB {
        public:
            RedisDB() {}
            ~RedisDB() {}
            void Init();
            void Cleanup();
            Status Read(const std::string &table, const std::string &key,
                    const std::vector<std::string> *fields, std::vector<Field> &result) {
                throw "Read: Function Not Implemented";

            }
            Status Scan(const std::string &table, const std::string &key, int len,
              const std::vector<std::string> *fields, std::vector<std::vector<Field>> &result) {
                throw "Scan: Function Not Implemented";
            }
            Status Update(const std::string &table, const std::string &key, std::vector<Field> &values) {
                throw "Update: Function Not Implemented";
            }
            Status Insert(const std::string &table, const std::string &key, std::vector<Field> &values) {
                throw "Insert: Function Not Implemented";
            }
            Status Delete(const std::string &table, const std::string &key) {
                throw "Delete: Function Not Implemented";
            }
        private:

    };
}



#endif
