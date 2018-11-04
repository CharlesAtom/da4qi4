#ifndef DAQI_DEF_HPP
#define DAQI_DEF_HPP

#include <string>
#include <map>
#include <functional>
#include <memory>
#include <list>
#include <vector>
#include <set>

#include "nlohmann/json_fwd.hpp"

#include "utilities/string_utilities.hpp"

namespace da4qi4
{

enum PathResolve {is_relative, is_absolute}; //for url and dist-directory

using Headers = std::map<std::string, std::string>;
using ICHeaders = std::map<std::string, std::string, Utilities::IgnoreCaseCompare>;
using UrlParameters = std::map<std::string, std::string>;

using Json = nlohmann::json;

} //namespace da4qi4

#endif // DAQI_DEF_HPP
