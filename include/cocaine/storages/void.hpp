#ifndef COCAINE_STORAGE_VOID_HPP
#define COCAINE_STORAGE_VOID_HPP

#include "cocaine/storages/base.hpp"

namespace cocaine { namespace storage {

class void_storage_t:
    public storage_t
{
    public:
        virtual void put(const std::string& ns, const std::string& key, const Json::Value& value) { }

        virtual bool exists(const std::string& ns, const std::string& key) { return false; }
        virtual Json::Value get(const std::string& ns, const std::string& key) { return Json::Value(); }
        virtual Json::Value all(const std::string& ns) { return Json::Value(); }

        virtual void remove(const std::string& ns, const std::string& key) { }
        virtual void purge(const std::string& ns) { }
};

}}

#endif
