#include "BasicCalc.h"

// Add definition of your processing function here

void BasicCalc::multiply(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, double left, double right)
{
    Json::Value ret{};
    ret["result"] = left * right;
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}

void BasicCalc::pingpong(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, std::string str)
{
    Json::Value ret{};
    ret["result"] = str;
    auto resp=HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}