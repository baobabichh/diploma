#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class BasicCalc : public drogon::HttpController<BasicCalc>
{
  public:
    METHOD_LIST_BEGIN
    // use METHOD_ADD to add your custom processing function here;
    METHOD_ADD(BasicCalc::multiply, "/multiply/{}/{}", Get);
    METHOD_ADD(BasicCalc::pingpong, "/pingpong/{}", Get);

    METHOD_LIST_END
    // your declaration of processing function maybe like this:
    void multiply(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, double left, double right);
    void pingpong(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, std::string str);
};
