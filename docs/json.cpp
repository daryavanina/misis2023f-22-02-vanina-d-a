#include <fstream>
#include <nlohmann/json.hpp>
#include <iostream>
using json = nlohmann::json;

int main()
{
    //reading from file
	std::ifstream f("example.json");
	json data = json::parse(f);
    std::cout << "Reading from file example.cpp\n"<<data.dump(4) << std::endl;
    
    //creating an object
    json ex1 = json::parse(R"(
        {
            "pi": 3.141,
            "happy": true
        }
    )");
    std::cout <<"\nCreating an object\n"<< ex1.dump(4) << std::endl;

    // Using initializer lists
    json ex3 = {
      {"happy", true},
      {"pi", 3.141},
    };
    std::cout << "\nUsing initializer lists\n"<<ex3.dump(4) << std::endl;
    
    //writing to an object
    json j;
    j["pi"] = 3.141;
    j["happy"] = true;
    j["name"] = "Niels";
    j["nothing"] = nullptr;
    j["answer"]["everything"] = 42;
    j["list"] = { 1, 0, 2 };
    j["object"] = { {"currency", "USD"}, {"value", 42.99} };
    std::cout << "\nWriting to an object\n"<<j.dump(4) << std::endl;

    //also writing
    json j2 = {
      {"pi", 3.141},
      {"happy", true},
      {"name", "Niels"},
      {"nothing", nullptr},
      {"answer", {
        {"everything", 42}
      }},
      {"list", {1, 0, 2}},
      {"object", {
        {"currency", "USD"},
        {"value", 42.99}
      }}
    };
    std::cout <<"\nAlso writing\n"<< j2.dump(4) << std::endl;

    //deserialization
    //create object from string literal
    json j3 = "{ \"happy\": true, \"pi\": 3.141 }"_json;
    std::cout << "\nDeserialization\n" << j3.dump(4) << std::endl;

    // with a raw string literal
    auto j4 = R"(
        {
            "happy": true,
            "pi": 3.141
        }
    )"_json;
    std::cout << "\nAlso deserialization\n" << j4.dump(4) << std::endl;

    json j_string = "this is a string";

    // retrieve the serialized value (explicit JSON serialization)
    std::string serialized_string = j_string.dump();

    // output of serialized value
    std::cout << "\nSerialization" << std::endl;
    std::cout << "json_string: " << j_string << "\nserialization_string: " << serialized_string << std::endl;
}
